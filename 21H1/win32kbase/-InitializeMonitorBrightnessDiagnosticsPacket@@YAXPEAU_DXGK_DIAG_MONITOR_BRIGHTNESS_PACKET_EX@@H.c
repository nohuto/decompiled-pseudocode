/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0054848
 * Callers:
 *     PowerUnDimMonitor @ 0x1C0053B70 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0053CF0 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0126D94 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        char a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  __int64 v8; // [rsp+30h] [rbp+8h]

  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  *(_OWORD *)((char *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v8 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v8 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = dword_1C0253170;
  *((_DWORD *)a1 + 15) = dword_1C025315C;
  *((_DWORD *)a1 + 16) = dword_1C0253158;
  *((_DWORD *)a1 + 17) = dword_1C0253164;
  v4 = dword_1C0253160;
  *((_DWORD *)a1 + 19) = -1;
  *((_DWORD *)a1 + 18) = v4;
  v5 = dword_1C025316C;
  *((_DWORD *)a1 + 21) &= ~2u;
  v6 = *((_DWORD *)a1 + 21);
  *((_DWORD *)a1 + 20) = v5;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(4 * dword_1C02531C8)) & 4;
  *((_DWORD *)a1 + 21) = v7;
  *((_DWORD *)a1 + 21) = a2 & 1 | v7 & 0xFFFFFFF6 | (8 * (dword_1C02531C4 & 1));
}
