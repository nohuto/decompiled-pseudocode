/*
 * XREFs of ?MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x181012
 * Callers:
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 *     ?MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z @ 0x180E40 (-MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMPopulateProcessSQMInfo(_DWORD *a1, int a2)
{
  const char *ProcessImageFileName; // eax
  struct _STRING DestinationString; // [esp+Ch] [ebp-10h] BYREF
  struct _UNICODE_STRING Destination; // [esp+14h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(*a1);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  Destination.Length = 0;
  Destination.MaximumLength = 32;
  Destination.Buffer = (PWSTR)a2;
  if ( RtlAnsiStringToUnicodeString(&Destination, &DestinationString, 0) < 0 )
  {
    RtlCopyUnicodeString(&Destination, 0);
    RtlAppendUnicodeToString(&Destination, L"Unknown");
  }
  *(_DWORD *)(a2 + 32) = a1[124];
  *(_DWORD *)(a2 + 36) = a1[125];
  *(_DWORD *)(a2 + 40) = a1[2] >> 31;
}
