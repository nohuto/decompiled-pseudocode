/*
 * XREFs of StorpTelemetrySendUnitSmartAttributes @ 0x1C0001084
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C000CCD0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008 (StorpTelemetryLogUnitSmartAttributesMeasures.c)
 *     StorpTelemetrySmartCommand @ 0x1C00015E8 (StorpTelemetrySmartCommand.c)
 *     McTemplateK0quuujjzsssxqtqbr13_EtwWriteTransfer @ 0x1C0001744 (McTemplateK0quuujjzsssxqtqbr13_EtwWriteTransfer.c)
 *     StorpTelemetryLogUnitSmartAttributesCriticalData @ 0x1C00538C4 (StorpTelemetryLogUnitSmartAttributesCriticalData.c)
 */

void __fastcall StorpTelemetrySendUnitSmartAttributes(__int64 a1)
{
  unsigned int *PoolWithTag; // rax
  __int64 v3; // rdx
  unsigned int *v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  char *v7; // rbx
  char *v8; // rdx
  bool v9; // cf
  unsigned __int16 *v10; // rdx
  __int64 i; // r8
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // eax
  _QWORD v28[2]; // [rsp+90h] [rbp-80h] BYREF
  __int16 v29; // [rsp+A0h] [rbp-70h]
  __int16 v30; // [rsp+A2h] [rbp-6Eh]
  int v31; // [rsp+A4h] [rbp-6Ch]
  __int16 v32; // [rsp+A8h] [rbp-68h]
  char v33; // [rsp+AAh] [rbp-66h]
  int v34; // [rsp+ABh] [rbp-65h]
  char v35; // [rsp+AFh] [rbp-61h]
  unsigned __int64 v36; // [rsp+B0h] [rbp-60h]
  unsigned __int64 v37; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v38; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v40; // [rsp+D0h] [rbp-40h]
  unsigned __int64 v41; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v42; // [rsp+E0h] [rbp-30h]
  unsigned __int64 v43; // [rsp+E8h] [rbp-28h]
  unsigned __int64 v44; // [rsp+F0h] [rbp-20h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-18h]
  unsigned __int64 v46; // [rsp+100h] [rbp-10h]
  unsigned __int64 v47; // [rsp+108h] [rbp-8h]

  v30 = 0;
  v34 = 0;
  v35 = 0;
  if ( (*(_DWORD *)(a1 + 1992) & 2) == 0 && !KeGetCurrentIrql() )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x22CuLL, 0x65546152u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v31 = -1;
      v29 = -1;
      v32 = -1;
      LOBYTE(v3) = -38;
      v33 = -1;
      v36 = -1LL;
      v37 = -1LL;
      v38 = -1LL;
      v39 = -1LL;
      v40 = -1LL;
      v41 = -1LL;
      v42 = -1LL;
      v43 = -1LL;
      v44 = -1LL;
      v45 = -1LL;
      v46 = -1LL;
      v47 = -1LL;
      v5 = StorpTelemetrySmartCommand(a1, v3, PoolWithTag);
      if ( v5 >= 0 )
      {
        v7 = (char *)v4 + *v4;
        if ( *(_DWORD *)v7 < 8u )
          goto LABEL_59;
        if ( v7[19] == -12 && v7[20] == 44 )
          *(_DWORD *)(a1 + 1992) |= 0x20u;
        else
          *(_DWORD *)(a1 + 1992) &= ~0x20u;
        LOBYTE(v6) = -48;
        v5 = StorpTelemetrySmartCommand(a1, v6, v4);
        if ( v5 >= 0 )
        {
          v8 = (char *)v4 + *v4;
          v9 = *(_DWORD *)v7 < 0x200u;
          v28[0] = v8;
          v28[1] = v8 + 16;
          if ( !v9 )
          {
            if ( v8 != (char *)-16LL )
            {
              v10 = (unsigned __int16 *)(v8 + 27);
              for ( i = 30LL; i; --i )
              {
                v12 = *((unsigned __int8 *)v10 - 9);
                if ( v12 > 0xC1 )
                {
                  v20 = v12 - 194;
                  if ( !v20 )
                  {
                    v33 = *((_BYTE *)v10 - 4);
                    goto LABEL_23;
                  }
                  v21 = v20 - 2;
                  if ( !v21 )
                  {
                    v42 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10
                                                                                              - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v22 = v21 - 1;
                  if ( !v22 )
                  {
                    v43 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10
                                                                                              - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v23 = v22 - 1;
                  if ( !v23 )
                  {
                    v44 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10
                                                                                              - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v24 = v23 - 3;
                  if ( !v24 )
                  {
                    v45 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10
                                                                                              - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                    goto LABEL_23;
                  }
                  v25 = v24 - 24;
                  if ( v25 )
                  {
                    v26 = v25 - 5;
                    if ( v26 )
                    {
                      if ( v26 == 3 )
                        v47 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10
                                                                                                  - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                    }
                    else
                    {
                      v46 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10
                                                                                                - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                    }
                    goto LABEL_23;
                  }
                }
                else if ( v12 != 193 )
                {
                  v13 = v12 - 4;
                  if ( v13 )
                  {
                    v14 = v13 - 1;
                    if ( v14 )
                    {
                      v15 = v14 - 4;
                      if ( v15 )
                      {
                        v16 = v15 - 1;
                        if ( v16 )
                        {
                          v17 = v16 - 173;
                          if ( v17 )
                          {
                            v18 = v17 - 1;
                            if ( v18 )
                            {
                              v19 = v18 - 3;
                              if ( v19 )
                              {
                                if ( v19 == 1 )
                                  v41 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10 - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                              }
                              else
                              {
                                v40 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10 - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                              }
                            }
                            else
                            {
                              v39 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10 - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                            }
                          }
                          else
                          {
                            v38 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10 - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                          }
                        }
                        else
                        {
                          v37 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10 - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                        }
                      }
                      else
                      {
                        v31 = *((_DWORD *)v10 - 1);
                      }
                    }
                    else
                    {
                      v36 = *((unsigned __int8 *)v10 - 4) | ((*((unsigned __int8 *)v10 - 3) | ((*((unsigned __int8 *)v10
                                                                                                - 2) | ((*((unsigned __int8 *)v10 - 1) | ((unsigned __int64)*v10 << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    v29 = *(v10 - 2);
                  }
                  goto LABEL_23;
                }
                v32 = *(v10 - 2);
LABEL_23:
                v10 += 6;
              }
            }
            if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
              || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
            {
              goto LABEL_33;
            }
            if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( *(_BYTE *)(a1 + 1996) )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
              g_StorpTraceLoggingCriticalEventEnabled = -1;
            if ( g_StorpTraceLoggingCriticalEventEnabled )
              StorpTelemetryLogUnitSmartAttributesCriticalData(a1, v28);
            else
LABEL_33:
              StorpTelemetryLogUnitSmartAttributesMeasures(a1);
            if ( (byte_1C0068844 & 8) != 0 )
              McTemplateK0quuujjzsssxqtqbr13_EtwWriteTransfer(
                a1 + 186,
                a1 + 169,
                a1 + 160,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                *(_BYTE *)(a1 + 96),
                *(_BYTE *)(a1 + 97),
                *(_BYTE *)(a1 + 98),
                a1 + 1976,
                *(_QWORD *)(a1 + 24) + 5192LL,
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4864LL),
                a1 + 160,
                a1 + 169,
                a1 + 186);
            goto LABEL_36;
          }
          goto LABEL_59;
        }
      }
      if ( v5 == -1073741670 )
      {
LABEL_36:
        ExFreePoolWithTag(v4, 0x65546152u);
        return;
      }
LABEL_59:
      v27 = *(_DWORD *)(a1 + 1992);
      if ( (v27 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v27 | 2;
      goto LABEL_36;
    }
  }
}
