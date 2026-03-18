/*
 * XREFs of ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0032F78
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026654 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDD @ 0x1C006E078 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0074BB0 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureFileObjectClass(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *v3; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned int globals; // edi
  int Flink; // edx
  unsigned int v9; // ebp
  int _a6; // edi
  __int64 v12; // r8
  _LIST_ENTRY *v13; // rcx
  FxObject *v14; // rcx
  const void *_a2; // rax
  unsigned int _a4; // edx
  unsigned int v17; // r8d
  const void *_a3; // r10
  _LIST_ENTRY *v19; // rcx
  FxDriver *m_Driver; // rcx
  FxObject *v21; // r9
  const void *ObjectHandleUnchecked; // rax
  const void *v23; // rdx
  int v24; // r8d
  const void *v25; // r10

  Blink = FileObjInfoList->Blink;
  v3 = 0LL;
  m_Globals = this->m_Globals;
  globals = 1;
  if ( Blink == FileObjInfoList )
  {
LABEL_7:
    v9 = 0;
    LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next) = globals;
    return v9;
  }
  while ( 1 )
  {
    Flink = (int)Blink[5].Flink;
    if ( Flink == 1 || globals == Flink )
      goto LABEL_6;
    if ( globals != 1 )
      break;
    v3 = Blink[9].Blink;
    globals = (unsigned int)Blink[5].Flink;
LABEL_6:
    Blink = Blink->Blink;
    if ( Blink == FileObjInfoList )
      goto LABEL_7;
  }
  _a6 = globals >> 31;
  if ( (_BYTE)_a6 == Flink < 0 )
  {
    globals = ((Flink >= 0) << 31) - 2147483644;
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v13 = Blink[9].Blink;
    if ( v13 )
      v14 = (FxObject *)v13[1].Flink;
    else
      v14 = *(FxObject **)(v12 + 136);
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(v14);
    WPP_IFR_SF_qqDD(m_Globals, 4u, v17, 0x10u, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, globals);
    goto LABEL_6;
  }
  v9 = -1073741808;
  FxObject::GetObjectHandleUnchecked((FxObject *)v3[1].Flink);
  v19 = Blink[9].Blink;
  if ( v19 )
    m_Driver = (FxDriver *)v19[1].Flink;
  else
    m_Driver = this->m_DeviceBase->m_Driver;
  FxObject::GetObjectHandleUnchecked(m_Driver);
  ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v21);
  WPP_IFR_SF_qqdqdd(
    m_Globals,
    (unsigned __int8)v23,
    0x12u,
    0xFu,
    WPP_FxPkgGeneral_cpp_Traceguids,
    ObjectHandleUnchecked,
    v23,
    v24,
    v25,
    _a6,
    -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v9;
}
