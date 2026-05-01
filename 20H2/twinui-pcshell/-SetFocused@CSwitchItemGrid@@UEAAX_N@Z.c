/*
 * XREFs of ?SetFocused@CSwitchItemGrid@@UEAAX_N@Z @ 0x1803A7B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1803A3920 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 */

void __fastcall CSwitchItemGrid::SetFocused(CSwitchItemGrid *this, char a2)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) && !*((_QWORD *)this + 21) )
  {
    (*(void (__fastcall **)(CSwitchItemGrid *, __int64 *, _QWORD, __int64, _DWORD))(*(_QWORD *)this + 272LL))(
      this,
      &v3,
      0LL,
      7LL,
      0);
    if ( v3 )
      (*(void (__fastcall **)(CSwitchItemGrid *))(*(_QWORD *)this + 288LL))(this);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  }
}
