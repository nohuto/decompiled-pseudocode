/*
 * XREFs of traceFrame @ 0x1C0172C30
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1C0173688 (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00AC474 (WPP_RECORDER_SF_DD.c)
 *     tracePointerFlags @ 0x1C0172D48 (tracePointerFlags.c)
 */

_UNKNOWN **__fastcall traceFrame(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // ebx
  int v4; // r9d
  _DWORD *v5; // rdi
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 88) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v4 = 44;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v4 = 45;
  }
  result = (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          4,
                          1,
                          v4,
                          (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
LABEL_7:
  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1 + 120) + 52LL);
    do
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          4,
          1,
          46,
          (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
          *((_WORD *)v5 - 22));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v7) = *v5;
          LODWORD(v6) = *(v5 - 1);
          WPP_RECORDER_SF_DD(
            (__int64)gRimLog,
            4u,
            1u,
            0x2Bu,
            (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids,
            v6,
            v7);
        }
      }
      result = (_UNKNOWN **)tracePointerFlags((unsigned int)*(v5 - 6));
      ++v2;
      v5 += 48;
    }
    while ( v2 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
