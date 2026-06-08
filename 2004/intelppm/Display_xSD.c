/*
 * XREFs of Display_xSD @ 0x1C0002088
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C0021008 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C0033538 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     GetCoordinationType @ 0x1C000C750 (GetCoordinationType.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C000CA90 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall Display_xSD(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int i; // edi
  __int64 CoordinationType; // rax
  __int64 v6; // r8
  int v7; // edx
  int v8; // [rsp+20h] [rbp-38h]

  if ( a1 )
  {
    v2 = a2;
    if ( a2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            2,
            109,
            (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            WPP_RECORDER_SF_s(
              WPP_GLOBAL_Control->DeviceExtension,
              a2,
              2,
              110,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
              v2);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                2,
                111,
                (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                *a1);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                2,
                112,
                (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
            }
          }
        }
      }
      for ( i = 0; i < *a1; ++i )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(a2) = 5;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              a2,
              2,
              113,
              (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
              i);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(a2) = 5;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                2,
                114,
                (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                a1[5 * i + 1]);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(a2) = 5;
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  2,
                  115,
                  (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                  a1[5 * i + 2]);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LOBYTE(a2) = 5;
                  WPP_RECORDER_SF_D(
                    WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    2,
                    116,
                    (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                    a1[5 * i + 3]);
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    CoordinationType = GetCoordinationType(a1[5 * i + 4]);
                    WPP_RECORDER_SF_Ds(*(_QWORD *)(v6 + 64), v7, v6, 117, v8, v7, CoordinationType);
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(a2) = 5;
                      WPP_RECORDER_SF_D(
                        WPP_GLOBAL_Control->DeviceExtension,
                        a2,
                        2,
                        118,
                        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
                        a1[5 * i + 5]);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        LOBYTE(a2) = 5;
                        WPP_RECORDER_SF_(
                          WPP_GLOBAL_Control->DeviceExtension,
                          a2,
                          2,
                          119,
                          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
