/*
 * XREFs of ?SetNCMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z @ 0xDB0A6
 * Callers:
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 * Callees:
 *     _UpdateDesktopThresholds@0 @ 0xA5498 (_UpdateDesktopThresholds@0.c)
 *     _bSetDevDragWidth@8 @ 0xDB5E6 (_bSetDevDragWidth@8.c)
 */

void __thiscall SetNCMetrics(_DWORD *this)
{
  int v2; // ecx
  int v3; // kr00_4
  int v4; // ecx
  int v5; // kr04_4
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  INT v9; // edi
  INT v10; // edx
  int v11; // ebx
  INT v12; // edx
  INT v13; // ebx
  INT v14; // esi
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  int v18; // edi
  int v20; // [esp+10h] [ebp-10h]
  int SessionDpiServerInfo; // [esp+14h] [ebp-Ch]
  INT a; // [esp+18h] [ebp-8h]
  INT aa; // [esp+18h] [ebp-8h]
  int v24; // [esp+1Ch] [ebp-4h]

  SetDpiDepSysMet(0, this[2]);
  SetDpiDepSysMet(1, this[2]);
  SetDpiDepSysMet(10, this[3]);
  SetDpiDepSysMet(11, this[3]);
  SetDpiDepSysMet(3, this[3]);
  SetDpiDepSysMet(4, this[3]);
  SetDpiDepSysMet(12, this[4]);
  SetDpiDepSysMet(13, this[5]);
  SetDpiDepSysMet(2, *(_DWORD *)(_gpsi + 1936) + 1);
  if ( *this == 504 )
    SetDpiDepSysMet(29, this[125]);
  v2 = *(_DWORD *)(_gpsi + 1932) - 2;
  v3 = *(_DWORD *)(_gpsi + 1904);
  if ( v2 >= v3 / 2 )
    v2 = v3 / 2;
  SetDpiDepSysMet(20, v2 & 0xFFFFFFFE);
  v4 = *(_DWORD *)(_gpsi + 1936) - 2;
  v5 = *(_DWORD *)(_gpsi + 1908);
  if ( v4 >= v5 / 2 )
    v4 = v5 / 2;
  SetDpiDepSysMet(21, v4 & 0xFFFFFFFE);
  v6 = *(_DWORD *)(_gpsi + 1964);
  if ( v6 >= *(_DWORD *)(_gpsi + 1968) )
    v6 = *(_DWORD *)(_gpsi + 1968);
  SetDpiDepSysMet(20, v6);
  SetDpiDepSysMet(21, v6);
  SetDpiDepSysMet(23, this[29]);
  SetDpiDepSysMet(24, this[30]);
  SetDpiDepSysMet(22, *(_DWORD *)(_gpsi + 1980) + 1);
  SetDpiDepSysMet(25, this[54]);
  SetDpiDepSysMet(26, this[55]);
  SetDpiDepSysMet(9, *(_DWORD *)(_gpsi + 1988) + 1);
  a = this[1];
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 4) = a;
  SetDpiDepSysMet(14, a + 3);
  SetDpiDepSysMet(15, a + 3);
  v7 = Get96DpiMetrics();
  v24 = v7;
  v20 = Get96DpiServerInfo();
  v8 = *(_DWORD *)(v20 + 16) + 2;
  if ( EngMulDiv(*(_DWORD *)(_gpsi + 1936), 96, *(unsigned __int16 *)(_gpsi + 6242)) > v8 )
    v8 = EngMulDiv(*(_DWORD *)(_gpsi + 1936), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2056) = v8;
  v9 = 8;
  if ( EngMulDiv(*(_DWORD *)(_gpsi + 1932), 96, *(unsigned __int16 *)(_gpsi + 6242)) <= 8 )
    v10 = 8;
  else
    v10 = EngMulDiv(*(_DWORD *)(_gpsi + 1932), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2052) = v10;
  v11 = *(_DWORD *)(v7 + 36) + 2;
  if ( EngMulDiv(*(_DWORD *)(_gpsi + 1980), 96, *(unsigned __int16 *)(_gpsi + 6242)) > v11 )
    v11 = EngMulDiv(*(_DWORD *)(_gpsi + 1980), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2100) = v11;
  if ( EngMulDiv(*(_DWORD *)(_gpsi + 1976), 96, *(unsigned __int16 *)(_gpsi + 6242)) <= 8 )
    v12 = 8;
  else
    v12 = EngMulDiv(*(_DWORD *)(_gpsi + 1976), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2096) = v12;
  v13 = *(_DWORD *)(v24 + 24);
  if ( EngMulDiv(*(_DWORD *)(_gpsi + 1988), 96, *(unsigned __int16 *)(_gpsi + 6242)) > v13 )
    v13 = EngMulDiv(*(_DWORD *)(_gpsi + 1988), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2108) = v13;
  if ( EngMulDiv(*(_DWORD *)(_gpsi + 1984), 96, *(unsigned __int16 *)(_gpsi + 6242)) > 8 )
    v9 = EngMulDiv(*(_DWORD *)(_gpsi + 1984), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2104) = v9;
  *(_DWORD *)(_gpsi + 2040) = *(_DWORD *)(_gpsi + 2108) + 1;
  *(_DWORD *)(_gpsi + 2012) = *(_DWORD *)(_gpsi + 2056) + 1;
  *(_DWORD *)(_gpsi + 2092) = *(_DWORD *)(_gpsi + 2100) + 1;
  *(_DWORD *)(_gpsi + 2120) = EngMulDiv(*(_DWORD *)(_gpsi + 2000), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2048) = EngMulDiv(*(_DWORD *)(_gpsi + 1928), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2020) = EngMulDiv(*(_DWORD *)(_gpsi + 1900), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2004) = EngMulDiv(*(_DWORD *)(_gpsi + 1884), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2008) = EngMulDiv(*(_DWORD *)(_gpsi + 1888), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2044) = EngMulDiv(*(_DWORD *)(_gpsi + 1924), 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(_gpsi + 2016) = EngMulDiv(*(_DWORD *)(_gpsi + 1896), 96, *(unsigned __int16 *)(_gpsi + 6242));
  v14 = EngMulDiv(a, 96, *(unsigned __int16 *)(_gpsi + 6242));
  *(_DWORD *)(Get96DpiServerInfo() + 4) = v14;
  v14 += 3;
  *(_DWORD *)(_gpsi + 2060) = v14;
  *(_DWORD *)(_gpsi + 2064) = v14;
  v15 = *(_DWORD *)(_gpsi + 2120);
  v16 = *(_DWORD *)(_gpsi + 2000);
  v17 = v15 + *(_DWORD *)(_gpsi + 2060);
  aa = v15 + *(_DWORD *)(_gpsi + 2064);
  v18 = v16 + *(_DWORD *)(_gpsi + 1944);
  SetDpiDepSysMet(
    16,
    *(_DWORD *)(_gpsi + 1936)
  + 3 * *(_DWORD *)(_gpsi + 1932)
  + 2 * (v16 + 2 + *(_DWORD *)(_gpsi + 1940) + 2 * *(_DWORD *)(SessionDpiServerInfo + 12)));
  SetDpiDepSysMet(17, *(_DWORD *)(_gpsi + 1892) + 2 * v18);
  *(_DWORD *)(_gpsi + 2068) = *(_DWORD *)(_gpsi + 2056)
                            + 3 * *(_DWORD *)(_gpsi + 2052)
                            + 2 * (v17 + 2 * (*(_DWORD *)(v20 + 12) + 1));
  *(_DWORD *)(_gpsi + 2072) = *(_DWORD *)(_gpsi + 2012) + 2 * aa;
  *(_DWORD *)(_gpsi + 1728) = *(_DWORD *)(_gpsi + 1936) + 6;
  bSetDevDragWidth(*(_DWORD *)(_gpDispInfo + 20), this[1] + 3);
  UpdateDesktopThresholds();
}
