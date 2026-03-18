/*
 * XREFs of ??1CD2DResource@@MEAA@XZ @ 0x18006A7A4
 * Callers:
 *     ??_GCD2DBrush@@UEAAPEAXI@Z @ 0x18003E0B0 (--_GCD2DBrush@@UEAAPEAXI@Z.c)
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x18006A758 (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??_ECD2DResource@@MEAAPEAXI@Z @ 0x18027C720 (--_ECD2DResource@@MEAAPEAXI@Z.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x18028D2D8 (--1CD2DInk@@MEAA@XZ.c)
 *     ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x18028D6D0 (--_GCD2DGenericInk@@UEAAPEAXI@Z.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x18028DAE0 (--1CD2DEffect@@MEAA@XZ.c)
 * Callees:
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18006AB4C (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CD2DResource::~CD2DResource(CD2DResource *this)
{
  __int64 v2; // rdx
  CD2DResourceManager *v3; // rcx
  CD2DResource **v4; // rdx
  CD2DResource **v5; // r8
  __int64 v6; // rcx

  *(_QWORD *)this = &CD2DResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DResource::`vftable'{for `IDeviceResource'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 72;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 12) = *(_DWORD *)(*((_QWORD *)this + 2) + 8LL) - 88;
  if ( *((_BYTE *)this + 32) )
  {
    v3 = (CD2DResourceManager *)*((_QWORD *)this + 3);
    v4 = (CD2DResource **)*((_QWORD *)this + 5);
    if ( v4[1] != (CD2DResource *)((char *)this + 40)
      || (v5 = (CD2DResource **)*((_QWORD *)this + 6), *v5 != (CD2DResource *)((char *)this + 40)) )
    {
      __fastfail(3u);
    }
    *v5 = (CD2DResource *)v4;
    v4[1] = (CD2DResource *)v5;
    CD2DResourceManager::UnmanageResource(v3, this);
  }
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (*((_QWORD *)this + 9) - v6) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
}
