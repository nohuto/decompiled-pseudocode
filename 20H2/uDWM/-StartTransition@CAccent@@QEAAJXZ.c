/*
 * XREFs of ?StartTransition@CAccent@@QEAAJXZ @ 0x180004A24
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x1800285D0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180004A8C (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?_IsAnimationNeeded@CAccent@@IEAA_NXZ @ 0x180004EAC (-_IsAnimationNeeded@CAccent@@IEAA_NXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000CC44 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000CED4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800B5294 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 */

__int64 __fastcall CAccent::StartTransition(CAccent *this)
{
  int updated; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  int started; // eax
  __int64 v9; // rcx

  updated = CAccent::_UpdateResources(this);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x3A7u);
    goto LABEL_14;
  }
  if ( !CAccent::s_IsPolicyActive((CAccent *)((char *)this + 296)) || !CAccent::_IsAnimationNeeded(this) )
  {
    v4 = CAccent::EndTransition(this);
    v3 = v4;
    if ( v4 >= 0 )
      return v3;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3B9u);
    goto LABEL_14;
  }
  v6 = *((_QWORD *)this + 48);
  if ( v6 )
    CBaseObject::Release((CBaseObject *)(v6 + 8));
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         40LL);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 36) = -1;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)v7 = &CAccentTransition::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v7 + 8) = &CAccentTransition::`vftable'{for `CBaseObject'};
    *(_DWORD *)(v7 + 16) = 1;
  }
  *((_QWORD *)this + 48) = v7;
  started = CAccentTransition::StartAnimation((CAccentTransition *)v7, (CAccent *)((char *)this + 296), this);
  v3 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x3B4u);
LABEL_14:
    v9 = *((_QWORD *)this + 48);
    if ( v9 )
    {
      CBaseObject::Release((CBaseObject *)(v9 + 8));
      *((_QWORD *)this + 48) = 0LL;
    }
  }
  return v3;
}
