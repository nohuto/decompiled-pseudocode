/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C015D640
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0190CD0 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     GetPreparsedData @ 0x1C015B7FC (GetPreparsedData.c)
 *     SignExtendLong @ 0x1C0160DFC (SignExtendLong.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163688 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C01636DC (rimHidP_GetUsageValue.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMExtractPointerPropertyValues(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // r13
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _USAGE_AND_PAGE *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v19; // r15d
  __int64 v20; // r13
  int SpecificValueCaps; // eax
  __int64 v22; // r10
  int v23; // eax
  __int64 v24; // rdx
  int v25; // r8d
  _DWORD *v26; // r13
  __int64 v27; // r8
  __int64 v28; // r9
  int Usages; // eax
  unsigned int v30; // ecx
  unsigned __int16 v32; // [rsp+44h] [rbp-124h]
  __int16 v33[2]; // [rsp+48h] [rbp-120h] BYREF
  int UsageValue; // [rsp+4Ch] [rbp-11Ch]
  int v35; // [rsp+50h] [rbp-118h]
  unsigned int v36; // [rsp+54h] [rbp-114h]
  int v37; // [rsp+58h] [rbp-110h]
  unsigned int v38; // [rsp+5Ch] [rbp-10Ch] BYREF
  struct _HIDP_PREPARSED_DATA *v39; // [rsp+60h] [rbp-108h] BYREF
  int v40; // [rsp+68h] [rbp-100h]
  unsigned int v41; // [rsp+6Ch] [rbp-FCh]
  int v42; // [rsp+70h] [rbp-F8h]
  unsigned int v43; // [rsp+80h] [rbp-E8h]
  char *v44; // [rsp+88h] [rbp-E0h]
  __int64 v45; // [rsp+90h] [rbp-D8h]
  __int64 v46; // [rsp+98h] [rbp-D0h]
  __int64 v47; // [rsp+A8h] [rbp-C0h]
  struct _USAGE_AND_PAGE *v48; // [rsp+B0h] [rbp-B8h]
  __int64 v49; // [rsp+B8h] [rbp-B0h]
  _DWORD v50[20]; // [rsp+D0h] [rbp-98h] BYREF

  v44 = a4;
  v36 = a3;
  v7 = a2;
  v43 = a5;
  v45 = a6;
  v46 = a7;
  v9 = 0;
  v39 = 0LL;
  v10 = 0;
  v35 = 0;
  v37 = 0;
  memset(v50, 0, 0x48uLL);
  v33[0] = 1;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  if ( a1 )
  {
    if ( a5 <= *(_DWORD *)(a1 + 336) )
    {
      v15 = (struct _USAGE_AND_PAGE *)Win32AllocPoolZInit(4LL * *(unsigned int *)(a1 + 984), 0x78707355u);
      v48 = v15;
      if ( v15 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &v39, v16, v17) )
        {
          Win32FreePool((__int64)v15);
          return 0LL;
        }
        v38 = *(_DWORD *)(a1 + 984);
        v19 = 0;
        v42 = 0;
        while ( v19 < a5 )
        {
          v32 = v7;
          if ( *(_DWORD *)(a1 + 356) == (unsigned __int8)*v44 )
          {
            v33[0] = 1;
            v20 = 28LL * v19;
            v47 = v20;
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                  0,
                                  *(unsigned __int16 *)(v45 + v20 + 24),
                                  a2,
                                  *(unsigned __int16 *)(v45 + v20 + 26),
                                  (__int64)v50,
                                  (__int64)v33,
                                  (__int64)v39);
            UsageValue = SpecificValueCaps;
            v22 = v45;
            if ( *(int *)(v45 + v20 + 4) > 1
              || (int)(SpecificValueCaps + 0x80000000) < 0
              || SpecificValueCaps == -1072627705 )
            {
              v23 = 1;
              v40 = 1;
            }
            else
            {
              v23 = 0;
              v40 = 0;
            }
            if ( v23 )
            {
              v24 = *(_QWORD *)(a1 + 712);
              v49 = v24;
              if ( v24 && *(_WORD *)(v24 + 8) && (unsigned __int16)(*(_WORD *)(v45 + v20 + 26) - 48) <= 1u )
                v25 = *(unsigned __int16 *)(*(_QWORD *)(v24 + 24) + 8LL * a2 + 2);
              else
                v25 = v32;
              v26 = (_DWORD *)(v46 + 4LL * v19);
              UsageValue = rimHidP_GetUsageValue(
                             0,
                             *(unsigned __int16 *)(v47 + v45 + 24),
                             v25,
                             *(unsigned __int16 *)(v47 + v45 + 26),
                             (__int64)v26,
                             (__int64)v39,
                             (__int64)v44,
                             v36);
              if ( UsageValue < 0 )
                break;
              if ( v50[10] < 0 )
                *v26 = SignExtendLong((unsigned int)*v26, HIWORD(v50[4]));
            }
            else
            {
              v27 = v19;
              v28 = v46;
              *(_DWORD *)(v46 + 4LL * v19) = 0;
              if ( !v37 )
              {
                if ( gpfnHidP_GetUsagesEx )
                {
                  Usages = gpfnHidP_GetUsagesEx(HidP_Input, a2, v15, &v38, v39, v44, v36);
                  v22 = v45;
                  v27 = v19;
                  v28 = v46;
                }
                else
                {
                  Usages = -1073741637;
                }
                UsageValue = Usages;
                v37 = 1;
                if ( Usages < 0 )
                  break;
              }
              v30 = 0;
              v41 = 0;
              while ( v30 < v38 )
              {
                if ( v15[v30].UsagePage == *(_WORD *)(v22 + v20 + 24) && v15[v30].Usage == *(_WORD *)(v22 + v20 + 26) )
                  *(_DWORD *)(v28 + 4 * v27) = 1;
                v41 = ++v30;
              }
            }
            ++v10;
            v7 = a2;
            v35 = v10;
          }
          v42 = ++v19;
        }
        Win32FreePool((__int64)v15);
      }
    }
  }
  LOBYTE(v9) = v10 == a5;
  return v9;
}
