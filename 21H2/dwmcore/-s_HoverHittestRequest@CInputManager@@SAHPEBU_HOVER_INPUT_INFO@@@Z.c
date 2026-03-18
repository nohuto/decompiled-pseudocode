/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x180016E3C
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x180016DB0 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18002B4DC (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x18002B65C (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1)
{
  int v1; // ebx
  unsigned int v2; // eax
  char *v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  CResource *v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  CResource *v14; // [rsp+78h] [rbp+28h]
  unsigned __int64 v15; // [rsp+80h] [rbp+30h]

  v1 = 0;
  if ( CInputManager::s_pInputManager )
  {
    v2 = *((_DWORD *)a1 + 4);
    v3 = (char *)CInputManager::s_pInputManager + 80;
    v4 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
    v14 = 0LL;
    v15 = v2 | 0xFFFFFFFE00000000uLL;
    v5 = *v4;
    v12 = 0LL;
    v13 = 1;
    v1 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, CResource **))(v5 + 56))(v4, v15, &v12);
    if ( v13 )
    {
      v6 = 0;
      v14 = v12;
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180345778, 2u, v1, 0x17Eu, 0LL);
    }
    else
    {
      v7 = CDesktopTree::CleanTreeAndLockForRead(v14);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180345778, 2u, v7, 0x181u, 0LL);
      }
      else
      {
        v9 = CHitTestContext::HitTestTreeWalk(v3, v14);
        v1 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_180345778, 2u, v9, 0x18Bu, 0LL);
        ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v14 + 2) + 672LL));
      }
    }
    if ( v14 )
      CResource::InternalRelease(v14);
  }
  return v1 >= 0;
}
