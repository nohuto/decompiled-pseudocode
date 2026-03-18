/*
 * XREFs of imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0001650
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_sq @ 0x1C0013EA8 (WPP_IFR_SF_sq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  __int64 v5; // rsi
  __int64 Offset; // rdx
  FxObject *v7; // rcx
  __int64 v8; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  size_t v13; // r8
  void (__fastcall *v14)(unsigned __int64, const void *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  const void *v15; // rdx
  __int16 v16; // ax
  unsigned __int64 v17; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  void *PPObject; // [rsp+68h] [rbp+10h] BYREF

  PPObject = 0LL;
  v5 = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(Offset) = 0;
  v7 = (FxObject *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxObject *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4098 )
  {
    PPObject = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, &PPObject, (void *)Device, 0x1002u, Offset);
    v7 = (FxObject *)PPObject;
  }
  v8 = *(_QWORD *)&v7[6].m_ObjectFlags;
  m_Globals = v7->m_Globals;
  if ( v8 && *(_WORD *)(v8 + 8) == 4354 )
  {
    v5 = *(_QWORD *)&v7[6].m_ObjectFlags;
    result = 0LL;
  }
  else
  {
    WPP_IFR_SF_sq(
      m_Globals,
      2u,
      0x12u,
      0xAu,
      WPP_FxDevicePdoAPI_cpp_Traceguids,
      "imp_WdfPdoRetrieveIdentificationDescription",
      (const void *)Device);
    result = 3221225485LL;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (int)result >= 0 )
  {
    v11 = *(_QWORD *)(v5 + 1704);
    if ( v11
      && (v12 = *(_QWORD *)(v11 + 72), !*(_BYTE *)(v12 + 309))
      && (v13 = *(unsigned int *)(v12 + 176), (_DWORD)v13 == IdentificationDescription->IdentificationDescriptionSize) )
    {
      v14 = *(void (__fastcall **)(unsigned __int64, const void *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *))(v12 + 200);
      v15 = *(const void **)(v11 + 24);
      if ( v14 )
      {
        v16 = *(_WORD *)(v12 + 10);
        v17 = v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v16 )
          v17 = 0LL;
        v14(v17, v15, IdentificationDescription);
      }
      else
      {
        memmove(IdentificationDescription, v15, v13);
      }
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}
