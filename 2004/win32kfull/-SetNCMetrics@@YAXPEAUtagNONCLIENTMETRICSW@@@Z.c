/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C000CFF0
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C000B32C (xxxSetWindowNCMetrics.c)
 * Callees:
 *     UpdateDesktopThresholds @ 0x1C000D850 (UpdateDesktopThresholds.c)
 *     bSetDevDragWidth @ 0x1C000DCC4 (bSetDevDragWidth.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  INT v2; // r13d
  __int64 v3; // rsi
  __int64 v4; // r15
  int v5; // ebx
  INT v6; // ebx
  INT v7; // edx
  int v8; // edi
  INT v9; // edx
  INT v10; // edi
  INT v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // ecx
  int v16; // edi
  int v17; // esi

  SetDpiDepSysMet(0LL);
  SetDpiDepSysMet(1LL);
  SetDpiDepSysMet(10LL);
  SetDpiDepSysMet(11LL);
  SetDpiDepSysMet(3LL);
  SetDpiDepSysMet(4LL);
  SetDpiDepSysMet(12LL);
  SetDpiDepSysMet(13LL);
  SetDpiDepSysMet(2LL);
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL);
  SetDpiDepSysMet(20LL);
  SetDpiDepSysMet(21LL);
  SetDpiDepSysMet(20LL);
  SetDpiDepSysMet(21LL);
  SetDpiDepSysMet(23LL);
  SetDpiDepSysMet(24LL);
  SetDpiDepSysMet(22LL);
  SetDpiDepSysMet(25LL);
  SetDpiDepSysMet(26LL);
  SetDpiDepSysMet(9LL);
  v2 = *((_DWORD *)a1 + 1);
  *(_DWORD *)(GetSessionDpiServerInfo() + 4) = v2;
  SetDpiDepSysMet(14LL);
  SetDpiDepSysMet(15LL);
  v3 = Get96DpiMetrics();
  v4 = Get96DpiServerInfo();
  v5 = *(_DWORD *)(v4 + 20) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v5 )
    v5 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2456LL) = v5;
  v6 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v7 = 8;
  else
    v7 = EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2452LL) = v7;
  v8 = *(_DWORD *)(v3 + 44) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v8 )
    v8 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2500LL) = v8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v9 = 8;
  else
    v9 = EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2496LL) = v9;
  v10 = *(_DWORD *)(v3 + 28);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v10 )
    v10 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2508LL) = v10;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > 8 )
    v6 = EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2504LL) = v6;
  *(_DWORD *)(gpsi + 2440LL) = *(_DWORD *)(gpsi + 2508LL) + 1;
  *(_DWORD *)(gpsi + 2412LL) = *(_DWORD *)(gpsi + 2456LL) + 1;
  *(_DWORD *)(gpsi + 2492LL) = *(_DWORD *)(gpsi + 2500LL) + 1;
  *(_DWORD *)(gpsi + 2520LL) = EngMulDiv(*(_DWORD *)(gpsi + 2400LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2448LL) = EngMulDiv(*(_DWORD *)(gpsi + 2328LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2420LL) = EngMulDiv(*(_DWORD *)(gpsi + 2300LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2404LL) = EngMulDiv(*(_DWORD *)(gpsi + 2284LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2408LL) = EngMulDiv(*(_DWORD *)(gpsi + 2288LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2444LL) = EngMulDiv(*(_DWORD *)(gpsi + 2324LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2416LL) = EngMulDiv(*(_DWORD *)(gpsi + 2296LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v11 = EngMulDiv(v2, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v12 = Get96DpiServerInfo();
  v13 = 2460LL;
  *(_DWORD *)(v12 + 4) = v11;
  v14 = v11 + 3;
  do
  {
    *(_DWORD *)(v13 + gpsi) = v14;
    v13 += 4LL;
  }
  while ( v13 < 2468 );
  v15 = *(_DWORD *)(gpsi + 2520LL);
  v16 = v15 + *(_DWORD *)(gpsi + 2460LL);
  v17 = v15 + *(_DWORD *)(gpsi + 2464LL);
  SetDpiDepSysMet(16LL);
  SetDpiDepSysMet(17LL);
  *(_DWORD *)(gpsi + 2468LL) = *(_DWORD *)(gpsi + 2456LL)
                             + 3 * *(_DWORD *)(gpsi + 2452LL)
                             + 2 * (v16 + 2 + 2 * *(_DWORD *)(v4 + 16));
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 2412LL) + 2 * v17;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)(*((_DWORD *)a1 + 1) + 3));
  UpdateDesktopThresholds();
}
