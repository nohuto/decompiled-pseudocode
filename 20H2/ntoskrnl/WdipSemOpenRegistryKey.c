/*
 * XREFs of WdipSemOpenRegistryKey @ 0x1407AAC20
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x1407A9A9C (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1407A9AF4 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x1407A9CA0 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407A9FA4 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1407AA224 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407AA630 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x140932AE0 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&v6, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
