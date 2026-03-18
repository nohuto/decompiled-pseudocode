/*
 * XREFs of UsbhGetMsOsContainerID @ 0x1C0032B54
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039198 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C0033138 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhException @ 0x1C004A608 (UsbhException.c)
 */

__int64 __fastcall UsbhGetMsOsContainerID(int a1, __int64 a2)
{
  char *v3; // rbx
  int v4; // ebp
  _DWORD *v5; // rsi
  char *PoolWithTag; // rax
  int v7; // r8d
  unsigned int MsOsFeatureDescriptor; // edi
  int v9; // r8d
  const WCHAR *v10; // rdx
  const WCHAR *v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v15; // [rsp+48h] [rbp-30h]
  int ValueData; // [rsp+90h] [rbp+18h] BYREF

  ValueData = 0;
  v3 = 0LL;
  v4 = a2;
  v5 = PdoExt(a2);
  if ( (v5[358] & 0x8400) != 0x400 )
    goto LABEL_20;
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *(_OWORD *)PoolWithTag = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v7, 6, (__int64)PoolWithTag, 8, (__int64)&ValueData);
  if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( *((_QWORD *)v5 + 142) )
    {
      v10 = (const WCHAR *)*((_QWORD *)v5 + 143);
      ValueData = 1;
      RtlWriteRegistryValue(0, v10, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
      v5[358] |= 0x8000u;
    }
    goto LABEL_21;
  }
  if ( !ValueData )
    goto LABEL_20;
  if ( ValueData != 8 || *((_DWORD *)v3 + 1) != 393472 || *(_DWORD *)v3 != 24 )
  {
    LOBYTE(v15) = 0;
    UsbhException(a1, *((unsigned __int16 *)v5 + 714), 135, (int)v3, 24, 0, 0, usbfile_msos_c, 808, v15);
    goto LABEL_25;
  }
  MsOsFeatureDescriptor = UsbhGetMsOsFeatureDescriptor(v4, 0, v9, 6, (__int64)v3, 24, (__int64)&ValueData);
  if ( (MsOsFeatureDescriptor & 0xC0000000) == 0xC0000000 )
  {
    if ( *((_QWORD *)v5 + 142) )
    {
      v11 = (const WCHAR *)*((_QWORD *)v5 + 143);
      ValueData = 1;
      RtlWriteRegistryValue(0, v11, L"SkipContainerIdQuery", 3u, &ValueData, 4u);
      v5[358] |= 0x8000u;
      LOBYTE(v15) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v5 + 714),
        135,
        (int)v3,
        24,
        MsOsFeatureDescriptor,
        0,
        usbfile_msos_c,
        837,
        v15);
    }
    goto LABEL_21;
  }
  if ( ValueData == 24 )
  {
    v12 = *((_QWORD *)v3 + 1) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v12 )
      v12 = *((_QWORD *)v3 + 2) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      LOBYTE(v15) = 0;
      UsbhException(a1, *((unsigned __int16 *)v5 + 714), 135, (int)v3, 24, 0, 0, usbfile_msos_c, 854, v15);
      goto LABEL_25;
    }
    v13 = *(_OWORD *)(v3 + 8);
    *((_BYTE *)v5 + 2732) = 1;
    *(_OWORD *)(v5 + 679) = v13;
LABEL_20:
    MsOsFeatureDescriptor = 0;
    goto LABEL_21;
  }
  LOBYTE(v15) = 0;
  UsbhException(a1, *((unsigned __int16 *)v5 + 714), 135, (int)v3, 24, 0, 0, usbfile_msos_c, 844, v15);
LABEL_25:
  MsOsFeatureDescriptor = -1073741637;
LABEL_21:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return MsOsFeatureDescriptor;
}
