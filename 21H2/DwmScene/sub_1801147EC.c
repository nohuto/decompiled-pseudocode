/*
 * XREFs of sub_1801147EC @ 0x1801147EC
 * Callers:
 *     sub_180114858 @ 0x180114858 (sub_180114858.c)
 * Callees:
 *     sub_180117688 @ 0x180117688 (sub_180117688.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1801147EC(__int64 a1)
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
    sub_180117688(v2 + 4);
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
