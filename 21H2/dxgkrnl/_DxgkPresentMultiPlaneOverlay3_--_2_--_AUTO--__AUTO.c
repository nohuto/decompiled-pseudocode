/*
 * XREFs of _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C0318984
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(__int64 a1)
{
  void *v2; // rcx
  unsigned int v3; // edi

  operator delete[](*(void **)a1);
  operator delete[](*(void **)(a1 + 8));
  operator delete[](*(void **)(a1 + 16));
  v2 = *(void **)(a1 + 24);
  v3 = 0;
  if ( v2 && *(_DWORD *)(a1 + 64) )
  {
    do
      operator delete[](*(void **)(*(_QWORD *)(a1 + 24) + 8LL * v3++));
    while ( v3 < *(_DWORD *)(a1 + 64) );
    v2 = *(void **)(a1 + 24);
  }
  operator delete[](v2);
  operator delete[](*(void **)(a1 + 32));
  operator delete[](*(void **)(a1 + 40));
  operator delete[](*(void **)(a1 + 48));
  operator delete(*(void **)(a1 + 56));
}
