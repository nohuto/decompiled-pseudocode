/*
 * XREFs of ??0LegacyInputSinkData@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@Z @ 0x180004B58
 * Callers:
 *     ?UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x180015300 (-UpdateHierarchyFromInputSinkTreeCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 */

__int64 __fastcall LegacyInputSinkData::LegacyInputSinkData(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  *a2 = 0LL;
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 25) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 36) = 0;
  memset_0((void *)(a1 + 40), 0, 0x40uLL);
  *(_BYTE *)(a1 + 96) = 0;
  memset_0((void *)(a1 + 104), 0, 0x40uLL);
  *(_BYTE *)(a1 + 160) = 0;
  memset_0((void *)(a1 + 168), 0, 0x40uLL);
  *(_BYTE *)(a1 + 224) = 0;
  memset_0((void *)(a1 + 232), 0, 0x40uLL);
  *(_BYTE *)(a1 + 288) = 0;
  memset_0((void *)(a1 + 296), 0, 0x40uLL);
  result = a1;
  *(_BYTE *)(a1 + 352) = 0;
  return result;
}
