/*
 * XREFs of sub_18012AD08 @ 0x18012AD08
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012AD08(__int64 a1, __int64 a2)
{
  const char *v3; // r8
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx

  v3 = (const char *)(*(_QWORD *)(a2 + 216) + 24LL);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL) >= 0x10uLL )
    v3 = *(const char **)v3;
  sub_1801163DC(&qword_18020DAC0, 3, v3);
  *(_OWORD *)(a2 + 168) = 0LL;
  *(_OWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 288);
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 56LL);
  if ( !v4 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, a2 + 96, a2 + 168, a2 + 272);
  v5 = *(volatile signed __int32 **)(a2 + 104);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a2 + 176);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return 0LL;
}
