/*
 * XREFs of ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800CBBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x1800159FC (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?HasProjectedShadowReceivers@CVisual@@QEAA_NXZ @ 0x1800CBC68 (-HasProjectedShadowReceivers@CVisual@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CSpriteVisual::HasNonEmptyContent(CSpriteVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  struct CDropShadow *DropShadow; // rax

  v2 = 0;
  v3 = *((_QWORD *)this + 32);
  if ( v3 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3) )
    return 1;
  if ( CVisual::HasProjectedShadowReceivers(this) )
    return 1;
  if ( (**((_DWORD **)this + 29) & 0x10000) != 0 )
  {
    DropShadow = CSpriteVisual::GetDropShadow(this);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 192LL))(DropShadow) )
      return 1;
  }
  return v2;
}
