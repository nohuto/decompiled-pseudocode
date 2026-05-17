/*
 * XREFs of RtlUnicodeStringValidateWorker_1 @ 0x4B33CED1
 * Callers:
 *     _RtlUnicodeStringCatString@8 @ 0x4B33CE74 (_RtlUnicodeStringCatString@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlUnicodeStringValidateWorker_1(unsigned __int16 *this, int a2)
{
  int result; // eax
  unsigned __int16 v4; // cx
  unsigned __int16 v5; // dx

  result = 0;
  v4 = *this;
  if ( (v4 & 1) != 0 )
    return -1073741811;
  v5 = this[1];
  if ( (v5 & 1) != 0 || v4 > v5 || v5 == 0xFFFF || !*((_DWORD *)this + 1) && (v4 || v5) )
    return -1073741811;
  return result;
}
