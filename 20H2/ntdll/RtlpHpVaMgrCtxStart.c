/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x18010EE48
 * Callers:
 *     RtlHpHeapManagerStart @ 0x18010E1A8 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180007CDC (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlULongLongMult @ 0x18004AE50 (RtlULongLongMult.c)
 *     RtlCSparseBitmapStart @ 0x18010F87C (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // r10d
  __int64 v9; // r8
  int v10; // r10d
  int v11; // ebx
  unsigned int v12; // r8d
  _DWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h]
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = a3;
  _BitScanForward(&v5, 0x20u);
  *(_DWORD *)(a1 + 24) = v5;
  v6 = (a4 >> 20) + 1;
  if ( (a4 & 0xFFFFF) == 0 )
    v6 = a4 >> 20;
  result = RtlULongLongMult(v6, 8uLL, &v15);
  if ( (int)result >= 0 )
  {
    result = RtlULongLongMult(v15, v8, &v15);
    if ( (int)result >= 0 )
    {
      result = RtlCSparseBitmapStart(a1 + 32, v15, v9, (unsigned int)(v10 - 31));
      if ( (int)result >= 0 )
        result = 0LL;
      if ( (int)result >= 0 )
      {
        v13[0] = -1;
        v14 = 0LL;
        *(_DWORD *)a1 = 0;
        v11 = 0;
        *(_QWORD *)(a1 + 8) = 0LL;
        while ( 1 )
        {
          v13[1] = v11;
          v12 = 0x200000;
          if ( v11 == 3 )
            v12 = 0x40000000;
          result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v13, v12);
          if ( (int)result < 0 )
            break;
          if ( ++v11 >= 4 )
            return 0LL;
        }
      }
    }
  }
  return result;
}
