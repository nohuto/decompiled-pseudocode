/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C01E5490
 * Callers:
 *     <none>
 * Callees:
 *     DCELayerHitTest @ 0x1C002D038 (DCELayerHitTest.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B1E80 (IsWindowUnderActiveLockScreen.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 */

_QWORD *__fastcall DCELogicalSpeedTopLevelHitTest(unsigned __int64 *a1, unsigned int a2)
{
  __int64 v4; // rbx
  _QWORD *i; // rbx
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(_QWORD **)(v4 + 112); i; i = (_QWORD *)i[11] )
  {
    v15 = *a1;
    if ( (*(_BYTE *)(i[5] + 31LL) & 0x10) != 0
      && !(unsigned int)GetWindowCloakState(i)
      && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)i) )
    {
      v7 = i[5];
      v8 = *(_DWORD *)(v7 + 288);
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(v8 >> 8)) & 0x1FF) != 0
        || ((a2 & 0xF) != 2 || (a2 & 0x20000000) == 0 ? (v9 = 0) : (v9 = 1),
            (v8 & 0xF) != 2 || (v8 & 0x20000000) == 0 ? (v10 = 0) : (v10 = 1),
            v9 != v10) )
      {
        LogicalToPhysicalDPIPoint(&v15, &v15, a2, 0LL);
        PhysicalToLogicalDPIPoint(&v15, &v15, *(unsigned int *)(i[5] + 288LL), 0LL);
        v7 = i[5];
      }
      if ( PtInRect((_DWORD *)(v7 + 88), v15) )
      {
        v13 = *(_QWORD *)(v11 + 168);
        if ( v13 )
        {
          if ( !(unsigned int)GrePtInRegion(v13, (unsigned int)v12, HIDWORD(v15)) )
            continue;
          v12 = v15;
        }
        v14 = i[5];
        if ( (*(_BYTE *)(v14 + 26) & 8) == 0 || (*(_DWORD *)(v14 + 232) & 0x20) != 0 || DCELayerHitTest((__int64)i, v12) )
          return i;
      }
    }
  }
  return i;
}
