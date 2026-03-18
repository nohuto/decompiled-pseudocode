/*
 * XREFs of ResFwConfigureDisplayStringResources @ 0x1409EE56C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpTxtRegionSize @ 0x140398F58 (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x1409F00D4 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1409F034C (BgpFoGetFontHandle.c)
 */

__int64 __fastcall ResFwConfigureDisplayStringResources(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+34h] [rbp-1Ch]
  __int64 v6; // [rsp+38h] [rbp-18h]
  int v7; // [rsp+40h] [rbp-10h]
  int v8; // [rsp+44h] [rbp-Ch]
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF

  v9 = 0LL;
  v6 = 0LL;
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 1) == 0 || (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  if ( (_BYTE)qword_140C13490 )
  {
    v4 = HIDWORD(qword_140C13490);
    v5 = dword_140C13498;
  }
  else
  {
    v4 = 0;
    v5 = -1;
  }
  v2 = *(_DWORD *)(a1 + 20);
  v8 = 0;
  v7 = v2;
  if ( (int)BgpTxtCreateRegion(a1, (int)a1 + 8, (unsigned int)&v4, (unsigned int)&v9, 0) < 0 )
    return 0LL;
  dword_140C1333C = BgpTxtRegionSize(v9);
  return v9;
}
