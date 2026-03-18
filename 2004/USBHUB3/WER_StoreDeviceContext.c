/*
 * XREFs of WER_StoreDeviceContext @ 0x1C003C798
 * Callers:
 *     WER_CreateReport @ 0x1C003CA80 (WER_CreateReport.c)
 * Callees:
 *     TelemetryData_InsertTriageDataBlock @ 0x1C003EDF0 (TelemetryData_InsertTriageDataBlock.c)
 */

__int64 __fastcall WER_StoreDeviceContext(__int64 a1, __int64 a2)
{
  int inserted; // r8d
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx

  inserted = TelemetryData_InsertTriageDataBlock(a1, a2, 2720LL);
  if ( inserted >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    if ( !v5 )
      goto LABEL_7;
    inserted = TelemetryData_InsertTriageDataBlock(a1, v5, (unsigned int)*(unsigned __int16 *)(v5 + 34) + 39);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v6 = (_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL);
    v7 = *v6 - 8LL;
    if ( v6 == (_QWORD *)*v6 )
    {
LABEL_7:
      v9 = *(_QWORD *)(a2 + 56);
      if ( !v9 )
        goto LABEL_12;
      inserted = TelemetryData_InsertTriageDataBlock(a1, v9, (unsigned int)*(unsigned __int16 *)(v9 + 34) + 39);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v10 = (_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL);
      v11 = *v10 - 8LL;
      if ( v10 == (_QWORD *)*v10 )
      {
LABEL_12:
        v13 = *(_QWORD *)(a2 + 72);
        if ( !v13
          || (inserted = TelemetryData_InsertTriageDataBlock(a1, v13, (unsigned int)(72 * *(_DWORD *)(v13 + 24) + 40)),
              inserted >= 0) )
        {
          v14 = *(_QWORD *)(a2 + 80);
          if ( !v14
            || (inserted = TelemetryData_InsertTriageDataBlock(a1, v14, (unsigned int)(72 * *(_DWORD *)(v14 + 24) + 40)),
                inserted >= 0) )
          {
            v15 = *(_QWORD *)(a2 + 104);
            if ( !v15
              || (v16 = *(_DWORD *)(a2 + 112)) == 0
              || (inserted = TelemetryData_InsertTriageDataBlock(a1, v15, (unsigned int)(8 * v16)), inserted >= 0) )
            {
              v17 = *(_QWORD *)(a2 + 120);
              if ( !v17
                || (v18 = *(_DWORD *)(a2 + 128)) == 0
                || (inserted = TelemetryData_InsertTriageDataBlock(a1, v17, (unsigned int)(8 * v18)), inserted >= 0) )
              {
                v19 = *(_QWORD *)(a2 + 136);
                if ( !v19
                  || (v20 = *(_DWORD *)(a2 + 144)) == 0
                  || (inserted = TelemetryData_InsertTriageDataBlock(a1, v19, (unsigned int)(8 * v20)), inserted >= 0) )
                {
                  v21 = *(_QWORD *)(a2 + 264);
                  if ( !v21
                    || (inserted = TelemetryData_InsertTriageDataBlock(a1, v21, *(unsigned __int16 *)(v21 + 2)),
                        inserted >= 0) )
                  {
                    v22 = *(_QWORD *)(a2 + 424);
                    if ( !v22
                      || (inserted = TelemetryData_InsertTriageDataBlock(a1, v22, *(unsigned __int16 *)(v22 + 2)),
                          inserted >= 0) )
                    {
                      v23 = *(_QWORD *)(a2 + 2016);
                      if ( !v23
                        || (inserted = TelemetryData_InsertTriageDataBlock(a1, v23, *(unsigned __int16 *)(v23 + 2)),
                            inserted >= 0) )
                      {
                        v24 = *(unsigned __int8 **)(a2 + 2024);
                        if ( !v24 || (inserted = TelemetryData_InsertTriageDataBlock(a1, v24, *v24), inserted >= 0) )
                        {
                          v25 = *(unsigned __int8 **)(a2 + 2032);
                          if ( !v25 || (inserted = TelemetryData_InsertTriageDataBlock(a1, v25, *v25), inserted >= 0) )
                          {
                            v26 = *(_QWORD *)(a2 + 2056);
                            if ( !v26
                              || (inserted = TelemetryData_InsertTriageDataBlock(
                                               a1,
                                               v26,
                                               *(unsigned __int16 *)(v26 + 2)),
                                  inserted >= 0) )
                            {
                              v27 = *(_QWORD *)(a2 + 16);
                              if ( v27 )
                                return (unsigned int)TelemetryData_InsertTriageDataBlock(a1, v27, 528LL);
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
      else
      {
        while ( 1 )
        {
          inserted = TelemetryData_InsertTriageDataBlock(a1, v11, (unsigned int)(72 * *(_DWORD *)(v11 + 24) + 40));
          if ( inserted < 0 )
            break;
          v12 = *(_QWORD *)(v11 + 8);
          v11 = v12 - 8;
          if ( *(_QWORD *)(a2 + 56) + 16LL == v12 )
            goto LABEL_12;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        inserted = TelemetryData_InsertTriageDataBlock(a1, v7, (unsigned int)(72 * *(_DWORD *)(v7 + 24) + 40));
        if ( inserted < 0 )
          break;
        v8 = *(_QWORD *)(v7 + 8);
        v7 = v8 - 8;
        if ( *(_QWORD *)(a2 + 48) + 16LL == v8 )
          goto LABEL_7;
      }
    }
  }
  return (unsigned int)inserted;
}
