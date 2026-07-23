/*
 * XREFs of ObpInsertHandleCount @ 0x1405E786C
 * Callers:
 *     ObpLockHandleDataBaseEntry @ 0x1405E76F0 (ObpLockHandleDataBaseEntry.c)
 * Callees:
 *     OBJECT_HEADER_TO_HANDLE_INFO @ 0x14021CE08 (OBJECT_HEADER_TO_HANDLE_INFO.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ObpInsertHandleCount(__int64 a1)
{
  int **v2; // r15
  int *v3; // r12
  unsigned int v4; // esi
  int v5; // ebp
  unsigned int v6; // edi
  int *PoolWithTag; // rax
  int *v8; // r14
  char v9; // cl
  char *result; // rax
  int v11; // esi
  _QWORD Src[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(Src, 0, sizeof(Src));
  v2 = (int **)OBJECT_HEADER_TO_HANDLE_INFO(a1);
  if ( !v2 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 27) & 0x40) != 0 )
  {
    LODWORD(Src[0]) = 1;
    v3 = (int *)Src;
    v4 = 24;
    v5 = 2;
    *(_OWORD *)&Src[1] = *(_OWORD *)v2;
    v6 = 40;
  }
  else
  {
    v3 = *v2;
    v11 = **v2;
    v5 = v11 + 4;
    v4 = 16 * v11 + 8;
    v6 = 16 * v5 + 8;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v6, 0x6448624Fu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, v3, v4);
  v9 = *(_BYTE *)(a1 + 27);
  if ( (v9 & 0x40) != 0 )
    *(_BYTE *)(a1 + 27) = v9 & 0xBF;
  else
    ExFreePoolWithTag(v3, 0);
  memset((char *)v8 + v4, 0, v6 - v4);
  *v8 = v5;
  result = (char *)v8 + v4;
  *v2 = v8;
  return result;
}
