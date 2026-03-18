/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x14064F06C
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14064DA1C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlGetPowerRequestKey @ 0x14064DB14 (PopAvlGetPowerRequestKey.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075FD50 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140203570 (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  PVOID *p_Buffer; // rbx
  unsigned int v3; // esi
  PVOID PoolWithTag; // rbp
  NTSTATUS result; // eax

  p_Buffer = (PVOID *)&DestinationString->Buffer;
  v3 = SourceString->Length + 2;
  if ( v3 > 0xFFFF )
  {
    if ( *p_Buffer )
      goto LABEL_7;
    v3 = 0xFFFF;
  }
  if ( !*p_Buffer || DestinationString->MaximumLength < v3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x54515750u);
    if ( PoolWithTag )
    {
      if ( *p_Buffer )
        ExFreePoolWithTag(*p_Buffer, 0);
      *p_Buffer = PoolWithTag;
      DestinationString->Length = 0;
      DestinationString->MaximumLength = v3;
    }
  }
LABEL_7:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    *((_WORD *)*p_Buffer + ((unsigned __int64)DestinationString->Length >> 1)) = 0;
  return result;
}
