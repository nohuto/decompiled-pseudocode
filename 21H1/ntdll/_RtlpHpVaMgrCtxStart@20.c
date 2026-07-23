/*
 * XREFs of _RtlpHpVaMgrCtxStart@20 @ 0x4B37AE19
 * Callers:
 *     _RtlHpHeapManagerStart@24 @ 0x4B375DB6 (_RtlHpHeapManagerStart@24.c)
 * Callees:
 *     _RtlpHpVaMgrCtxAllocatorReference@12 @ 0x4B37AB82 (_RtlpHpVaMgrCtxAllocatorReference@12.c)
 *     _RtlSparseArrayStart@20 @ 0x4B37E41B (_RtlSparseArrayStart@20.c)
 */

int __thiscall RtlpHpVaMgrCtxStart(_RTL_SRWLOCK *this, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  int result; // eax
  int v7; // ecx
  int v8; // esi
  _DWORD v9[5]; // [esp+10h] [ebp-14h] BYREF

  v4 = a3 >> 20;
  if ( (a3 & 0xFFFFF) != 0 )
    ++v4;
  result = RtlSparseArrayStart(v4, this, this);
  if ( result >= 0 )
  {
    v9[0] = -1;
    this->Value = 0;
    v8 = 0;
    this[1].Value = 0;
    memset(&v9[2], 0, 12);
    while ( 1 )
    {
      v9[1] = v8;
      result = RtlpHpVaMgrCtxAllocatorReference(this, (int)v9, v7);
      if ( result < 0 )
        break;
      if ( ++v8 >= 4 )
        return 0;
    }
  }
  return result;
}
