/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x1C000B294
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013743C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C00045C0 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

void __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  DMMVIDPNTARGETMODESET *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  while ( 1 )
  {
    v2 = (DMMVIDPNTARGETMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v2 )
      v2 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v2, this);
    if ( v2 )
      break;
    v7 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    WdLogEvent5_WdLowResource(v7);
    ZwYieldExecution();
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 13, (__int64)v2);
}
