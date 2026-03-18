/*
 * XREFs of PoEnergyContextCleanup @ 0x1407E0DC4
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     RtlTimelineBitmapUpdateRange @ 0x140238BF8 (RtlTimelineBitmapUpdateRange.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     KeQueryTimelineBitmapTime @ 0x1402F614C (KeQueryTimelineBitmapTime.c)
 *     RtlStateDurationCapture @ 0x140360EE4 (RtlStateDurationCapture.c)
 *     PopEtAppIdDereference @ 0x140674FE4 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140675014 (RtlInternEntryDereference.c)
 *     PopEtEnumEnergyTrackers @ 0x1406819CC (PopEtEnumEnergyTrackers.c)
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
  _DWORD v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  _QWORD *v16; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 2280);
  if ( !v1 )
    return;
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
    else
    {
      if ( v7 != v1 + 14 )
        goto LABEL_10;
      v9 = v1 + 39;
    }
    if ( v9 && v8 )
      RtlTimelineBitmapUpdateRange(v9, TimelineBitmapTime - (v8 >> 12), TimelineBitmapTime);
LABEL_10:
    ++v4;
    --v6;
  }
  while ( v6 );
  RtlStateDurationCapture((__int64)(v1 + 52), v1 + 52, v3);
  v13[1] = 0;
  v15 = 0LL;
  v13[0] = 4;
  v16 = v1;
  v14 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)(v1 + 54));
  PopEtEnumEnergyTrackers(v10, (__int64)v13);
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
