/*
 * XREFs of ?SetDirtyChildren@UdwmBottomVisual@@UEAAXXZ @ 0x18003ABF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UdwmBottomVisual::SetDirtyChildren(UdwmBottomVisual *this)
{
  __int64 v2; // rcx
  __int64 i; // rbx

  *((_DWORD *)this + 20) |= 1u;
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    for ( i = *(_QWORD *)(*((_QWORD *)this + 30) + 24LL); i; i = *(_QWORD *)(i + 24) )
    {
      if ( (*(_BYTE *)(i + 80) & 1) != 0 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
    }
  }
}
