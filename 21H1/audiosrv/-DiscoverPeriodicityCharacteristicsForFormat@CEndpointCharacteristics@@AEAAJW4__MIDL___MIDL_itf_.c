/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011BB88
 * Callers:
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x18011A62C (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18011CAA4 (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011FFC4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18001E890 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180023580 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800BD1E0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x18011B014 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x18011D9D0 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4,
        struct PacketSizeConstraints *a5,
        bool a6,
        __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11,
        unsigned int *a12)
{
  signed int PacketSizesFromConstraints; // ebx
  __int64 v15; // r8
  int v16; // eax
  void *v17; // rcx
  char *v18; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // ebx
  GUID *AliasedDeviceConnectorMode; // rax
  unsigned int v21; // eax
  unsigned int *v22; // rcx
  unsigned int *v23; // r8
  int v24; // eax
  unsigned int v25; // eax
  int v26; // edi
  int v27; // r9d
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned int v31; // edi
  unsigned int v32; // eax
  unsigned int *v33; // rcx
  int v34; // r15d
  unsigned int v35; // edi
  unsigned int v36; // r12d
  unsigned int *v37; // rcx
  unsigned int v38; // eax
  unsigned __int64 v40; // [rsp+20h] [rbp-D1h]
  unsigned __int64 v41; // [rsp+28h] [rbp-C9h]
  unsigned __int64 v42; // [rsp+30h] [rbp-C1h]
  LPVOID pv; // [rsp+60h] [rbp-91h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v44; // [rsp+68h] [rbp-89h] BYREF
  unsigned int v45; // [rsp+6Ch] [rbp-85h] BYREF
  unsigned int v46; // [rsp+70h] [rbp-81h]
  unsigned int *v47; // [rsp+78h] [rbp-79h]
  unsigned int *v48; // [rsp+80h] [rbp-71h]
  unsigned __int64 v49; // [rsp+88h] [rbp-69h] BYREF
  signed __int64 v50; // [rsp+90h] [rbp-61h]
  char *v51; // [rsp+98h] [rbp-59h]
  const struct tWAVEFORMATEX *v52; // [rsp+A0h] [rbp-51h]
  CEndpointCharacteristics *v53; // [rsp+A8h] [rbp-49h]
  unsigned int *v54; // [rsp+B0h] [rbp-41h]
  __int64 v55; // [rsp+B8h] [rbp-39h]
  struct _GUID v56; // [rsp+C0h] [rbp-31h] BYREF
  GUID v57; // [rsp+D0h] [rbp-21h] BYREF

  v52 = a4;
  v49 = (unsigned __int64)a3;
  v44 = a2;
  v53 = this;
  v48 = a9;
  v47 = a10;
  v54 = a12;
  PacketSizesFromConstraints = 0;
  v15 = 100000LL;
  if ( a7 )
    v15 = a7;
  v50 = v15;
  v16 = (int)((double)(int)a4->nSamplesPerSec * (double)(int)v15 / 10000000.0 + 0.5);
  *a11 = v16;
  *a10 = v16;
  *a9 = v16;
  *a8 = v16;
  if ( !*((_DWORD *)this + 8) )
  {
    v51 = 0LL;
    pv = 0LL;
    v55 = 0LL;
    PacketSizesFromConstraints = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                                   *((_QWORD *)this + 2),
                                   &pv);
    if ( PacketSizesFromConstraints < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_6:
      v17 = 0LL;
LABEL_7:
      CoTaskMemFree(v17);
      return (unsigned int)PacketSizesFromConstraints;
    }
    v46 = a4->cbSize + 64;
    v18 = (char *)CoTaskMemAlloc(v46);
    CoTaskMemFree(0LL);
    v51 = v18;
    if ( !v18 )
    {
      PacketSizesFromConstraints = -2147024882;
      CoTaskMemFree(pv);
      pv = 0LL;
      goto LABEL_6;
    }
    *(_DWORD *)v18 = a4->cbSize + 64;
    *((_DWORD *)v18 + 1) = GetSessionIdFromEndpointId(pv);
    v19 = v44;
    *((_DWORD *)v18 + 2) = v44;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, v19) )
    {
      v56 = *(struct _GUID *)v49;
      AliasedDeviceConnectorMode = CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
                                     (__int64)this,
                                     &v57,
                                     v19,
                                     &v56,
                                     1);
    }
    else
    {
      v56 = GUID_00000000_0000_0000_0000_000000000000;
      AliasedDeviceConnectorMode = &v56;
    }
    *(GUID *)(v18 + 12) = *AliasedDeviceConnectorMode;
    memcpy_0(v18 + 44, a4, a4->cbSize + 18LL);
    PacketSizesFromConstraints = CheckConnectorSupportForPeriodicity(
                                   *((_QWORD *)this + 2),
                                   *((_DWORD *)this + 47),
                                   (__int64)v18,
                                   v46,
                                   v50,
                                   &v45);
    if ( PacketSizesFromConstraints < 0 )
    {
LABEL_14:
      CoTaskMemFree(pv);
      pv = 0LL;
      v17 = v18;
      goto LABEL_7;
    }
    v21 = v45;
    *a11 = v45;
    v22 = v47;
    *v47 = v21;
    v23 = v48;
    *v48 = v21;
    *a8 = v21;
    if ( v44 == eHostProcessConnector && !a7 )
    {
      if ( *((_DWORD *)this + 47) == 1 && (unsigned int)g_MaxCapturePeriodicityInHns > v50 && (!a5 || !*(_BYTE *)a5) )
      {
        v24 = CheckConnectorSupportForPeriodicity(
                *((_QWORD *)this + 2),
                1,
                (__int64)v18,
                v46,
                (unsigned int)g_MaxCapturePeriodicityInHns,
                &v44);
        v22 = v47;
        v23 = v48;
        if ( v24 >= 0 )
          *a11 = v44;
      }
      if ( a5 )
      {
        v56 = *(struct _GUID *)v49;
        PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                       a5,
                                       a4->nAvgBytesPerSec,
                                       a4->nBlockAlign,
                                       &v56,
                                       v40,
                                       v41,
                                       v42,
                                       a8,
                                       v23,
                                       v22,
                                       (unsigned int *)&v44);
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_14;
        if ( *((_DWORD *)this + 47) != 1 || (v25 = v44, !*(_BYTE *)a5) )
          v25 = *a8;
        *a11 = v25;
      }
      else if ( a6 )
      {
        v26 = -1;
        PacketSizesFromConstraints = ULongLongMult(0x61A8uLL, a4->nAvgBytesPerSec, &v49);
        if ( PacketSizesFromConstraints >= 0 )
        {
          if ( v49 )
          {
            PacketSizesFromConstraints = -2147024362;
            v29 = (v49 - 1) / (unsigned int)(10000000 * v27);
            v30 = v29 + 1;
            if ( v29 + 1 < v29 )
              goto LABEL_14;
            if ( v30 <= v28 )
              v26 = v29 + 1;
            PacketSizesFromConstraints = v28 < v30 ? 0x80070216 : 0;
          }
          else
          {
            v26 = 0;
            PacketSizesFromConstraints = 0;
          }
        }
        if ( PacketSizesFromConstraints < 0 )
          goto LABEL_14;
        v31 = (v26 - 1) & 0xFFFFFFE0;
        do
        {
          v32 = *a8;
          v31 += 32;
          if ( v31 >= *a8 )
          {
            v33 = v47;
            goto LABEL_43;
          }
        }
        while ( (int)CheckConnectorSupportForPeriodicity(
                       *((_QWORD *)this + 2),
                       *((_DWORD *)this + 47),
                       (__int64)v18,
                       v46,
                       (unsigned int)(int)((double)(int)v31 * 10000000.0 / (double)(int)a4->nSamplesPerSec + 0.5),
                       &v45) < 0
             || v31 != v45 );
        v33 = v47;
        *v47 = v45;
        v32 = *a8;
LABEL_43:
        if ( *v33 < v32 )
        {
          v34 = 0;
          while ( 1 )
          {
            v35 = 32 * (1 << v34);
            v36 = v35 * ((*v47 - 1) / v35 + 1);
            if ( v36 < *a8
              && (int)CheckConnectorSupportForPeriodicity(
                        *((_QWORD *)v53 + 2),
                        *((_DWORD *)v53 + 47),
                        (__int64)v18,
                        v46,
                        (unsigned int)(int)((double)(int)v36 * 10000000.0 / (double)(int)v52->nSamplesPerSec + 0.5),
                        &v45) >= 0
              && v45 == v36 )
            {
              break;
            }
            if ( ++v34 >= 3 )
            {
              v37 = v48;
              v35 = *v48;
              goto LABEL_50;
            }
          }
          v37 = v48;
          *v48 = v35;
LABEL_50:
          v38 = *a8;
          if ( v35 == *a8 )
          {
            *v37 = v38;
            *v47 = v38;
          }
        }
      }
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v18);
  }
  *v54 = *a11;
  if ( *a11 > *a8 )
    *a11 = *a8;
  return (unsigned int)PacketSizesFromConstraints;
}
