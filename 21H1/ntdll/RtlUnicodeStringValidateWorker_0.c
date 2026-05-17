/*
 * XREFs of RtlUnicodeStringValidateWorker_0 @ 0x4B2ECFE7
 * Callers:
 *     _RtlDuplicateUnicodeString@12 @ 0x4B2ECEB0 (_RtlDuplicateUnicodeString@12.c)
 *     _RtlValidateUnicodeString@8 @ 0x4B34E040 (_RtlValidateUnicodeString@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlUnicodeStringValidateWorker_0(unsigned __int16 *this, int a2)
{
  int result; // eax
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx

  result = 0;
  if ( this )
  {
    v3 = *this;
    if ( (*this & 1) != 0 )
      return -1073741811;
    v4 = this[1];
    if ( (v4 & 1) != 0 || v3 > v4 || v4 == 0xFFFF || !*((_DWORD *)this + 1) && (v3 || v4) )
      return -1073741811;
  }
  return result;
}
