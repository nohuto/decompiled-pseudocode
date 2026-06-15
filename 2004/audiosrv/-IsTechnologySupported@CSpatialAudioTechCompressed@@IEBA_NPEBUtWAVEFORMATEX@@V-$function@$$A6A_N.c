/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800729DC
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004BEB0 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800388A8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioTechCompressed::IsTechnologySupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned int a5,
        _DWORD *a6,
        _BYTE *a7,
        __int64 a8)
{
  char v11; // si
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  _BYTE *v18; // [rsp+20h] [rbp-50h] BYREF
  _DWORD *v19; // [rsp+28h] [rbp-48h]
  _BYTE *v20; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+38h] [rbp-38h]
  _BYTE v22[40]; // [rsp+40h] [rbp-30h] BYREF

  v21 = a3;
  v19 = a6;
  v20 = a7;
  memset(v22, 0, sizeof(v22));
  v11 = 0;
  *a6 = 0;
  *a7 = 0;
  v12 = 65534LL;
  if ( a2
    && *(_WORD *)a2 == 0xFFFE
    && *(_WORD *)(a2 + 16) == 22
    && *(_DWORD *)(a2 + 4) == 192000
    && *(_WORD *)(a2 + 2) == 8
    && *(_WORD *)(a2 + 14) == 16
    && *(_WORD *)(a2 + 18) == 16
    && (*(_DWORD *)(a2 + 20) == 1599 || *(_DWORD *)(a2 + 20) == 255) )
  {
    v13 = 0;
    if ( a5 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(a2 + 24) == *(_QWORD *)&a4[v13] && *(_QWORD *)(a2 + 32) == *((_QWORD *)&a4[v13] + 1) )
        {
          v18 = (_BYTE *)a2;
          v14 = *(_QWORD *)(a3 + 56);
          if ( !v14 )
          {
            std::_Xbad_function_call();
            __debugbreak();
            goto LABEL_24;
          }
          v11 = (*(__int64 (__fastcall **)(__int64, _BYTE **))(*(_QWORD *)v14 + 16LL))(v14, &v18);
          if ( v11 )
            break;
        }
        if ( ++v13 >= a5 )
          goto LABEL_16;
      }
      *(_OWORD *)v22 = *(_OWORD *)a2;
      *(_OWORD *)&v22[16] = *(_OWORD *)(a2 + 16);
      *(_QWORD *)&v22[32] = *(_QWORD *)(a2 + 32);
LABEL_16:
      if ( !v11 )
        goto LABEL_17;
LABEL_24:
      *v19 = 1;
      *v20 = 0;
      *(_OWORD *)a8 = *(_OWORD *)v22;
      *(_OWORD *)(a8 + 16) = *(_OWORD *)&v22[16];
      *(_QWORD *)(a8 + 32) = *(_QWORD *)&v22[32];
      goto LABEL_21;
    }
  }
LABEL_17:
  v15 = 0;
  if ( !a5 )
  {
LABEL_21:
    std::_Func_class<void,>::_Tidy(a3, v12);
    return v11;
  }
  while ( 1 )
  {
    *(_QWORD *)v22 = 0x2EE000008FFFELL;
    *(_DWORD *)&v22[14] = 1441808;
    *(_OWORD *)&v22[24] = *a4;
    *(_WORD *)&v22[18] = 16;
    *(_DWORD *)&v22[20] = 1599;
    *(_WORD *)&v22[12] = 16;
    *(_DWORD *)&v22[8] = 3072000;
    v18 = v22;
    v16 = *(_QWORD *)(a3 + 56);
    if ( !v16 )
      break;
    v11 = (*(__int64 (__fastcall **)(__int64, _BYTE **))(*(_QWORD *)v16 + 16LL))(v16, &v18);
    if ( v11 )
      goto LABEL_24;
    ++v15;
    ++a4;
    if ( v15 >= a5 )
      goto LABEL_21;
  }
  std::_Xbad_function_call();
  __debugbreak();
  return CSpatialAudioTechCompressed::IsTechnologySupported_::_1_::dtor_0();
}
