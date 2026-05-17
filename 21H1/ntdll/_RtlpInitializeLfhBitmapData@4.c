/*
 * XREFs of _RtlpInitializeLfhBitmapData@4 @ 0x4B379B79
 * Callers:
 *     @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD (@RtlpSubSegmentDebugInitialize@28.c)
 *     _RtlpHpLfhSubsegmentInitialize@20 @ 0x4B377743 (_RtlpHpLfhSubsegmentInitialize@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void *__thiscall RtlpInitializeLfhBitmapData(unsigned int *this)
{
  unsigned int v1; // esi
  void *v2; // edi
  void *result; // eax
  char v4; // cl

  v1 = *this;
  v2 = (void *)this[1];
  result = memset(v2, 0, (*this + 7) >> 3);
  v4 = v1 & 0x1F;
  if ( (v1 & 0x1F) != 0 )
  {
    result = (void *)(-1 << v4);
    *((_DWORD *)v2 + (v1 >> 5)) |= -1 << v4;
  }
  return result;
}
