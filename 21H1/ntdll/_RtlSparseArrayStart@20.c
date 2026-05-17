/*
 * XREFs of _RtlSparseArrayStart@20 @ 0x4B37E41B
 * Callers:
 *     _RtlpHpVaMgrCtxStart@20 @ 0x4B37AE19 (_RtlpHpVaMgrCtxStart@20.c)
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _RtlCSparseBitmapStart@16 @ 0x4B37E275 (_RtlCSparseBitmapStart@16.c)
 */

int __thiscall RtlSparseArrayStart(_DWORD *this, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // eax
  int result; // eax
  int *v7; // ecx
  int v8; // ecx
  unsigned int v9; // [esp+8h] [ebp-4h] BYREF

  _BitScanForward(&v4, 0x10u);
  this[1] = v4;
  result = RtlULongLongToUInt((int *)&v9, 8 * a2, (unsigned __int64)a2 >> 29);
  if ( result >= 0 )
  {
    result = RtlULongLongToUInt(v7, 16 * v9, (unsigned __int64)v9 >> 28);
    if ( result >= 0 )
    {
      result = RtlCSparseBitmapStart((int)(this + 2), v9, v8, 1);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
