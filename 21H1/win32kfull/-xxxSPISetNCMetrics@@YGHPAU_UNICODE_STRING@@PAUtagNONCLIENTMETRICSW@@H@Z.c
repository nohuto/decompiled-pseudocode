/*
 * XREFs of ?xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z @ 0x145849
 * Callers:
 *     ?xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z @ 0xD9DEC (-xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     ?RescaleNonClientMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z @ 0x144FCD (-RescaleNonClientMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z @ 0x1457A0 (-SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z @ 0x145A20 (-xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z.c)
 */

int __userpurge xxxSPISetNCMetrics@<eax>(
        INT *a1@<edx>,
        int a2@<ecx>,
        struct _UNICODE_STRING *a3,
        struct tagNONCLIENTMETRICSW *a4,
        int a5)
{
  int v7; // ebx
  INT DpiForSystem; // eax
  int DpiDependentMetric; // eax
  INT v10; // edx
  int v11; // eax
  INT v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // eax
  int v30; // [esp+0h] [ebp-14h]
  unsigned __int16 v31; // [esp+0h] [ebp-14h]
  unsigned __int16 v32; // [esp+0h] [ebp-14h]
  unsigned __int16 v33; // [esp+0h] [ebp-14h]
  unsigned __int16 v34; // [esp+0h] [ebp-14h]
  unsigned __int16 v35; // [esp+0h] [ebp-14h]
  unsigned __int16 v36; // [esp+0h] [ebp-14h]
  unsigned __int16 v37; // [esp+0h] [ebp-14h]
  unsigned __int16 v38; // [esp+0h] [ebp-14h]
  unsigned __int16 v39; // [esp+0h] [ebp-14h]
  struct tagNONCLIENTMETRICSW *v40; // [esp+4h] [ebp-10h]
  int v41; // [esp+4h] [ebp-10h]
  int v42; // [esp+4h] [ebp-10h]
  int v43; // [esp+4h] [ebp-10h]
  int v44; // [esp+4h] [ebp-10h]
  int v45; // [esp+4h] [ebp-10h]
  int v46; // [esp+4h] [ebp-10h]
  int v47; // [esp+4h] [ebp-10h]
  int v48; // [esp+4h] [ebp-10h]
  int v49; // [esp+4h] [ebp-10h]

  v7 = 0;
  if ( *a1 != 504 )
  {
    *a1 = 504;
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(29, DpiForSystem);
    v10 = a1[1];
    a1[125] = DpiDependentMetric;
    v11 = v10 - DpiDependentMetric;
    a1[1] = v11;
    if ( v11 < 1 )
    {
      v12 = v10 - 1;
      if ( v10 - 1 < 0 )
        v12 = 0;
      a1[125] = v12;
      a1[1] = 1;
    }
  }
  RescaleNonClientMetrics(a1);
  v13 = a1[1];
  if ( v13 <= 1 )
    v13 = 1;
  if ( v13 >= 50 )
    v13 = 50;
  a1[1] = v13;
  if ( a3 )
  {
    v14 = SetWindowMetricInt(0x88u, v13, v30, (int)v40);
    v15 = SetWindowMetricInt(0x98u, a1[2], v31, v41) & v14;
    v16 = SetWindowMetricInt(0x99u, a1[3], v32, v42) & v15;
    v17 = SetWindowMetricInt(0x89u, a1[4], v33, v43) & v16;
    v18 = SetWindowMetricInt(0x8Au, a1[5], v34, v44) & v17;
    v19 = SetWindowMetricInt(0x8Cu, a1[29], v35, v45) & v18;
    v20 = SetWindowMetricInt(0x8Du, a1[30], v36, v46) & v19;
    v21 = SetWindowMetricInt(0x8Fu, a1[54], v37, v47) & v20;
    v22 = SetWindowMetricInt(0x90u, a1[55], v38, v48) & v21;
    v23 = FastWriteProfileValue(a2, 23, 139, 3, a1 + 6, 92) & v22;
    v24 = FastWriteProfileValue(a2, 23, 142, 3, a1 + 31, 92) & v23;
    v25 = FastWriteProfileValue(a2, 23, 145, 3, a1 + 56, 92) & v24;
    v26 = FastWriteProfileValue(a2, 23, 156, 3, a1 + 79, 92) & v25;
    v27 = FastWriteProfileValue(a2, 23, 157, 3, a1 + 102, 92) & v26;
    v7 = SetWindowMetricInt(0x9Eu, a1[125], v39, v49) & v27;
    v28 = v7;
  }
  else
  {
    v28 = 1;
  }
  if ( v28 )
    xxxSetAndDrawNCMetrics((struct _UNICODE_STRING *)a1, v30, v40);
  return v7;
}
