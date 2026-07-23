/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1406DCC40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlpLookupLowBox @ 0x1402A5B18 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1406383A4 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406383F0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 *v6; // rax
  NTSTATUS v8; // [rsp+20h] [rbp-28h]

  if ( !RtlpLockAtomTable(AtomTableHandle) )
    return -1073741811;
  v4 = -1073741816;
  v8 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
    v8 = v4;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTableHandle, Atom & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v6 = RtlpLookupLowBox((__int64)AtomTableHandle, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *((_WORD *)v6 + 11) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v8;
}
