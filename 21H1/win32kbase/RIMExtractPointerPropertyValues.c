/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C0165EF0
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C0198EF8 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     GetPreparsedData @ 0x1C01640AC (GetPreparsedData.c)
 *     SignExtendLong @ 0x1C01696AC (SignExtendLong.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C016BF8C (rimHidP_GetUsageValue.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rcx
  struct _USAGE_AND_PAGE *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v16; // r15d
  __int64 v17; // r13
  int SpecificValueCaps; // eax
  __int64 v19; // r10
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  _DWORD *v23; // r13
  __int64 v24; // r9
  int Usages; // eax
  unsigned int v26; // ecx
  unsigned __int16 v28; // [rsp+44h] [rbp-124h]
  __int16 v29[2]; // [rsp+48h] [rbp-120h] BYREF
  int UsageValue; // [rsp+4Ch] [rbp-11Ch]
  int v31; // [rsp+50h] [rbp-118h]
  unsigned int v32; // [rsp+54h] [rbp-114h]
  int v33; // [rsp+58h] [rbp-110h]
  unsigned int v34; // [rsp+5Ch] [rbp-10Ch] BYREF
  struct _HIDP_PREPARSED_DATA *v35; // [rsp+60h] [rbp-108h] BYREF
  int v36; // [rsp+68h] [rbp-100h]
  unsigned int v37; // [rsp+6Ch] [rbp-FCh]
  int v38; // [rsp+70h] [rbp-F8h]
  unsigned int v39; // [rsp+80h] [rbp-E8h]
  char *v40; // [rsp+88h] [rbp-E0h]
  __int64 v41; // [rsp+90h] [rbp-D8h]
  __int64 v42; // [rsp+98h] [rbp-D0h]
  __int64 v43; // [rsp+A8h] [rbp-C0h]
  struct _USAGE_AND_PAGE *v44; // [rsp+B0h] [rbp-B8h]
  __int64 v45; // [rsp+B8h] [rbp-B0h]
  _DWORD v46[20]; // [rsp+D0h] [rbp-98h] BYREF

  v40 = a4;
  v32 = a3;
  v7 = a2;
  v39 = a5;
  v41 = a6;
  v42 = a7;
  v9 = 0;
  v35 = 0LL;
  v10 = 0;
  v31 = 0;
  v33 = 0;
  memset(v46, 0, 0x48uLL);
  v29[0] = 1;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
  if ( a1 )
  {
    if ( a5 <= *(_DWORD *)(a1 + 336) )
    {
      v12 = (struct _USAGE_AND_PAGE *)Win32AllocPoolZInit(4LL * *(unsigned int *)(a1 + 984), 0x78707355u);
      v44 = v12;
      if ( v12 )
      {
        if ( !(unsigned int)GetPreparsedData(a1, &v35) )
        {
          Win32FreePool((__int64)v12, v13, v14);
          return 0LL;
        }
        v34 = *(_DWORD *)(a1 + 984);
        v16 = 0;
        v38 = 0;
        while ( v16 < a5 )
        {
          v28 = v7;
          if ( *(_DWORD *)(a1 + 356) == (unsigned __int8)*v40 )
          {
            v29[0] = 1;
            v17 = 28LL * v16;
            v43 = v17;
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                                  0,
                                  *(unsigned __int16 *)(v41 + v17 + 24),
                                  a2,
                                  *(unsigned __int16 *)(v41 + v17 + 26),
                                  (__int64)v46,
                                  (__int64)v29,
                                  (__int64)v35);
            UsageValue = SpecificValueCaps;
            v19 = v41;
            if ( *(int *)(v41 + v17 + 4) > 1
              || (v13 = 0x80000000LL, (int)(SpecificValueCaps + 0x80000000) < 0)
              || SpecificValueCaps == -1072627705 )
            {
              v20 = 1;
              v36 = 1;
            }
            else
            {
              v20 = 0;
              v36 = 0;
            }
            if ( v20 )
            {
              v21 = *(_QWORD *)(a1 + 712);
              v45 = v21;
              if ( v21 && *(_WORD *)(v21 + 8) && (unsigned __int16)(*(_WORD *)(v41 + v17 + 26) - 48) <= 1u )
                v22 = *(unsigned __int16 *)(*(_QWORD *)(v21 + 24) + 8LL * a2 + 2);
              else
                v22 = v28;
              v23 = (_DWORD *)(v42 + 4LL * v16);
              UsageValue = rimHidP_GetUsageValue(
                             0,
                             *(unsigned __int16 *)(v43 + v41 + 24),
                             v22,
                             *(unsigned __int16 *)(v43 + v41 + 26),
                             (__int64)v23,
                             (__int64)v35,
                             (__int64)v40,
                             v32);
              if ( UsageValue < 0 )
                break;
              if ( v46[10] < 0 )
                *v23 = SignExtendLong((unsigned int)*v23, HIWORD(v46[4]));
            }
            else
            {
              v14 = v16;
              v24 = v42;
              *(_DWORD *)(v42 + 4LL * v16) = 0;
              if ( !v33 )
              {
                if ( gpfnHidP_GetUsagesEx )
                {
                  Usages = gpfnHidP_GetUsagesEx(HidP_Input, a2, v12, &v34, v35, v40, v32);
                  v19 = v41;
                  v14 = v16;
                  v24 = v42;
                }
                else
                {
                  Usages = -1073741637;
                }
                UsageValue = Usages;
                v33 = 1;
                if ( Usages < 0 )
                  break;
              }
              v26 = 0;
              v37 = 0;
              while ( v26 < v34 )
              {
                v13 = v26;
                if ( v12[v26].UsagePage == *(_WORD *)(v19 + v17 + 24) && v12[v26].Usage == *(_WORD *)(v19 + v17 + 26) )
                  *(_DWORD *)(v24 + 4 * v14) = 1;
                v37 = ++v26;
              }
            }
            ++v10;
            v7 = a2;
            v31 = v10;
          }
          v38 = ++v16;
        }
        Win32FreePool((__int64)v12, v13, v14);
      }
    }
  }
  LOBYTE(v9) = v10 == a5;
  return v9;
}
