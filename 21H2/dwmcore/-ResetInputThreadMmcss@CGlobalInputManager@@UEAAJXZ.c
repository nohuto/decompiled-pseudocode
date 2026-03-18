/*
 * XREFs of ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x18002A710
 * Callers:
 *     <none>
 * Callees:
 *     ?TriggerMmcss@CKst@@QEAAJXZ @ 0x18002A75C (-TriggerMmcss@CKst@@QEAAJXZ.c)
 *     ?ResetInputThreadMmcss@CInputManager@@UEAAJXZ @ 0x18002B8F0 (-ResetInputThreadMmcss@CInputManager@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalInputManager::ResetInputThreadMmcss(CKst **this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  CKst *v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx

  v2 = CInputManager::ResetInputThreadMmcss((CInputManager *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x40u, 0LL);
  }
  else
  {
    v5 = this[41];
    if ( v5 )
    {
      v6 = CKst::TriggerMmcss(v5);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x45u, 0LL);
    }
  }
  return v4;
}
