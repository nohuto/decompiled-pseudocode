/*
 * XREFs of sub_1800B6A24 @ 0x1800B6A24
 * Callers:
 *     sub_1800170A4 @ 0x1800170A4 (sub_1800170A4.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18006F208 @ 0x18006F208 (sub_18006F208.c)
 *     sub_1800B7720 @ 0x1800B7720 (sub_1800B7720.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B6A24(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18006F208(a1, a2, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  std::wstring::assign((char *)(a1 + 112), L"RenderDeviceGeneric", 0x13uLL);
  std::wstring::assign((char *)(a1 + 80), L"Universal", 9uLL);
  sub_1800B7720(a1);
  v5 = (volatile signed __int32 *)a3[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
