/*
 * XREFs of CmpAppendLine @ 0x140A636B4
 * Callers:
 *     CmpParseInfBuffer @ 0x140A6306C (CmpParseInfBuffer.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall CmpAppendLine(_QWORD *a1, __int64 a2, char a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // r9
  _QWORD *v8; // rax
  char result; // al

  if ( !a1[1] )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x69704D43u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[1] = a2;
  *((_BYTE *)PoolWithTag + 24) = a3;
  v8 = (_QWORD *)a1[2];
  if ( v8 )
    *v8 = v7;
  else
    *(_QWORD *)(a1[1] + 16LL) = v7;
  a1[3] = 0LL;
  result = 1;
  a1[2] = v7;
  return result;
}
