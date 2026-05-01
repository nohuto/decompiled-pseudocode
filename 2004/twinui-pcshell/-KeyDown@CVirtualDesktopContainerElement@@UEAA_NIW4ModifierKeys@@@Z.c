/*
 * XREFs of ?KeyDown@CVirtualDesktopContainerElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1803C0C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVirtualDesktopContainerElement::KeyDown(_QWORD *a1, int a2)
{
  char v2; // di
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  if ( a2 == 39 )
  {
    v4 = 4LL;
LABEL_5:
    (*(void (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _DWORD))(*a1 + 272LL))(a1, &v7, a1[21], v4, 0);
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 288LL))(a1);
      v2 = 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    return v2;
  }
  if ( a2 == 37 )
  {
    v4 = 3LL;
    goto LABEL_5;
  }
  v5 = a1[21];
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 240LL))(v5);
  return v2;
}
