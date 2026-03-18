/*
 * XREFs of ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2D24
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005FD0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00071B0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0009970 (imp_WdfRegistryOpenKey.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0012FB0 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002DD0C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0031C84 (WPP_IFR_SF_.c)
 *     FxVerifierIsDebugInfoFlagSetForType @ 0x1C00579E4 (FxVerifierIsDebugInfoFlagSetForType.c)
 *     WPP_IFR_SF_DDD @ 0x1C0059A40 (WPP_IFR_SF_DDD.c)
 */

void __fastcall FxObject::Vf_VerifyLeakDetectionConsiderObject(FxObject *this, _FX_DRIVER_GLOBALS *a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rbx
  int v5; // edx
  unsigned int level; // esi
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  m_Globals = this->m_Globals;
  FxVerifyLeakDetection = m_Globals->FxVerifyLeakDetection;
  if ( FxVerifyLeakDetection
    && FxVerifyLeakDetection->Enabled
    && (FxVerifierIsDebugInfoFlagSetForType(
          m_Globals->DebugExtension->ObjectDebugInfo,
          this->m_Type,
          FxObjectDebugTrackObjectCount)
     || (_WORD)v5 == 4098) )
  {
    if ( v5 == 4098 )
    {
      if ( _InterlockedIncrement(&FxVerifyLeakDetection->DeviceCnt) >= 2 )
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, FxVerifyLeakDetection->Limit);
      goto LABEL_11;
    }
    if ( v5 != 4104 || BYTE5(this[2].__vftable) == 2 )
    {
LABEL_11:
      BYTE4(this[-1].m_ChildEntry.Blink) = 1;
      level = _InterlockedIncrement(&FxVerifyLeakDetection->ObjectCnt);
      if ( level == FxVerifyLeakDetection->LimitScaled )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0x14u, 0xFu, WPP_FxObject_cpp_Traceguids);
        WPP_IFR_SF_DDD(
          this->m_Globals,
          v7,
          v8,
          v9,
          traceGuid,
          level,
          FxVerifyLeakDetection->Limit,
          FxVerifyLeakDetection->LimitScaled);
        FxVerifierDbgBreakPoint(this->m_Globals);
        FxVerifyLeakDetection->Enabled = 0;
      }
    }
  }
}
