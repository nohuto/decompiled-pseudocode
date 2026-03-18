/*
 * XREFs of RIMGetPropertyCount @ 0x1C01673FC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C0168358 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C016BF38 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v8; // r14d
  __int64 v9; // rcx
  unsigned __int16 v10; // r15
  int SpecificValueCaps; // ebx
  __int64 v12; // rax
  unsigned __int16 v13; // di
  unsigned __int16 v14; // cx
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  _BYTE *v20; // rax
  __int64 v22; // rax
  unsigned __int16 v23; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v24; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v25[2]; // [rsp+50h] [rbp-69h] BYREF
  __int16 v26; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v27; // [rsp+58h] [rbp-61h]
  int v28; // [rsp+5Ch] [rbp-5Dh]
  __int64 v29; // [rsp+60h] [rbp-59h]
  _BYTE v30[80]; // [rsp+70h] [rbp-49h] BYREF

  v27 = a2;
  v29 = a1;
  v24 = a3;
  v6 = a1;
  v23 = a3;
  v8 = 0;
  memset(v30, 0, 0x48uLL);
  v25[0] = 0;
  v26 = 1;
  v10 = a2;
  v28 = 0;
  SpecificValueCaps = -1073741668;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  v12 = *(_QWORD *)(v6 + 712);
  v13 = a3;
  if ( v12 )
  {
    v14 = *(_WORD *)(v12 + 8);
    if ( v14 )
    {
      v10 = *(_WORD *)(v12 + 8);
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v14, 0, 0LL, (__int64)v25, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v22 = *(_QWORD *)(v6 + 712);
        v13 = v25[0] + v24;
        v23 = v25[0];
        v28 = 1;
        *(_WORD *)(v22 + 10) = v25[0];
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 30, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
      }
    }
  }
  if ( v13 > 1u )
  {
    v16 = Win32AllocPool(72LL * v13, 0x63707352u);
    if ( v16 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v10, 48, (__int64)v30, (__int64)&v26, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v6 + 776) = v30[2];
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v10, 0, v16, (__int64)&v23, a4);
        if ( SpecificValueCaps >= 0 )
        {
          v19 = v23;
          if ( v23 )
          {
            LOBYTE(v18) = v30[2];
            v20 = (_BYTE *)(v16 + 2);
            v17 = v23;
            do
            {
              if ( *v20 == v30[2] )
                ++v8;
              v20 += 72;
              --v17;
            }
            while ( v17 );
          }
          if ( v28 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v27, 0, v16 + 72LL * v23, (__int64)&v24, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v18 = v24;
              v17 = v23;
              if ( v24 )
              {
                do
                {
                  if ( (unsigned __int16)v17 >= v13 )
                    break;
                  v19 = 9LL * (unsigned __int16)v17;
                  if ( *(_BYTE *)(v16 + 72LL * (unsigned __int16)v17 + 2) == v30[2] )
                    ++v8;
                  LOWORD(v17) = v17 + 1;
                }
                while ( (unsigned __int16)(v17 - v23) < v24 );
                v6 = v29;
              }
            }
          }
          if ( v8 <= 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
          *(_DWORD *)(v6 + 336) = v8;
        }
      }
      Win32FreePool(v16, v17, v18);
    }
  }
  return SpecificValueCaps >= 0;
}
