/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C015E5A0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     GetPreparsedData @ 0x1C015B7FC (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1C015B898 (_PopulatePropertyUsageValues.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0163634 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163688 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  _WORD *v5; // r14
  unsigned __int16 v6; // r12
  unsigned __int16 v7; // r13
  unsigned int v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r15
  void *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _WORD *v27; // rdi
  unsigned int v28; // r8d
  _WORD *v29; // rdx
  __int64 v30; // rax
  unsigned __int16 v32[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v33; // [rsp+54h] [rbp-1Ch]
  unsigned int v34; // [rsp+58h] [rbp-18h] BYREF
  int v35; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v36; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0;
  v35 = 0;
  v5 = 0LL;
  v34 = 0;
  v6 = 0;
  v32[0] = 0;
  v7 = 0;
  v33 = 0;
  v36 = 0LL;
  v8 = a4;
  if ( !(unsigned int)GetPreparsedData(a1, &v36, a3, a4) )
    return 0LL;
  v14 = *(_DWORD *)(a1 + 312);
  if ( (v14 & 2) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 712);
    if ( !v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v10, v12, v13);
      v11 = *(_QWORD *)(a1 + 712);
      v14 = *(_DWORD *)(a1 + 312);
    }
    v7 = *(_WORD *)(v11 + 10);
    v6 = *(_WORD *)(v11 + 4);
    v33 = v7;
  }
  if ( (v14 & 0x20) != 0 )
    v6 = *(_WORD *)(a1 + 728);
  if ( !v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12, v13);
  v15 = v36;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, v6, 0, 0LL, (__int64)v32, v36) != -1072627705 )
    return 0LL;
  v16 = Win32AllocPoolZInit(72LL * (v32[0] + (unsigned int)v7), 0x63767355u);
  if ( v16 )
  {
    if ( (unsigned int)PopulatePropertyUsageValues(a1, &v34, v8, v6, v32[0], (__int64)v16, a2, a3, v15) )
    {
      v20 = *(_QWORD *)(a1 + 712);
      if ( !v20 || !*(_WORD *)(v20 + 8) )
        goto LABEL_20;
      if ( v34 >= v8 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v20, v18, v19);
        v20 = *(_QWORD *)(a1 + 712);
      }
      if ( !*(_WORD *)(v20 + 10) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v20, v18, v19);
        v20 = *(_QWORD *)(a1 + 712);
      }
      if ( (unsigned int)PopulatePropertyUsageValues(
                           a1,
                           &v34,
                           v8,
                           *(unsigned __int16 *)(v20 + 8),
                           v33,
                           (__int64)v16 + 72 * v34,
                           a2,
                           a3,
                           v15) )
      {
LABEL_20:
        v21 = a2 - v34;
        v35 = a2 - v34;
        if ( a2 == v34 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v20, v18, v19);
        }
        else
        {
          v22 = (unsigned int)v21;
          v5 = Win32AllocPoolZInit(72 * v21, 0x63767355u);
          if ( v5 )
          {
            if ( *(_DWORD *)(a1 + 24) == 7 )
              v6 = 0;
            if ( (int)rimHidP_GetSpecificButtonCaps(0, 0, v6, 0, (__int64)v5, (__int64)&v35, v36) >= 0 )
            {
              if ( (_DWORD)v21 == v35
                || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26), (_DWORD)v21 == v35) )
              {
                v27 = (_WORD *)(a3 + 28LL * v34);
                memset(v27, 0, 28LL * (unsigned int)v21);
                v28 = 0;
                v4 = 1;
                if ( v34 < a2 )
                {
                  v29 = v27 + 13;
                  do
                  {
                    v30 = v28++;
                    *(v29 - 1) = v5[36 * v30];
                    *v29 = v5[36 * v30 + 28];
                    *(_DWORD *)(v29 - 11) = 1;
                    v29 += 14;
                    --v22;
                  }
                  while ( v22 );
                }
              }
            }
          }
        }
      }
    }
    Win32FreePool((__int64)v16);
  }
  if ( v5 )
    Win32FreePool((__int64)v5);
  return v4;
}
