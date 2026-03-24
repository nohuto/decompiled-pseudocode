/*
 * XREFs of ACPIEcInitOpRegionHandler @ 0x1C0026A58
 * Callers:
 *     ACPITableLoad @ 0x1C00258B0 (ACPITableLoad.c)
 * Callees:
 *     ACPIMapNamedTable @ 0x1C0002990 (ACPIMapNamedTable.c)
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     RtlStringCchLengthA @ 0x1C004A554 (RtlStringCchLengthA.c)
 *     ACPIEcCreateEcData @ 0x1C0053848 (ACPIEcCreateEcData.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1CB0 (RegisterOperationRegionHandler.c)
 *     ACPIEcConnectGpeVector @ 0x1C00AE818 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AE854 (ACPIEcConnectGpioInterrupt.c)
 *     ACPIEcDisconnectGpeVector @ 0x1C00AE940 (ACPIEcDisconnectGpeVector.c)
 *     ACPIEcDisconnectGpioInterrupt @ 0x1C00AE970 (ACPIEcDisconnectGpioInterrupt.c)
 */

void ACPIEcInitOpRegionHandler()
{
  char *PoolWithTag; // rbx
  unsigned int v1; // r11d
  size_t v2; // r11
  __int64 EcData; // rax
  _BYTE *v4; // rdi
  int v5; // eax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(NumberOfBytes) = 0;
  pcchLength = 0LL;
  if ( !gECDTContext
    && (unsigned int)ACPIMapNamedTable(1413759813, 0LL, 0LL, 0LL, (unsigned int *)&NumberOfBytes) == -1073741789 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x45706341u);
    if ( PoolWithTag )
    {
      if ( (int)ACPIMapNamedTable(1413759813, 0LL, 0LL, PoolWithTag, (unsigned int *)&NumberOfBytes) < 0 )
        goto LABEL_25;
      v1 = *((_DWORD *)PoolWithTag + 1);
      if ( v1 < 0x42 )
        goto LABEL_25;
      if ( RtlStringCchLengthA(PoolWithTag + 65, v1 - 65, &pcchLength) < 0 )
        goto LABEL_25;
      if ( v2 < pcchLength + 66 )
        goto LABEL_25;
      EcData = ACPIEcCreateEcData();
      v4 = (_BYTE *)EcData;
      if ( !EcData )
        goto LABEL_25;
      *(_QWORD *)EcData = 0LL;
      if ( PoolWithTag[36] == 1
        && PoolWithTag[37] == 8
        && !PoolWithTag[38]
        && PoolWithTag[48] == 1
        && PoolWithTag[49] == 8
        && !PoolWithTag[50] )
      {
        *(_QWORD *)(EcData + 32) = *((_QWORD *)PoolWithTag + 5);
        *(_QWORD *)(EcData + 40) = *((_QWORD *)PoolWithTag + 5);
        *(_QWORD *)(EcData + 24) = *(_QWORD *)(PoolWithTag + 52);
        *(_DWORD *)(EcData + 48) = (unsigned __int8)PoolWithTag[64];
        *(_DWORD *)(EcData + 16) = *((_DWORD *)PoolWithTag + 15);
        if ( (int)AMLIGetNameSpaceObject(PoolWithTag + 65, 0LL, (unsigned __int64 *)(EcData + 56), 0) >= 0 )
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
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
