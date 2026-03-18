/*
 * XREFs of CmShutdownCmRM @ 0x140659064
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 * Callees:
 *     CmpRunDownCmRM @ 0x1406590AC (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x1406592B4 (CmpStopRMLog.c)
 */

__int64 __fastcall CmShutdownCmRM(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        CmpStopRMLog();
    }
  }
  LOBYTE(a2) = v2;
  return CmpRunDownCmRM(a1, a2);
}
