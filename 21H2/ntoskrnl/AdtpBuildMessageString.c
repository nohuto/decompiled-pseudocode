/*
 * XREFs of AdtpBuildMessageString @ 0x1407B91B0
 * Callers:
 *     AdtpPackageParameters @ 0x1403C0AE4 (AdtpPackageParameters.c)
 * Callees:
 *     StringCchPrintfW @ 0x1402490A8 (StringCchPrintfW.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildMessageString(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, char *a6)
{
  __int64 v8; // rax
  PVOID PoolWithTag; // rbx
  char v10; // al
  __int64 v11; // rax
  __int64 result; // rax

  if ( !a3 )
    return 3221225485LL;
  v8 = (unsigned int)*a5;
  if ( (unsigned int)(v8 + 13) >= 0x400 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1AuLL, 0x6B416553u);
    if ( !PoolWithTag )
      return 3221225495LL;
    v10 = 1;
  }
  else
  {
    PoolWithTag = (PVOID)(a4 + 2 * v8);
    *a5 = v8 + 13;
    v10 = 0;
  }
  *a6 = v10;
  if ( StringCchPrintfW((STRSAFE_LPWSTR)PoolWithTag, 0xDuLL, L"%%%%%u", a1) < 0 )
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)PoolWithTag + v11) );
  *(_QWORD *)a3 = PoolWithTag;
  *(_DWORD *)(a3 + 8) = 2 * v11 + 2;
  result = 0LL;
  *(_DWORD *)(a3 + 12) = 0;
  return result;
}
