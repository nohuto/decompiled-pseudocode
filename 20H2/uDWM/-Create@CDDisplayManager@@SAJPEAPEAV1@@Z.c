/*
 * XREFs of ?Create@CDDisplayManager@@SAJPEAPEAV1@@Z @ 0x180087328
 * Callers:
 *     ?EnsureDDisplay@CDesktopManager@@AEAAJXZ @ 0x180086058 (-EnsureDDisplay@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CDDisplayManager@@AEAAJXZ @ 0x180087400 (-Initialize@CDDisplayManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDDisplayManager::Create(struct CDDisplayManager **a1)
{
  __int64 v2; // rax
  CDDisplayManager *v3; // rdi
  CBaseObject *v4; // rbx
  unsigned int v5; // esi
  int v6; // eax

  v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v3 = (CDDisplayManager *)v2;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)v2 = &CDDisplayManager::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v4 = v3;
  if ( v3 )
  {
    v6 = CDDisplayManager::Initialize(v3);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v4 = 0LL;
      *a1 = v3;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x11u);
    }
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x10u);
  }
  return v5;
}
