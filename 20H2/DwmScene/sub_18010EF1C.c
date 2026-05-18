/*
 * XREFs of sub_18010EF1C @ 0x18010EF1C
 * Callers:
 *     sub_18010EF88 @ 0x18010EF88 (sub_18010EF88.c)
 * Callees:
 *     sub_180111DB8 @ 0x180111DB8 (sub_180111DB8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18010EF1C(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x190uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::TelemetryTraceLoggerWin>::`vftable';
    sub_180111DB8(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
