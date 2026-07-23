/*
 * XREFs of PoEnergyContextCleanup @ 0x14067D90C
 * Callers:
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 * Callees:
 *     RtlTimelineBitmapUpdateRange @ 0x14022C2E4 (RtlTimelineBitmapUpdateRange.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     RtlStateDurationCapture @ 0x140274AF8 (RtlStateDurationCapture.c)
 *     KeQueryTimelineBitmapTime @ 0x1402AA050 (KeQueryTimelineBitmapTime.c)
 *     PopEtAppIdDereference @ 0x1405F8134 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1405F8164 (RtlInternEntryDereference.c)
 *     PopEtEnumEnergyTrackers @ 0x1406F6F38 (PopEtEnumEnergyTrackers.c)
 */

void __fastcall PoEnergyContextCleanup(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int TimelineBitmapTime; // r15d
  __int64 v6; // r14
  _QWORD *v7; // rdx
  unsigned int v8; // r8d
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+24h] [rbp-34h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  _QWORD *v17; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 2280);
  v14 = 0;
  v16 = 0LL;
  if ( v1 )
  {
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4 = 0LL;
    TimelineBitmapTime = KeQueryTimelineBitmapTime();
    v6 = 3LL;
    do
    {
      v8 = RtlStateDurationCapture((__int64)&v1[v4 + 13], &v1[v4 + 13], v3);
      if ( v7 == v1 + 13 )
      {
        v9 = v1 + 38;
      }
      else if ( v7 == v1 + 14 )
      {
        v9 = v1 + 39;
      }
      else
      {
        v9 = 0LL;
      }
      if ( v9 && v8 )
        RtlTimelineBitmapUpdateRange(v9, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
      ++v4;
      --v6;
    }
    while ( v6 );
    RtlStateDurationCapture((__int64)(v1 + 52), v1 + 52, v3);
    v14 = 0;
    v16 = 0LL;
    v13 = 4;
    v17 = v1;
    v15 = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 54));
    PopEtEnumEnergyTrackers(v10, &v13);
    PopReleaseRwLock((ULONG_PTR)(v1 + 54));
    v11 = v1[56];
    if ( v11 )
    {
      PopEtAppIdDereference(v11);
      v1[56] = 0LL;
    }
    v12 = v1[57];
    if ( v12 )
    {
      RtlInternEntryDereference(PopEtGlobals + 56, v12);
      v1[57] = 0LL;
    }
  }
}
