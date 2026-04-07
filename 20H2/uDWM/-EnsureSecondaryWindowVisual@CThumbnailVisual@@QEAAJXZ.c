/*
 * XREFs of ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800087B0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180010F00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BDD4 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180011834 (-_HasBorder@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x180011858 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180012B50 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001FE50 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180021B68 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800279D8 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A918 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180032AE8 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B450 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x1800515F0 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800939F0 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowVisual(CThumbnailVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int inserted; // eax
  int v7; // eax
  CThumbnailVisual *v8; // rcx
  int v9; // ecx
  int v10; // eax
  double v11; // xmm5_8
  double v12; // xmm7_8
  double v13; // xmm9_8
  double v14; // xmm6_8
  __int64 v15; // rcx
  LONG v16; // esi
  LONG v17; // ebp
  CVisual *v18; // rcx
  int v20; // eax
  double v21; // xmm1_8
  double v22; // xmm1_8
  struct CBaseGeometryProxy *v23; // rdx
  int RectangleGeometry; // eax
  int v25; // eax
  struct tagPOINT v26; // [rsp+80h] [rbp+8h] BYREF

  v2 = VisualCollection::RemoveAll((CThumbnailVisual *)((char *)this + 32));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x30Eu);
  }
  else if ( *((_BYTE *)this + 472) )
  {
    v4 = CThumbnailVisual::EnsureSecondaryWindowRepresentation(this, 0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x312u);
    }
    else
    {
      v5 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(*((CSecondaryWindowRepresentation **)this + 47));
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x313u);
      }
      else
      {
        inserted = VisualCollection::InsertRelative(
                     (CThumbnailVisual *)((char *)this + 32),
                     *(struct CVisual **)(*((_QWORD *)this + 47) + 48LL),
                     0LL,
                     0,
                     1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x314u);
        }
        else
        {
          v7 = CSecondaryWindowRepresentation::Validate(*((CSecondaryWindowRepresentation **)this + 47));
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x315u);
          }
          else if ( CThumbnailVisual::_HasBorder(this)
                 && (v20 = CThumbnailVisual::_AddBorderInstructions(v8), v3 = v20, v20 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x318u);
          }
          else
          {
            *((_DWORD *)this + 20) &= ~0x80u;
            v9 = *((_DWORD *)this + 131);
            if ( v9 )
            {
              v10 = *((_DWORD *)this + 132);
              if ( v10 )
              {
                v11 = (double)*((int *)this + 127);
                v12 = v11 / (double)v9;
                v13 = (double)*((int *)this + 128);
                v14 = v13 / (double)v10;
                if ( (*(_DWORD *)(*((_QWORD *)this + 46) + 36LL) & 0x100000) != 0 && *((_BYTE *)this + 474) )
                {
                  v21 = *((double *)this + 60);
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v21 - 0.0) & _xmm) > 0.0000011920929 )
                    v12 = v11 / v21;
                  else
                    v12 = 0.0;
                  v22 = *((double *)this + 61);
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v22 - 0.0) & _xmm) > 0.0000011920929 )
                    v14 = v13 / v22;
                  else
                    v14 = 0.0;
                }
                CVisual::SetScale(*(CVisual **)(*((_QWORD *)this + 47) + 48LL), v12, v14);
                v15 = *((_QWORD *)this + 47);
                v16 = *((_DWORD *)this + 125);
                v17 = *((_DWORD *)this + 126);
                v26.x = v16;
                v18 = *(CVisual **)(v15 + 48);
                v26.y = v17;
                CVisual::SetOffset(v18, &v26);
                if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 34LL) )
                {
                  if ( v12 == 1.0 && v14 == 1.0 )
                    CVisual::ClearInterpolationMode(this);
                  else
                    CVisual::SetInterpolationMode(this, 6LL);
                }
                if ( !*(_BYTE *)(*((_QWORD *)this + 46) + 34LL) )
                {
                  v23 = 0LL;
                  if ( v14 != 0.0 && v12 != 0.0 )
                  {
                    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                          _mm_cvtsi128_si32(*(__m128i *)((char *)this + 532)) - v16,
                                          HIDWORD(*(_QWORD *)((char *)this + 532)) - v17,
                                          (int)((double)(int)*(_QWORD *)((char *)this + 540) / v12 + 0.5),
                                          (int)((double)(int)HIDWORD(*(_OWORD *)((char *)this + 532)) / v14 + 0.5),
                                          (struct CRectangleGeometryProxy **)this + 55);
                    v3 = RectangleGeometry;
                    if ( RectangleGeometry < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x345u);
                      return v3;
                    }
                    v23 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 55);
                  }
                  v25 = CVisualProxy::SetClip(
                          *(CVisualProxy **)(*(_QWORD *)(*((_QWORD *)this + 47) + 48LL) + 16LL),
                          v23);
                  v3 = v25;
                  if ( v25 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x349u);
                }
              }
            }
          }
        }
      }
    }
  }
  return v3;
}
