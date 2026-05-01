/*
 * XREFs of ?GetRectInternal@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z @ 0x18017D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180150574 (-ResultFromKnownLastError@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetRectInternal(CImmersiveApp *this, struct tagRECT *a2)
{
  signed int Error; // esi
  __int64 (__fastcall *v5)(CImmersiveApp *, __int64 *); // rbx
  int v6; // edi
  LONG top; // ebx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-20h] BYREF

  SetRectEmpty(a2);
  rcDst = 0LL;
  if ( *((_BYTE *)this + 624) )
  {
    Error = -2147019873;
  }
  else
  {
    Error = 0;
    CopyRect(&rcDst, (const RECT *)((char *)this + 200));
  }
  Rect = 0LL;
  if ( Error >= 0 )
  {
    v9 = 0LL;
    v5 = *(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 496LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    Error = v5(this, &v9);
    if ( Error >= 0 )
    {
      Error = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v9 + 24LL))(v9, &hWnd);
      if ( Error >= 0 )
      {
        if ( GetWindowRect(hWnd, &Rect) )
          Error = 0;
        else
          Error = ResultFromKnownLastError();
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( Error >= 0 )
    {
      v6 = Rect.left + (Rect.right + rcDst.left - rcDst.right - Rect.left) / 2;
      top = Rect.top;
      CopyRect(a2, &rcDst);
      OffsetRect(a2, v6, top);
    }
  }
  return (unsigned int)Error;
}
