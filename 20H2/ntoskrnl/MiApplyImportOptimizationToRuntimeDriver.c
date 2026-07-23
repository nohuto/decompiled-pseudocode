/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     MiIsImportOptimizationEnabled @ 0x140357954 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x140371394 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140397114 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCaptureRetpolineImportInfo @ 0x140779F6C (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x140893628 (VslCaptureSecureImageIat.c)
 *     VfIsDriverSuspect @ 0x1409C5534 (VfIsDriverSuspect.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  int v8; // ebx
  void *v10; // rbx
  PVOID v11; // rax
  ULONG Size; // [rsp+48h] [rbp+20h] BYREF

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
    v10 = *(void **)(a1 + 48);
    Size = 0;
    v11 = RtlImageDirectoryEntryToData(v10, 1u, 0xCu, &Size);
    if ( v11 )
    {
      v8 = VslCaptureSecureImageIat(v10, v11, Size);
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  else
  {
    v4 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EDC0, 1u);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v8 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v8 < 0 )
      goto LABEL_12;
  }
  MiWalkEntireImage(a2, (__int64)v4, 16, 0xFFFFFFFF);
  if ( (MiFlags & 0x10000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (__int64)v4);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v8 = 0;
LABEL_12:
  if ( v4 )
    MiReleasePtes((__int64)&qword_140C4EDC0, v4, 1u);
  return (unsigned int)v8;
}
