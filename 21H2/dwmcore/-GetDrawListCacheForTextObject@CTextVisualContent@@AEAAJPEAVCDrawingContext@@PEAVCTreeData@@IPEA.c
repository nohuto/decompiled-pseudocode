/*
 * XREFs of ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18025CC98
 * Callers:
 *     ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C850 (-Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800C8140 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall CTextVisualContent::GetDrawListCacheForTextObject(
        CTextVisualContent *this,
        const struct IDeviceTarget **a2,
        struct CTreeData *a3,
        int a4,
        struct CDrawListCache **a5)
{
  struct CDrawListCache *v5; // r10
  int Cache; // eax
  unsigned int v7; // ebx
  volatile signed __int32 *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CDrawListCache *v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v11 = 0LL;
  if ( *((_BYTE *)a2 + 8043) )
  {
    Cache = CDrawListCacheSet::GetCache((struct CTreeData *)((char *)a3 + 16), 3, a4, a2[4], &v11);
    v7 = Cache;
    if ( Cache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
        (const char *)(unsigned int)Cache);
      v8 = (volatile signed __int32 *)v11;
      goto LABEL_6;
    }
    v5 = v11;
  }
  v8 = 0LL;
  v7 = 0;
  *a5 = v5;
LABEL_6:
  if ( v8 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v8);
  return v7;
}
