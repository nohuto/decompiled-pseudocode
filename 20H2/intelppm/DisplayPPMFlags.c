/*
 * XREFs of DisplayPPMFlags @ 0x1C0002788
 * Callers:
 *     ProcLibGlobalInit @ 0x1C003C8F0 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 */

void __fastcall DisplayPPMFlags(__int64 a1, unsigned __int8 a2)
{
  const char *v4; // rdi
  const char *v5; // rax
  const char *v6; // rax
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rax
  const char *v12; // rax
  const char *v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  const char *v16; // rax
  const char *v17; // rax
  const char *v18; // rax
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  const char *v24; // rax
  const char *v25; // rax
  const char *v26; // rax
  const char *v27; // rax
  const char *v28; // rax
  const char *v29; // rax
  const char *v30; // rax
  const char *v31; // rax
  const char *v32; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        2,
        58,
        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = "En";
      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v5 = "En";
        if ( (a1 & 1) == 0 )
          v5 = "Dis";
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          2,
          59,
          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
          (__int64)v5);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v6 = "En";
          if ( (a1 & 2) == 0 )
            v6 = "Dis";
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            2,
            60,
            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
            (__int64)v6);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v7 = "En";
            if ( (a1 & 4) == 0 )
              v7 = "Dis";
            WPP_RECORDER_SF_s(
              WPP_GLOBAL_Control->DeviceExtension,
              a2,
              2,
              61,
              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
              (__int64)v7);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v8 = "En";
              if ( (a1 & 0x100000) == 0 )
                v8 = "Dis";
              WPP_RECORDER_SF_s(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                2,
                62,
                (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                (__int64)v8);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                v9 = "En";
                if ( (a1 & 0x200000) == 0 )
                  v9 = "Dis";
                WPP_RECORDER_SF_s(
                  WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  2,
                  63,
                  (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                  (__int64)v9);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    a2,
                    2,
                    64,
                    (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_(
                      WPP_GLOBAL_Control->DeviceExtension,
                      a2,
                      2,
                      65,
                      (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      v10 = "En";
                      if ( (a1 & 0x10) == 0 )
                        v10 = "Dis";
                      WPP_RECORDER_SF_s(
                        WPP_GLOBAL_Control->DeviceExtension,
                        a2,
                        2,
                        66,
                        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                        (__int64)v10);
                    }
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      {
                        v11 = "En";
                        if ( (a1 & 0x20) == 0 )
                          v11 = "Dis";
                        WPP_RECORDER_SF_s(
                          WPP_GLOBAL_Control->DeviceExtension,
                          a2,
                          2,
                          67,
                          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                          (__int64)v11);
                      }
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                        {
                          v12 = "En";
                          if ( (a1 & 0x40) == 0 )
                            v12 = "Dis";
                          WPP_RECORDER_SF_s(
                            WPP_GLOBAL_Control->DeviceExtension,
                            a2,
                            2,
                            68,
                            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                            (__int64)v12);
                        }
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                          {
                            v13 = "En";
                            if ( (a1 & 0x7F000) == 0 )
                              v13 = "Dis";
                            WPP_RECORDER_SF_s(
                              WPP_GLOBAL_Control->DeviceExtension,
                              a2,
                              2,
                              69,
                              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                              (__int64)v13);
                          }
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                          {
                            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                            {
                              v14 = "En";
                              if ( (a1 & 0x80000000000LL) == 0 )
                                v14 = "Dis";
                              WPP_RECORDER_SF_s(
                                WPP_GLOBAL_Control->DeviceExtension,
                                a2,
                                2,
                                70,
                                (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                (__int64)v14);
                            }
                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                            {
                              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                              {
                                v15 = "En";
                                if ( (a1 & 0x20000000000LL) == 0 )
                                  v15 = "Dis";
                                WPP_RECORDER_SF_s(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  a2,
                                  2,
                                  71,
                                  (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                  (__int64)v15);
                              }
                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                              {
                                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                {
                                  v16 = "En";
                                  if ( (a1 & 0x40000000000LL) == 0 )
                                    v16 = "Dis";
                                  WPP_RECORDER_SF_s(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    a2,
                                    2,
                                    72,
                                    (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                    (__int64)v16);
                                }
                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                {
                                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                  {
                                    v17 = "En";
                                    if ( (a1 & 0xE0000000000LL) == 0 )
                                      v17 = "Dis";
                                    WPP_RECORDER_SF_s(
                                      WPP_GLOBAL_Control->DeviceExtension,
                                      a2,
                                      2,
                                      73,
                                      (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                      (__int64)v17);
                                  }
                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                  {
                                    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                    {
                                      v18 = "En";
                                      if ( (a1 & 0x1000000) == 0 )
                                        v18 = "Dis";
                                      WPP_RECORDER_SF_s(
                                        WPP_GLOBAL_Control->DeviceExtension,
                                        a2,
                                        2,
                                        74,
                                        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                        (__int64)v18);
                                    }
                                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                    {
                                      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                      {
                                        v19 = "En";
                                        if ( (a1 & 0x2000000) == 0 )
                                          v19 = "Dis";
                                        WPP_RECORDER_SF_s(
                                          WPP_GLOBAL_Control->DeviceExtension,
                                          a2,
                                          2,
                                          75,
                                          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                          (__int64)v19);
                                      }
                                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                      {
                                        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                        {
                                          v20 = "En";
                                          if ( (a1 & 0x10000000) == 0 )
                                            v20 = "Dis";
                                          WPP_RECORDER_SF_s(
                                            WPP_GLOBAL_Control->DeviceExtension,
                                            a2,
                                            2,
                                            76,
                                            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                            (__int64)v20);
                                        }
                                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                        {
                                          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                          {
                                            v21 = "En";
                                            if ( (a1 & 0x20000000) == 0 )
                                              v21 = "Dis";
                                            WPP_RECORDER_SF_s(
                                              WPP_GLOBAL_Control->DeviceExtension,
                                              a2,
                                              2,
                                              77,
                                              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                              (__int64)v21);
                                          }
                                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                          {
                                            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                            {
                                              v22 = "En";
                                              if ( (a1 & 0x40000000) == 0 )
                                                v22 = "Dis";
                                              WPP_RECORDER_SF_s(
                                                WPP_GLOBAL_Control->DeviceExtension,
                                                a2,
                                                2,
                                                78,
                                                (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                (__int64)v22);
                                            }
                                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                            {
                                              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                              {
                                                v23 = "En";
                                                if ( (a1 & 0x80000000) == 0 )
                                                  v23 = "Dis";
                                                WPP_RECORDER_SF_s(
                                                  WPP_GLOBAL_Control->DeviceExtension,
                                                  a2,
                                                  2,
                                                  79,
                                                  (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                  (__int64)v23);
                                              }
                                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                              {
                                                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                {
                                                  v24 = "En";
                                                  if ( (a1 & 0x8000000) == 0 )
                                                    v24 = "Dis";
                                                  WPP_RECORDER_SF_s(
                                                    WPP_GLOBAL_Control->DeviceExtension,
                                                    a2,
                                                    2,
                                                    80,
                                                    (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                    (__int64)v24);
                                                }
                                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                {
                                                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                  {
                                                    v25 = "En";
                                                    if ( (a1 & 0x4000000000LL) == 0 )
                                                      v25 = "Dis";
                                                    WPP_RECORDER_SF_s(
                                                      WPP_GLOBAL_Control->DeviceExtension,
                                                      a2,
                                                      2,
                                                      81,
                                                      (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                      (__int64)v25);
                                                  }
                                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                  {
                                                    if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                    {
                                                      v26 = "En";
                                                      if ( (a1 & 0x4000000) == 0 )
                                                        v26 = "Dis";
                                                      WPP_RECORDER_SF_s(
                                                        WPP_GLOBAL_Control->DeviceExtension,
                                                        a2,
                                                        2,
                                                        82,
                                                        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                        (__int64)v26);
                                                    }
                                                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                    {
                                                      if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                        WPP_RECORDER_SF_(
                                                          WPP_GLOBAL_Control->DeviceExtension,
                                                          a2,
                                                          2,
                                                          83,
                                                          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
                                                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                      {
                                                        if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                          WPP_RECORDER_SF_(
                                                            WPP_GLOBAL_Control->DeviceExtension,
                                                            a2,
                                                            2,
                                                            84,
                                                            (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
                                                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                        {
                                                          if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                          {
                                                            v27 = "En";
                                                            if ( (a1 & 0x100000000LL) == 0 )
                                                              v27 = "Dis";
                                                            WPP_RECORDER_SF_s(
                                                              WPP_GLOBAL_Control->DeviceExtension,
                                                              a2,
                                                              2,
                                                              85,
                                                              (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                              (__int64)v27);
                                                          }
                                                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                          {
                                                            if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                            {
                                                              v28 = "En";
                                                              if ( (a1 & 0x200000000LL) == 0 )
                                                                v28 = "Dis";
                                                              WPP_RECORDER_SF_s(
                                                                WPP_GLOBAL_Control->DeviceExtension,
                                                                a2,
                                                                2,
                                                                86,
                                                                (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                                (__int64)v28);
                                                            }
                                                            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                            {
                                                              if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                              {
                                                                v29 = "En";
                                                                if ( (a1 & 0x300) == 0 )
                                                                  v29 = "Dis";
                                                                WPP_RECORDER_SF_s(
                                                                  WPP_GLOBAL_Control->DeviceExtension,
                                                                  a2,
                                                                  2,
                                                                  87,
                                                                  (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                                  (__int64)v29);
                                                              }
                                                              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                              {
                                                                if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                {
                                                                  v30 = "En";
                                                                  if ( (a1 & 0x100000000000LL) == 0 )
                                                                    v30 = "Dis";
                                                                  WPP_RECORDER_SF_s(
                                                                    WPP_GLOBAL_Control->DeviceExtension,
                                                                    a2,
                                                                    2,
                                                                    88,
                                                                    (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                                    (__int64)v30);
                                                                }
                                                                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                {
                                                                  if ( a2 < 5u || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                  {
                                                                    v31 = "En";
                                                                    if ( (a1 & 0x400) == 0 )
                                                                      v31 = "Dis";
                                                                    WPP_RECORDER_SF_s(
                                                                      WPP_GLOBAL_Control->DeviceExtension,
                                                                      a2,
                                                                      2,
                                                                      89,
                                                                      (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                                      (__int64)v31);
                                                                  }
                                                                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                  {
                                                                    if ( a2 < 5u
                                                                      || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                    {
                                                                      v32 = "En";
                                                                      if ( (a1 & 0x1000000000LL) == 0 )
                                                                        v32 = "Dis";
                                                                      WPP_RECORDER_SF_s(
                                                                        WPP_GLOBAL_Control->DeviceExtension,
                                                                        a2,
                                                                        2,
                                                                        90,
                                                                        (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                                        (__int64)v32);
                                                                    }
                                                                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                                                                    {
                                                                      if ( a2 < 5u
                                                                        || LOWORD(WPP_GLOBAL_Control->DeviceType) )
                                                                      {
                                                                        if ( (a1 & 0x10000000000LL) == 0 )
                                                                          v4 = "Dis";
                                                                        WPP_RECORDER_SF_s(
                                                                          WPP_GLOBAL_Control->DeviceExtension,
                                                                          a2,
                                                                          2,
                                                                          91,
                                                                          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids,
                                                                          (__int64)v4);
                                                                      }
                                                                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                                                                        && (a2 < 5u
                                                                         || LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                                                                      {
                                                                        WPP_RECORDER_SF_(
                                                                          WPP_GLOBAL_Control->DeviceExtension,
                                                                          a2,
                                                                          2,
                                                                          92,
                                                                          (__int64)&WPP_3ecf09519eed3e44f5ad5541281ba006_Traceguids);
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
