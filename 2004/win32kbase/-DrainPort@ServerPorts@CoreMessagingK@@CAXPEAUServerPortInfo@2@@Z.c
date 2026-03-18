/*
 * XREFs of ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0048AB0
 * Callers:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C0047D48 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C0048630 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C004884C (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0048D08 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C0048DEC (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01FACA4 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::ServerPorts::DrainPort(struct CoreMessagingK::ServerPortInfo *a1)
{
  int v2; // eax
  int v3; // eax
  struct CoreMessagingK::ClientPortInfo **v4; // rax
  __int64 MessageAttribute; // rax
  _PORT_MESSAGE *v6; // [rsp+28h] [rbp-E0h]
  _QWORD v7[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v8[48]; // [rsp+58h] [rbp-B0h] BYREF
  _PORT_MESSAGE v9; // [rsp+88h] [rbp-80h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7[1] = 512LL;
        v7[0] = 40LL;
        v2 = AlpcInitializeMessageAttribute(0x20000000LL, v8, 40LL, v7, v6);
        if ( v2 < 0 )
          CoreMessagingK::Runtime::BugCheck(1537LL, v2, 0LL);
        v6 = &v9;
        v3 = ZwAlpcSendWaitReceivePort(*((_QWORD *)a1 + 1), 0LL, 0LL, 0LL);
        if ( v3 != -1073741789 )
          break;
LABEL_15:
        MessageAttribute = AlpcGetMessageAttribute(v8, 0x20000000LL);
        ZwAlpcCancelMessage(*((_QWORD *)a1 + 1), 0LL, MessageAttribute);
      }
      if ( v3 != -1073741769 )
      {
        if ( v3 <= -1073740033 )
          goto LABEL_16;
        if ( v3 > -1073740031 )
          break;
      }
    }
    if ( v3 )
      break;
    if ( LOBYTE(v9.u2.ZeroInit) < 5u )
    {
LABEL_14:
      if ( (v9.u2.s2.Type & 0x2000) != 0 )
        goto LABEL_15;
    }
    else if ( LOBYTE(v9.u2.ZeroInit) <= 6u )
    {
      v4 = (struct CoreMessagingK::ClientPortInfo **)AlpcGetMessageAttribute(v8, 0x20000000LL);
      CoreMessagingK::ServerPorts::HandleClientDisconnect(a1, *v4);
    }
    else
    {
      if ( LOBYTE(v9.u2.ZeroInit) != 10 )
        goto LABEL_14;
      CoreMessagingK::ServerPorts::HandleConnectionRequest(a1, &v9);
    }
  }
  if ( v3 != 258 )
LABEL_16:
    CoreMessagingK::Runtime::BugCheck(1538LL, v3, 0LL);
}
