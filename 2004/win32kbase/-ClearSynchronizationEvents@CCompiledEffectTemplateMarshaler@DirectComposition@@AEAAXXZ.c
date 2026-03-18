/*
 * XREFs of ?ClearSynchronizationEvents@CCompiledEffectTemplateMarshaler@DirectComposition@@AEAAXXZ @ 0x1C0053A58
 * Callers:
 *     ?ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0053A20 (-ReleaseAllReferences@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAXPEAVCApplicationC.c)
 *     ?SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C01EAE20 (-SetRemarshalingFlags@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00A8B74 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::ClearSynchronizationEvents(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        unsigned int a2)
{
  DirectComposition::CEvent *v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // edx
  DirectComposition::CEvent *v6; // rcx

  v3 = (DirectComposition::CEvent *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 12) = 0LL;
  }
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    v6 = (DirectComposition::CEvent *)*((_QWORD *)this + 11);
    if ( v6 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v5);
    *((_QWORD *)this + 11) = 0LL;
  }
}
