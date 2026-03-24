/*
 * XREFs of ??1CCompositionSkyBoxBrush@@UEAA@XZ @ 0x1801BB678
 * Callers:
 *     ??_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z @ 0x1801BB710 (--_GCCompositionSkyBoxBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(CCompositionSkyBoxBrush *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct CResource *v4; // rdx
  struct CResource *v5; // rdx

  *(_QWORD *)this = &CCompositionSkyBoxBrush::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CCompositionSkyBoxBrush::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 72;
  v3 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 88;
  v4 = (struct CResource *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    CResource::UnRegisterNotifierInternal(this, v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  v5 = (struct CResource *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    CResource::UnRegisterNotifierInternal(this, v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  CBrush::~CBrush(this);
}
