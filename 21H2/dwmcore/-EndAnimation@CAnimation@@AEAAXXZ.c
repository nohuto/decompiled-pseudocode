/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800CDD50
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x1800CD510 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800CDB54 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800CDDDC (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (*((_BYTE *)this + 120) & 2) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 9) + 16LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_DWORD *)this + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 72, 16LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
      McTemplateU0x_EventWriteTransfer(v3, &EVTDESC_DCOMPEVENT_END_ANIMATION, this);
    *((_BYTE *)this + 120) |= 2u;
  }
  if ( *((_BYTE *)this + 104) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
