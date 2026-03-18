/*
 * XREFs of ?Initialize@CDirtyRegion@@IEAAX_N@Z @ 0x1800A5860
 * Callers:
 *     ?BeginPreCompute@CVisualTree@@QEAAXXZ @ 0x18008DA94 (-BeginPreCompute@CVisualTree@@QEAAXXZ.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

void __fastcall CDirtyRegion::Initialize(CDirtyRegion *this, char a2)
{
  __int64 v4; // rax
  _QWORD **v5; // rdi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  *((_OWORD *)this + 98) = 0LL;
  *((_OWORD *)this + 99) = 0LL;
  *((_OWORD *)this + 100) = 0LL;
  *((_OWORD *)this + 101) = 0LL;
  *((_OWORD *)this + 102) = 0LL;
  *((_OWORD *)this + 103) = 0LL;
  *((_OWORD *)this + 104) = 0LL;
  *((_OWORD *)this + 105) = 0LL;
  memset_0((char *)this + 2080, 0, 0x120uLL);
  v4 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 1105) = 1065353216;
  *(_WORD *)((char *)this + 4425) = 0;
  *((_DWORD *)this + 1100) = 0;
  *((_DWORD *)this + 705) = 0;
  *((_WORD *)this + 2214) = 0;
  *((_BYTE *)this + 4424) = a2;
  *(_OWORD *)((char *)this + 4404) = *(_OWORD *)(v4 + 4592);
  if ( *((_BYTE *)this + 4427) )
  {
    if ( a2 )
      goto LABEL_7;
    *((_BYTE *)this + 4427) = 0;
  }
  *((_QWORD *)this + 229) = (char *)this + 1824;
  v5 = (_QWORD **)((char *)this + 2824);
  *((_QWORD *)this + 228) = (char *)this + 1824;
  *((_QWORD *)this + 231) = (char *)this + 1840;
  *((_QWORD *)this + 230) = (char *)this + 1840;
  *((_QWORD *)this + 233) = (char *)this + 1856;
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
  v6 = *((_QWORD *)this + 354);
  if ( *(CDirtyRegion **)v6 != (CDirtyRegion *)((char *)this + 2824) || (v7 = *(_QWORD **)(v6 + 8), *v7 != v6) )
LABEL_11:
    __fastfail(3u);
  *((_QWORD *)this + 354) = v7;
  *v7 = v5;
  while ( 1 )
  {
    v8 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v8[1] != v5 )
      goto LABEL_11;
    v9 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_11;
    *v5 = v9;
    v9[1] = v5;
    operator delete(v8, 0x610uLL);
  }
  *((_QWORD *)this + 355) = (char *)this + 2824;
  *((_QWORD *)this + 356) = (char *)this + 2824;
  *((_QWORD *)this + 354) = (char *)this + 2840;
  *((_QWORD *)this + 353) = (char *)this + 2840;
  *((_DWORD *)this + 1098) = 0;
LABEL_7:
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 212) = 0LL;
  *(_QWORD *)((char *)this + 1956) = 0LL;
  *((_DWORD *)this + 488) = 0;
  *((_BYTE *)this + 1964) = 1;
  *((_QWORD *)this + 197) = 0LL;
  *((_QWORD *)this + 196) = 0LL;
  *((_QWORD *)this + 215) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_BYTE *)this + 1980) = 1;
  *(_QWORD *)((char *)this + 1972) = 0LL;
  *((_DWORD *)this + 492) = 0;
  *((_QWORD *)this + 199) = 0LL;
  *((_QWORD *)this + 198) = 0LL;
  *((_QWORD *)this + 217) = 0LL;
  *((_QWORD *)this + 216) = 0LL;
  *((_BYTE *)this + 1996) = 1;
  *(_QWORD *)((char *)this + 1988) = 0LL;
  *((_DWORD *)this + 496) = 0;
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
}
