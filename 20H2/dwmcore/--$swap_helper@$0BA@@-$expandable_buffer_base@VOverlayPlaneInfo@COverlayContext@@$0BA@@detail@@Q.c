/*
 * XREFs of ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x18003C3F0
 * Callers:
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x18003C3A0 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180179840 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // r11
  char result; // al
  __int64 v8; // r10
  __int64 v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // r10

  v3 = a1 + 3;
  v4 = a1;
  v5 = (_QWORD *)*a1;
  v6 = a2;
  if ( v5 == v3 )
    return 0;
  v8 = *a2;
  if ( (_QWORD *)*a2 != a2 + 3 )
    return 0;
  v9 = a2[1];
  if ( (unsigned __int64)((v9 - v8) / 224) > 0x10 )
    return 0;
  v10 = v3;
  if ( v8 != v9 )
  {
    do
    {
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v10, v8, a3, v4);
      v10 += 28;
      v8 = v11 + 224;
    }
    while ( v8 != v9 );
    v5 = (_QWORD *)*v4;
  }
  *v6 = v5;
  v6[1] = v4[1];
  v6[2] = v4[2];
  v4[2] = v4 + 451;
  result = 1;
  *v4 = v3;
  v4[1] = v10;
  return result;
}
