/*
 * XREFs of ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C005C7B0
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0017820 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C005C718 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqdd @ 0x1C0053E0C (WPP_IFR_SF_qqdd.c)
 */

char __fastcall FxChildList::ReenumerateEntryLocked(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  char v4; // bl
  FxDeviceDescriptionEntry *Flink; // rsi
  _LIST_ENTRY *Blink; // r8
  const void *_a1; // rax
  __int64 v8; // r8
  _FX_DRIVER_GLOBALS *v9; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *ObjectHandleUnchecked; // rax
  FxDeviceDescriptionEntry *v12; // r9
  __int64 v13; // r10
  int _a4; // r11d

  p_m_ModificationLink = &Entry->m_ModificationLink;
  v4 = 1;
  Flink = (FxDeviceDescriptionEntry *)Entry->m_ModificationLink.Flink;
  if ( Flink == (FxDeviceDescriptionEntry *)&Entry->m_ModificationLink
    && (unsigned int)(Entry->m_DescriptionState - 1) <= 1 )
  {
    if ( !FromQDR )
    {
      Entry->m_ModificationState = ModificationClone;
      Blink = this->m_ModificationListHead.Blink;
      if ( Blink->Flink != &this->m_ModificationListHead )
        __fastfail(3u);
      p_m_ModificationLink->Flink = &this->m_ModificationListHead;
      Entry->m_ModificationLink.Blink = Blink;
      Blink->Flink = p_m_ModificationLink;
      this->m_ModificationListHead.Blink = p_m_ModificationLink;
    }
    if ( this->m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Entry->m_Pdo);
      WPP_IFR_SF_qq(v9, 5u, 0xCu, 0x14u, WPP_FxChildList_cpp_Traceguids, _a1, *(const void **)(v8 + 144));
    }
  }
  else
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(Entry->m_Pdo);
      WPP_IFR_SF_qqdd(
        m_Globals,
        5u,
        0xCu,
        0x15u,
        WPP_FxChildList_cpp_Traceguids,
        ObjectHandleUnchecked,
        *(const void **)(v13 + 144),
        Flink == v12,
        _a4);
    }
    return 0;
  }
  return v4;
}
