/*
 * XREFs of BcdGetElementDataWithFlags @ 0x140812D44
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x140800680 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140800BAC (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140800E64 (PopBcdReadElement.c)
 *     BcdGetElementData @ 0x14081D380 (BcdGetElementData.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14099C7F4 (PopAdaptiveGetSystemInitiatedRebootTargetBootEntry.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409CE134 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140A1D134 (BiGetDefaultBootEntryIdentifier.c)
 *     BiGetElement @ 0x140A1D4A4 (BiGetElement.c)
 *     BiBuildIdentifierList @ 0x140A1E890 (BiBuildIdentifierList.c)
 *     BiUpdateBcdObject @ 0x140A20DF8 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403E6130 (_ultow_s.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1407454A8 (RtlStringFromGUIDEx.c)
 *     BiConvertRegistryDataToElement @ 0x14080285C (BiConvertRegistryDataToElement.c)
 *     BiConvertElementFormatToValueType @ 0x14080346C (BiConvertElementFormatToValueType.c)
 *     BiGetRegistryValue @ 0x140812F84 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x140813500 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdGetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, GUID *a4, unsigned int *a5)
{
  __int64 v6; // rcx
  char v7; // r15
  int v8; // eax
  __int64 v9; // rsi
  wchar_t *Buffer; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v17; // eax
  int RegistryValue; // eax
  PVOID v19; // r15
  unsigned int v20; // r8d
  __int64 v21; // [rsp+20h] [rbp-91h]
  char v22; // [rsp+40h] [rbp-71h]
  unsigned int v24; // [rsp+48h] [rbp-69h] BYREF
  __int64 v25; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-59h]
  __int64 v27; // [rsp+60h] [rbp-51h] BYREF
  PVOID P; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  GUID *v30; // [rsp+80h] [rbp-31h]
  __int128 v31; // [rsp+88h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+98h] [rbp-19h] BYREF

  v30 = a4;
  v24 = 0;
  DestinationString = 0LL;
  v31 = 0LL;
  if ( !a5 || !a4 && *a5 )
    return 3221225485LL;
  LOBYTE(v6) = BiIsOfflineHandle(a1);
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
    Buffer = L"N/A";
    if ( (int)BiGetObjectIdentifier(a1, &v31) >= 0
      && (int)RtlStringFromGUIDEx((unsigned int *)&v31, (__int64)&DestinationString, 1) >= 0 )
    {
      Buffer = DestinationString.Buffer;
    }
    v11 = BiOpenKey(a1, L"Elements", 131097LL, &v25);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        Buffer,
        (unsigned int)v11);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v12 = -1073741823;
    }
    else
    {
      v13 = BiOpenKey(v25, DstBuf, 131097LL, &v27);
      if ( v13 >= 0 )
      {
        v17 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
        v9 = v27;
        v26 = v17;
        RegistryValue = BiGetRegistryValue(v27, L"Element", 0LL, v17, &P, &v24);
        v19 = P;
        v12 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          LODWORD(v21) = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            Buffer,
            v26,
            v21);
        }
        else
        {
          v12 = BiConvertRegistryDataToElement(a1, (unsigned int *)P, v24, a2, 0, v30, a5);
        }
        if ( v19 )
          ExFreePoolWithTag(v19, 0x4B444342u);
        v7 = v22;
      }
      else
      {
        v14 = 4LL;
        if ( v13 == -1073741772 )
          v14 = 2LL;
        BiLogMessage(
          v14,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          Buffer,
          DstBuf,
          v13);
        v9 = v27;
        v12 = -1073741275;
      }
    }
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 )
      BiCloseKey(v9);
    if ( v25 )
      BiCloseKey(v25);
    LOBYTE(v15) = v7;
    BiReleaseBcdSyncMutant(v15);
    return v12;
  }
}
