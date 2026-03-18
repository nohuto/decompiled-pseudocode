/*
 * XREFs of ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C00A94A4
 * Callers:
 *     CoreMsgCreatePort @ 0x1C00A9098 (CoreMsgCreatePort.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C00A96B0 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C00AA598 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 CoreMessagingK::RegistrarClient::Connect(void)
{
  unsigned __int16 v0; // cx
  NTSTATUS v1; // ebx
  unsigned __int64 v2; // rdx
  __int64 v4; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v5; // [rsp+70h] [rbp-98h] BYREF
  int v6; // [rsp+78h] [rbp-90h] BYREF
  const wchar_t *v7; // [rsp+80h] [rbp-88h]
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+A8h] [rbp-60h]
  _QWORD v10[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+D0h] [rbp-38h]
  _QWORD v12[4]; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v13; // [rsp+100h] [rbp-8h]
  _OWORD v14[3]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v15[10]; // [rsp+148h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v17; // [rsp+1B8h] [rbp+B0h]
  __int64 v18; // [rsp+1C0h] [rbp+B8h]
  _BYTE v19[32]; // [rsp+1C8h] [rbp+C0h] BYREF

  v6 = 5374032;
  v12[0] = 48LL;
  v12[3] = 512LL;
  P = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v7 = L"\\BaseNamedObjects\\CoreMessagingRegistrar";
  v10[0] = 48LL;
  v10[3] = 512LL;
  v13 = 0LL;
  v5 = 0LL;
  v11 = 0LL;
  v12[1] = 0LL;
  v12[2] = &v6;
  v10[1] = 0LL;
  v10[2] = 0LL;
  memset(v15, 0, 0x48uLL);
  v0 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize;
  LODWORD(v15[0]) = 1114112;
  if ( CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize > CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize )
    v0 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  HIDWORD(v15[0]) = 12;
  v15[2] = v0 + 80LL;
  LODWORD(v15[1]) = 1;
  WORD2(v15[1]) = 257;
  v1 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v1 >= 0 )
  {
    v1 = CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(SecurityDescriptor);
    if ( v1 >= 0 )
    {
      v5 = 48LL;
      memset(v14, 0, sizeof(v14));
      LODWORD(v14[0]) = 3145736;
      WORD2(v14[0]) = 0x8000;
      CoreMessagingK::RegistrarClient::InitializeMessageAttributes((struct _ALPC_MESSAGE_ATTRIBUTES *)v19, v2);
      v1 = ZwAlpcConnectPortEx(
             &CoreMessagingK::RegistrarClient::s_Port,
             v12,
             v10,
             v15,
             0x20000,
             SecurityDescriptor,
             v14,
             &v5,
             v19,
             0LL,
             0LL);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44534D43u);
  P = 0LL;
  if ( (unsigned int)dword_1C0243450 > 5 )
  {
    LODWORD(v4) = v1;
    v17 = &v4;
    v18 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0243450, (unsigned __int8 *)dword_1C021C13A, 0LL, 0LL, 3u, &v16);
  }
  return (unsigned int)v1;
}
