/*
 * XREFs of BcdGetElementDataWithFlags @ 0x140771DE0
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14076FEA0 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140770B14 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14077108C (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140921064 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14096BCE0 (BiGetDefaultBootEntryIdentifier.c)
 *     BcdGetElementData @ 0x14096BF40 (BcdGetElementData.c)
 *     BiGetElement @ 0x14096C058 (BiGetElement.c)
 *     BiBuildIdentifierList @ 0x14096D440 (BiBuildIdentifierList.c)
 *     BiUpdateBcdObject @ 0x14096F9A8 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x140398810 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403D3700 (_ultow_s.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     BiGetRegistryValue @ 0x140771A18 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140772024 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407721AC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140772394 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1407723BC (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x140772558 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x140772770 (BiConvertElementFormatToValueType.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     BiConvertRegistryDataToElement @ 0x1407729D0 (BiConvertRegistryDataToElement.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdGetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        PULONG BufferSize)
{
  __int64 v6; // rcx
  char v7; // r15
  int v8; // eax
  __int64 v9; // rsi
  wchar_t *v10; // rdi
  int v11; // eax
  NTSTATUS v12; // ebx
  int v13; // eax
  int v14; // eax
  int RegistryValue; // eax
  PVOID v16; // r15
  __int64 v17; // rcx
  __int64 v19; // rcx
  NTSTATUS v20; // r8d
  int v21[2]; // [rsp+20h] [rbp-91h]
  char v22; // [rsp+40h] [rbp-71h]
  size_t Size; // [rsp+48h] [rbp-69h] BYREF
  __int64 v25; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-59h]
  __int64 v27; // [rsp+60h] [rbp-51h] BYREF
  PVOID P; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  GUID *v30; // [rsp+80h] [rbp-31h]
  GUID Guid; // [rsp+88h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+98h] [rbp-19h] BYREF

  v30 = (GUID *)Buffer;
  LODWORD(Size) = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  if ( !BufferSize || !Buffer && *BufferSize )
    return -1073741811;
  LOBYTE(v6) = BiIsOfflineHandle((char)BcdObjectHandle);
  v22 = v6;
  v7 = v6;
  v8 = BiAcquireBcdSyncMutant(v6);
  if ( v8 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v8);
    return v20;
  }
  else
  {
    v25 = 0LL;
    v27 = 0LL;
    v9 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v10 = L"N/A";
    if ( (int)BiGetObjectIdentifier(BcdObjectHandle, &Guid) >= 0
      && RtlStringFromGUIDEx(&Guid, &DestinationString, 1u) >= 0 )
    {
      v10 = DestinationString.Buffer;
    }
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131097LL, &v25);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        v10,
        (unsigned int)v11);
    }
    else if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
    {
      v12 = -1073741823;
    }
    else
    {
      v13 = BiOpenKey(v25, DstBuf, 131097LL, &v27);
      if ( v13 < 0 )
      {
        v19 = 4LL;
        if ( v13 == -1073741772 )
          v19 = 2LL;
        BiLogMessage(
          v19,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          v10,
          DstBuf,
          v13);
        v9 = v27;
        v12 = -1073741275;
      }
      else
      {
        v14 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
        v9 = v27;
        v26 = v14;
        RegistryValue = BiGetRegistryValue(v27, L"Element", 0LL, v14, &P, &Size);
        v16 = P;
        v12 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          v21[0] = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            v10,
            v26,
            *(_QWORD *)v21);
        }
        else
        {
          v12 = BiConvertRegistryDataToElement(
                  BcdObjectHandle,
                  (PCWSTR)P,
                  (unsigned int)Size,
                  0,
                  v30,
                  (__int64)BufferSize);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        v7 = v22;
      }
    }
    RtlFreeAnsiString(&DestinationString);
    if ( v9 )
      BiCloseKey(v9);
    if ( v25 )
      BiCloseKey(v25);
    LOBYTE(v17) = v7;
    BiReleaseBcdSyncMutant(v17);
    return v12;
  }
}
