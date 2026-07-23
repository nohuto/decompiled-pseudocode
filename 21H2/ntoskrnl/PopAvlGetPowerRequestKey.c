/*
 * XREFs of PopAvlGetPowerRequestKey @ 0x1406706C4
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406705BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     PsGetCurrentProcess @ 0x140346350 (PsGetCurrentProcess.c)
 *     Feature_3401902395__private_IsEnabledDeviceUsage @ 0x1403F7E54 (Feature_3401902395__private_IsEnabledDeviceUsage.c)
 *     PopAnsiStringToUnicodeString @ 0x140670B70 (PopAnsiStringToUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x140671F50 (PopUnicodeStringDeepCopy.c)
 */

__int64 __fastcall PopAvlGetPowerRequestKey(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rdx
  UNICODE_STRING *p_SourceString; // rdx
  const WCHAR *v8; // rdx
  const CHAR *p_ActiveProcessors; // rdx
  __int64 v10; // rdx
  STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  DestinationString = 0LL;
  v4 = *(_DWORD *)v2 == 0;
  SourceString = 0LL;
  if ( !v4 )
  {
    if ( (unsigned int)Feature_3401902395__private_IsEnabledDeviceUsage() )
    {
      p_ActiveProcessors = (const CHAR *)&PsGetCurrentProcess()[1].ActiveProcessors;
    }
    else
    {
      v10 = *(_QWORD *)(v2 + 8);
      if ( !v10 )
      {
        v8 = UNIDENTIFIED_PROCESS;
        goto LABEL_12;
      }
      p_ActiveProcessors = (const CHAR *)(v10 + 1448);
    }
    RtlInitAnsiString(&DestinationString, p_ActiveProcessors);
    return PopAnsiStringToUnicodeString(a2, &DestinationString);
  }
  v5 = *(_QWORD *)(v2 + 8);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v8 = UNIDENTIFIED_DRIVER;
LABEL_12:
    RtlInitUnicodeString(&SourceString, v8);
    p_SourceString = &SourceString;
    return PopUnicodeStringDeepCopy(a2, p_SourceString, PagedPool, 0x54515750u);
  }
  p_SourceString = (UNICODE_STRING *)(v6 + 56);
  return PopUnicodeStringDeepCopy(a2, p_SourceString, PagedPool, 0x54515750u);
}
