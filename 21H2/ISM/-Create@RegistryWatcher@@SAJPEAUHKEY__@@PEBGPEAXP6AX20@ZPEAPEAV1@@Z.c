/*
 * XREFs of ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180022044
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180021BF0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180021E48 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x1800224E8 (-Initialize@MouseProcessor@@IEAAJXZ.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180120F00 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x18017A244 (-Initialize@EdgeGestureMetrics@@SAXXZ.c)
 * Callees:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180022104 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RegistryWatcher::Create(
        HKEY a1,
        const unsigned __int16 *a2,
        void *a3,
        void (*a4)(void *, HKEY),
        struct RegistryWatcher **a5)
{
  struct RegistryWatcher *v8; // rax
  HKEY v9; // rdx
  struct RegistryWatcher *v10; // rsi
  struct RegistryWatcher *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a5 )
  {
    v13 = -2147024809;
    v15 = 101LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)v13,
      v16);
    v11 = 0LL;
    goto LABEL_5;
  }
  v8 = (struct RegistryWatcher *)RefCountedObject::operator new(0x38uLL);
  v10 = v8;
  if ( !v8 )
  {
    v13 = -2147024882;
    v15 = 108LL;
    goto LABEL_11;
  }
  *(_QWORD *)v8 = &RefCountedObject::`vftable';
  *((_DWORD *)v8 + 2) = 1;
  *(_QWORD *)v8 = &RegistryWatcher::`vftable';
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 6) = a4;
  v11 = v8;
  v12 = RegistryWatcher::Initialize(v8, v9, a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\registrywatcher\\lib\\registrywatcher.cpp",
      (const char *)(unsigned int)v12,
      v16);
  }
  else
  {
    v11 = 0LL;
    *a5 = v10;
    v13 = 0;
  }
LABEL_5:
  if ( v11 )
    (*(void (__fastcall **)(struct RegistryWatcher *))(*(_QWORD *)v11 + 16LL))(v11);
  return v13;
}
