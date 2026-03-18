/*
 * XREFs of ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C7DC8
 * Callers:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0005FA0 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0007810 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0007A14 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007B50 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C006CEE8 (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 */

void __fastcall FxObject::Vf_VerifyConstruct(
        FxObject *this,
        _FX_DRIVER_GLOBALS *Embedded,
        unsigned __int8 FxDriverGlobals)
{
  if ( this->m_Globals->FxVerifierHandle )
  {
    if ( !FxDriverGlobals )
    {
      this->m_ObjectFlags |= 0x80u;
      this[-1].m_ChildEntry.Flink = 0LL;
      LODWORD(this[-1].m_ChildEntry.Blink) = 0;
      LOBYTE(this[-1].m_ChildEntry.Flink) = 1;
      FxObject::AllocateTagTracker(this, this->m_Type);
    }
  }
}
