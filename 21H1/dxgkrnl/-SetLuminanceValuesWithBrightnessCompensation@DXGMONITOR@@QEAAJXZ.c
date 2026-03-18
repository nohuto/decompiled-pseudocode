/*
 * XREFs of ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C02F4144
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01548F8 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     MonitorSetAdvancedColorParams @ 0x1C02EFCE8 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F05BC (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(DXGMONITOR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  float v10; // xmm2_4
  signed int v11; // edx
  float v12; // xmm0_4

  v2 = (unsigned int)(80 * *((_DWORD *)this + 172));
  if ( (unsigned int)v2 < 0x3E8 )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, v2);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((unsigned int *)this + 186);
  if ( !(_DWORD)v4 )
  {
    if ( *((_BYTE *)this + 692) )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, v4);
      WdLogEvent5_WdAssertion(v5);
    }
    *((_DWORD *)this + 170) = *((_DWORD *)this + 167);
    *((_DWORD *)this + 171) = *((_DWORD *)this + 168);
    v6 = *((_DWORD *)this + 166);
LABEL_7:
    *((_DWORD *)this + 169) = v6;
    return 0LL;
  }
  v8 = *((unsigned int *)this + 172);
  if ( (unsigned int)(80 * v8) >= 0x3E8 )
  {
    if ( *((_BYTE *)this + 692) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8, v4);
      WdLogEvent5_WdAssertion(v9);
      LODWORD(v4) = *((_DWORD *)this + 186);
      LODWORD(v8) = *((_DWORD *)this + 172);
    }
    v10 = (float)(int)v4 / (float)(80 * (int)v8 / 0x3E8u);
    v11 = *((_DWORD *)this + 168) / 0x2710u;
    *((_DWORD *)this + 170) = (int)(float)((float)((float)(*((_DWORD *)this + 167) / 0x2710u) / v10) * 10000.0);
    v12 = (float)(*((_DWORD *)this + 166) / 0x2710u);
    *((_DWORD *)this + 171) = (int)(float)((float)((float)v11 / v10) * 10000.0);
    v6 = (int)(float)((float)(v12 / v10) * 10000.0);
    goto LABEL_7;
  }
  return 3221225473LL;
}
