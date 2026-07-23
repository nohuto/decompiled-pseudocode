/*
 * XREFs of AdtpBuildHexInt64String @ 0x14096D188
 * Callers:
 *     AdtpBuildRegistryValueString @ 0x14096D7B0 (AdtpBuildRegistryValueString.c)
 * Callees:
 *     StringCchPrintfW @ 0x1402490A8 (StringCchPrintfW.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildHexInt64String(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _BYTE *a6)
{
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rbx
  __int64 result; // rax
  __int64 v11; // rax

  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x26uLL, 0x6B416553u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *a6 = 1;
  if ( StringCchPrintfW(PoolWithTag, 0x13uLL, L"0x%I64X", *a1) >= 0 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( v9[v11] );
    *(_WORD *)(a2 + 2) = 38;
    *(_WORD *)a2 = 2 * v11;
    result = 0LL;
    *(_QWORD *)(a2 + 8) = v9;
  }
  else
  {
    if ( *a6 == 1 )
    {
      ExFreePoolWithTag(v9, 0);
      *a6 = 0;
    }
    return 3221225485LL;
  }
  return result;
}
