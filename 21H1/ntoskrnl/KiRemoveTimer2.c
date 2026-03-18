/*
 * XREFs of KiRemoveTimer2 @ 0x140243180
 * Callers:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140242AE0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiTimer2Expiration @ 0x140242E60 (KiTimer2Expiration.c)
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039AED0 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1)
{
  char *v2; // rsi
  unsigned int v3; // edi
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // r14
  char v7; // al
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  bool v17; // cf
  __int64 result; // rax
  volatile signed __int32 *v19; // rcx

  v2 = (char *)(a1 + 130);
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = 72LL;
  do
  {
    v7 = *v2;
    if ( (*v2 & 0x10) == 0 )
    {
      v8 = 0x140000000LL + 24LL * (v7 & 7) + 12786848;
      v9 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 12786848);
      if ( (v9 & 1) != 0 )
        v10 = v9 == 1 ? 0LL : v9 ^ (v8 | 1);
      else
        v10 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 12786848);
      RtlRbRemoveNode(v8, a1 + 24 * (v3 + 1LL));
      if ( v10 == a1 + 24 * (v3 + 1LL) )
      {
        v11 = *(_QWORD *)(v8 + 8);
        v4 = 1;
        if ( (v11 & 1) != 0 )
        {
          if ( v11 == 1 )
          {
LABEL_28:
            *(_QWORD *)(v8 + 16) = -1LL;
            goto LABEL_10;
          }
          v12 = v11 ^ (v8 | 1);
        }
        else
        {
          v12 = *(_QWORD *)(v8 + 8);
        }
        if ( v12 )
        {
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(v6 - v5 + v12 - 24);
          goto LABEL_10;
        }
        goto LABEL_28;
      }
    }
LABEL_10:
    ++v3;
    v6 += 8LL;
    ++v2;
    v5 += 24LL;
  }
  while ( v3 < 2 );
  if ( v4 && KiNextTimer2DueTime == *(_QWORD *)(a1 + 72) )
  {
    v13 = -1LL;
    v14 = &qword_140C31CB0;
    v15 = 5LL;
    do
    {
      v16 = v13;
      v13 = *v14;
      v17 = *v14 < v16;
      v14 += 3;
      if ( !v17 )
        v13 = v16;
      --v15;
    }
    while ( v15 );
    KiNextTimer2DueTime = v13;
  }
  result = *(unsigned __int8 *)(a1 + 129);
  if ( (result & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    result = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    v19 = *(volatile signed __int32 **)(result + 33976);
    if ( v19 )
    {
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 0x40) != 0 )
        _InterlockedAnd(v19, 0xFFF7FFFF);
    }
  }
  return result;
}
