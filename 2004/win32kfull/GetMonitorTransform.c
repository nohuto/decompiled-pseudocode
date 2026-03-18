/*
 * XREFs of GetMonitorTransform @ 0x1C0023344
 * Callers:
 *     UpdateTopLevelWindowDPITransform @ 0x1C00232D0 (UpdateTopLevelWindowDPITransform.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0052118 (TransformVectorWithInputTargetPrecedence.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 */

__int64 __fastcall GetMonitorTransform(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  unsigned __int16 v7; // di
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rax
  int v11; // r14d
  __int64 result; // rax
  float v13; // xmm4_4
  int v14; // ecx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 288LL);
  v7 = (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8) & 0x1FF;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) & 0xF) == 2 && (v6 & 0x20000000) != 0 )
  {
    if ( !a1 )
      return 0LL;
    v7 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 68LL);
  }
  if ( !a1 )
    return 0LL;
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 448LL);
  if ( !v8 )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 64LL) & 1) == 0 )
    return 0LL;
  v9 = *(_OWORD *)GetMonitorRectForDpiContext(&v15, a1, v6);
  v10 = *(_QWORD *)(a1 + 40);
  v15 = v9;
  v11 = v9;
  if ( *(_WORD *)(v10 + 64) == v7
    && !(unsigned int)IsChildWindowDpiBoundary((struct tagWND *)a2)
    && *(_QWORD *)(*(_QWORD *)(a1 + 40) + 28LL) == (_QWORD)v9 )
  {
    return 0LL;
  }
  v13 = (float)v7;
  v14 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL);
  *(_DWORD *)(a3 + 40) = 1065353216;
  *(_DWORD *)(a3 + 60) = 1065353216;
  *(float *)&v9 = (float)v14 / v13;
  *(_DWORD *)a3 = v9;
  *(_DWORD *)(a3 + 20) = v9;
  result = 1LL;
  *(float *)(a3 + 48) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 28LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL) * (float)v11) / v13);
  *(float *)(a3 + 52) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 32LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL) * (float)SDWORD1(v9))
                              / v13);
  return result;
}
