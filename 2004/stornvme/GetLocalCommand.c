/*
 * XREFs of GetLocalCommand @ 0x1C000A338
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C000F470 (NVMeRequestComplete.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0016120 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0017D20 (NVMeGetLogPageCompletion.c)
 *     NVMeReConfigAsyncEventCompletion @ 0x1C00191C0 (NVMeReConfigAsyncEventCompletion.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0019920 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

__int64 __fastcall GetLocalCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // edx

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 12) == 251658240 )
    return *(_QWORD *)(GetSrbExtension(a2) + 4232);
  if ( a2 == a1 + 832 )
    return a1 + 824;
  v4 = 0;
  while ( a2 != 112LL * v4 + a1 + 944 )
  {
    if ( ++v4 >= 6 )
      return v2;
  }
  return 112LL * v4 + a1 + 936;
}
