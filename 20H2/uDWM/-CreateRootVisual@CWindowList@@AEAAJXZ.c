/*
 * XREFs of ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x180050B60
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180049978 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026600 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisual(struct CVisual **this)
{
  _QWORD *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]

  v1 = this + 10;
  v2 = CVisual::Create(this + 10);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x70Bu);
  }
  else
  {
    v4 = *v1;
    v9 = 0x7FFFFFFF;
    v10 = 0x7FFFFFFF;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 96LL))(v4, &v9);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x70Eu);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x711u);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 16LL)
                                               + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 16LL));
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x713u);
      }
    }
  }
  return v3;
}
