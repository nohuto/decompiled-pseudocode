/*
 * XREFs of sub_1800CFCC4 @ 0x1800CFCC4
 * Callers:
 *     sub_1800CF5D0 @ 0x1800CF5D0 (sub_1800CF5D0.c)
 *     sub_1800CF63C @ 0x1800CF63C (sub_1800CF63C.c)
 *     sub_180104394 @ 0x180104394 (sub_180104394.c)
 *     sub_1801043B8 @ 0x1801043B8 (sub_1801043B8.c)
 * Callees:
 *     sub_1800DBA24 @ 0x1800DBA24 (sub_1800DBA24.c)
 *     sub_1801168D0 @ 0x1801168D0 (sub_1801168D0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void **__fastcall sub_1800CFCC4(__int64 *a1)
{
  void **result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  sub_1800DBA24(a1 + 31);
  sub_1800DBA24(a1 + 8);
  sub_1801168D0(a1 + 5);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  a1[4] = (__int64)&Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  v3 = a1[3];
  if ( v3 >= 0x10 )
  {
    v4 = *a1;
    v5 = v3 + 1;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x1800CFD48LL);
      }
      v4 = v6;
    }
    result = (void **)j_j__o_free(v4);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
