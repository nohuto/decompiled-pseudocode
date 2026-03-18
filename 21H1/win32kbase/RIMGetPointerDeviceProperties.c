/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C0166E50
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     GetPreparsedData @ 0x1C01640AC (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1C0164148 (_PopulatePropertyUsageValues.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C016BEE4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  _WORD *v5; // r14
  unsigned __int16 v6; // r12
  unsigned __int16 v7; // r13
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  void *v15; // r13
  _WORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r15
  __int64 v22; // rcx
  _WORD *v23; // rdi
  __int64 v24; // rax
  unsigned __int16 v26[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v27; // [rsp+54h] [rbp-1Ch]
  unsigned int v28; // [rsp+58h] [rbp-18h] BYREF
  int v29; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0;
  v29 = 0;
  v5 = 0LL;
  v28 = 0;
  v6 = 0;
  v26[0] = 0;
  v7 = 0;
  v27 = 0;
  v30 = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &v30) )
    return 0LL;
  v11 = *(_DWORD *)(a1 + 312);
  if ( (v11 & 2) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 712);
    if ( !v10 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
      v10 = *(_QWORD *)(a1 + 712);
      v11 = *(_DWORD *)(a1 + 312);
    }
    v7 = *(_WORD *)(v10 + 10);
    v6 = *(_WORD *)(v10 + 4);
    v27 = v7;
  }
  if ( (v11 & 0x20) != 0 )
    v6 = *(_WORD *)(a1 + 728);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
  v12 = v30;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, v6, 0, 0LL, (__int64)v26, v30) != -1072627705 )
    return 0LL;
  v15 = Win32AllocPoolZInit(72LL * (v26[0] + (unsigned int)v7), 0x63767355u);
  if ( v15 )
  {
    if ( (unsigned int)PopulatePropertyUsageValues(a1, &v28, a4, v6, v26[0], (__int64)v15, a2, a3, v12) )
    {
      v19 = *(_QWORD *)(a1 + 712);
      if ( !v19 || !*(_WORD *)(v19 + 8) )
        goto LABEL_20;
      if ( v28 >= a4 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
        v19 = *(_QWORD *)(a1 + 712);
      }
      if ( !*(_WORD *)(v19 + 10) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
        v19 = *(_QWORD *)(a1 + 712);
      }
      if ( (unsigned int)PopulatePropertyUsageValues(
                           a1,
                           &v28,
                           a4,
                           *(_WORD *)(v19 + 8),
                           v27,
                           (__int64)v15 + 72 * v28,
                           a2,
                           a3,
                           v12) )
      {
LABEL_20:
        v20 = a2 - v28;
        v29 = a2 - v28;
        if ( a2 == v28 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
        }
        else
        {
          v21 = (unsigned int)v20;
          v5 = Win32AllocPoolZInit(72 * v20, 0x63767355u);
          if ( v5 )
          {
            if ( *(_DWORD *)(a1 + 24) == 7 )
              v6 = 0;
            if ( (int)rimHidP_GetSpecificButtonCaps(0, 0, v6, 0, (__int64)v5, (__int64)&v29, v30) >= 0 )
            {
              if ( (_DWORD)v20 == v29 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v22), (_DWORD)v20 == v29) )
              {
                v23 = (_WORD *)(a3 + 28LL * v28);
                memset(v23, 0, 28LL * (unsigned int)v20);
                v18 = 0LL;
                v4 = 1;
                if ( v28 < a2 )
                {
                  v16 = v23 + 13;
                  do
                  {
                    v24 = (unsigned int)v18;
                    v18 = (unsigned int)(v18 + 1);
                    *(v16 - 1) = v5[36 * v24];
                    *v16 = v5[36 * v24 + 28];
                    *(_DWORD *)(v16 - 11) = 1;
                    v16 += 14;
                    --v21;
                  }
                  while ( v21 );
                }
              }
            }
          }
        }
      }
    }
    Win32FreePool((__int64)v15, (__int64)v16, v18);
  }
  if ( v5 )
    Win32FreePool((__int64)v5, v13, v14);
  return v4;
}
