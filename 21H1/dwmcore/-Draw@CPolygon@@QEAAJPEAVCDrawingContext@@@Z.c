/*
 * XREFs of ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801FB4B4
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18017A104 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 31);
  v3 = 0;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD))(*(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56)
                                                                                       + 16LL))(
           *(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56,
           a2,
           *((_QWORD *)this + 27) + 132LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1FCu, 0LL);
  }
  return v3;
}
