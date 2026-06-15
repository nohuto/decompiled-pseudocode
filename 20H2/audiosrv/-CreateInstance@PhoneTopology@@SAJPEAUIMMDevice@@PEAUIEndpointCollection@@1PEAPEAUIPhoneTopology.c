/*
 * XREFs of ?CreateInstance@PhoneTopology@@SAJPEAUIMMDevice@@PEAUIEndpointCollection@@1PEAPEAUIPhoneTopology@@@Z @ 0x1800568C4
 * Callers:
 *     ?CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z @ 0x1800566E4 (-CreatePhoneTopology@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 *     ??0PhoneTopology@@IEAA@XZ @ 0x180056A68 (--0PhoneTopology@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::CreateInstance(
        struct IMMDevice *a1,
        struct IEndpointCollection *a2,
        struct IEndpointCollection *a3,
        struct IPhoneTopology **a4)
{
  unsigned int v6; // esi
  struct IPhoneTopology *v7; // rbx
  PhoneTopology *v8; // rax
  struct IPhoneTopology *v9; // rdi
  int v10; // eax

  v6 = 0;
  v7 = 0LL;
  if ( a4 )
  {
    *a4 = 0LL;
    v8 = (PhoneTopology *)operator new(0x518uLL);
    if ( v8 )
      v9 = PhoneTopology::PhoneTopology(v8);
    else
      v9 = 0LL;
    v7 = v9;
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IPhoneTopology *, struct IMMDevice *))(*(_QWORD *)v9 + 160LL))(v9, a1);
      if ( v10 >= 0 )
      {
        v7 = 0LL;
        *a4 = v9;
      }
      else
      {
        v6 = v10;
      }
    }
    else
    {
      v6 = -2147024882;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IPhoneTopology *))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
