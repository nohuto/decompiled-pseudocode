/*
 * XREFs of ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x180090270
 * Callers:
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18008F4E8 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?CleanTree@CVisualTree@@UEAAJXZ @ 0x180090720 (-CleanTree@CVisualTree@@UEAAJXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D5F10 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 */

void __fastcall CDirtyRegion::Initialize(CDirtyRegion *this, char a2)
{
  _DWORD *v4; // rcx
  int v5; // edx
  _QWORD **v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax

  memset_0((char *)this + 1600, 0, 0x80uLL);
  memset_0((char *)this + 2112, 0, 0x120uLL);
  v4 = *(_DWORD **)this;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 1113) = 1065353216;
  *(_WORD *)((char *)this + 4457) = 0;
  *((_DWORD *)this + 1108) = 0;
  *((_DWORD *)this + 713) = 0;
  *((_WORD *)this + 2230) = 0;
  *((_BYTE *)this + 4456) = a2;
  v5 = v4[1446];
  if ( (v5 > (int)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcInfinite
     || v4[1448] < SDWORD2(TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcInfinite))
    && (v4[1447] > SDWORD1(TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcInfinite)
     || v4[1449] < SHIDWORD(TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcInfinite)) )
  {
    *((float *)this + 1109) = (float)v5;
    *((float *)this + 1110) = (float)(int)v4[1447];
    *((float *)this + 1111) = (float)(int)v4[1448];
    *((float *)this + 1112) = (float)(int)v4[1449];
  }
  else
  {
    *(_OWORD *)((char *)this + 4436) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( *((_BYTE *)this + 4459) )
  {
    if ( a2 )
      goto LABEL_10;
    *((_BYTE *)this + 4459) = 0;
  }
  *((_QWORD *)this + 233) = (char *)this + 1856;
  v6 = (_QWORD **)((char *)this + 2856);
  *((_QWORD *)this + 232) = (char *)this + 1856;
  *((_QWORD *)this + 235) = (char *)this + 1872;
  *((_QWORD *)this + 234) = (char *)this + 1872;
  *((_QWORD *)this + 237) = (char *)this + 1888;
  *((_QWORD *)this + 236) = (char *)this + 1888;
  *((_QWORD *)this + 239) = (char *)this + 1904;
  *((_QWORD *)this + 238) = (char *)this + 1904;
  *((_QWORD *)this + 241) = (char *)this + 1920;
  *((_QWORD *)this + 240) = (char *)this + 1920;
  *((_QWORD *)this + 243) = (char *)this + 1936;
  *((_QWORD *)this + 242) = (char *)this + 1936;
  *((_QWORD *)this + 245) = (char *)this + 1952;
  *((_QWORD *)this + 244) = (char *)this + 1952;
  *((_QWORD *)this + 247) = (char *)this + 1968;
  *((_QWORD *)this + 246) = (char *)this + 1968;
  v7 = *((_QWORD *)this + 358);
  if ( *(CDirtyRegion **)v7 != (CDirtyRegion *)((char *)this + 2856) || (v8 = *(_QWORD **)(v7 + 8), *v8 != v7) )
LABEL_16:
    __fastfail(3u);
  *((_QWORD *)this + 358) = v8;
  *v8 = v6;
  while ( 1 )
  {
    v9 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v9[1] != v6 )
      goto LABEL_16;
    v10 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_16;
    *v6 = v10;
    v10[1] = v6;
    operator delete(v9);
  }
  *((_QWORD *)this + 359) = (char *)this + 2856;
  *((_QWORD *)this + 360) = (char *)this + 2856;
  *((_QWORD *)this + 358) = (char *)this + 2872;
  *((_QWORD *)this + 357) = (char *)this + 2872;
  *((_DWORD *)this + 1106) = 0;
LABEL_10:
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 216) = 0LL;
  *(_QWORD *)((char *)this + 1988) = 0LL;
  *((_DWORD *)this + 496) = 0;
  *((_BYTE *)this + 1996) = 1;
  *((_QWORD *)this + 201) = 0LL;
  *((_QWORD *)this + 200) = 0LL;
  *((_QWORD *)this + 219) = 0LL;
  *((_QWORD *)this + 218) = 0LL;
  *((_BYTE *)this + 2012) = 1;
  *(_QWORD *)((char *)this + 2004) = 0LL;
  *((_DWORD *)this + 500) = 0;
  *((_QWORD *)this + 203) = 0LL;
  *((_QWORD *)this + 202) = 0LL;
  *((_QWORD *)this + 221) = 0LL;
  *((_QWORD *)this + 220) = 0LL;
  *((_BYTE *)this + 2028) = 1;
  *(_QWORD *)((char *)this + 2020) = 0LL;
  *((_DWORD *)this + 504) = 0;
  *((_QWORD *)this + 205) = 0LL;
  *((_QWORD *)this + 204) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  *((_QWORD *)this + 222) = 0LL;
  *((_BYTE *)this + 2044) = 1;
  *(_QWORD *)((char *)this + 2036) = 0LL;
  *((_DWORD *)this + 508) = 0;
  *((_QWORD *)this + 207) = 0LL;
  *((_QWORD *)this + 206) = 0LL;
  *((_QWORD *)this + 225) = 0LL;
  *((_QWORD *)this + 224) = 0LL;
  *((_BYTE *)this + 2060) = 1;
  *(_QWORD *)((char *)this + 2052) = 0LL;
  *((_DWORD *)this + 512) = 0;
  *((_QWORD *)this + 209) = 0LL;
  *((_QWORD *)this + 208) = 0LL;
  *((_QWORD *)this + 227) = 0LL;
  *((_QWORD *)this + 226) = 0LL;
  *((_BYTE *)this + 2076) = 1;
  *(_QWORD *)((char *)this + 2068) = 0LL;
  *((_DWORD *)this + 516) = 0;
  *((_QWORD *)this + 211) = 0LL;
  *((_QWORD *)this + 210) = 0LL;
  *((_QWORD *)this + 229) = 0LL;
  *((_QWORD *)this + 228) = 0LL;
  *((_BYTE *)this + 2092) = 1;
  *(_QWORD *)((char *)this + 2084) = 0LL;
  *((_DWORD *)this + 520) = 0;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 212) = 0LL;
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 230) = 0LL;
  *((_BYTE *)this + 2108) = 1;
  *(_QWORD *)((char *)this + 2100) = 0LL;
  *((_DWORD *)this + 524) = 0;
  *((_QWORD *)this + 215) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
}
