/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180072B30
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004AFA0 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004B180 (-IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004B930 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800388B8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     IsSamplingRateBitRateSupported @ 0x18004BFA8 (IsSamplingRateBitRateSupported.c)
 *     FillHrtfDesiredFormat @ 0x18004C284 (FillHrtfDesiredFormat.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005BF24 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioTechHRTF::IsTechnologySupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _BYTE *a8,
        __int64 a9)
{
  char v10; // r14
  bool v11; // zf
  unsigned int v12; // ecx
  _DWORD *v13; // rax
  bool v14; // zf
  __int16 v15; // cx
  unsigned int v16; // r8d
  _WORD *v17; // rax
  unsigned int v18; // ecx
  int *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edi
  int *v22; // r15
  unsigned int v23; // esi
  int *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD v28[2]; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v29[64]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v30; // [rsp+88h] [rbp-51h] BYREF
  __int128 v31; // [rsp+98h] [rbp-41h]
  __int64 v32; // [rsp+A8h] [rbp-31h]
  int v33; // [rsp+B0h] [rbp-29h] BYREF
  _DWORD v34[5]; // [rsp+B4h] [rbp-25h] BYREF
  int v35; // [rsp+C8h] [rbp-11h] BYREF
  _DWORD v36[3]; // [rsp+CCh] [rbp-Dh] BYREF

  v28[1] = a5;
  v10 = 0;
  *a7 = 0;
  *a8 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v35 = 48000;
  v36[0] = 48000;
  v36[1] = 44100;
  v36[2] = 32000;
  if ( a3 )
  {
    if ( *(_WORD *)a3 == 0xFFFE )
    {
      if ( *(_QWORD *)(a3 + 24) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
        goto LABEL_12;
      v11 = *(_QWORD *)(a3 + 32) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    }
    else
    {
      v11 = ((*(_WORD *)a3 - 1) & 0xFFFD) == 0;
    }
    if ( v11 )
    {
      v12 = 1;
      a2 = *(unsigned int *)(a3 + 4);
      v13 = v36;
      while ( *v13 != (_DWORD)a2 )
      {
        ++v12;
        ++v13;
        if ( v12 >= 4 )
          goto LABEL_12;
      }
      v35 = *(_DWORD *)(a3 + 4);
    }
  }
LABEL_12:
  v33 = 1048592;
  v34[0] = 1048592;
  v34[1] = 1572896;
  v34[2] = 1572888;
  v34[3] = 524296;
  if ( a3 )
  {
    if ( *(_WORD *)a3 == 0xFFFE )
    {
      if ( *(_QWORD *)(a3 + 24) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 )
        goto LABEL_27;
      v14 = *(_QWORD *)(a3 + 32) == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    }
    else
    {
      v14 = ((*(_WORD *)a3 - 1) & 0xFFFD) == 0;
    }
    if ( v14 )
    {
      a2 = *(unsigned __int16 *)(a3 + 14);
      if ( *(_WORD *)a3 == 0xFFFE )
        v15 = *(_WORD *)(a3 + 18);
      else
        v15 = *(_WORD *)(a3 + 14);
      v16 = 1;
      v17 = (_WORD *)v34 + 1;
      while ( *(v17 - 1) != (_WORD)a2 || *v17 != v15 )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= 5 )
          goto LABEL_27;
      }
      LOWORD(v33) = a2;
      HIWORD(v33) = v15;
    }
  }
LABEL_27:
  if ( !a4 )
    goto LABEL_33;
  v18 = 0;
  a2 = *(unsigned int *)(a4 + 4);
  v19 = &v35;
  while ( (_DWORD)a2 != *v19 )
  {
    ++v18;
    ++v19;
    if ( v18 >= 4 )
      goto LABEL_33;
  }
  v20 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
          (__int64)v29,
          a5);
  v10 = IsSamplingRateBitRateSupported((__int16 *)a4, v20, (__int64)&v30);
  if ( !v10 )
  {
LABEL_33:
    v21 = 0;
    v22 = &v35;
    while ( 2 )
    {
      if ( !v10 )
      {
        v23 = 0;
        v24 = &v33;
        do
        {
          if ( v10 )
            break;
          FillHrtfDesiredFormat(a6, *(_WORD *)v24, *((_WORD *)v24 + 1), *v22, (__int64)&v30);
          v28[0] = &v30;
          v25 = *(_QWORD *)(a5 + 56);
          if ( !v25 )
            goto LABEL_46;
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v25 + 16LL))(v25, v28);
          if ( !v10 && DWORD1(v31) == 1599 )
          {
            DWORD1(v31) = 255;
            v28[0] = &v30;
            v26 = *(_QWORD *)(a5 + 56);
            if ( !v26 )
            {
              std::_Xbad_function_call();
LABEL_46:
              std::_Xbad_function_call();
              __debugbreak();
              return CSpatialAudioTechHRTF::IsTechnologySupported_::_1_::dtor_0();
            }
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 16LL))(v26, v28);
          }
          ++v23;
          ++v24;
        }
        while ( v23 < 5 );
        ++v21;
        ++v22;
        if ( v21 < 4 )
          continue;
      }
      break;
    }
  }
  *(_OWORD *)a9 = v30;
  *(_OWORD *)(a9 + 16) = v31;
  *(_QWORD *)(a9 + 32) = v32;
  std::_Func_class<void,>::_Tidy(a5, a2);
  return v10;
}
