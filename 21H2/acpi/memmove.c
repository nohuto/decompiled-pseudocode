/*
 * XREFs of memmove @ 0x1C00321C0
 * Callers:
 *     ReadFieldObj @ 0x1C0001400 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     ACPIMapNamedTable @ 0x1C0002990 (ACPIMapNamedTable.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     CreateNameSpaceObject @ 0x1C0006720 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0009160 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0009350 (ParseSuperName.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     Return @ 0x1C000A590 (Return.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     Buffer @ 0x1C000B340 (Buffer.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BF6C (ACPIIoctlCalculateOutputBufferV1.c)
 *     ConvertToInteger @ 0x1C000C190 (ConvertToInteger.c)
 *     ACPIInitStartDevice @ 0x1C000D968 (ACPIInitStartDevice.c)
 *     ACPIBusIrpQueryInterface @ 0x1C0010C50 (ACPIBusIrpQueryInterface.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C00116E4 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00117C0 (AMLIGetNameSpaceObjectPath.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0012E74 (ACPIThermalCompletePendingIrps.c)
 *     ACPIIoctlEnumChildren @ 0x1C0013C10 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013E40 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013F48 (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C0014080 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x1C0014150 (FindNSObj.c)
 *     ACPIBuildProcessorExtension @ 0x1C0016024 (ACPIBuildProcessorExtension.c)
 *     ACPIDetectPdoDevices @ 0x1C0019338 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A800 (ACPIDetectDockDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B550 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     GetNameSpaceObject @ 0x1C002183C (GetNameSpaceObject.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     ParseObjName @ 0x1C0021FB4 (ParseObjName.c)
 *     ParsePackage @ 0x1C0022100 (ParsePackage.c)
 *     CopyObjBuffer @ 0x1C0022C68 (CopyObjBuffer.c)
 *     WriteFieldObj @ 0x1C0024580 (WriteFieldObj.c)
 *     WriteSystemMem @ 0x1C0024A34 (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C0024B7C (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C0024C10 (PushAccFieldObj.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0026060 (ACPIInterruptDispatchEventDpc.c)
 *     WriteFieldLoop @ 0x1C0027250 (WriteFieldLoop.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027D58 (ACPIGetConvertToCompatibleIDWide.c)
 *     Method @ 0x1C0028A20 (Method.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029BB4 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002B060 (ACPIGetWorkerForBuffer.c)
 *     ParseInteger @ 0x1C002CA40 (ParseInteger.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002E158 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002EB38 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AcpiDeviceResetInterface @ 0x1C0031180 (AcpiDeviceResetInterface.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004D120 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C004F600 (ACPIDetectEjectDevices.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0056110 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0057714 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057CE8 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C005804C (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C0058670 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005A9FC (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005CA50 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005D368 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E6AC (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C006101C (ACPIVectorGetEntry.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0062C40 (AcpiRecordBlackboxInformationWorker.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0064C10 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0064D04 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C0067D58 (RawFieldAccess.c)
 *     Concat @ 0x1C0068C00 (Concat.c)
 *     LoadTable @ 0x1C00695C0 (LoadTable.c)
 *     ToDecStr @ 0x1C006A850 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AC20 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C006B288 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B458 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C006BA34 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C280 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F720 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C0091750 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIThermalBuildConstraints @ 0x1C0091BD0 (ACPIThermalBuildConstraints.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0092578 (IrqArbpSetDeviceProperties.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0096300 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009670C (ACPIBusIrpQueryCompatibleId.c)
 *     OSReadRegValue @ 0x1C0097444 (OSReadRegValue.c)
 *     IrqTranslatorEjectInterface @ 0x1C00988E4 (IrqTranslatorEjectInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0099170 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C00995C4 (ACPIBusIommuBusInterface.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A3A0 (ACPIAmliEvaluateOsc.c)
 *     ACPIInternalGrowBuffer @ 0x1C009BF88 (ACPIInternalGrowBuffer.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CF00 (PnpBiosResourcesToNtResources.c)
 *     ArbAddOrdering @ 0x1C00A03D8 (ArbAddOrdering.c)
 *     ACPIGetPnpLocationString @ 0x1C00A0750 (ACPIGetPnpLocationString.c)
 *     ACPIIommuGetDeviceId @ 0x1C00A1C30 (ACPIIommuGetDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A2000 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00AC290 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C00ACA30 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACD30 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C00AECB0 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AFEE0 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AFF8C (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C00B0440 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C00B06C8 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1730 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B24BC (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2740 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00B2C68 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00B2EAC (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C00B30D0 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00B5BE0 (BuildTranslatorRanges.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7974 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00B7EBC (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00B8080 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00BB1F0 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
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
