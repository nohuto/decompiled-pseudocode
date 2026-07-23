/*
 * XREFs of IopQuerySecureDeviceClassState @ 0x14073FD5C
 * Callers:
 *     IopCreateSecureDeviceClassSettings @ 0x140739B10 (IopCreateSecureDeviceClassSettings.c)
 * Callees:
 *     SeCaptureSecurityDescriptor @ 0x140650980 (SeCaptureSecurityDescriptor.c)
 *     IopGetSecurityDescriptorInformation @ 0x14073C88C (IopGetSecurityDescriptorInformation.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQuerySecureDeviceClassState(HANDLE KeyHandle, __int64 a2)
{
  PVOID v4; // r14
  int RegistryValue; // eax
  PVOID v6; // rbx
  int SecurityDescriptorInformation; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v12; // rcx
  char *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  char *v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  char *v19; // rcx
  __int64 v20; // rax
  int v21; // edx
  PVOID SecurityDescriptor[2]; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v23; // [rsp+88h] [rbp+48h] BYREF
  int v24; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h]

  v23 = 0;
  *(_OWORD *)a2 = 0LL;
  v24 = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  SecurityDescriptor[0] = 0LL;
  P = 0LL;
  v4 = 0LL;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  v6 = P;
  SecurityDescriptorInformation = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_23;
    SecurityDescriptorInformation = 0;
    goto LABEL_8;
  }
  if ( *((_DWORD *)P + 1) == 3 )
  {
    SecurityDescriptorInformation = SeCaptureSecurityDescriptor(
                                      (__int64)P + *((unsigned int *)P + 2),
                                      0,
                                      PagedPool,
                                      1,
                                      SecurityDescriptor);
    if ( SecurityDescriptorInformation < 0 )
    {
      v4 = SecurityDescriptor[0];
      goto LABEL_21;
    }
    ExFreePoolWithTag(v6, 0);
    v4 = SecurityDescriptor[0];
    v6 = 0LL;
    P = 0LL;
    if ( SecurityDescriptor[0] )
    {
      SecurityDescriptorInformation = IopGetSecurityDescriptorInformation(SecurityDescriptor[0], &v23, &v24);
      if ( SecurityDescriptorInformation < 0 )
        goto LABEL_21;
      if ( !v23 )
      {
        *(_DWORD *)a2 |= 2u;
        *(_QWORD *)(a2 + 8) = v4;
        v4 = 0LL;
      }
    }
LABEL_8:
    if ( (*(_DWORD *)a2 & 1) == 0 )
    {
      v8 = IopGetRegistryValue(KeyHandle);
      SecurityDescriptorInformation = v8;
      if ( v8 >= 0 )
      {
        v13 = (char *)P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        {
          v14 = *((unsigned int *)P + 2);
          *(_DWORD *)a2 |= 1u;
          v15 = *(_DWORD *)&v13[v14];
        }
        else
        {
          v15 = 0;
        }
        *(_DWORD *)(a2 + 4) = v15;
        ExFreePoolWithTag(v13, 0);
        v6 = 0LL;
        P = 0LL;
      }
      else
      {
        if ( v8 != -1073741772 )
          goto LABEL_20;
        v6 = P;
      }
    }
    if ( (*(_DWORD *)a2 & 4) != 0 )
    {
LABEL_16:
      if ( (*(_DWORD *)a2 & 8) != 0 )
        goto LABEL_21;
      v10 = IopGetRegistryValue(KeyHandle);
      SecurityDescriptorInformation = v10;
      if ( v10 < 0 )
      {
        if ( v10 == -1073741772 )
          SecurityDescriptorInformation = 0;
        goto LABEL_20;
      }
      v19 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v20 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 8u;
        v21 = *(_DWORD *)&v19[v20];
      }
      else
      {
        v21 = 0;
      }
      *(_DWORD *)(a2 + 20) = v21;
      ExFreePoolWithTag(v19, 0);
      v6 = 0LL;
LABEL_21:
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
LABEL_23:
      if ( SecurityDescriptorInformation >= 0 )
        goto LABEL_24;
      goto LABEL_28;
    }
    v9 = IopGetRegistryValue(KeyHandle);
    SecurityDescriptorInformation = v9;
    if ( v9 >= 0 )
    {
      v16 = (char *)P;
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      {
        v17 = *((unsigned int *)P + 2);
        *(_DWORD *)a2 |= 4u;
        v18 = *(_DWORD *)&v16[v17];
      }
      else
      {
        v18 = 0;
      }
      *(_DWORD *)(a2 + 16) = v18;
      ExFreePoolWithTag(v16, 0);
      v6 = 0LL;
      P = 0LL;
      goto LABEL_16;
    }
    if ( v9 == -1073741772 )
    {
      v6 = P;
      goto LABEL_16;
    }
LABEL_20:
    v6 = P;
    goto LABEL_21;
  }
  SecurityDescriptorInformation = -1073741492;
LABEL_28:
  v12 = *(void **)(a2 + 8);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
LABEL_24:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)SecurityDescriptorInformation;
}
