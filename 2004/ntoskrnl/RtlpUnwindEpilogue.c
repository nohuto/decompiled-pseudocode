/*
 * XREFs of RtlpUnwindEpilogue @ 0x14035F374
 * Callers:
 *     RtlpxVirtualUnwind @ 0x1402E88B0 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlpUnwindOpSlots @ 0x14035F530 (RtlpUnwindOpSlots.c)
 *     RtlpPopUserShadowStack @ 0x14035F56C (RtlpPopUserShadowStack.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(__int64 a1, unsigned __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r13d
  int v9; // ebp
  _BYTE *v10; // r14
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // r10d
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned __int64 *v25; // r10
  __int16 v26; // [rsp+50h] [rbp+8h]

  v7 = a3;
  v9 = 0;
  while ( 1 )
  {
    v10 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v10 & 3) != 0 )
      goto LABEL_55;
    v11 = (unsigned __int8)v10[2];
    v12 = 0LL;
    if ( v10[2] )
    {
      do
      {
        v13 = *(unsigned __int16 *)&v10[2 * v12 + 4];
        if ( (v13 & 0xF00) == 0 )
          break;
        if ( (BYTE1(v13) & 0xF) == 0xA )
          break;
        v12 = (unsigned int)RtlpUnwindOpSlots(v13, a2, a3, a4) + (unsigned int)v12;
      }
      while ( (unsigned int)v12 < v11 );
      if ( (unsigned int)v12 < v11 )
        goto LABEL_8;
    }
    if ( (*v10 & 0x20) == 0 )
    {
LABEL_8:
      v14 = 0;
      if ( (unsigned int)v12 >= v11 )
        goto LABEL_18;
      while ( 1 )
      {
        v15 = v14;
        v26 = *(_WORD *)&v10[2 * v12 + 4];
        v16 = HIBYTE(v26) >> 4;
        if ( (v26 & 0xF00) != 0 )
          break;
        if ( v14 >= v7 )
        {
          v17 = *(_QWORD *)(a5 + 152);
          if ( a2 <= 0x7FFFFFFEFFFFLL && (v17 & 3) != 0 )
            goto LABEL_55;
          if ( *(_QWORD *)a6 && (v17 < **(_QWORD **)a6 || v17 > **(_QWORD **)(a6 + 8) - 8LL) )
            return 3221225512LL;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 8 * v16 + 120) = *(_QWORD *)v17;
          v18 = *(_QWORD *)(a6 + 16);
          if ( v18 )
            *(_QWORD *)(v18 + 8 * v16 + 128) = v17;
        }
        v12 = (unsigned int)(v12 + 1);
        v14 = v15 + 2 - ((unsigned int)v16 < 8);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_18;
      }
      if ( (HIBYTE(v26) & 0xF) == 2 && !(_DWORD)v16 )
      {
        if ( v14 >= v7 )
          *(_QWORD *)(a5 + 152) += 8LL;
        v12 = (unsigned int)(v12 + 1);
      }
      if ( (unsigned int)v12 < v11 && (v10[2 * v12 + 5] & 0xF) == 0xA )
      {
        v23 = *(_QWORD *)(a5 + 152);
        v24 = v23 + 24;
        if ( a2 > 0x7FFFFFFEFFFFLL || (v23 & 3) == 0 )
        {
          v25 = *(unsigned __int64 **)a6;
          if ( *(_QWORD *)a6 && (v23 < *v25 || v23 > **(_QWORD **)(a6 + 8) - 8LL) )
            return 3221225512LL;
          if ( a2 > 0x7FFFFFFEFFFFLL )
            goto LABEL_50;
          if ( (v24 & 3) == 0 )
          {
            v25 = *(unsigned __int64 **)a6;
LABEL_50:
            if ( !v25 || v24 >= *v25 && v24 <= **(_QWORD **)(a6 + 8) - 8LL )
            {
              *(_QWORD *)(a5 + 248) = *(_QWORD *)v23;
              *(_QWORD *)(a5 + 152) = *(_QWORD *)v24;
              return 0LL;
            }
            return 3221225512LL;
          }
        }
      }
      else
      {
LABEL_18:
        v19 = *(_QWORD *)(a5 + 152);
        if ( a2 > 0x7FFFFFFEFFFFLL || (v19 & 3) == 0 )
        {
          if ( !*(_QWORD *)a6 || v19 >= **(_QWORD **)a6 && v19 <= **(_QWORD **)(a6 + 8) - 8LL )
          {
            v20 = *(_QWORD *)v19;
            *(_QWORD *)(a5 + 152) += 8LL;
            *(_QWORD *)(a5 + 248) = v20;
            RtlpPopUserShadowStack(a5);
            return 0LL;
          }
          return 3221225512LL;
        }
      }
LABEL_55:
      ExRaiseDatatypeMisalignment();
    }
    if ( (unsigned int)++v9 > 0x20 )
      return 3221225727LL;
    v22 = v11 + 1;
    if ( (v11 & 1) == 0 )
      v22 = v11;
    a4 = &v10[2 * v22 + 4];
  }
}
