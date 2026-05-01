/*
 * XREFs of CrmRpcSrvRegister @ 0x180004E00
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvRegister @ 0x180004E94 (CrmSrvRegister.c)
 *     CempRpcQueryClientInformation @ 0x180008820 (CempRpcQueryClientInformation.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvRegister(void *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int ClientInformation; // eax
  int v8; // ebx
  int v10; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+90h] [rbp-78h] BYREF
  UUID *v13; // [rsp+B0h] [rbp-58h]
  __int64 v14; // [rsp+B8h] [rbp-50h]
  int *v15; // [rsp+C0h] [rbp-48h]
  __int64 v16; // [rsp+C8h] [rbp-40h]

  ClientInformation = CempRpcQueryClientInformation(a1, DestinationSid, 0LL, 0LL, 0LL);
  v8 = ClientInformation;
  if ( ClientInformation < 0 )
  {
    if ( (unsigned int)dword_1800B3250 > 5 )
    {
      v10 = ClientInformation;
      v14 = 16LL;
      v16 = 4LL;
      v15 = &v10;
      v13 = &Uuid;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3250, (int)&dword_1800A37BE, 0, 0, 4u, &v12);
    }
  }
  else
  {
    v8 = CrmSrvRegister(a2, a3, a4, DestinationSid);
    if ( v8 >= 0 )
      return 0;
  }
  return (unsigned int)v8;
}
