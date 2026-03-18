/*
 * XREFs of RIMIsParallelDevice @ 0x1C015F238
 * Callers:
 *     RIMAssignTouchType @ 0x1C015BF84 (RIMAssignTouchType.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C015F890 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMValidateAllCollectionUsages @ 0x1C015FF40 (RIMValidateAllCollectionUsages.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163688 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIsParallelDevice(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r12
  _DWORD *v8; // rdi
  unsigned int v9; // eax
  int v10; // ecx
  unsigned __int16 v11; // r15
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // ecx
  unsigned int *v20; // rax
  _WORD v22[2]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v23; // [rsp+44h] [rbp-75h] BYREF
  unsigned __int16 v24; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v25; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v26; // [rsp+50h] [rbp-69h]
  __int64 v27; // [rsp+58h] [rbp-61h] BYREF
  __int64 v28; // [rsp+60h] [rbp-59h] BYREF
  __int64 v29; // [rsp+68h] [rbp-51h]
  unsigned int *v30; // [rsp+70h] [rbp-49h]
  _BYTE v31[80]; // [rsp+80h] [rbp-39h] BYREF

  v3 = 0;
  v30 = a3;
  v29 = a1;
  v5 = a1;
  v27 = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(v31, 0, 0x48uLL);
  v8 = *(_DWORD **)(v5 + 712);
  v9 = 0;
  v24 = 0;
  v23 = 0;
  v22[0] = 1;
  v25 = 0;
  v26 = 0;
  if ( gpfnHidP_GetLinkCollectionNodes )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, unsigned int *, __int64))gpfnHidP_GetLinkCollectionNodes)(0LL, &v25, a2);
    v9 = v25;
  }
  else
  {
    v10 = -1073741637;
  }
  if ( v10 == -1072627705 && v9 > 1 )
  {
    v8[3] = v9;
    v11 = 1;
    if ( v25 > 1 )
    {
      v12 = 0;
      do
      {
        if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v11, 81, (__int64)v31, (__int64)v22, a2) == 1114112 )
        {
          ++*v8;
          if ( v12 )
          {
            if ( v6 && !v26 )
            {
              v18 = RIMValidateAllCollectionUsages(v6, v24, v7, v23, v11, a2);
              v19 = v26;
              if ( !v18 )
                v19 = 1;
              v26 = v19;
            }
          }
          else
          {
            v13 = RIMRetrieveAllLinkIndexUsages(
                    v11,
                    a2,
                    (unsigned int)&v24,
                    (unsigned int)&v27,
                    (__int64)&v23,
                    (__int64)&v28);
            v6 = v27;
            if ( v13 != 1114112 )
            {
              if ( v27 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16, v17);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = 3;
                WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 26, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
              }
            }
            v7 = v28;
            v12 = 1;
          }
        }
        ++v11;
        v22[0] = 1;
      }
      while ( v11 < v25 );
      v5 = v29;
      if ( v6 )
        Win32FreePool(v6);
      if ( v7 )
        Win32FreePool(v7);
    }
    v22[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, 0, 84, (__int64)v31, (__int64)v22, a2) == 1114112 )
    {
      v8[8] |= 1u;
      *(_DWORD *)(v5 + 24) = 3;
    }
    if ( *v8 > 1u && (v8[8] & 1) == 0 )
      *(_DWORD *)(v5 + 24) = 4;
    if ( (unsigned int)(*(_DWORD *)(v5 + 24) - 3) <= 1 )
    {
      v20 = v30;
      v3 = 1;
      *(_DWORD *)(v5 + 312) |= 2u;
      *v20 = v25;
    }
  }
  return v3;
}
