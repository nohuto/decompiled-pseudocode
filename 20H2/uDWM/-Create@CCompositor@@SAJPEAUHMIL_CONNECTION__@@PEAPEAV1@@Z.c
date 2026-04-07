/*
 * XREFs of ?Create@CCompositor@@SAJPEAUHMIL_CONNECTION__@@PEAPEAV1@@Z @ 0x1800523AC
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180049978 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CCompositor@@IEAAJPEAUHMIL_CONNECTION__@@@Z @ 0x18005245C (-Initialize@CCompositor@@IEAAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::Create(struct HMIL_CONNECTION__ *a1, struct CCompositor **a2)
{
  __int64 v4; // rax
  CCompositor *v5; // rdi
  CBaseObject *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v5 = (CCompositor *)v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CCompositor::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5;
  if ( v5 )
  {
    v7 = CCompositor::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x22u);
    }
    else
    {
      v8 = 0;
      *a2 = v5;
      v6 = 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x20u);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v8;
}
