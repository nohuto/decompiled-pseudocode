/*
 * XREFs of InitializeFUDI @ 0x1C0128658
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00D5470 (AAHalftoneBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

void *__fastcall InitializeFUDI(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // r15
  bool v5; // zf
  const void **v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rbp
  _BYTE *v9; // rbx
  __int64 v11; // rsi
  _BYTE *v12; // rbx

  if ( (*(_DWORD *)a1 & 0x400) != 0 )
    v2 = *(_DWORD *)(a1 + 148);
  else
    v2 = *(_DWORD *)(a1 + 60);
  v3 = *(unsigned int *)(a1 + 56);
  v4 = a1 + 8;
  v5 = (*(_BYTE *)(a1 + 8) & 4) == 0;
  v6 = (const void **)(a1 + 496);
  *(_DWORD *)(a1 + 532) = v2;
  v7 = (_QWORD *)(a1 + 496);
  v8 = 2LL;
  if ( v5 )
  {
    v11 = 3 * v3;
    do
    {
      v12 = (_BYTE *)*v7;
      (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(v4, *v7++ + 3LL);
      *(_WORD *)v12 = *((_WORD *)v12 + 3);
      v12[2] = v12[8];
      *(_WORD *)&v12[v11 + 3] = *(_WORD *)&v12[v11 - 3];
      v12[v11 + 5] = v12[v11 - 1];
      --v8;
    }
    while ( v8 );
  }
  else
  {
    do
    {
      v9 = (_BYTE *)*v7;
      (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(v4, *v7++ + 1LL);
      *v9 = v9[2];
      v9[v3 + 1] = v9[v3 - 1];
      --v8;
    }
    while ( v8 );
  }
  memmove(*(void **)(a1 + 520), *v6, *(unsigned int *)(a1 + 528));
  return memmove(*(void **)(a1 + 488), *(const void **)(a1 + 504), *(unsigned int *)(a1 + 528));
}
