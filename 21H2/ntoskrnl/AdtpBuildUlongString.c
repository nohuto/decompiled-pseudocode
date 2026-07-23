/*
 * XREFs of AdtpBuildUlongString @ 0x14096E194
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 *     AdtpBuildRegistryValueString @ 0x14096D7B0 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     _ultow @ 0x1403D1C40 (_ultow.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildUlongString(unsigned int Value, __int64 a2, wchar_t **a3, __int64 a4, _DWORD *a5, char *a6)
{
  __int64 v10; // rax
  wchar_t *PoolWithTag; // rdi
  char v12; // bp
  __int64 v13; // rax

  if ( !a3 && !a2 )
    return 3221225485LL;
  if ( a4 && a5 && (v10 = (unsigned int)*a5, (unsigned int)(v10 + 11) < 0x400) )
  {
    PoolWithTag = (wchar_t *)(a4 + 2 * v10);
    *a5 = v10 + 11;
    v12 = 0;
  }
  else
  {
    v12 = 1;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x6B416553u);
    if ( !PoolWithTag )
      return 3221225495LL;
  }
  *a6 = v12;
  ultow(Value, PoolWithTag, 10);
  v13 = -1LL;
  do
    ++v13;
  while ( PoolWithTag[v13] );
  if ( a3 )
  {
    *a3 = PoolWithTag;
    a3[1] = (wchar_t *)(unsigned int)(2 * v13 + 2);
  }
  else
  {
    *(_WORD *)(a2 + 2) = 22;
    *(_WORD *)a2 = 2 * v13;
    *(_QWORD *)(a2 + 8) = PoolWithTag;
  }
  return 0LL;
}
