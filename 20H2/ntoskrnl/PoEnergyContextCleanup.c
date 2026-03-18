/*
 * XREFs of PoEnergyContextCleanup @ 0x14066122C
 * Callers:
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 * Callees:
 *     KeQueryTimelineBitmapTime @ 0x140208A60 (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationCapture @ 0x140263BF8 (RtlStateDurationCapture.c)
 *     RtlTimelineBitmapUpdateRange @ 0x14030DD80 (RtlTimelineBitmapUpdateRange.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopEtEnumEnergyTrackers @ 0x14065E9B8 (PopEtEnumEnergyTrackers.c)
 *     PopEtAppIdDereference @ 0x140667990 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1406679C0 (RtlInternEntryDereference.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+24h] [rbp-34h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  _QWORD *v20; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 2280);
  v17 = 0;
  v19 = 0LL;
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
    v17 = 0;
    v19 = 0LL;
    v16 = 4;
    v20 = v1;
    v18 = a1;
    PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 54));
    PopEtEnumEnergyTrackers(v10, (__int64)&v16);
    PopReleaseRwLock((ULONG_PTR)(v1 + 54));
    v14 = v1[56];
    if ( v14 )
    {
      PopEtAppIdDereference(v14, v11, v12, v13);
      v1[56] = 0LL;
    }
    v15 = v1[57];
    if ( v15 )
    {
      RtlInternEntryDereference(PopEtGlobals + 56, v15);
      v1[57] = 0LL;
    }
  }
}
