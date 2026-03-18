/*
 * XREFs of ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180012F0C
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006C130 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800CA470 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1800E44FC (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x180013000 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UID2D1GeometrySink@@@@YAXAEAPEAUID2D1GeometrySink@@@Z @ 0x1800D0BB4 (--$ReleaseInterface@UID2D1GeometrySink@@@@YAXAEAPEAUID2D1GeometrySink@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PathGeometry@@@@YAXAEAPEAUID2D1PathGeometry@@@Z @ 0x1800D0BF0 (--$ReleaseInterface@UID2D1PathGeometry@@@@YAXAEAPEAUID2D1PathGeometry@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransformedGeometryHelper::GetD2DGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  _QWORD *v6; // rdi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx

  v6 = (_QWORD *)((char *)this + 24);
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*g_DeviceManager + 80LL))(g_DeviceManager, (char *)this + 24);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC8u, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v6 + 136LL))(*v6, (char *)this + 32);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xCAu, 0LL);
    }
    else
    {
      v12 = CTransformedGeometryHelper::FlattenGeometry(this, a2);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xCCu, 0LL);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4));
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCEu, 0LL);
        }
        else
        {
          *a3 = (struct ID2D1Geometry *)*v6;
          *v6 = 0LL;
        }
      }
    }
  }
  ReleaseInterface<ID2D1PathGeometry>((char *)this + 24);
  ReleaseInterface<ID2D1GeometrySink>((char *)this + 32);
  return v9;
}
