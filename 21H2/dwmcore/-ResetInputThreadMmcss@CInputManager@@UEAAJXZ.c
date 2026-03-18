/*
 * XREFs of ?ResetInputThreadMmcss@CInputManager@@UEAAJXZ @ 0x18002B8F0
 * Callers:
 *     ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x18002A710 (-ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::ResetInputThreadMmcss(CInputManager *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // ecx

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  if ( v1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x56u, 0LL);
  }
  return v2;
}
