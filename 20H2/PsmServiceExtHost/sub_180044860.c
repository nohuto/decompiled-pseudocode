/*
 * XREFs of sub_180044860 @ 0x180044860
 * Callers:
 *     sub_1800470F0 @ 0x1800470F0 (sub_1800470F0.c)
 * Callees:
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 */

__int64 (__fastcall *sub_180044860())(_QWORD, __int64, _QWORD, _QWORD)
{
  if ( !sub_180039EA4() )
    return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))sub_180064440(&byte_1800B4128);
  byte_1800B4128 = 0;
  return sub_18003A040((__int64)&byte_1800B4128);
}
