/*
 * XREFs of PopUmpoInitializeChannel @ 0x140A6C34C
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExRegisterCallback @ 0x14037BFC0 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x1403F3290 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1403F34D0 (ZwAlpcSetInformation.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ExCreateCallback @ 0x1406E71C0 (ExCreateCallback.c)
 *     RtlAddAccessAllowedAce @ 0x14070D860 (RtlAddAccessAllowedAce.c)
 *     PopUmpoProcessMessages @ 0x14070EB24 (PopUmpoProcessMessages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 PopUmpoInitializeChannel()
{
  int v0; // ecx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  NTSTATUS Acl; // ebx
  PCALLBACK_OBJECT v5; // rsi
  PCALLBACK_OBJECT ObjectAttributes[7]; // [rsp+28h] [rbp-89h] BYREF
  __int128 PortInformation; // [rsp+60h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-11h]
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+A8h] [rbp-9h] BYREF

  memset(&PortAttributes, 0, sizeof(PortAttributes));
  PopAlpcServerPort = 0LL;
  PopAlpcClientPort = 0LL;
  PopUmpoPushLock = 0LL;
  memset(ObjectAttributes, 0, sizeof(ObjectAttributes));
  v11 = 0LL;
  PopUmpoAlpcClientConnected = 0;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v0 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  PortInformation = 0LL;
  v1 = 4 * v0 + 28;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x6F706D55u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v3, 2u, 0x10000000u, SeLocalSystemSid);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\PowerPort");
            ObjectAttributes[2] = 0LL;
            ObjectAttributes[6] = 0LL;
            ObjectAttributes[3] = (PCALLBACK_OBJECT)&DestinationString;
            PortAttributes.MaxMessageLength = 4096LL;
            ObjectAttributes[5] = (PCALLBACK_OBJECT)SecurityDescriptor;
            PortAttributes.Flags = 0x100000;
            LODWORD(ObjectAttributes[1]) = 48;
            LODWORD(ObjectAttributes[4]) = 512;
            Acl = ZwAlpcCreatePort(&PopAlpcServerPort, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], &PortAttributes);
            if ( Acl >= 0 )
            {
              ObjectAttributes[2] = 0LL;
              ObjectAttributes[3] = 0LL;
              LODWORD(ObjectAttributes[1]) = 48;
              LODWORD(ObjectAttributes[4]) = 512;
              *(_OWORD *)&ObjectAttributes[5] = 0LL;
              Acl = ExCreateCallback(ObjectAttributes, (POBJECT_ATTRIBUTES)&ObjectAttributes[1], 1u, 0);
              if ( Acl >= 0 )
              {
                v5 = ObjectAttributes[0];
                if ( ExRegisterCallback(ObjectAttributes[0], (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  PortInformation = (unsigned __int64)v5;
                  Acl = ZwAlpcSetInformation(
                          PopAlpcServerPort,
                          AlpcRegisterCallbackInformation,
                          &PortInformation,
                          0x10u);
                  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
                  if ( Acl >= 0 )
                  {
                    PopUmpoProcessMessages();
                    Acl = 0;
                  }
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
