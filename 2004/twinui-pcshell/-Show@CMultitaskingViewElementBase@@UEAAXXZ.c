/*
 * XREFs of ?Show@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1803A4700
 * Callers:
 *     ?Show@CSwitchItemElement@@UEAAXXZ @ 0x1803A1B50 (-Show@CSwitchItemElement@@UEAAXXZ.c)
 *     ?Show@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1803B68C0 (-Show@SwitchItemThumbnailElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::Show(CMultitaskingViewElementBase *this)
{
  __int64 **v2; // rax
  __int64 *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 72) )
  {
    v2 = (__int64 **)(*(__int64 (__fastcall **)(CMultitaskingViewElementBase *, __int64 *))(*(_QWORD *)this + 384LL))(
                       this,
                       &v10);
    v3 = *v2;
    v4 = **v2;
    v5 = (*(__int64 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 400LL))(this);
    v6 = (*(int (__fastcall **)(__int64 *, _QWORD, CMultitaskingViewElementBase *, char *))(v4 + 40))(v3, v5, this, &v9) < 0
      || v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( v6 )
    {
      v8 = *((_QWORD *)this + 11);
      *((_BYTE *)this + 72) = 1;
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v7, 0LL, 0LL);
    }
  }
}
