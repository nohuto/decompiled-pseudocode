/*
 * XREFs of _LdrResGetRCConfig@20 @ 0x4B2BB5A0
 * Callers:
 *     _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2 (_LdrpResReportResourceAccessInternal@16.c)
 *     _LdrpVerifyAlternateResourceModuleEx@24 @ 0x4B2B874D (_LdrpVerifyAlternateResourceModuleEx@24.c)
 *     _RtlpResUltimateFallbackInfo@20 @ 0x4B2BA1A3 (_RtlpResUltimateFallbackInfo@20.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpResCompareServiceChecksum@16 @ 0x4B342FDE (_LdrpResCompareServiceChecksum@16.c)
 * Callees:
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _LdrpResGetMappingSize@16 @ 0x4B2BAB30 (_LdrpResGetMappingSize@16.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _CheckOneBitValidFlag@8 @ 0x4B2EB92A (_CheckOneBitValidFlag@8.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __stdcall LdrResGetRCConfig(int a1, unsigned int a2, _DWORD *a3, int a4, char a5)
{
  int v5; // edx
  int v6; // esi
  _DWORD *SharedData; // eax
  int v8; // eax
  int v9; // edi
  int *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  NTSTATUS result; // eax
  NTSTATUS v14; // eax
  int v15; // edi
  int v16; // esi
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  _WORD v37[2]; // [esp+10h] [ebp-58h] BYREF
  const wchar_t *v38; // [esp+14h] [ebp-54h]
  _WORD v39[2]; // [esp+18h] [ebp-50h] BYREF
  const wchar_t *v40; // [esp+1Ch] [ebp-4Ch]
  unsigned int v41; // [esp+24h] [ebp-44h] BYREF
  _DWORD *v42; // [esp+28h] [ebp-40h]
  int v43; // [esp+2Ch] [ebp-3Ch]
  unsigned int v44; // [esp+30h] [ebp-38h] BYREF
  int v45; // [esp+34h] [ebp-34h]
  int *v46; // [esp+38h] [ebp-30h] BYREF
  int v47; // [esp+3Ch] [ebp-2Ch]
  int v48[4]; // [esp+40h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  v5 = a1;
  v45 = a1;
  v42 = a3;
  v48[0] = (int)L"MUI";
  v48[1] = 1;
  v48[2] = 0;
  v44 = a2;
  v46 = 0;
  v39[0] = 46;
  v39[1] = 48;
  v40 = L"LdrResGetRCConfig Enter";
  v37[0] = 44;
  v37[1] = 46;
  v38 = L"LdrResGetRCConfig Exit";
  v43 = a4 & 0x2000;
  v6 = v43 != 0 ? 0x2000 : 4096;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v9 = 2147353476;
    if ( RtlGetCurrentServiceSessionId() )
      v36 = (int)NtCurrentPeb()->SharedData + 554;
    else
      v36 = 2147353476;
    LdrpTraceLoadMUIDll(v39, *(unsigned __int8 *)v36);
    v5 = v45;
  }
  else
  {
    v9 = 2147353476;
  }
  if ( v5 )
  {
    if ( a5 )
    {
      v10 = (int *)LdrpGetFromMUIMemCache(0, 8);
      v46 = v10;
      if ( v10 == (int *)-1 )
      {
        v47 = -1073741686;
        goto LABEL_9;
      }
      if ( v10 )
      {
        v47 = 0;
        if ( v42 )
          *v42 = v10;
        goto LABEL_9;
      }
      v5 = v45;
    }
    if ( !a2 && !v43 )
    {
      result = LdrpResGetMappingSize(v5, &v44, a4, 0);
      if ( result < 0 )
        return result;
    }
    v14 = LdrpResSearchResourceMappedFile((void *)v45, v44, v6 | 0x200030, v48, 3, &v46, &v41, 0, 0);
    v15 = v14;
    v47 = v14;
    if ( v14 < 0 )
    {
      if ( v14 != -1073741701 )
      {
        v15 = -1073741686;
        v47 = -1073741686;
      }
      goto LABEL_21;
    }
    ms_exc.registration.TryLevel = 0;
    v16 = (int)v46;
    if ( !v43 )
    {
      v17 = v46[1];
      if ( (unsigned int)v46 + v17 > v44 + (v45 & 0xFFFFFFFC) )
      {
        v15 = -1073741701;
        v47 = -1073741701;
      }
      else
      {
        v15 = -1073020925;
        v47 = -1073020925;
        v18 = v46[17];
        v19 = v18 + v46[18];
        if ( v19 <= v17 && v19 >= v18 )
        {
          v20 = v46[19];
          v21 = v20 + v46[20];
          if ( v21 <= v17 && v21 >= v20 )
          {
            v22 = v46[21];
            v23 = v22 + v46[22];
            if ( v23 <= v17 && v23 >= v22 )
            {
              v24 = v46[23];
              v25 = v24 + v46[24];
              if ( v25 <= v17 && v25 >= v24 )
              {
                v26 = v46[25];
                v27 = v26 + v46[26];
                if ( v27 <= v17 && v27 >= v26 )
                {
                  v28 = v46[27];
                  v29 = v28 + v46[28];
                  if ( v29 <= v17 && v29 >= v28 )
                  {
                    v30 = v46[29];
                    v31 = v30 + v46[30];
                    if ( v31 <= v17 && v31 >= v30 )
                    {
                      v32 = v46[31];
                      v33 = v32 + v46[32];
                      if ( v33 <= v17 && v33 >= v32 && *v46 == -20054323 && v17 == v41 && v46[2] == 0x10000 )
                      {
                        v34 = v46[3];
                        if ( !v34 || (unsigned __int8)CheckOneBitValidFlag(v34, 7) )
                        {
                          if ( (unsigned __int8)CheckOneBitValidFlag(*(_DWORD *)(v16 + 16) & 0xFFFFFFCF, 3) )
                          {
                            if ( (unsigned __int8)CheckOneBitValidFlag(*(_DWORD *)(v16 + 16) & 0xFFFFFFFC, 48) )
                            {
                              if ( (*(_BYTE *)(v16 + 16) & 1) == 0
                                || (unsigned __int8)CheckOneBitValidFlag(*(_DWORD *)(v16 + 24), 3)
                                && ((v35 = *(_DWORD *)(v16 + 20)) == 0 || (unsigned __int8)CheckOneBitValidFlag(
                                                                                             v35,
                                                                                             256)) )
                              {
                                v47 = 0;
                                goto LABEL_56;
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
      ms_exc.registration.TryLevel = -2;
LABEL_21:
      if ( v15 >= 0 )
      {
        v16 = (int)v46;
      }
      else
      {
        v16 = 0;
        v46 = 0;
      }
LABEL_23:
      if ( a5 )
      {
        if ( !v16 )
          v16 = -1;
        LdrpSetAlternateResourceModuleHandle(v45, 0, 0, v16, 0, 2, v15, 0);
      }
      v9 = 2147353476;
      goto LABEL_9;
    }
LABEL_56:
    ms_exc.registration.TryLevel = -2;
    if ( v42 )
      *v42 = v16;
    v15 = 0;
    v47 = 0;
    goto LABEL_23;
  }
  v47 = -1073741811;
LABEL_9:
  v11 = NtCurrentPeb()->SharedData;
  if ( v11 && *v11 )
    v12 = (int)NtCurrentPeb()->SharedData + 555;
  else
    v12 = 2147353477;
  if ( (*(_BYTE *)v12 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (int)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(v37, *(unsigned __int8 *)v9);
  }
  return v47;
}
