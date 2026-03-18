/*
 * XREFs of IoMmuMapStagingMdl @ 0x1C005622C
 * Callers:
 *     DpiMapIommuIdentityRangeInternal @ 0x1C0056A48 (DpiMapIommuIdentityRangeInternal.c)
 * Callees:
 *     IoMmuAllocatePageHistoryEntry @ 0x1C0056084 (IoMmuAllocatePageHistoryEntry.c)
 *     IoMmuMapStagingMdlInternal @ 0x1C0056290 (IoMmuMapStagingMdlInternal.c)
 */

__int64 __fastcall IoMmuMapStagingMdl(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 PageHistoryEntry; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v11 = 0;
  v10 = 0;
  v7[0] = a2 + 48;
  v8 = *(_DWORD *)(a2 + 40) >> 12;
  v7[1] = *(_QWORD *)(a1 + 48) + 48LL;
  v9 = *(_DWORD *)(a1 + 112);
  PageHistoryEntry = IoMmuAllocatePageHistoryEntry(a1 + 16, 1u, a3, a4);
  return IoMmuMapStagingMdlInternal(a1, v7, PageHistoryEntry);
}
