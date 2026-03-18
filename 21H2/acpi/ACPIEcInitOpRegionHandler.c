/*
 * XREFs of ACPIEcInitOpRegionHandler @ 0x1C0020398
 * Callers:
 *     ACPITableLoad @ 0x1C001F8F0 (ACPITableLoad.c)
 * Callees:
 *     ACPIMapNamedTable @ 0x1C00019E0 (ACPIMapNamedTable.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     RtlStringCchLengthA @ 0x1C0048F34 (RtlStringCchLengthA.c)
 *     ACPIEcCreateEcData @ 0x1C0052F28 (ACPIEcCreateEcData.c)
 *     RegisterOperationRegionHandler @ 0x1C009F5F8 (RegisterOperationRegionHandler.c)
 *     ACPIEcConnectGpeVector @ 0x1C00AD498 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AD4D4 (ACPIEcConnectGpioInterrupt.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C00AD5C8 (ACPIEcDisconnectGpeVector.c)
 *     ACPIEcDisconnectGpioInterrupt @ 0x1C00AD5F8 (ACPIEcDisconnectGpioInterrupt.c)
 */

void ACPIEcInitOpRegionHandler()
{
  __int64 Pool2; // rbx
  unsigned int v1; // r11d
  size_t v2; // r11
  __int64 EcData; // rax
  _BYTE *v4; // rdi
  int v5; // eax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  pcchLength = 0LL;
  if ( !gECDTContext && (unsigned int)ACPIMapNamedTable(1413759813, 0LL, 0LL, 0LL, &v6) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(64LL, v6, 1164993345LL);
    if ( Pool2 )
    {
      if ( (int)ACPIMapNamedTable(1413759813, 0LL, 0LL, (void *)Pool2, &v6) < 0 )
        goto LABEL_25;
      v1 = *(_DWORD *)(Pool2 + 4);
      if ( v1 < 0x42 )
        goto LABEL_25;
      if ( RtlStringCchLengthA((STRSAFE_PCNZCH)(Pool2 + 65), v1 - 65, &pcchLength) < 0 )
        goto LABEL_25;
      if ( v2 < pcchLength + 66 )
        goto LABEL_25;
      EcData = ACPIEcCreateEcData();
      v4 = (_BYTE *)EcData;
      if ( !EcData )
        goto LABEL_25;
      *(_QWORD *)EcData = 0LL;
      if ( *(_BYTE *)(Pool2 + 36) == 1
        && *(_BYTE *)(Pool2 + 37) == 8
        && !*(_BYTE *)(Pool2 + 38)
        && *(_BYTE *)(Pool2 + 48) == 1
        && *(_BYTE *)(Pool2 + 49) == 8
        && !*(_BYTE *)(Pool2 + 50) )
      {
        *(_QWORD *)(EcData + 32) = *(_QWORD *)(Pool2 + 40);
        *(_QWORD *)(EcData + 40) = *(_QWORD *)(Pool2 + 40);
        *(_QWORD *)(EcData + 24) = *(_QWORD *)(Pool2 + 52);
        *(_DWORD *)(EcData + 48) = *(unsigned __int8 *)(Pool2 + 64);
        *(_DWORD *)(EcData + 16) = *(_DWORD *)(Pool2 + 60);
        if ( (int)AMLIGetNameSpaceObject((_BYTE *)(Pool2 + 65), 0LL, (_QWORD *)(EcData + 56), 0) >= 0 )
        {
          v5 = *((_BYTE *)AcpiInformation + 133) ? ACPIEcConnectGpioInterrupt(v4) : ACPIEcConnectGpeVector(v4);
          if ( v5 >= 0 )
          {
            if ( (int)RegisterOperationRegionHandler(
                        0,
                        2,
                        3,
                        (unsigned int)&ACPIEcOpRegionHandler,
                        (__int64)v4,
                        (__int64)(v4 + 80)) >= 0 )
            {
              v4[120] = 1;
              gECDTContext = (__int64)v4;
              goto LABEL_25;
            }
            if ( *((_BYTE *)AcpiInformation + 133) )
              ACPIEcDisconnectGpioInterrupt(v4);
            else
              ACPIEcDisconnectGpeVector(v4);
          }
        }
      }
      ExFreePoolWithTag(v4, 0);
LABEL_25:
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
  }
}
