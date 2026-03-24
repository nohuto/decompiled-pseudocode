/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x14071B950
 * Callers:
 *     IoCreateDevice @ 0x14071B4E0 (IoCreateDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14073EA0C (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1402C2020 (RtlGetNtProductType.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14065C460 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140660500 (RtlSetDaclSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14071BA28 (IopCreateSecurityDescriptorPerType.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  bool v13; // zf
  USHORT AclSize; // r15
  unsigned __int8 *v15; // rax
  ACL *PoolWithTag; // rax
  ACL *v17; // rsi
  int v18; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v18) = a3;
  v7 = a7;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 > 0x14 )
  {
    switch ( a1 )
    {
      case '-':
        goto LABEL_18;
      case ' ':
        goto LABEL_9;
      case '$':
        goto LABEL_18;
    }
    v13 = a1 == 53;
    goto LABEL_16;
  }
  if ( a1 == 20 )
  {
LABEL_18:
    if ( a1 != 7 || (a2 & 1) == 0 )
      goto LABEL_9;
LABEL_23:
    v18 = 0;
    AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
    if ( !RtlGetNtProductType(&v18) )
      return 0LL;
    if ( v18 == 1 )
    {
      v15 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
      {
LABEL_29:
        PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AclSize, 0x65536F49u);
        v17 = PoolWithTag;
        if ( !PoolWithTag )
          return 0LL;
        memmove(PoolWithTag, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
        v13 = v18 == 1;
        v17->AclSize = AclSize;
        if ( v13 )
        {
          RtlpAddKnownAce((__int64)v17, 2u, 0, -1073676288, (unsigned __int8 *)SeInteractiveSid, 0);
        }
        else if ( a1 == 2 )
        {
          RtlpAddKnownAce((__int64)v17, 2u, 0, 0x80000000, (unsigned __int8 *)SeWorldSid, 0);
        }
        RtlCreateSecurityDescriptor(a4, 1u);
        RtlSetDaclSecurityDescriptor(a4, 1u, v17, 0);
        if ( v7 )
          *v7 |= 4u;
        *v10 = v17;
        SecurityDescriptorPerType = 0;
        goto LABEL_10;
      }
      v15 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v15[1] + 4);
    goto LABEL_29;
  }
  if ( a1 == 2 )
    goto LABEL_23;
  if ( a1 != 3 )
  {
    if ( a1 != 7 )
    {
      if ( a1 <= 9 )
        goto LABEL_9;
      v13 = a1 == 18;
LABEL_16:
      if ( !v13 )
        goto LABEL_9;
      goto LABEL_18;
    }
    goto LABEL_18;
  }
LABEL_9:
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4);
LABEL_10:
  if ( SecurityDescriptorPerType >= 0 )
    return a4;
  return 0LL;
}
