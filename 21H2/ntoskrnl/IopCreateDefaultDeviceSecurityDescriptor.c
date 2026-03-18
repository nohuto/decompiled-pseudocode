/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x14074F220
 * Callers:
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406BCE90 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 * Callees:
 *     RtlGetNtProductType @ 0x140245CC0 (RtlGetNtProductType.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14074F2EC (IopCreateSecurityDescriptorPerType.c)
 *     RtlpAddKnownAce @ 0x1407B4900 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        char a2,
        char a3,
        void *a4,
        ACL **a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  ACL **v10; // r12
  int SecurityDescriptorPerType; // eax
  USHORT AclSize; // r15
  unsigned __int8 *v14; // rax
  ACL *Pool2; // rax
  ACL *v16; // rsi
  bool v17; // zf
  int v18; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v18) = a3;
  v7 = a7;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 < 0x14 && (a1 == 2 || a1 == 7 && (a2 & 1) != 0) )
  {
    v18 = 0;
    AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
    if ( !RtlGetNtProductType(&v18) )
      return 0LL;
    if ( v18 == 1 )
    {
      v14 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
      {
LABEL_19:
        Pool2 = (ACL *)ExAllocatePool2(256LL, AclSize, 1699966793LL);
        v16 = Pool2;
        if ( !Pool2 )
          return 0LL;
        memmove(Pool2, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
        v17 = v18 == 1;
        v16->AclSize = AclSize;
        if ( v17 )
        {
          RtlpAddKnownAce((int)v16, 2, 0, -1073676288, (void *)SeInteractiveSid, 0);
        }
        else if ( a1 == 2 )
        {
          RtlpAddKnownAce((int)v16, 2, 0, 0x80000000, SeWorldSid, 0);
        }
        RtlCreateSecurityDescriptor(a4, 1u);
        RtlSetDaclSecurityDescriptor(a4, 1u, v16, 0);
        if ( v7 )
          *v7 |= 4u;
        *v10 = v16;
        SecurityDescriptorPerType = 0;
        goto LABEL_7;
      }
      v14 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v14[1] + 4);
    goto LABEL_19;
  }
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4);
LABEL_7:
  if ( SecurityDescriptorPerType >= 0 )
    return a4;
  return 0LL;
}
