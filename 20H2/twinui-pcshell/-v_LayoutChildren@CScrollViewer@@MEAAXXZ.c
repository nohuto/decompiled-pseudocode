/*
 * XREFs of ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x1803BBE80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18039809C (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_UpdateViewport@CScrollViewer@@AEAAXXZ @ 0x1803BBC0C (-_UpdateViewport@CScrollViewer@@AEAAXXZ.c)
 */

void __fastcall CScrollViewer::v_LayoutChildren(CScrollViewer *this)
{
  int v1; // eax
  __int64 v2; // r10
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  int v8; // [rsp+38h] [rbp-18h] BYREF
  int v9; // [rsp+3Ch] [rbp-14h]
  int v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+44h] [rbp-Ch]

  v1 = *((_DWORD *)this + 14);
  v2 = *((_QWORD *)this + 11);
  v4 = *((_DWORD *)this + 15);
  v8 = v1;
  v9 = v4;
  v10 = v1 + 1;
  v11 = v4 + 1;
  (*(void (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v8, 0LL, 0LL);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((_QWORD *)this + 31, &v7);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v6 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v8 = 0;
  v9 = 0;
  v10 = v6;
  v11 = v5;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 104LL))(v7, &v8);
  CScrollViewer::_UpdateViewport(this);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
}
