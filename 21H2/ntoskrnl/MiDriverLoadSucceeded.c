/*
 * XREFs of MiDriverLoadSucceeded @ 0x140761234
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1402D9D04 (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x1402DB994 (MiSessionUpdateImageCharges.c)
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     PsCallImageNotifyRoutines @ 0x1406F84B0 (PsCallImageNotifyRoutines.c)
 *     MiCacheImageSymbols @ 0x1407619F4 (MiCacheImageSymbols.c)
 *     RtlGetNtSystemRoot @ 0x140761D60 (RtlGetNtSystemRoot.c)
 *     MiProtectSystemImage @ 0x14082B6F0 (MiProtectSystemImage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfDriverLoadSucceeded @ 0x140A7C224 (VfDriverLoadSucceeded.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // dl
  unsigned __int64 v12; // rbx
  wchar_t *Pool; // rbx
  __m128i v14; // xmm0
  __int64 NtSystemRoot; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    *(_DWORD *)(a1 + 196) |= 0x100u;
    v9 = (__int64 *)MiSectionControlArea(a2);
    v10 = *v9;
    BYTE8(v20) = 3;
    v11 = *(_BYTE *)(v10 + 15);
    DWORD2(v21) = 0;
    DWORD2(v22) = 0;
    *(_QWORD *)&v22 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)&v21 = *(_QWORD *)(a1 + 48);
    DWORD2(v20) = DWORD2(v20) & 0xFFF80FFF | ((v11 & 0xF1 | ((v11 & 0xE) << 7) | 1) << 8);
    v12 = MiReferenceControlAreaFile((__int64)v9);
    PsCallImageNotifyRoutines(a3, 0LL, (__int64)&v20, v12);
    MiDereferenceControlAreaFile((__int64)v9, v12);
    if ( MiCacheImageSymbols(*(_QWORD *)(a1 + 48)) )
    {
      DestinationString = 0LL;
      Pool = (wchar_t *)MiAllocatePool(256, 0x100uLL, 0x6E4C6D4Du);
      if ( Pool )
      {
        if ( *(_WORD *)a4 <= 0x16u || wcsnicmp(*(const wchar_t **)(a4 + 8), L"\\SystemRoot", 0xBuLL) )
        {
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%wZ", a5);
        }
        else
        {
          v14 = *(__m128i *)a4;
          *(_QWORD *)&DestinationString.Length = *(_QWORD *)a4;
          DestinationString.Buffer = (wchar_t *)(_mm_srli_si128(v14, 8).m128i_u64[0] + 22);
          DestinationString.Length -= 22;
          NtSystemRoot = RtlGetNtSystemRoot();
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%ws%wZ", NtSystemRoot + 4, &DestinationString);
        }
        if ( v16 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, Pool);
          if ( (unsigned int)DbgLoadImageSymbolsUnicode(&DestinationString, *(_QWORD *)(a1 + 48)) == 1 )
            *(_DWORD *)(a1 + 104) |= 0x100000u;
        }
        ExFreePoolWithTag(Pool, 0);
      }
    }
  }
  if ( !*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) || (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    MiProtectSystemImage(a1);
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
    MiSessionUpdateImageCharges(a1, v17);
  return VfDriverLoadSucceeded(a1);
}
