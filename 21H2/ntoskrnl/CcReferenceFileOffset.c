/*
 * XREFs of CcReferenceFileOffset @ 0x1404EB454
 * Callers:
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     CcFreeUnusedVacbLevels @ 0x140213140 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x140213284 (CcAllocateVacbLevels.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14031BA74 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14031BAF4 (CcAcquireBcbLockAndVacbLock.c)
 *     SetVacb @ 0x14031E6D0 (SetVacb.c)
 */

void __fastcall CcReferenceFileOffset(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v8 = 0;
    v4 = *(_DWORD *)(a1 + 152);
    v6 = 0LL;
    *((_QWORD *)&v5 + 1) = &v5;
    *(_QWORD *)&v5 = &v5;
    v7 = 0;
    if ( !CcAllocateVacbLevels(CcMaxVacbLevelsSeen - 1, (v4 & 0x200) != 0, (__int64)&v5) )
      RtlRaiseStatus(-1073741670);
    CcAcquireBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    SetVacb(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, &v5);
    CcReleaseBcbLockAndVacbLock(1, (struct _FAST_MUTEX *)a1);
    CcFreeUnusedVacbLevels((__int64)&v5);
  }
}
