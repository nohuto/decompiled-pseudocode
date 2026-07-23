/*
 * XREFs of RtlpUnwindEpilogue @ 0x180103084
 * Callers:
 *     RtlpxVirtualUnwind @ 0x180030EB0 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlpPopUserShadowStack @ 0x18007E2A0 (RtlpPopUserShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x180088B78 (RtlpUnwindOpSlots.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  int v8; // esi
  __int64 v9; // rbx
  _BYTE *v10; // rbp
  unsigned int v11; // edi
  unsigned __int16 v12; // cx
  __int64 v13; // rax
  unsigned int v15; // r8d
  __int16 v16; // r9
  unsigned int v17; // esi
  __int64 v18; // r11
  _QWORD *v19; // r8
  __int64 v20; // rax
  _QWORD *v21; // r8
  _QWORD *v22; // r8
  _QWORD *v23; // r11
  _QWORD *v24; // r9
  unsigned __int64 v25; // rcx

  v8 = 0;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    v11 = (unsigned __int8)v10[2];
    if ( v10[2] )
    {
      do
      {
        v12 = *(_WORD *)&v10[2 * v9 + 4];
        if ( (v12 & 0xF00) == 0 )
          break;
        if ( (HIBYTE(v12) & 0xF) == 0xA )
          break;
        v9 = (unsigned int)RtlpUnwindOpSlots(v12) + (unsigned int)v9;
      }
      while ( (unsigned int)v9 < v11 );
      if ( (unsigned int)v9 < v11 )
        break;
    }
    if ( (*v10 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v8 > 0x20 )
      return 3221225727LL;
    v13 = v11 + 1;
    if ( (v11 & 1) == 0 )
      v13 = v11;
    a4 = &v10[2 * v13 + 4];
  }
  v15 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= v11 )
      goto LABEL_23;
    v16 = *(_WORD *)&v10[2 * v9 + 4];
    v17 = v15;
    v18 = HIBYTE(v16) >> 4;
    if ( (v16 & 0xF00) != 0 )
      break;
    if ( v15 >= a3 )
    {
      v19 = *(_QWORD **)(a5 + 152);
      if ( *(_QWORD *)a6
        && ((unsigned __int64)v19 < **(_QWORD **)a6 || (unsigned __int64)v19 > **(_QWORD **)(a6 + 8) - 8LL) )
      {
        return 3221225512LL;
      }
      *(_QWORD *)(a5 + 152) = v19 + 1;
      *(_QWORD *)(a5 + 8 * v18 + 120) = *v19;
      v20 = *(_QWORD *)(a6 + 16);
      if ( v20 )
        *(_QWORD *)(v20 + 8 * v18 + 128) = v19;
    }
    v15 = v17 + 2 - ((unsigned int)v18 < 8);
    v9 = (unsigned int)(v9 + 1);
  }
  if ( (unsigned int)v9 >= v11 )
    goto LABEL_23;
  if ( (HIBYTE(v16) & 0xF) == 2 && !(_DWORD)v18 )
  {
    if ( v15 >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    v9 = (unsigned int)(v9 + 1);
  }
  if ( (unsigned int)v9 >= v11 || (v10[2 * v9 + 5] & 0xF) != 0xA )
  {
LABEL_23:
    v21 = *(_QWORD **)(a5 + 152);
    if ( !*(_QWORD *)a6
      || (unsigned __int64)v21 >= **(_QWORD **)a6 && (unsigned __int64)v21 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *v21;
      *(_QWORD *)(a5 + 152) = v21 + 1;
      RtlpPopUserShadowStack(a5);
      return 0LL;
    }
    return 3221225512LL;
  }
  v22 = *(_QWORD **)(a5 + 152);
  v23 = *(_QWORD **)a6;
  v24 = v22 + 3;
  if ( *(_QWORD *)a6 )
  {
    if ( (unsigned __int64)v22 < *v23 )
      return 3221225512LL;
    v25 = **(_QWORD **)(a6 + 8) - 8LL;
    if ( (unsigned __int64)v22 > v25 || (unsigned __int64)v24 < *v23 || (unsigned __int64)v24 > v25 )
      return 3221225512LL;
  }
  *(_QWORD *)(a5 + 248) = *v22;
  *(_QWORD *)(a5 + 152) = *v24;
  return 0LL;
}
