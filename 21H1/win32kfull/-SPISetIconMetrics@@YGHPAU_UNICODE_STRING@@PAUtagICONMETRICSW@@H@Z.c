/*
 * XREFs of ?SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z @ 0x145212
 * Callers:
 *     ?xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z @ 0xD9DEC (-xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z.c)
 * Callees:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _SetIconMetrics@8 @ 0xD9F16 (_SetIconMetrics@8.c)
 *     ?RescaleIconMetrics@@YGXPAUtagICONMETRICSW@@@Z @ 0x144F48 (-RescaleIconMetrics@@YGXPAUtagICONMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z @ 0x1457A0 (-SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z.c)
 */

int __userpurge SPISetIconMetrics@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _UNICODE_STRING *a3,
        struct tagICONMETRICSW *a4,
        int a5)
{
  int v6; // edi
  int v7; // esi
  BOOL v8; // ecx
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // eax
  unsigned __int16 v14; // [esp+0h] [ebp-10h]
  unsigned __int16 v15; // [esp+0h] [ebp-10h]
  unsigned __int16 v16; // [esp+0h] [ebp-10h]
  int v17; // [esp+4h] [ebp-Ch]
  int v18; // [esp+4h] [ebp-Ch]
  int v19; // [esp+4h] [ebp-Ch]

  v6 = 0;
  v7 = 0;
  RescaleIconMetrics((INT *)a1);
  v8 = a3 == 0;
  if ( a3 )
  {
    v9 = SetWindowMetricInt(*(struct _UNICODE_STRING **)(a1 + 4), v14, v17);
    v10 = SetWindowMetricInt(*(struct _UNICODE_STRING **)(a1 + 8), v15, v18) & v9;
    v11 = SetWindowMetricInt(*(struct _UNICODE_STRING **)(a1 + 12), v16, v19) & v10;
    v7 = FastWriteProfileValue(a2, 23, 154, 3, a1 + 16, 92) & v11;
    v8 = v7;
  }
  if ( v8 )
  {
    SetIconMetrics(a2, (_DWORD *)a1);
    v12 = *(_DWORD *)(_gptiCurrent + 248);
    if ( v12 )
      v6 = *(_DWORD *)(*(_DWORD *)(v12 + 4) + 12);
    xxxInternalInvalidate(v6, 1, 66693);
  }
  return v7;
}
