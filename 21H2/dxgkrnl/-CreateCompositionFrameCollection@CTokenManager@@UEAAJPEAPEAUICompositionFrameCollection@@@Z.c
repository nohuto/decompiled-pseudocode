/*
 * XREFs of ?CreateCompositionFrameCollection@CTokenManager@@UEAAJPEAPEAUICompositionFrameCollection@@@Z @ 0x1C001F540
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrameCollection(
        CTokenManager *this,
        struct ICompositionFrameCollection **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rax

  v5 = -1073741801;
  v6 = operator new[](0x30uLL, 0x63634D54u, 256LL, a4);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CCompositionFrameCollection::`vftable';
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 24) = v6 + 16;
    v5 = 0;
    *(_QWORD *)(v6 + 16) = v6 + 16;
    *(_BYTE *)(v6 + 40) = 0;
    *a2 = (struct ICompositionFrameCollection *)v6;
  }
  return v5;
}
