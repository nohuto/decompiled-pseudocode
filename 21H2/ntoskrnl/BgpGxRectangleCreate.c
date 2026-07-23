/*
 * XREFs of BgpGxRectangleCreate @ 0x1409F42C0
 * Callers:
 *     BgpGxConvertRectangleEx @ 0x14039C5BC (BgpGxConvertRectangleEx.c)
 *     BgpGxParseBitmap @ 0x1409F2880 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1409F29D0 (BgpGxReadRectangle.c)
 *     AnFwDisplayFade @ 0x1409F2C00 (AnFwDisplayFade.c)
 *     BgpGxFindSubRectangle @ 0x1409F32B4 (BgpGxFindSubRectangle.c)
 *     BgpTxtCreateRegion @ 0x1409F40D4 (BgpTxtCreateRegion.c)
 *     BgpGxBlendRectangle @ 0x1409F83F0 (BgpGxBlendRectangle.c)
 *     BgpTxtDisplayString @ 0x1409F8784 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14039C6D4 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x14039C84C (GxpBitsToBytes.c)
 */

__int64 __fastcall BgpGxRectangleCreate(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 Memory; // rax

  v4 = 0;
  v7 = GxpBitsToBytes(a1[1] * a2 * *a1);
  Memory = BgpFwAllocateMemory((unsigned int)(v7 + 72));
  if ( Memory )
  {
    *(_DWORD *)Memory = a1[1];
    *(_DWORD *)(Memory + 4) = *a1;
    *(_QWORD *)(Memory + 24) = Memory + 72;
    *(_DWORD *)(Memory + 8) = a2;
    *(_DWORD *)(Memory + 16) = 0;
    *(_DWORD *)(Memory + 12) = v7;
    *a3 = Memory;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
