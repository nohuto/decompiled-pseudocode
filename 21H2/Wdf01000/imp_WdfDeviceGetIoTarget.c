/*
 * XREFs of imp_WdfDeviceGetIoTarget @ 0x1C0001FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDqD @ 0x1C006B478 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  FxDeviceBase *flags; // rdi
  FxDeviceBase_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  unsigned __int64 result; // rax
  const _GUID *v11; // [rsp+20h] [rbp-48h]
  FxDeviceBase **p_pDeviceBase; // [rsp+50h] [rbp-18h] BYREF
  __int16 v13; // [rsp+58h] [rbp-10h]
  __int16 v14; // [rsp+5Ah] [rbp-Eh]
  int v15; // [rsp+5Ch] [rbp-Ch]
  FxDeviceBase *pDeviceBase; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  v3 = 0LL;
  LOWORD(v4) = 0;
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v4 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4144 )
  {
    pDeviceBase = flags;
  }
  else
  {
    pDeviceBase = 0LL;
    p_pDeviceBase = &pDeviceBase;
    v14 = v4;
    v15 = 0;
    v6 = flags->FxNonPagedObject::FxObject::__vftable;
    v13 = 4144;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDeviceBase) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v11, (const void *)Device, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
    }
    flags = pDeviceBase;
  }
  result = (unsigned __int64)flags->GetDefaultIoTarget(flags);
  if ( result )
  {
    if ( *(_WORD *)(result + 10) )
      return result ^ 0xFFFFFFFFFFFFFFF8uLL;
    return v3;
  }
  return result;
}
