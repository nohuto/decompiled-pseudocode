/*
 * XREFs of ?SetController@CSwitchItemElement@@UEAAXPEAUISwitchItemController@@@Z @ 0x1803A19D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSwitchItemElement::SetController(CSwitchItemElement *this, struct ISwitchItemController *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 376);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 47, (__int64)a2);
  v4 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 49))(
    *((_QWORD *)this + 49),
    &GUID_31dacf25_23c9_4be9_a81c_2ac933c44c63,
    &v4);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
