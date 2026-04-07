/*
 * XREFs of ?SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z @ 0x1800BAE40
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x1800282D8 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UdwmBottomVisual::SetDirtyFlags(UdwmBottomVisual *this, int a2)
{
  __int64 v3; // rcx

  if ( (a2 & *((_DWORD *)this + 20)) != a2 )
  {
    *((_DWORD *)this + 20) |= a2;
    v3 = *((_QWORD *)this + 30);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      CVisual::PropagateDirtyChildren(*((CVisual **)this + 30));
    }
  }
}
