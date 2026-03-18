/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D6B64
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0022F08 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D5FB4 (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D6A98 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D6DD8 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, __int64 a3)
{
  int v3; // r14d
  struct tagNONCLIENTMETRICSW *v4; // rbx
  BOOL v6; // ebp
  unsigned int v7; // esi
  int v8; // edi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi

  v3 = a3;
  v4 = a2;
  v6 = a3 == 0;
  v7 = 0;
  v8 = 1;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    DpiForSystem = GetDpiForSystem((__int64)a1);
    DpiDependentMetric = GetDpiDependentMetric(29LL, DpiForSystem);
    a2 = (struct tagNONCLIENTMETRICSW *)*((unsigned int *)v4 + 1);
    *((_DWORD *)v4 + 125) = DpiDependentMetric;
    v11 = (_DWORD)a2 - DpiDependentMetric;
    *((_DWORD *)v4 + 1) = v11;
    if ( v11 < 1 )
    {
      *((_DWORD *)v4 + 1) = 1;
      v12 = 0;
      if ( (int)a2 - 1 >= 0 )
        v12 = (_DWORD)a2 - 1;
      *((_DWORD *)v4 + 125) = v12;
    }
  }
  RescaleNonClientMetrics(v4, (__int64)a2, a3);
  v13 = 50;
  if ( *((int *)v4 + 1) > 1 )
    v8 = *((_DWORD *)v4 + 1);
  if ( v8 < 50 )
    v13 = v8;
  *((_DWORD *)v4 + 1) = v13;
  if ( v3 )
  {
    v14 = SetWindowMetricInt(a1, 0x88u, v13);
    v15 = SetWindowMetricInt(a1, 0x98u, *((_DWORD *)v4 + 2)) & v14;
    v16 = SetWindowMetricInt(a1, 0x99u, *((_DWORD *)v4 + 3)) & v15;
    v17 = SetWindowMetricInt(a1, 0x89u, *((_DWORD *)v4 + 4)) & v16;
    v18 = SetWindowMetricInt(a1, 0x8Au, *((_DWORD *)v4 + 5)) & v17;
    v19 = SetWindowMetricInt(a1, 0x8Cu, *((_DWORD *)v4 + 29)) & v18;
    v20 = SetWindowMetricInt(a1, 0x8Du, *((_DWORD *)v4 + 30)) & v19;
    v21 = SetWindowMetricInt(a1, 0x8Fu, *((_DWORD *)v4 + 54)) & v20;
    v22 = SetWindowMetricInt(a1, 0x90u, *((_DWORD *)v4 + 55)) & v21;
    v23 = FastWriteProfileValue(a1, 23LL, 139LL, 3LL, (char *)v4 + 24, 92) & v22;
    v24 = FastWriteProfileValue(a1, 23LL, 142LL, 3LL, (char *)v4 + 124, 92) & v23;
    v25 = FastWriteProfileValue(a1, 23LL, 145LL, 3LL, (char *)v4 + 224, 92) & v24;
    v26 = FastWriteProfileValue(a1, 23LL, 156LL, 3LL, (char *)v4 + 316, 92) & v25;
    v27 = FastWriteProfileValue(a1, 23LL, 157LL, 3LL, (char *)v4 + 408, 92) & v26;
    v7 = SetWindowMetricInt(a1, 0x9Eu, *((_DWORD *)v4 + 125)) & v27;
    v6 = v7;
  }
  if ( v6 )
    xxxSetAndDrawNCMetrics(a1, *((_DWORD *)v4 + 1), v4);
  return v7;
}
