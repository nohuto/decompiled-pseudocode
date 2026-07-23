/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x14037DB9C
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140205628 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x14020597C (KiResetScb.c)
 * Callees:
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 */

__int64 __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r11
  char v6; // cl
  unsigned int v8; // edi
  char v9; // r12
  bool v10; // r14
  __int64 result; // rax
  unsigned int v12; // r13d
  int v13; // edi
  _QWORD *v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // r10
  __int64 v19; // r10
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // r9
  unsigned int v23; // [rsp+30h] [rbp-58h]
  unsigned int v24; // [rsp+34h] [rbp-54h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  char v26; // [rsp+90h] [rbp+8h]
  char v27; // [rsp+98h] [rbp+10h] BYREF
  _QWORD *v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v29 = a4;
  v28 = a3;
  v4 = 0LL;
  v26 = 0;
  v6 = 0;
  v27 = 0;
  v25 = 0LL;
  v8 = *(unsigned __int16 *)(a1 + 114);
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v8;
    result = a2 + 136;
    v25 = a2 + 136;
    v9 = 1;
  }
  else
  {
    result = 1LL;
    if ( a3 )
    {
      v6 = 1;
      v26 = 1;
    }
    else
    {
      v10 = a4 != 0;
    }
  }
  if ( !v8 )
    goto LABEL_15;
  while ( 2 )
  {
    _BitScanReverse(&v12, v8);
    v13 = v8 ^ (1 << v12);
    v14 = (_QWORD *)(16LL * v12 + a1 + 136);
    v24 = v12;
    v15 = v29;
    v23 = v13;
    v16 = (__int64)v28;
    v17 = (_QWORD *)*v14;
    do
    {
      v18 = (__int64)(v17 - 27);
      if ( v9 )
      {
        result = a2;
      }
      else
      {
        *(_DWORD *)(v18 + 116) &= ~0x2000u;
        result = v4;
      }
      *(_QWORD *)(v18 + 944) = result;
      v17 = (_QWORD *)*v17;
      if ( v10 )
      {
        result = KiInsertDeferredReadyList(v15, v18);
      }
      else
      {
        if ( !v6 )
          continue;
        KiGetThreadEffectiveRankNonZero(v18, a1, (__int64)a3, 0, (bool *)&v27);
        result = KiAddThreadToPrcbQueue(v16, v19, *(char *)(v19 + 195), 0, v27);
        v4 = 0LL;
      }
      v6 = v26;
    }
    while ( v17 != v14 );
    v8 = v23;
    if ( v9 )
    {
      v20 = (_QWORD *)*v14;
      a3 = (_QWORD *)v14[1];
      if ( *(_QWORD **)(*v14 + 8LL) != v14
        || (_QWORD *)*a3 != v14
        || (*a3 = v20,
            v20[1] = a3,
            v21 = (_QWORD *)(v25 + 16LL * v24),
            v22 = (_QWORD *)v21[1],
            *(_QWORD **)(*v21 + 8LL) != v21)
        || (_QWORD *)*v22 != v21
        || *(_QWORD **)(*v20 + 8LL) != v20
        || (_QWORD *)*a3 != v20 )
      {
        __fastfail(3u);
      }
      *v22 = v20;
      v21[1] = v20[1];
      result = v20[1];
      *(_QWORD *)result = v21;
      v20[1] = v22;
    }
    v14[1] = v14;
    *v14 = v14;
    if ( v23 )
    {
      v6 = v26;
      continue;
    }
    break;
  }
LABEL_15:
  *(_WORD *)(a1 + 114) = v4;
  return result;
}
