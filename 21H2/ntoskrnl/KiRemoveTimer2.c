/*
 * XREFs of KiRemoveTimer2 @ 0x1402F2AD0
 * Callers:
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1402D40E4 (KeDisableTimer2.c)
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x140351500 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x1403AD92C (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
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
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  bool v18; // cf
  __int64 result; // rax
  volatile signed __int32 *v20; // rcx

  v2 = (char *)(a1 + 130);
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = 72LL;
  do
  {
    v7 = *v2;
    if ( (*v2 & 0x10) != 0 )
      goto LABEL_10;
    v8 = 0x140000000LL + 24LL * (v7 & 7) + 12761280;
    v9 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 12761280);
    v10 = a1 + 24 * (v3 + 1LL);
    if ( (v9 & 1) != 0 )
    {
      if ( v9 == 1 )
        v11 = 0LL;
      else
        v11 = v9 ^ (v8 | 1);
    }
    else
    {
      v11 = *(_QWORD *)(0x140000008LL + 24LL * (v7 & 7) + 12761280);
    }
    if ( v11 != v10 )
    {
      RtlRbRemoveNode(v8, v10);
      goto LABEL_10;
    }
    RtlRbRemoveNode(v8, v10);
    v12 = *(_QWORD *)(v8 + 8);
    v4 = 1;
    if ( (v12 & 1) == 0 )
    {
      v13 = *(_QWORD *)(v8 + 8);
      goto LABEL_8;
    }
    if ( v12 != 1 )
    {
      v13 = v12 ^ (v8 | 1);
LABEL_8:
      if ( v13 )
      {
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(v6 - v5 + v13 - 24);
        goto LABEL_10;
      }
    }
    *(_QWORD *)(v8 + 16) = -1LL;
LABEL_10:
    ++v3;
    v6 += 8LL;
    ++v2;
    v5 += 24LL;
  }
  while ( v3 < 2 );
  if ( v4 && KiNextTimer2DueTime == *(_QWORD *)(a1 + 72) )
  {
    v14 = -1LL;
    v15 = &qword_140C2B8D0;
    v16 = 5LL;
    do
    {
      v17 = v14;
      v14 = *v15;
      v18 = *v15 < v17;
      v15 += 3;
      if ( !v18 )
        v14 = v17;
      --v16;
    }
    while ( v16 );
    KiNextTimer2DueTime = v14;
  }
  result = *(unsigned __int8 *)(a1 + 129);
  if ( (result & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    result = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    v20 = *(volatile signed __int32 **)(result + 35000);
    if ( v20 )
    {
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 0x40) != 0 )
        _InterlockedAnd(v20, 0xFFF7FFFF);
    }
  }
  return result;
}
