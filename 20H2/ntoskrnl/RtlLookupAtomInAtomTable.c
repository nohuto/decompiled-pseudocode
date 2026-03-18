/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x140628770
 * Callers:
 *     NtFindAtom @ 0x140627EC0 (NtFindAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlGetIntegerAtom @ 0x1406288D0 (RtlGetIntegerAtom.c)
 *     RtlpLockAtomTable @ 0x140628BC4 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140628C10 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpHashStringToAtom @ 0x140628D10 (RtlpHashStringToAtom.c)
 */

__int64 __fastcall RtlLookupAtomInAtomTable(__int64 a1, _WORD *a2, unsigned __int16 *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  unsigned __int16 v8; // ax
  int v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int16 v13; // [rsp+98h] [rbp+20h] BYREF

  v11 = 0LL;
  v13 = 0;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  if ( (unsigned __int8)RtlGetIntegerAtom(a2, &v13) )
  {
    v8 = v13;
    if ( v13 >= 0xC000u )
    {
      v8 = 0;
      v13 = 0;
      v10 = -1073741811;
    }
    else
    {
      v10 = 0;
    }
    if ( !a3 )
      goto LABEL_18;
    goto LABEL_9;
  }
  if ( !*a2 )
  {
    v10 = -1073741773;
    goto LABEL_18;
  }
  LOBYTE(v6) = 1;
  v10 = RtlpHashStringToAtom(a1, a2, v6, 0LL, 0LL, v12, &v11);
  if ( v10 >= 0 )
  {
    v7 = v11;
    if ( !v11 )
    {
      v10 = -1073741772;
      goto LABEL_18;
    }
    if ( !RtlpAtomMapAtomToHandleEntry(a1, *(unsigned __int16 *)(v11 + 8)) )
    {
      v10 = -1073741816;
      goto LABEL_18;
    }
    v10 = 0;
    if ( a3 )
    {
      v8 = *(_WORD *)(v7 + 10);
LABEL_9:
      *a3 = v8;
    }
  }
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
