/*
 * XREFs of memmove @ 0x1C0031EC0
 * Callers:
 *     ReadFieldObj @ 0x1C0001400 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     ACPIMapNamedTable @ 0x1C00025D0 (ACPIMapNamedTable.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008DA0 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0008F90 (ParseSuperName.c)
 *     DupObjData @ 0x1C000A040 (DupObjData.c)
 *     Return @ 0x1C000A1D0 (Return.c)
 *     WriteObject @ 0x1C000A8A0 (WriteObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C000AC5C (AMLIGetNameSpaceObject.c)
 *     Buffer @ 0x1C000AF80 (Buffer.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C000BBAC (ACPIIoctlCalculateOutputBufferV1.c)
 *     ConvertToInteger @ 0x1C000BDD0 (ConvertToInteger.c)
 *     ACPIInitStartDevice @ 0x1C000D5A8 (ACPIInitStartDevice.c)
 *     ACPIBusIrpQueryInterface @ 0x1C00109F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0011484 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C0011560 (AMLIGetNameSpaceObjectPath.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0012C14 (ACPIThermalCompletePendingIrps.c)
 *     ACPIIoctlEnumChildren @ 0x1C00139B0 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013BE0 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C0013CE8 (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C0013E20 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x1C0013EF0 (FindNSObj.c)
 *     ACPIBuildProcessorExtension @ 0x1C0015DC4 (ACPIBuildProcessorExtension.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A5A0 (ACPIDetectDockDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B2F0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ExprOp2_64 @ 0x1C0020D00 (ExprOp2_64.c)
 *     GetNameSpaceObject @ 0x1C00215DC (GetNameSpaceObject.c)
 *     ParseField @ 0x1C0021AD0 (ParseField.c)
 *     ParseObjName @ 0x1C0021D54 (ParseObjName.c)
 *     ParsePackage @ 0x1C0021EA0 (ParsePackage.c)
 *     CopyObjBuffer @ 0x1C0022A08 (CopyObjBuffer.c)
 *     WriteFieldObj @ 0x1C0024320 (WriteFieldObj.c)
 *     WriteSystemMem @ 0x1C00247D4 (WriteSystemMem.c)
 *     ReadSystemMem @ 0x1C002491C (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C00249B0 (PushAccFieldObj.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0025E00 (ACPIInterruptDispatchEventDpc.c)
 *     WriteFieldLoop @ 0x1C0026FF0 (WriteFieldLoop.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027AF8 (ACPIGetConvertToCompatibleIDWide.c)
 *     Method @ 0x1C00287C0 (Method.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029954 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002AE00 (ACPIGetWorkerForBuffer.c)
 *     ParseInteger @ 0x1C002C7E0 (ParseInteger.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C002DEF8 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E8D8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     AcpiDeviceResetInterface @ 0x1C0030F20 (AcpiDeviceResetInterface.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004CFB0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C004F470 (ACPIDetectEjectDevices.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0055F80 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C0057584 (ACPIIoctlCalculateOutputBufferV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057B58 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0057EBC (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C00584E0 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C005A86C (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C8C0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005D1D8 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E51C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorGetEntry @ 0x1C0060E8C (ACPIVectorGetEntry.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0062AB0 (AcpiRecordBlackboxInformationWorker.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0064A80 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0064B74 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C0067BC8 (RawFieldAccess.c)
 *     Concat @ 0x1C0068A70 (Concat.c)
 *     LoadTable @ 0x1C0069430 (LoadTable.c)
 *     ToDecStr @ 0x1C006A6C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AA90 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C006B0F8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B2C8 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C006B8A4 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C0F0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F410 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C0091440 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIThermalBuildConstraints @ 0x1C00918C0 (ACPIThermalBuildConstraints.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0092268 (IrqArbpSetDeviceProperties.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0095FF0 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C00963FC (ACPIBusIrpQueryCompatibleId.c)
 *     OSReadRegValue @ 0x1C0097134 (OSReadRegValue.c)
 *     IrqTranslatorEjectInterface @ 0x1C00985D4 (IrqTranslatorEjectInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0098E60 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C00992B4 (ACPIBusIommuBusInterface.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A080 (ACPIAmliEvaluateOsc.c)
 *     ACPIInternalGrowBuffer @ 0x1C009BC68 (ACPIInternalGrowBuffer.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 *     ArbAddOrdering @ 0x1C00A00B8 (ArbAddOrdering.c)
 *     ACPIGetPnpLocationString @ 0x1C00A0430 (ACPIGetPnpLocationString.c)
 *     ACPIIommuGetDeviceId @ 0x1C00A1910 (ACPIIommuGetDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A1CE0 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00ABF70 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C00AC710 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00ACA10 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C00AE990 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AFBC0 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AFC6C (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C00B0120 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C00B03A8 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1410 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C00B219C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C00B2420 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C00B2948 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00B2B8C (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C00B2DB0 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00B58C0 (BuildTranslatorRanges.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00B7654 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00B7B9C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00B7D60 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00BB080 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
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
