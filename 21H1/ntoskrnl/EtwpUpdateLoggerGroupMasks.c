/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x14077FD78
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     EtwpGetFlagExtension @ 0x14067965C (EtwpGetFlagExtension.c)
 *     EtwpUpdateGroupMasks @ 0x14077FE0C (EtwpUpdateGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  unsigned __int16 *FlagExtension; // rax
  __int64 v4; // r10
  unsigned __int16 v5; // cx
  int v7; // eax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( !a2 )
    return EtwpUpdateGroupMasks(a1, v8);
  FlagExtension = EtwpGetFlagExtension(a2, 1);
  if ( !FlagExtension )
  {
    v7 = v8[0];
    if ( *(int *)(v4 + 72) >= 0 )
      v7 = *(_DWORD *)(v4 + 72);
    LODWORD(v8[0]) = v7;
    return EtwpUpdateGroupMasks(a1, v8);
  }
  v5 = 4 * *FlagExtension - 4;
  if ( v5 <= 0x20u )
  {
    memmove(v8, FlagExtension + 2, v5);
    return EtwpUpdateGroupMasks(a1, v8);
  }
  return 3221225485LL;
}
