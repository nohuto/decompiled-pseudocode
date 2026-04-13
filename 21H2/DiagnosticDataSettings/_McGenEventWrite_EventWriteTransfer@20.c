/*
 * XREFs of _McGenEventWrite_EventWriteTransfer@20 @ 0x100033C0
 * Callers:
 *     _McTemplateU0zzzzztzzzzdz_EventWriteTransfer@56 @ 0x1000340F (_McTemplateU0zzzzztzzzzdz_EventWriteTransfer@56.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        int a1,
        const EVENT_DESCRIPTOR *a2,
        int a3,
        int a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // esi
  int v7; // edx
  ULONG v8; // esi

  v5 = (unsigned __int16 *)dword_10005028;
  HIDWORD(UserData->Ptr) = 0;
  if ( v5 )
  {
    LODWORD(UserData->Ptr) = v5;
    v8 = *v5;
    v7 = 2;
  }
  else
  {
    LODWORD(UserData->Ptr) = 0;
    v7 = 0;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v7;
  return EventWriteTransfer(
           MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context,
           a2,
           0,
           0,
           0xDu,
           UserData);
}
