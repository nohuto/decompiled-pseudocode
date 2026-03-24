/*
 * XREFs of ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C023B500
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BE10 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C023B740 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C023B788 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C023B840 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 */

unsigned __int8 __fastcall ValidateGdiCommand(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        const unsigned __int8 *a4,
        const unsigned __int8 *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        const struct tagRECT *a8,
        const struct tagRECT *a9,
        unsigned int a10,
        unsigned int a11,
        unsigned __int8 a12,
        char a13,
        unsigned int a14,
        unsigned __int8 **a15)
{
  unsigned __int64 v15; // rax
  unsigned int v16; // r10d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  const unsigned __int8 *v20; // rcx
  const unsigned __int8 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // rax
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx

  v15 = 16LL * a14;
  if ( v15 > 0xFFFFFFFF )
  {
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = 1953LL;
    goto LABEL_30;
  }
  v16 = v15 + a1;
  if ( (int)v15 + (int)a1 < (unsigned int)a1 )
  {
    v17 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v17 + 24) = 1959LL;
    goto LABEL_30;
  }
  if ( v16 <= (unsigned int)a2 )
  {
    v18 = (__int64)*a15;
    if ( *a15 <= a5 )
    {
      v17 = WdLogNewEntry5_WdError(a1, v18);
      *(_QWORD *)(v17 + 24) = 1969LL;
      goto LABEL_30;
    }
    v19 = v18 - (_QWORD)a5;
    v20 = &a4[v16];
    v21 = &a3[v19];
    *a15 = (unsigned __int8 *)&a3[v19];
    if ( &a3[v19] <= a4 || v21 >= v20 || (v20 -= (__int64)v21, (__int64)v20 < (int)v15) )
    {
      v17 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v17 + 24) = 1976LL;
      goto LABEL_30;
    }
    v24 = 0;
    if ( !ValidateRect(a8) )
    {
      v25 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v25 + 24) = 1990LL;
LABEL_24:
      WdLogEvent5_WdError(v25);
      return v24;
    }
    v26 = 0;
    if ( a14 )
    {
      while ( ValidateSubRect((const struct tagRECT *)&v21[16 * v26], a8) )
      {
        if ( !ValidateRectBounds((const struct tagRECT *)&v21[16 * v26], a10, a6) )
        {
          v25 = WdLogNewEntry5_WdError(v30, v29);
          *(_QWORD *)(v25 + 24) = 2010LL;
          goto LABEL_24;
        }
        if ( ++v26 >= a14 )
          goto LABEL_16;
      }
      v25 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v25 + 24) = 2005LL;
      goto LABEL_24;
    }
LABEL_16:
    if ( a9 )
    {
      if ( !ValidateRect(a9) )
      {
        v25 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v25 + 24) = 2018LL;
        goto LABEL_24;
      }
      if ( a13 && !ValidateRectBounds(a9, a11, a7) )
      {
        v25 = WdLogNewEntry5_WdError(v34, v33);
        *(_QWORD *)(v25 + 24) = 2025LL;
        goto LABEL_24;
      }
    }
    return 1;
  }
  v17 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v17 + 24) = 1964LL;
LABEL_30:
  WdLogEvent5_WdError(v17);
  return 0;
}
