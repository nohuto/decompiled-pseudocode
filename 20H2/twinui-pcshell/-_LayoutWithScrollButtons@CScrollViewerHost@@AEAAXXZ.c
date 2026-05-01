/*
 * XREFs of ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1803A925C
 * Callers:
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x1803A9180 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1803A9540 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18039809C (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1803A91E0 (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall CScrollViewerHost::_LayoutWithScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  LONG v3; // eax
  int v4; // r11d
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int left; // eax
  int v9; // edx
  LONG v10; // edx
  LONG right; // eax
  LONG v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT rc; // [rsp+28h] [rbp-38h] BYREF
  int v20; // [rsp+38h] [rbp-28h] BYREF
  int v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+44h] [rbp-1Ch]
  _DWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+54h] [rbp-Ch]

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2);
    if ( (*((_BYTE *)this + 392) & 2) != 0 )
    {
      v3 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
      rc.right = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      rc.bottom = v3;
      *(_QWORD *)&rc.left = 0LL;
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v20);
      v5 = v20;
      v6 = *((_DWORD *)this + 66);
      if ( v20 <= v6 + *((_DWORD *)this + 61) )
        v5 = v6 + *((_DWORD *)this + 61);
      v7 = *((_DWORD *)this + 62);
      v20 = v5;
      if ( v21 >= v4 - v7 - v6 )
        v21 = v4 - v7 - v6;
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((_QWORD *)this + 56, &v18);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 104LL))(v18, &v20);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v23);
      left = rc.left;
      v9 = *((_DWORD *)this + 66);
      if ( rc.left <= v23[0] - v9 - *((_DWORD *)this + 61) )
        left = v23[0] - v9 - *((_DWORD *)this + 61);
      v10 = v23[2] + *((_DWORD *)this + 62) + v9;
      rc.left = left;
      right = rc.right;
      if ( rc.right >= v10 )
        right = v10;
      rc.right = right;
    }
    else
    {
      v12 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
      rc.bottom = *((_DWORD *)this + 17) - *((_DWORD *)this + 64) - *((_DWORD *)this + 15);
      rc.top = rc.bottom - *((_DWORD *)this + 67);
      v13 = *((_DWORD *)this + 66);
      rc.right = v12;
      rc.left = 0;
      InflateRect(&rc, (v12 - 2 * v13 - *((_DWORD *)this + 65)) / -2, 0);
      CScrollViewerHost::_GetIdealChildLocation((__int64)this, &v20);
      v14 = v22;
      v15 = rc.top - *((_DWORD *)this + 63);
      v18 = 0LL;
      if ( v22 >= v15 )
        v14 = v15;
      v22 = v14;
      Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((_QWORD *)this + 56, &v18);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 104LL))(v18, &v20);
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 56) + 88LL))(*((_QWORD *)this + 56), v23);
      v16 = *((_DWORD *)this + 63);
      if ( rc.top - v24 > v16 )
      {
        v17 = v24 + v16 - rc.top;
        rc.bottom += v17;
        rc.top += v17;
      }
    }
    (*(void (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 57) + 104LL))(*((_QWORD *)this + 57), &rc);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
}
