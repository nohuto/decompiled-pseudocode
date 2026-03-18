/*
 * XREFs of PopUmpoInitializeChannel @ 0x140A72EFC
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExRegisterCallback @ 0x14037E960 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwAlpcCreatePort @ 0x1403F90D0 (ZwAlpcCreatePort.c)
 *     ZwAlpcSetInformation @ 0x1403F9310 (ZwAlpcSetInformation.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1406320E0 (RtlCreateSecurityDescriptor.c)
 *     ExCreateCallback @ 0x1406DD3F0 (ExCreateCallback.c)
 *     PopUmpoProcessMessages @ 0x1406FA228 (PopUmpoProcessMessages.c)
 *     RtlAddAccessAllowedAce @ 0x1406FBF80 (RtlAddAccessAllowedAce.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 PopUmpoInitializeChannel()
{
  int v0; // ecx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  int Acl; // ebx
  PCALLBACK_OBJECT v5; // rsi
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-81h] BYREF
  __int128 v9; // [rsp+60h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v12; // [rsp+A0h] [rbp-11h]
  _QWORD v13[9]; // [rsp+A8h] [rbp-9h] BYREF

  memset(&CallbackObject_8, 0, sizeof(CallbackObject_8));
  memset(v13, 0, sizeof(v13));
  PopAlpcServerPort = 0LL;
  PopAlpcClientPort = 0LL;
  PopUmpoPushLock = 0LL;
  CallbackObject = 0LL;
  v12 = 0LL;
  PopUmpoAlpcClientConnected = 0;
  DestinationString = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v0 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  v9 = 0LL;
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
            CallbackObject_8.RootDirectory = 0LL;
            CallbackObject_8.ObjectName = &DestinationString;
            v13[2] = 4096LL;
            *(_OWORD *)&CallbackObject_8.SecurityDescriptor = (unsigned __int64)SecurityDescriptor;
            LODWORD(v13[0]) = 0x100000;
            CallbackObject_8.Length = 48;
            CallbackObject_8.Attributes = 512;
            Acl = ZwAlpcCreatePort((__int64)&PopAlpcServerPort, (__int64)&CallbackObject_8);
            if ( Acl >= 0 )
            {
              CallbackObject_8.RootDirectory = 0LL;
              CallbackObject_8.ObjectName = 0LL;
              CallbackObject_8.Length = 48;
              CallbackObject_8.Attributes = 512;
              *(_OWORD *)&CallbackObject_8.SecurityDescriptor = 0LL;
              Acl = ExCreateCallback(&CallbackObject, &CallbackObject_8, 1u, 0);
              if ( Acl >= 0 )
              {
                v5 = CallbackObject;
                if ( ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)PopUmpoMessageCallback, 0LL) )
                {
                  v9 = (unsigned __int64)v5;
                  Acl = ZwAlpcSetInformation(PopAlpcServerPort, 9LL);
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
