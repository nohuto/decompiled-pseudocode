/*
 * XREFs of RIMGetPropertyCount @ 0x1C01610AC
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C0162008 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0165BE8 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // r15
  int SpecificValueCaps; // ebx
  __int64 v15; // rax
  unsigned __int16 v16; // di
  unsigned __int16 v17; // cx
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  _BYTE *v24; // rax
  __int64 v26; // rax
  unsigned __int16 v27; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v28; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v29[2]; // [rsp+50h] [rbp-69h] BYREF
  __int16 v30; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v31; // [rsp+58h] [rbp-61h]
  int v32; // [rsp+5Ch] [rbp-5Dh]
  __int64 v33; // [rsp+60h] [rbp-59h]
  _BYTE v34[80]; // [rsp+70h] [rbp-49h] BYREF

  v31 = a2;
  v33 = a1;
  v28 = a3;
  v6 = a1;
  v27 = a3;
  v8 = 0;
  memset(v34, 0, 0x48uLL);
  v29[0] = 0;
  v30 = 1;
  v13 = a2;
  v32 = 0;
  SpecificValueCaps = -1073741668;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
  v15 = *(_QWORD *)(v6 + 712);
  v16 = a3;
  if ( v15 )
  {
    v17 = *(_WORD *)(v15 + 8);
    if ( v17 )
    {
      v13 = *(_WORD *)(v15 + 8);
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v17, 0, 0LL, (__int64)v29, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v26 = *(_QWORD *)(v6 + 712);
        v16 = v29[0] + v28;
        v27 = v29[0];
        v32 = 1;
        *(_WORD *)(v26 + 10) = v29[0];
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 30, (__int64)&WPP_55b2fa568459373c5b96b2ba3eae63fb_Traceguids);
      }
    }
  }
  if ( v16 > 1u )
  {
    v19 = Win32AllocPool(72LL * v16, 0x63707352u);
    if ( v19 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v13, 48, (__int64)v34, (__int64)&v30, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v6 + 776) = v34[2];
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v13, 0, v19, (__int64)&v27, a4);
        if ( SpecificValueCaps >= 0 )
        {
          v23 = v27;
          if ( v27 )
          {
            LOBYTE(v21) = v34[2];
            v24 = (_BYTE *)(v19 + 2);
            v20 = v27;
            v22 = 1LL;
            do
            {
              if ( *v24 == v34[2] )
                ++v8;
              v24 += 72;
              --v20;
            }
            while ( v20 );
          }
          if ( v32 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v31, 0, v19 + 72LL * v27, (__int64)&v28, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v21 = v28;
              v20 = v27;
              if ( v28 )
              {
                LOBYTE(v22) = v34[2];
                do
                {
                  if ( (unsigned __int16)v20 >= v16 )
                    break;
                  v23 = 9LL * (unsigned __int16)v20;
                  if ( *(_BYTE *)(v19 + 72LL * (unsigned __int16)v20 + 2) == v34[2] )
                    ++v8;
                  LOWORD(v20) = v20 + 1;
                }
                while ( (unsigned __int16)(v20 - v27) < v28 );
                v6 = v33;
              }
            }
          }
          if ( v8 <= 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v20, v21, v22);
          *(_DWORD *)(v6 + 336) = v8;
        }
      }
      Win32FreePool(v19);
    }
  }
  return SpecificValueCaps >= 0;
}
