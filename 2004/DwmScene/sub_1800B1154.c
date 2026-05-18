/*
 * XREFs of sub_1800B1154 @ 0x1800B1154
 * Callers:
 *     sub_180016E64 @ 0x180016E64 (sub_180016E64.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180069938 @ 0x180069938 (sub_180069938.c)
 *     sub_1800B1E50 @ 0x1800B1E50 (sub_1800B1E50.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B1154(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180069938(a1, a2, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  std::wstring::assign((char *)(a1 + 112), L"RenderDeviceGeneric", 0x13uLL);
  std::wstring::assign((char *)(a1 + 80), L"Universal", 9uLL);
  sub_1800B1E50(a1);
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
