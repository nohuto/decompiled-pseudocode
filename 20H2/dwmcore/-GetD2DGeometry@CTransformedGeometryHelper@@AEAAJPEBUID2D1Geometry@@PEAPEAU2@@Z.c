/*
 * XREFs of ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18025D794
 * Callers:
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x18025D958 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180018F20 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18025D508 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CTransformedGeometryHelper::GetD2DGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  _QWORD *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  v6 = (_QWORD *)((char *)this + 32);
  v7 = (*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)g_DeviceManager + 80LL))(
         g_DeviceManager,
         (char *)this + 32);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xACu, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v6 + 136LL))(*v6, (char *)this + 40);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xAEu, 0LL);
    }
    else
    {
      v12 = CTransformedGeometryHelper::FlattenGeometry((CMILMatrix **)this, a2);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB0u, 0LL);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB2u, 0LL);
        }
        else
        {
          *a3 = (struct ID2D1Geometry *)*v6;
          *v6 = 0LL;
        }
      }
    }
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 4);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 5);
  return v9;
}
