/*
 * XREFs of BcdSetElementDataWithFlags @ 0x140803250
 * Callers:
 *     PopBcdSetPendingResume @ 0x140800808 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140800BAC (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x140800F20 (PopBcdSetupResumeObject.c)
 *     PopAdaptivePrepareForSystemInitiatedReboot @ 0x14099C9CC (PopAdaptivePrepareForSystemInitiatedReboot.c)
 *     PopBcdRegenerateResumeObject @ 0x14099D244 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409CE134 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x140A1D3AC (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A1E118 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140A1E354 (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140A20DF8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1403A7864 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _ultow_s @ 0x1403E6130 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x14064CD04 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140803438 (BiIsLinkedToFirmwareVariable.c)
 *     BiConvertElementFormatToValueType @ 0x14080346C (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x140803498 (BiConvertElementToRegistryData.c)
 *     BiCreateKey @ 0x1408036C8 (BiCreateKey.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 *     BiOpenKey @ 0x140813164 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408132F0 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1408134D8 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14081369C (BiAcquireBcdSyncMutant.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(void *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  PVOID v16; // r15
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-51h]
  __int64 v19; // [rsp+28h] [rbp-49h]
  char v20; // [rsp+30h] [rbp-41h] BYREF
  char v21; // [rsp+31h] [rbp-40h]
  int v22; // [rsp+34h] [rbp-3Dh] BYREF
  __int64 v23; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-31h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h] BYREF
  PVOID P; // [rsp+50h] [rbp-21h] BYREF
  wchar_t DstBuf[24]; // [rsp+58h] [rbp-19h] BYREF

  v24 = a2;
  v22 = 0;
  if ( !a4 && a5 )
    return 3221225485LL;
  v23 = 0LL;
  v8 = 0LL;
  v20 = 0;
  v25 = 0LL;
  P = 0LL;
  if ( !a5 )
  {
    BiDeleteElement(a1, a2);
    return 0LL;
  }
  LOBYTE(v9) = BiIsOfflineHandle((char)a1);
  v21 = v9;
  result = BiAcquireBcdSyncMutant(v9);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", a2);
    v11 = BiOpenKey(a1, L"Elements", 131101LL, &v23);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_15:
        if ( v23 )
          BiCloseKey(v23);
        if ( v12 >= 0 )
        {
          if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v24) )
            BiSetFirmwareModifiedFromObject(a1);
        }
        LOBYTE(v13) = v21;
        BiReleaseBcdSyncMutant(v13);
        return (unsigned int)v12;
      }
      v14 = BiCreateKey(v23, DstBuf, 65538LL, 1LL, &v25, &v20);
      v12 = v14;
      if ( v14 < 0 )
      {
        BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
        v8 = v25;
      }
      else
      {
        v15 = BiConvertElementToRegistryData(a2, a4, a5, 0LL, &P, &v22);
        v8 = v25;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15, v18, v19);
        }
        else
        {
          BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
          LODWORD(v19) = v22;
          v17 = BiSetRegistryValue(v8, L"Element", 0LL);
          v12 = v17;
          if ( v17 < 0 )
            BiLogMessage(
              4LL,
              L"Failed to set registry data for element %s. Status: %x",
              DstBuf,
              (unsigned int)v17,
              v16,
              v19);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        if ( v12 >= 0 )
          goto LABEL_13;
      }
    }
    if ( v20 )
    {
      BiDeleteKey(v8);
      v8 = 0LL;
    }
LABEL_13:
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_15;
  }
  return result;
}
