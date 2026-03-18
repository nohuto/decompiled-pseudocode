/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C0164148
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C0166E50 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned __int16 v11; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // esi
  __int64 v18; // rcx
  int SpecificValueCaps; // r15d
  unsigned __int16 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int16 v23; // ax
  int v24; // eax
  int v25; // eax

  v9 = a8;
  v10 = 0;
  v11 = a5;
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v14 = a9;
  if ( !a9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v15 = a6;
  if ( !a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v16 = a7;
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( !v11 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, a4, 0, v15, (__int64)&a5, v14);
  if ( a5 != v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
  if ( SpecificValueCaps >= 0 )
  {
    v20 = 0;
    if ( v17 < v16 )
    {
      v21 = a8;
      while ( 1 )
      {
        if ( v20 >= v11 )
          goto LABEL_42;
        if ( *(_BYTE *)(a1 + 776) == *(_BYTE *)(v15 + 72LL * v20 + 2) && v17 < a3 )
          break;
LABEL_41:
        ++v20;
        if ( v17 >= v16 )
          goto LABEL_42;
      }
      v22 = 28LL * v17;
      *(_WORD *)(v22 + v9 + 24) = *(_WORD *)(v15 + 72LL * v20);
      *(_WORD *)(v22 + v9 + 26) = *(_WORD *)(v15 + 72LL * v20 + 56);
      *(_DWORD *)(v22 + v9) = *(_DWORD *)(v15 + 72LL * v20 + 40);
      *(_DWORD *)(v22 + v9 + 4) = *(_DWORD *)(v15 + 72LL * v20 + 44);
      if ( *(_WORD *)(v15 + 72LL * v20) == 1 )
      {
        v23 = *(_WORD *)(v15 + 72LL * v20 + 56);
        if ( v23 == 48 && *(_DWORD *)(v21 + 1336) )
        {
          *(_DWORD *)(v22 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
          {
LABEL_33:
            v24 = *(_DWORD *)(a1 + 188);
LABEL_34:
            *(_DWORD *)(v22 + v9 + 12) = v24;
            v25 = 13;
            *(_DWORD *)(v22 + v9 + 16) = 17;
LABEL_40:
            *(_DWORD *)(v22 + v9 + 20) = v25;
            ++v17;
            goto LABEL_41;
          }
LABEL_38:
          v24 = *(_DWORD *)(a1 + 184);
          goto LABEL_34;
        }
        if ( v23 == 49 && *(_DWORD *)(v21 + 1336) )
        {
          *(_DWORD *)(v22 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_33;
          goto LABEL_38;
        }
      }
      *(_DWORD *)(v22 + v9 + 8) = *(_DWORD *)(v15 + 72LL * v20 + 48);
      *(_DWORD *)(v22 + v9 + 12) = *(_DWORD *)(v15 + 72LL * v20 + 52);
      *(_DWORD *)(v22 + v9 + 16) = *(_DWORD *)(v15 + 72LL * v20 + 36);
      v25 = *(_DWORD *)(v15 + 72LL * v20 + 32);
      goto LABEL_40;
    }
LABEL_42:
    v10 = 1;
    *a2 = v17;
  }
  return v10;
}
