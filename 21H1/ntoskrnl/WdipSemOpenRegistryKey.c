/*
 * XREFs of WdipSemOpenRegistryKey @ 0x140785F18
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140784D94 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140784DEC (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140784F98 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14078529C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14078551C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140785928 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14092BA00 (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
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
