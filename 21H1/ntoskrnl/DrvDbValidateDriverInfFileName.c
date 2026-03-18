/*
 * XREFs of DrvDbValidateDriverInfFileName @ 0x140979F24
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x1406AD870 (DrvDbDispatchDriverPackage.c)
 *     DrvDbDispatchDriverInfFile @ 0x1406B01F0 (DrvDbDispatchDriverInfFile.c)
 *     DrvDbDispatchDriverFile @ 0x14097A4F0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     wcschr @ 0x1403CFAD0 (wcschr.c)
 */

__int64 __fastcall DrvDbValidateDriverInfFileName(__int64 a1, const wchar_t *a2)
{
  unsigned int v2; // edi
  wchar_t *v4; // rax
  const wchar_t *v5; // rax

  v2 = 0;
  if ( *a2 != 64 || (v4 = wcschr(a2 + 1, 0x3Au)) == 0LL || (v5 = v4 + 1) == 0LL )
    v5 = a2;
  if ( wcschr(v5, 0x5Cu) )
    return (unsigned int)-1073741773;
  return v2;
}
