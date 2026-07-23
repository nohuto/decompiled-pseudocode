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
  size_t v1; // [esp-28h] [ebp-30h]
  size_t v2; // [esp-1Ch] [ebp-24h]
  size_t v3; // [esp-10h] [ebp-18h]
  size_t v4; // [esp-4h] [ebp-Ch]

  LODWORD(v4) = 160;
  memset(&RtlpFcProcessManager, 0, v4);
  LODWORD(v3) = 116;
  memset(&unk_4B3A46F4, 0, v3);
  LODWORD(v2) = 48;
  dword_4B3A46E8[0] = 0;
  dword_4B3A46E8[1] = 0;
  dword_4B3A46E8[2] = 0;
  memset(&unk_4B3A46F8, 0, v2);
  LODWORD(v1) = 48;
  memset(&unk_4B3A4728, 0, v1);
  stru_4B3A4768.Value = 0;
  result = &dword_4B3A4774;
  SRWLock.0 = 0;
  dword_4B3A4778 = (int)&dword_4B3A4774;
  dword_4B3A4774 = (int)&dword_4B3A4774;
  return result;
}
