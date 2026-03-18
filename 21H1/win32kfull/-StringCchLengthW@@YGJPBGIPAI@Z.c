/*
 * XREFs of ?StringCchLengthW@@YGJPBGIPAI@Z @ 0xDF3CE
 * Callers:
 *     _InitializeDefaultFamilyFonts@0 @ 0x2926EC (_InitializeDefaultFamilyFonts@0.c)
 * Callees:
 *     StringLengthWorkerW_0 @ 0xDF3FA (StringLengthWorkerW_0.c)
 */

HRESULT __userpurge StringCchLengthW@<eax>(
        int a1@<ecx>,
        const unsigned __int16 *psz,
        unsigned int a3,
        unsigned int *a4)
{
  HRESULT result; // eax
  size_t v5; // [esp+0h] [ebp-4h]
  size_t *savedregs; // [esp+4h] [ebp+0h]

  if ( a1 )
    result = StringLengthWorkerW_0(psz, v5, savedregs);
  else
    result = -2147024809;
  if ( result < 0 )
  {
    if ( psz )
      *(_DWORD *)psz = 0;
  }
  return result;
}
