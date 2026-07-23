/*
 * XREFs of MiBitmapRangeZeroEx @ 0x140314410
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiFillPteHierarchy @ 0x1403171C0 (MiFillPteHierarchy.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiBitmapRangeZeroEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r15
  __int64 i; // rbx
  unsigned int v6; // r14d
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF

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
  for ( i = (v9 + 8) << 25 >> 16; v7; --v7 )
    i = i << 25 >> 16;
LABEL_10:
  if ( !i )
    i = ((v13[0] << 25) + 0x10000000LL) >> 16;
  result = v6;
  *a3 = 8 * (i - v3);
  return result;
}
