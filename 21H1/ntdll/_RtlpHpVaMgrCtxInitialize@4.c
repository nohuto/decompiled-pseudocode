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
  size_t v4; // [esp-4h] [ebp-Ch]

  LODWORD(v4) = 7200;
  memset(this, 0, v4);
  RtlCSparseBitmapInitialize(this + 16, 36);
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
