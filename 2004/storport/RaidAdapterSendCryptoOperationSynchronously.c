/*
 * XREFs of RaidAdapterSendCryptoOperationSynchronously @ 0x1C002DD50
 * Callers:
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C002C730 (RaidAdapterProgramCryptoKeyRoutine.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011F5C (RaCallMiniportAdapterControl.c)
 *     RaidDriverGetName @ 0x1C0014D94 (RaidDriverGetName.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterSendCryptoOperationSynchronously(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(a1 + 5736) || !(unsigned int)RaidIsAdapterControlSupported(a1, 18) )
    return 3221225659LL;
  if ( *a3 != 1 || a3[1] != 40 )
    return 3221225485LL;
  result = RaCallMiniportAdapterControl(a1 + 304);
  if ( (_DWORD)result )
  {
    v6 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)BugCheckParameter2 = 0LL;
    RaidDriverGetName(v6, (__int64)BugCheckParameter2);
    KeBugCheckEx(0xF0u, 4uLL, BugCheckParameter2[1], 1uLL, 0LL);
  }
  return result;
}
