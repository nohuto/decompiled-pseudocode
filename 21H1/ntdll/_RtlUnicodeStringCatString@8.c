/*
 * XREFs of _RtlUnicodeStringCatString@8 @ 0x4B33CE74
 * Callers:
 *     _RtlpEnsureTailingSlashAndAddToList@8 @ 0x4B33D020 (_RtlpEnsureTailingSlashAndAddToList@8.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_1 @ 0x4B33CED1 (RtlUnicodeStringValidateWorker_1.c)
 *     RtlWideCharArrayCopyStringWorker_0 @ 0x4B33CF12 (RtlWideCharArrayCopyStringWorker_0.c)
 */

int __thiscall RtlUnicodeStringCatString(unsigned __int16 *this)
{
  int v2; // ebx
  int result; // eax
  int v4; // ecx
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  LOWORD(v2) = 0;
  result = RtlUnicodeStringValidateWorker_1(this);
  if ( result >= 0 && this )
  {
    v4 = *((_DWORD *)this + 1);
    v2 = *this >> 1;
  }
  else
  {
    v4 = v5;
  }
  if ( result >= 0 )
  {
    v5 = 0;
    result = RtlWideCharArrayCopyStringWorker_0(&v5, v4, v4);
    *this = 2 * (v2 + v5);
  }
  return result;
}
