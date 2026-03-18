/*
 * XREFs of _MuiRegAllocArray @ 0x1403B378C
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x140793540 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140794530 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140794C88 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14097C79C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14097CF20 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned int v4; // esi
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi

  v2 = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF && (_DWORD)v3 )
  {
    v4 = 2 * a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v3, 0x72746C6Du);
    v6 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v4);
    return v6;
  }
  return (PVOID)v2;
}
