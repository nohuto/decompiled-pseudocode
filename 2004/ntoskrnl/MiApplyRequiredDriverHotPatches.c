/*
 * XREFs of MiApplyRequiredDriverHotPatches @ 0x140746D88
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x140748014 (MiFindHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x1408C75D0 (MiLoadHotPatch.c)
 */

__int64 __fastcall MiApplyRequiredDriverHotPatches(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  result = MiFindHotPatchRecord(
             (int)&MiGlobalHotPatchList,
             0,
             *(_DWORD *)(a1 + 120),
             *(_DWORD *)(a1 + 156),
             &DestinationString,
             0LL);
  if ( (int)result >= 0 )
  {
    v3 = MiLoadHotPatch(&DestinationString);
    RtlFreeAnsiString(&DestinationString);
    return v3;
  }
  else if ( (_DWORD)result == -1073741275 )
  {
    return 0LL;
  }
  return result;
}
