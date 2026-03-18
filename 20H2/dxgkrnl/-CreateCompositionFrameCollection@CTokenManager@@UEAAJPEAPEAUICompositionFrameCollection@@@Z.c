/*
 * XREFs of ?CreateCompositionFrameCollection@CTokenManager@@UEAAJPEAPEAUICompositionFrameCollection@@@Z @ 0x1C000DA00
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrameCollection(
        CTokenManager *this,
        struct ICompositionFrameCollection **a2)
{
  unsigned int v3; // ebx
  struct ICompositionFrameCollection *v4; // rax
  struct ICompositionFrameCollection *v5; // rcx

  v3 = -1073741801;
  v4 = (struct ICompositionFrameCollection *)operator new[](0x30uLL, 0x63634D54u, PagedPool);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *(_QWORD *)v4 = &CCompositionFrameCollection::`vftable';
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 3) = (char *)v4 + 16;
    *((_QWORD *)v4 + 2) = (char *)v4 + 16;
    *((_BYTE *)v4 + 40) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v3 = 0;
    *a2 = v5;
  }
  return v3;
}
