/*
 * XREFs of MiGetUltraHugeAlreadyActive @ 0x1403953C0
 * Callers:
 *     MiGetHugePageToZero @ 0x140331E40 (MiGetHugePageToZero.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140269270 (RtlFindClearBitsAndSet.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiDecrementHugeContext @ 0x1403954E8 (MiDecrementHugeContext.c)
 */

unsigned int **__fastcall MiGetUltraHugeAlreadyActive(__int64 a1, __int64 a2, int a3)
{
  unsigned int **p_Buffer; // rdi
  __int64 v5; // r14
  ULONG ClearBitsAndSet; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // r15
  unsigned int *v11; // rbx
  unsigned int **result; // rax
  _RTL_BITMAP **v13; // r14
  _RTL_BITMAP *i; // rsi
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = a3;
  v19 = a1;
  p_Buffer = *(unsigned int ***)(a2 + 224);
  v5 = *(_QWORD *)(a2 + 232);
  if ( p_Buffer )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(p_Buffer + 11), 1u, 0);
    v10 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      v11 = p_Buffer[21];
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20, v7, v8, v9);
        while ( *((__int64 *)v11 + 3) < 0 );
      }
      if ( !*((_BYTE *)p_Buffer + 69) )
        goto LABEL_6;
      _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    }
    MiDecrementHugeContext(p_Buffer);
    *(_QWORD *)(a2 + 224) = 0LL;
  }
  v13 = (_RTL_BITMAP **)(v5 + 56);
  for ( i = *v13; ; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    if ( i == (_RTL_BITMAP *)v13 )
      return 0LL;
    p_Buffer = &i[-5].Buffer;
    v15 = RtlFindClearBitsAndSet(i + 1, 1u, 0);
    v10 = v15;
    if ( v15 != -1 )
      break;
LABEL_11:
    ;
  }
  v11 = p_Buffer[21];
  LODWORD(v19) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v11 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19, v16, v17, v18);
    while ( *((__int64 *)v11 + 3) < 0 );
  }
  if ( *((_BYTE *)p_Buffer + 69) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_11;
  }
  ++*((_DWORD *)p_Buffer + 47);
  *(_QWORD *)(a2 + 224) = p_Buffer;
LABEL_6:
  _InterlockedAnd64((volatile signed __int64 *)v11 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  *(_DWORD *)(a2 + 64) = 0;
  result = p_Buffer;
  *(_WORD *)(a2 + 216) = v10;
  return result;
}
