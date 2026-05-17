/*
 * XREFs of _RtlpHpVaMgrCtxInitialize@4 @ 0x4B37AD53
 * Callers:
 *     _RtlHpHeapManagerInitialize@8 @ 0x4B375D4D (_RtlHpHeapManagerInitialize@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlCSparseBitmapInitialize@8 @ 0x4B37E24A (_RtlCSparseBitmapInitialize@8.c)
 */

int __thiscall RtlpHpVaMgrCtxInitialize(char *this)
{
  _DWORD *v2; // esi
  int result; // eax

  memset(this, 0, 0x1C20u);
  RtlCSparseBitmapInitialize(this + 16, 0x24u);
  v2 = this + 64;
  result = 255;
  do
  {
    *(v2 - 1) = 0;
    v2[2] = 0;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = 0;
    *v2 = 0;
    v2 += 7;
    *(v2 - 6) = 0;
    --result;
  }
  while ( result );
  return result;
}
