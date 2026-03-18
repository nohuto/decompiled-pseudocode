/*
 * XREFs of MiBitmapRangeZeroEx @ 0x1402CEAB0
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1406265B0 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFillPteHierarchy @ 0x1402CC250 (MiFillPteHierarchy.c)
 */

__int64 __fastcall MiBitmapRangeZeroEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r15
  __int64 i; // rbx
  unsigned int v6; // r14d
  int v7; // edi
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v13[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  memset(v13, 0, sizeof(v13));
  i = 0LL;
  v6 = 0;
  v7 = 3;
  MiFillPteHierarchy(v3 + a2 / 8, v13);
  v8 = 3LL;
  while ( 1 )
  {
    v9 = v13[--v8];
    --v7;
    v10 = MI_READ_PTE_LOCK_FREE(v9);
    if ( !v10 )
      break;
    if ( (v10 & 0x81) == 0x81 )
      i = -1LL;
    if ( i == -1 )
      goto LABEL_9;
    if ( !v8 )
      goto LABEL_10;
  }
  v6 = 1;
LABEL_9:
  for ( i = (__int64)((v9 + 8) << 25) >> 16; v7; --v7 )
    i = i << 25 >> 16;
LABEL_10:
  if ( !i )
    i = (signed __int64)((v13[0] << 25) + 0x10000000) >> 16;
  result = v6;
  *a3 = 8 * (i - v3);
  return result;
}
