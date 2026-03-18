/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0169EF8
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C016A258 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F652C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0169F78 (DpiGetMonitorColorimetryOverride.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveHDRParamDriverOverrides(DXGMONITOR *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  int MonitorColorimetryOverride; // r9d
  unsigned int v6; // edx
  char v7; // r8
  unsigned int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-10h]

  v1 = *((unsigned int *)this + 11);
  v15 = 0;
  v2 = *((_QWORD *)this + 4);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  MonitorColorimetryOverride = DpiGetMonitorColorimetryOverride(
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 216LL),
                                 v1,
                                 &v12);
  if ( MonitorColorimetryOverride >= 0 )
  {
    v6 = HIDWORD(v14);
    v7 = v15;
    v8 = HIDWORD(v14);
    *((_DWORD *)this + 155) = 0;
    *((_WORD *)this + 312) = 0;
    *((_DWORD *)this + 152) = (v8 >> 14) & 0x3F;
    *((_DWORD *)this + 150) = (unsigned __int8)v8 >> 2;
    *((_DWORD *)this + 153) = (v6 >> 20) & 0x3F;
    *((_BYTE *)this + 626) = v15 & 1;
    *((_BYTE *)this + 627) = (v7 & 2) != 0;
    *(_OWORD *)((char *)this + 628) = v12;
    *(_OWORD *)((char *)this + 644) = v13;
    v9 = DWORD2(v14);
    *((_DWORD *)this + 151) = (v6 >> 8) & 0x3F;
    v10 = v14;
    *((_DWORD *)this + 154) = v6 >> 26;
    v11 = DWORD1(v14);
    *((_DWORD *)this + 168) = v9;
    *((_DWORD *)this + 171) = v9;
    *((_DWORD *)this + 165) = 2;
    *((_DWORD *)this + 167) = v11;
    *((_DWORD *)this + 166) = v10;
    *((_DWORD *)this + 170) = v11;
    *((_DWORD *)this + 169) = v10;
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 174) = 2;
    *((_BYTE *)this + 700) = (v7 & 4) != 0;
  }
  return (unsigned int)MonitorColorimetryOverride;
}
