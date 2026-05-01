/*
 * XREFs of sub_1800400D8 @ 0x1800400D8
 * Callers:
 *     sub_18003FFFC @ 0x18003FFFC (sub_18003FFFC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800400D8(_DWORD *a1)
{
  if ( BYTE1(qword_1800B4F18) )
  {
    *a1 = BYTE1(qword_1800B4F18);
  }
  else if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce(&unk_1800B4EC0, sub_180042F50, 0LL, 0LL);
    *a1 = dword_1800B34F0;
  }
  return 0LL;
}
