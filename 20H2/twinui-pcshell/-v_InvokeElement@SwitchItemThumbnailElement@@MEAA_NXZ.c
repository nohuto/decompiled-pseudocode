/*
 * XREFs of ?v_InvokeElement@SwitchItemThumbnailElement@@MEAA_NXZ @ 0x1803B6590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall SwitchItemThumbnailElement::v_InvokeElement(SwitchItemThumbnailElement *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 73);
  if ( v2 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 72));
  return 1;
}
