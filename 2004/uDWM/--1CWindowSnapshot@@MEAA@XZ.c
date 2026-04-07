/*
 * XREFs of ??1CWindowSnapshot@@MEAA@XZ @ 0x18002B258
 * Callers:
 *     ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x18002B430 (--_GCWindowSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GCWindowData@@QEAAPEAXI@Z @ 0x18002AA68 (--_GCWindowData@@QEAAPEAXI@Z.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x18002B3D0 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 */

void __fastcall CWindowSnapshot::~CWindowSnapshot(CWindowSnapshot *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  _DWORD *v9; // rax
  int v10; // r8d
  int v11; // ecx
  unsigned int v12; // eax
  __m128i v13; // xmm0
  int v14; // eax
  float v15; // xmm0_4
  __int64 v16; // rax
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  CBaseObject *v19; // rcx
  CWindowData **v20; // rcx

  *(_QWORD *)this = &CWindowSnapshot::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CWindowSnapshot::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 10);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 11);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (_DWORD *)*((_QWORD *)this + 4);
  if ( v9 )
  {
    v10 = v9[14] - v9[12];
    v11 = v9[15] - v9[13];
    v12 = 0;
    if ( v11 >= 0 )
      v12 = v11;
    v13 = _mm_cvtsi32_si128(v12);
    v14 = 0;
    LODWORD(v15) = _mm_cvtepi32_ps(v13).m128_u32[0];
    if ( v10 >= 0 )
      v14 = v10;
    CDesktopManager::FreeCVIIntoCache(
      (int)(float)((float)v14 * *((float *)this + 18)),
      (int)(float)(v15 * *((float *)this + 18)),
      *((struct CCachedVisualImageProxy **)this + 6));
    v16 = *((_QWORD *)this + 4);
    v17 = *(CBaseObject **)(v16 + 384);
    if ( v17 )
    {
      CBaseObject::Release(v17);
      v16 = *((_QWORD *)this + 4);
    }
    v18 = *(CBaseObject **)(v16 + 368);
    if ( v18 )
    {
      CBaseObject::Release(v18);
      v16 = *((_QWORD *)this + 4);
    }
    *(_BYTE *)(v16 + 609) &= ~0x20u;
  }
  v19 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v19 )
    CBaseObject::Release(v19);
  v20 = (CWindowData **)*((_QWORD *)this + 4);
  if ( v20 )
  {
    CWindowData::`scalar deleting destructor'(v20);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
