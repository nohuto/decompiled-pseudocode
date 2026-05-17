/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800E55E0
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToCustomCPN(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v6; // r11d
  unsigned int v8; // ebx
  _BYTE *v9; // r10
  unsigned int v11; // eax
  __int64 v12; // rbp
  unsigned __int16 *v13; // rsi
  __int64 v14; // r14
  unsigned __int16 v15; // ax
  _BYTE *v16; // r10
  __int64 v17; // r15
  __int64 v19; // r12
  unsigned __int16 *v20; // rbp
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  unsigned __int64 v23; // rax
  unsigned __int16 v24; // cx
  __int16 v25; // dx
  unsigned int v26; // eax

  v6 = a6 >> 1;
  v8 = a3;
  LODWORD(v9) = a2;
  if ( *(_WORD *)(a1 + 12) )
  {
    v17 = *(_QWORD *)(a1 + 56);
    v19 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      v20 = a5;
      do
      {
        if ( !v8 )
          break;
        v21 = *v20++;
        v22 = *(_WORD *)(v19 + 2 * v21);
        v23 = (unsigned __int64)v22 >> 8;
        if ( *(_WORD *)(v17 + 2 * v23) )
          v24 = *(_WORD *)(v17 + 2 * ((unsigned __int8)v22 + (unsigned __int64)*(unsigned __int16 *)(v17 + 2 * v23)));
        else
          v24 = *(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * (unsigned __int8)v22);
        v25 = *(_WORD *)(v19 + 2LL * NLS_UPCASE(v24));
        if ( HIBYTE(v25) )
        {
          v26 = v8--;
          if ( v26 < 2 )
            break;
          *v9++ = HIBYTE(v25);
        }
        *v9 = v25;
        --v8;
        LODWORD(v9) = (_DWORD)v9 + 1;
        --v6;
      }
      while ( v6 );
    }
    if ( a4 )
      *a4 = (_DWORD)v9 - a2;
  }
  else
  {
    v11 = a3;
    if ( v6 < a3 )
      v11 = a6 >> 1;
    if ( a4 )
      *a4 = v11;
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 )
    {
      v13 = a5;
      v14 = v11;
      do
      {
        v15 = NLS_UPCASE(*(_WORD *)(*(_QWORD *)(a1 + 32) + 2LL * *(unsigned __int8 *)(*v13++ + v12)));
        *v16 = *(_BYTE *)(v15 + v12);
        --v14;
      }
      while ( v14 );
    }
  }
  return v8 < v6 ? 0x80000005 : 0;
}
