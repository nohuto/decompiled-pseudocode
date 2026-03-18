/*
 * XREFs of ?xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z @ 0xD9DEC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _DwmAsyncNotifyAnimationChange@12 @ 0xB5164 (_DwmAsyncNotifyAnimationChange@12.c)
 *     ?xxxSPISetMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@H@Z @ 0xD9E36 (-xxxSPISetMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     _ValidateExternalLogFont@4 @ 0xDAF6C (_ValidateExternalLogFont@4.c)
 *     ?SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z @ 0x145212 (-SPISetIconMetrics@@YGHPAU_UNICODE_STRING@@PAUtagICONMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z @ 0x1452C0 (-SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z.c)
 *     ?SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z @ 0x1457A0 (-SetWindowMetricInt@@YGHPAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z @ 0x145849 (-xxxSPISetNCMetrics@@YGHPAU_UNICODE_STRING@@PAUtagNONCLIENTMETRICSW@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __userpurge xxxSetSPIMetrics@<eax>(
        int a1@<edx>,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        int *a4,
        int a5,
        int *a6)
{
  int v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // eax
  int v12; // edx
  struct _UNICODE_STRING *Buffer; // ebx
  void *v14; // eax
  struct tagMINIMIZEDMETRICS *v15; // [esp+0h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-8h]

  v6 = 0;
  *a4 = 0;
  v7 = a1 - 34;
  if ( v7 )
  {
    v8 = v7 - 8;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( !v9 )
      {
        v10 = xxxSPISetMinMetrics(a3, v15, v16);
LABEL_5:
        v6 = v10;
        goto LABEL_6;
      }
      v12 = v9 - 2;
      if ( v12 )
      {
        if ( v12 == 27 )
        {
          Buffer = (struct _UNICODE_STRING *)a2->Buffer;
          v14 = (void *)ReferenceDwmApiPort();
          DwmAsyncNotifyAnimationChange(v14, (int)Buffer, 0);
          if ( a3 )
          {
            v6 = SetWindowMetricInt(Buffer, (unsigned __int16)v15, v16);
            if ( !v6 )
              return 1;
          }
          if ( Buffer )
            _gdwPUDFlags |= 0x10000u;
          else
            _gdwPUDFlags &= ~0x10000u;
LABEL_6:
          *a4 = v6;
          return 1;
        }
      }
      else if ( ValidateExternalLogFont(&a2[2]) )
      {
        v10 = SPISetIconMetrics(a3, v15, v16);
        goto LABEL_5;
      }
    }
    else if ( ValidateExternalLogFont(&a2[3])
           && ValidateExternalLogFont(&a2[15].Buffer)
           && ValidateExternalLogFont(&a2[28])
           && ValidateExternalLogFont(&a2[39].Buffer)
           && ValidateExternalLogFont(&a2[51]) )
    {
      v10 = xxxSPISetNCMetrics(a3, v15, v16);
      goto LABEL_5;
    }
  }
  else if ( ValidateExternalLogFont(a2) )
  {
    v10 = SPISetIconTitleFont(a3, (struct tagLOGFONTW *)v15, v16);
    goto LABEL_5;
  }
  UserSetLastError((struct _NT_TIB *)0x57);
  return 0;
}
