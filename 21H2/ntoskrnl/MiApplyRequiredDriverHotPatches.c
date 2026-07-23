/*
 * XREFs of MiApplyRequiredDriverHotPatches @ 0x14075CA08
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x14075DC68 (MiFindHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
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
