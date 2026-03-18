/*
 * XREFs of ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800BE5BC
 * Callers:
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800BE56C (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18017E090 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // r11
  char result; // al
  __int64 v7; // r10
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // r10

  v2 = a1 + 3;
  v3 = a1;
  v4 = (_QWORD *)*a1;
  v5 = a2;
  if ( v4 == v2 )
    return 0;
  v7 = *a2;
  if ( (_QWORD *)*a2 != a2 + 3 )
    return 0;
  v8 = a2[1];
  if ( (unsigned __int64)((v8 - v7) / 224) > 0x10 )
    return 0;
  v9 = v2;
  if ( v7 != v8 )
  {
    do
    {
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v9, v7);
      v9 += 28;
      v7 = v10 + 224;
    }
    while ( v7 != v8 );
    v4 = (_QWORD *)*v3;
  }
  *v5 = v4;
  v5[1] = v3[1];
  v5[2] = v3[2];
  v3[2] = v3 + 451;
  result = 1;
  *v3 = v2;
  v3[1] = v9;
  return result;
}
