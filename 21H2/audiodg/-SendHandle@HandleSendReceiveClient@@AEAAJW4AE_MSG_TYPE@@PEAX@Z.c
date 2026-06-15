/*
 * XREFs of ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x1400516D4
 * Callers:
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140061340 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14006BF20 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?AeSendDuplicateHandle@HandleSendReceiveClient@@AEAAJPEAXPEAU_AE_API_MSG@@K0@Z @ 0x1400513F4 (-AeSendDuplicateHandle@HandleSendReceiveClient@@AEAAJPEAXPEAU_AE_API_MSG@@K0@Z.c)
 */

__int64 __fastcall HandleSendReceiveClient::SendHandle(HandleSendReceiveClient *a1, __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // ebx
  void *v5; // rdx
  NTSTATUS v6; // eax
  signed int LastError; // eax
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-18h]

  if ( (((unsigned __int64)a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v5 = (void *)*((_QWORD *)a1 + 1);
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[0]) = 3145736;
    v10 = 0LL;
    DWORD2(v10) = 1;
    v6 = HandleSendReceiveClient::AeSendDuplicateHandle(a1, v5, (struct _AE_API_MSG *)v9, a4, a3);
    v4 = 0;
    if ( v6 < 0 || (v6 = HIDWORD(v10), v10 < 0) )
    {
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v6);
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  else
  {
    return (unsigned int)-2147024890;
  }
  return v4;
}
