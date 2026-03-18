/*
 * XREFs of _McGenEventWrite_EtwWriteTransfer@20 @ 0x1564D4
 * Callers:
 *     _McTemplateK0qqzz_EtwWriteTransfer@28 @ 0x156523 (_McTemplateK0qqzz_EtwWriteTransfer@28.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall McGenEventWrite_EtwWriteTransfer(int a1, int a2, PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG v3; // ecx
  ULONG v4; // edx

  v3 = dword_2664F8;
  HIDWORD(UserData->Ptr) = 0;
  if ( v3 )
  {
    LODWORD(UserData->Ptr) = v3;
    v3 = *(unsigned __int16 *)v3;
    v4 = 2;
  }
  else
  {
    LODWORD(UserData->Ptr) = 0;
    v4 = 0;
  }
  UserData->Size = v3;
  UserData->Reserved = v4;
  return EtwWriteTransfer(W32kControlGuid_Context, &WindowLayoutChange_Stop, &W32kControlGuid, 0, 5u, UserData);
}
