/*
 * XREFs of ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x18001D350
 * Callers:
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x18001D300 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180005C4C (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  __int64 *v5; // r10
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // rdx

  v2 = a1 + 3;
  v3 = a1;
  v4 = (_QWORD *)*a1;
  v5 = a2;
  if ( v4 == v2 )
    return 0;
  v7 = *a2;
  if ( (__int64 *)v7 != v5 + 3 )
    return 0;
  v8 = v5[1];
  if ( (unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((v8 - v7) >> 5)) > 0x10 )
    return 0;
  v9 = (__int64)v2;
  if ( v7 != v8 )
  {
    do
    {
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v9, v7);
      v9 = v10 + 224;
      v7 = v11 + 224;
    }
    while ( v7 != v8 );
    v4 = (_QWORD *)*v3;
  }
  *v5 = (__int64)v4;
  v5[1] = v3[1];
  v5[2] = v3[2];
  v3[2] = v3 + 451;
  result = 1;
  *v3 = v2;
  v3[1] = v9;
  return result;
}
