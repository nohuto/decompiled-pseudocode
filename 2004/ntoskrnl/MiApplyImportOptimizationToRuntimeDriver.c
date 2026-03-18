/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x1407470B8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiIsImportOptimizationEnabled @ 0x140329384 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x14036F444 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140394C54 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCaptureRetpolineImportInfo @ 0x14076B1AC (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x14088DAD8 (VslCaptureSecureImageIat.c)
 *     VfIsDriverSuspect @ 0x1409BF524 (VfIsDriverSuspect.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  int v8; // edx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // ebx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !MiIsImportOptimizationEnabled()
    || !MiDoesControlAreaRequireRetpolineFixups(v5)
    || *(_QWORD *)(*(_QWORD *)v6 + 32LL) != *(_QWORD *)(a1 + 48)
    || (v7 & 1) != 0
    || (unsigned int)VfIsDriverSuspect((PCUNICODE_STRING)(a1 + 88)) )
  {
    return 0;
  }
  if ( (MiFlags & 0x10000) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 48);
    v15 = 0;
    LOBYTE(v8) = 1;
    v14 = RtlImageDirectoryEntryToData(v13, v8, 12, (int)&v15);
    if ( v14 )
    {
      v11 = VslCaptureSecureImageIat(v13, v14, v15);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
  }
  else
  {
    v4 = (_QWORD *)MiReservePtes((__int64)&qword_140C4ED40, 1u, v9, v10);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v11 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v11 < 0 )
      goto LABEL_12;
  }
  MiWalkEntireImage(a2, (__int64)v4, 16, 0xFFFFFFFFLL);
  if ( (MiFlags & 0x10000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (__int64)v4);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v11 = 0;
LABEL_12:
  if ( v4 )
    MiReleasePtes((__int64)&qword_140C4ED40, v4, 1u);
  return (unsigned int)v11;
}
