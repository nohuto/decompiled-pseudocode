/*
 * XREFs of _RtlpInitFeatureConfiguration@0 @ 0x4B3699BE
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int *__stdcall RtlpInitFeatureConfiguration()
{
  int *result; // eax

  memset(&RtlpFcProcessManager, 0, 0xA0u);
  memset(&unk_4B3A46F4, 0, 0x74u);
  dword_4B3A46E8[0] = 0;
  dword_4B3A46E8[1] = 0;
  dword_4B3A46E8[2] = 0;
  memset(&unk_4B3A46F8, 0, 0x30u);
  memset(&unk_4B3A4728, 0, 0x30u);
  dword_4B3A4768 = 0;
  result = &dword_4B3A4774;
  dword_4B3A4770 = 0;
  dword_4B3A4778 = (int)&dword_4B3A4774;
  dword_4B3A4774 = (int)&dword_4B3A4774;
  return result;
}
