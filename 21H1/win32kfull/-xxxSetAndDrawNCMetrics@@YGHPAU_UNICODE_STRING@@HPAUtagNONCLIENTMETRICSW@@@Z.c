/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z @ 0x145A20
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z @ 0x145849 (-xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 *     _xxxMetricsRecalc@28 @ 0x145FE4 (_xxxMetricsRecalc@28.c)
 *     _MenuRecalc@0 @ 0x1A11F9 (_MenuRecalc@0.c)
 */

int __userpurge xxxSetAndDrawNCMetrics@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _UNICODE_STRING *a3,
        int a4,
        struct tagNONCLIENTMETRICSW *a5)
{
  int v5; // esi
  int v6; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  char *v14; // [esp+14h] [ebp-1Ch]
  char *v15; // [esp+18h] [ebp-18h]
  int SessionDpiServerInfo; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  int v19; // [esp+28h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp-4h]

  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v5 = 0;
  v18 = *(_DWORD *)(SessionDpiServerInfo + 4);
  v6 = *(_DWORD *)(_gpsi + 2000);
  v19 = *(_DWORD *)(_gpsi + 1724);
  v20 = *(_DWORD *)(_gpsi + 1728);
  if ( a3 )
  {
    v15 = (char *)a3[2].Buffer - *(_DWORD *)(_gpsi + 1936);
    v14 = (char *)a3[27].Buffer - *(_DWORD *)(_gpsi + 1988);
  }
  else
  {
    if ( a1 == *(_DWORD *)(SessionDpiServerInfo + 4) )
      return 0;
    v14 = 0;
    v15 = 0;
  }
  xxxSetWindowNCMetrics(a2, a3, a1);
  MenuRecalc();
  v8 = *(_DWORD *)(_gpsi + 2000);
  v9 = v8 + *(_DWORD *)(SessionDpiServerInfo + 4);
  v10 = v9 - v18 - v6;
  if ( v6 > 0 )
    goto LABEL_10;
  if ( v8 <= 0 )
  {
    v9 = 0;
    goto LABEL_13;
  }
  if ( v6 )
  {
LABEL_10:
    if ( v8 )
      v9 = v8 + *(_DWORD *)(SessionDpiServerInfo + 4) - v18 - v6;
    else
      v9 = -(v18 + v6);
  }
LABEL_13:
  xxxMetricsRecalc(0, v15, v14, v10, v9);
  v11 = *(_DWORD *)(_gpsi + 1728) - v20;
  if ( *(_DWORD *)(_gpsi + 1724) != v19 || v11 )
    xxxMetricsRecalc(v11, 0, 0, 0, 0);
  v12 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v12 )
    v5 = *(_DWORD *)(*(_DWORD *)(v12 + 4) + 12);
  xxxInternalInvalidate(v5, 1, 66693);
  return 1;
}
