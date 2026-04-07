/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800514EC
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180046F24 (-Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x180087CAC (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BDD4 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180021B68 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002A918 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x1800515A8 (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x1800515F0 (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  bool v5; // al
  struct tagPOINT *v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rcx
  int v11; // eax
  struct tagPOINT *v12; // rcx
  struct tagPOINT v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((double *)this + 3) != a2;
  *((double *)this + 3) = a2;
  *((double *)this + 4) = a3;
  *((double *)this + 5) = a4;
  if ( a2 > 1.01 )
  {
    if ( v5 )
    {
      v10 = *((_QWORD *)this + 2);
      if ( v10 )
      {
        v11 = CVisual::SetSamplingMode(v10, *((unsigned int *)this + 12));
        v8 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xA0u);
          return v8;
        }
      }
    }
    CVisual::SetInterpolationMode(*((unsigned int **)this + 2), 1u);
    v12 = (struct tagPOINT *)*((_QWORD *)this + 2);
    v13.x = (int)*((double *)this + 4);
    v13.y = (int)*((double *)this + 5);
    CVisual::SetOffset(v12, &v13);
    CVisual::SetScale(*((CVisual **)this + 2), *((double *)this + 3), *((double *)this + 3));
  }
  else
  {
    CVisual::SetInterpolationMode(*((unsigned int **)this + 2), 0);
    CVisual::ClearInterpolationMode(*((CVisual **)this + 2));
    v6 = (struct tagPOINT *)*((_QWORD *)this + 2);
    v13.x = 0;
    v13.y = 0;
    CVisual::SetOffset(v6, &v13);
    CVisual::SetScale(*((CVisual **)this + 2), 1.0, 1.0);
    CVisual::SetSamplingMode(*((_QWORD *)this + 2), 0LL);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 64LL))(*((_QWORD *)this + 2));
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xD1u);
  return v8;
}
