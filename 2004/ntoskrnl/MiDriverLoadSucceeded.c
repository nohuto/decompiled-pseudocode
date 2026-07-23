/*
 * XREFs of MiDriverLoadSucceeded @ 0x140746B84
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiDereferenceControlAreaFile @ 0x1402293FC (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     RtlStringCbPrintfW @ 0x14027DBC4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     DbgLoadImageSymbolsUnicode @ 0x14036F964 (DbgLoadImageSymbolsUnicode.c)
 *     MiSessionUpdateImageCharges @ 0x14039BE70 (MiSessionUpdateImageCharges.c)
 *     _wcsnicmp @ 0x1403CEC10 (_wcsnicmp.c)
 *     PsCallImageNotifyRoutines @ 0x140602BC0 (PsCallImageNotifyRoutines.c)
 *     RtlGetNtSystemRoot @ 0x14070A160 (RtlGetNtSystemRoot.c)
 *     MiCacheImageSymbols @ 0x140748120 (MiCacheImageSymbols.c)
 *     MiProtectSystemImage @ 0x14078945C (MiProtectSystemImage.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDriverLoadSucceeded(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // dl
  ULONG_PTR v12; // rbx
  wchar_t *Pool; // rbx
  __m128i v14; // xmm0
  PWSTR NtSystemRoot; // rax
  NTSTATUS v16; // eax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a6 == 1 )
  {
    *(_DWORD *)(a1 + 104) |= 0x41004000u;
    v9 = (__int64 *)MiSectionControlArea(a2);
    v10 = *v9;
    BYTE8(v19) = 3;
    v11 = *(_BYTE *)(v10 + 15);
    DWORD2(v20) = 0;
    DWORD2(v21) = 0;
    *(_QWORD *)&v21 = *(unsigned int *)(a1 + 64);
    *(_QWORD *)&v20 = *(_QWORD *)(a1 + 48);
    DWORD2(v19) = DWORD2(v19) & 0xFFF80FFF | ((v11 & 0xF1 | ((v11 & 0xE) << 7) | 1) << 8);
    v12 = MiReferenceControlAreaFile((__int64)v9);
    PsCallImageNotifyRoutines(a3, 0LL, (__int64)&v19, v12);
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
          v16 = RtlStringCbPrintfW(Pool, 0x100uLL, L"%ws%wZ", NtSystemRoot + 2, &DestinationString);
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
  result = MiGetSystemRegionType(*(_QWORD *)(a1 + 48));
  if ( (_DWORD)result == 1 )
    return MiSessionUpdateImageCharges(a1);
  return result;
}
