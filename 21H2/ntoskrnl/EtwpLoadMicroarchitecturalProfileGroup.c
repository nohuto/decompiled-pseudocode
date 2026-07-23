/*
 * XREFs of EtwpLoadMicroarchitecturalProfileGroup @ 0x14093A75C
 * Callers:
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407D29BC (EtwpLoadMicroarchitecturalPmcs.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14093A578 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x14093A634 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14093AA40 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     KiGetCpuVendor @ 0x14099CF68 (KiGetCpuVendor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpLoadMicroarchitecturalProfileGroup(WCHAR *KeyHandle, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int CpuVendor; // edi
  __int64 v7; // rbx
  __int64 **v8; // rdx
  __int64 *v9; // r8
  _BYTE *v10; // rcx
  __int64 *v11; // r9
  char *v12; // r10
  __int64 v13; // r11
  __int64 v14; // rax
  SIZE_T v15; // rsi
  WCHAR *PoolWithTag; // rbx
  int v17; // edi
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v24[88]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD KeyInformation[136]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v26; // [rsp+350h] [rbp+250h] BYREF
  int v27; // [rsp+358h] [rbp+258h]
  _QWORD v28[4]; // [rsp+360h] [rbp+260h] BYREF
  char v29; // [rsp+380h] [rbp+280h] BYREF
  char v30; // [rsp+388h] [rbp+288h] BYREF
  _BYTE v31[224]; // [rsp+3C0h] [rbp+2C0h] BYREF

  v19 = 0;
  memset(KeyInformation, 0, 0x218uLL);
  v28[0] = L"Family";
  v28[1] = L"Model";
  v28[2] = L"Stepping";
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  memset(v24, 0, 0xA8uLL);
  KeyHandlea = 0LL;
  ResultLength = 0;
  CpuVendor = KiGetCpuVendor(v5, v4);
  EtwpGetPmcCpuHierarchyRegistry(KeyHandle, &v19, (__int64)&v26);
  memset(v31, 0, sizeof(v31));
  v7 = -1LL;
  v8 = (__int64 **)&v30;
  v26 = -1LL;
  v9 = v28;
  v27 = -1;
  v10 = &v31[24];
  v11 = &v26;
  v12 = &v29;
  v13 = 3LL;
  do
  {
    *(_QWORD *)v10 = v12;
    *((_QWORD *)v10 - 3) = EtwpQueryRegistryCallback;
    v12 += 16;
    v14 = *v9++;
    *v8 = v11;
    v11 = (__int64 *)((char *)v11 + 4);
    *((_QWORD *)v10 - 1) = v14;
    *((_DWORD *)v10 + 2) = 4;
    v10 += 56;
    *((_DWORD *)v8 - 2) = 4;
    v8 += 2;
    --v13;
  }
  while ( v13 );
  if ( (int)RtlpQueryRegistryValues(0x40000000LL, KeyHandle, (__int64)v31, 0LL) >= 0 && v19 == CpuVendor )
  {
    EtwpGetMicroarchitecturalPmcAffinity((__int64)&v26, v24);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v24) )
    {
      do
        ++v7;
      while ( *(_WORD *)(a2 + 2 * v7) );
      v15 = (unsigned int)(2 * v7 + 512);
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v15, 0x50777445u);
      v17 = -1;
      while ( ZwEnumerateKey(KeyHandle, ++v17, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength) >= 0 )
      {
        v18 = KeyInformation[3] >> 1;
        if ( (unsigned int)v18 <= 0xFE )
        {
          *((_WORD *)&KeyInformation[4] + v18) = 0;
          if ( RtlStringCbPrintfW(PoolWithTag, v15, L"%ws\\%ws", a2, &KeyInformation[4]) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, PoolWithTag);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileSource(KeyHandlea, v24, &KeyInformation[4]);
              ZwClose(&KeyHandlea);
            }
          }
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x50777445u);
    }
  }
}
