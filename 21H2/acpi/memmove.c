/*
 * XREFs of memmove @ 0x1C002FDC0
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00019E0 (ACPIMapNamedTable.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIBusIrpQueryInterface @ 0x1C0005A80 (ACPIBusIrpQueryInterface.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0006528 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C000661C (AMLIGetNameSpaceObjectPath.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C0006718 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0008730 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDetectDockDevices @ 0x1C000A628 (ACPIDetectDockDevices.c)
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0015500 (ParseSuperName.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     Method @ 0x1C0017300 (Method.c)
 *     Return @ 0x1C00174B0 (Return.c)
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     WriteFieldLoop @ 0x1C0017A60 (WriteFieldLoop.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     Buffer @ 0x1C0018F50 (Buffer.c)
 *     CopyObjBuffer @ 0x1C0019958 (CopyObjBuffer.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     WriteFieldObj @ 0x1C001A310 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001A6A0 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C001AE70 (AccessBaseField.c)
 *     ReadSystemMem @ 0x1C001B2D0 (ReadSystemMem.c)
 *     WriteSystemMem @ 0x1C001B408 (WriteSystemMem.c)
 *     PushAccFieldObj @ 0x1C001B7F8 (PushAccFieldObj.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001BAFC (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001BF00 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ConvertToInteger @ 0x1C001C420 (ConvertToInteger.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFB4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIBuildProcessorExtension @ 0x1C001F0E0 (ACPIBuildProcessorExtension.c)
 *     ACPIIoctlEnumChildren @ 0x1C001F2D4 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C001F4D8 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C001F5E4 (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C001F71C (FindNSObjMainNoLock.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0020E34 (ACPIThermalCompletePendingIrps.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     ParseObjName @ 0x1C0028CA8 (ParseObjName.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0029BD0 (ACPIGetWorkerForBuffer.c)
 *     ParseInteger @ 0x1C0029E44 (ParseInteger.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002A488 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AcpiDeviceResetInterface @ 0x1C002CBD0 (AcpiDeviceResetInterface.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0031016 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004BEC8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C004E440 (ACPIDetectEjectDevices.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0056650 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0057880 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C00584B0 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0058990 (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x1C0058C04 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     IpmiOpRegionHandler @ 0x1C0059070 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005B8FC (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005D960 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005E054 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005F36C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C0061DDC (ACPIVectorGetEntry.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0063F80 (AcpiRecordBlackboxInformationWorker.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0065E94 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0065F88 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 *     LoadTable @ 0x1C006A0B0 (LoadTable.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 *     ConvertToBuffer @ 0x1C006B518 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B6E8 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C500 (LinkNodepRunSrsWorker.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C00920A0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C00923D0 (ACPIBusIommuBusInterface.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092610 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0092934 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092A34 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0092C24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIGetPnpLocationString @ 0x1C0094EE0 (ACPIGetPnpLocationString.c)
 *     ACPIThermalBuildConstraints @ 0x1C00956BC (ACPIThermalBuildConstraints.c)
 *     OSReadRegValue @ 0x1C00968B0 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C0098CDC (ACPIInternalGrowBuffer.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0099084 (IrqArbpSetDeviceProperties.c)
 *     ArbAddOrdering @ 0x1C009E820 (ArbAddOrdering.c)
 *     ACPIIommuGetDeviceId @ 0x1C009FE60 (ACPIIommuGetDeviceId.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C00A0474 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     IrqTranslatorEjectInterface @ 0x1C00A1A70 (IrqTranslatorEjectInterface.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00AAFD0 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C00AB730 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ABA30 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C00AD930 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AF388 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AF43C (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C00AF8F0 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C00AFB78 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B09D0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B1D9C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2020 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00B254C (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00B2790 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C00B29B4 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00B52A0 (BuildTranslatorRanges.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7474 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00B7B4C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00B7D10 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00BB1B0 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
