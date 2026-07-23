/*
 * XREFs of RtlpCopyBitMapTailToHead @ 0x1800ED624
 * Callers:
 *     RtlCopyBitMap @ 0x1800EBAA0 (RtlCopyBitMap.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

unsigned __int64 __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r11
  size_t v8; // r8
  unsigned __int64 v9; // r10
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int *v12; // rbp
  unsigned int *v13; // r14
  _DWORD *v14; // r9
  char v15; // bl
  _DWORD *v16; // r9
  unsigned int v17; // ebx
  int v18; // r15d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = (unsigned __int64)a3 >> 3;
  v7 = a3;
  if ( (a3 & 7) != 0 )
  {
    v9 = (unsigned __int64)a4 >> 5;
    v10 = a3 & 0x1F;
    v11 = a4 & 0x1F;
    v12 = (unsigned int *)(*(_QWORD *)(a2 + 8) + 4 * (v9 + (v7 >> 5)));
    result = *(_QWORD *)(a1 + 8);
    v13 = v12;
    v14 = (_DWORD *)(result + 4 * v9);
    if ( v11 )
    {
      v15 = 32 - v10;
      if ( v11 > 32 - v10 )
      {
        v12[1] = v12[1] & -(1 << (v10 + v11 - 32)) | ((*v14 & (unsigned int)(((1 << (v10 + v11 - 32)) - 1) << v15)) >> v15);
        result = ((*v14 & ((1 << v15) - 1)) << v10) | *v12 & ((1 << v10) - 1);
        *v12 = result;
      }
      else
      {
        result = (*v14 & (unsigned int)((1 << v11) - 1)) << v10;
        *v12 = result | *v12 & ~(((1 << v11) - 1) << v10);
      }
    }
    v16 = v14 - 1;
    if ( v9 )
    {
      v17 = *v12;
      v18 = 1 << (32 - v10);
      do
      {
        *v13-- = ((*v16 & (unsigned int)~(v18 - 1)) >> (32 - v10)) | v17 & ~((1 << v10) - 1);
        result = (*v16-- & (unsigned int)(v18 - 1)) << v10;
        v17 = result | ((1 << v10) - 1) & *v13;
        *v13 = v17;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v8 = (unsigned __int64)a4 >> 3;
    if ( (a4 & 7) != 0 )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v8 + *(_QWORD *)(a2 + 8) + v5) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v8 + result) | *(_BYTE *)(v8 + *(_QWORD *)(a2 + 8) + v5) & ~((1 << (a4 & 7)) - 1);
    }
    if ( v8 )
      return (unsigned __int64)memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v8);
  }
  return result;
}
