/*
 * XREFs of ?SetDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x18001883C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 *     ?AppendDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV?$span@$$CBUtagRECT@@$0?0@gsl@@@Z @ 0x18019FC3C (-AppendDirtyRectangles@CGdiSpriteBitmap@@QEAAJAEBV-$span@$$CBUtagRECT@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180081D5C (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGdiSpriteBitmap::SetDirtyRectangles(CGdiSpriteBitmap *this, __int64 a2)
{
  unsigned int v3; // r8d
  const struct tagRECT *v4; // rdx
  int v5; // eax
  int *v7; // [rsp+20h] [rbp-68h] BYREF
  int v8; // [rsp+28h] [rbp-60h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)a2;
    v4 = *(const struct tagRECT **)(a2 + 8);
    v8 = 0;
    v7 = &v8;
    v5 = CRegion::TryAddRectangles((CRegion *)&v7, v4, v3);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v7, 1);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v7);
  }
  return 0LL;
}
