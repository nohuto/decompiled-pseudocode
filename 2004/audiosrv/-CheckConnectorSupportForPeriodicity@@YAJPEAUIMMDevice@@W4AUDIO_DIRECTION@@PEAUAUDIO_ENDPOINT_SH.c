/*
 * XREFs of ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x18011B0D4
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x18011BC48 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CheckConnectorSupportForPeriodicity(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  __int64 (__fastcall *v7)(__int64, GUID *, __int64, __int16 *, __int64 *); // rax
  int v8; // ebx
  void (*v9)(void); // rax
  __int64 v10; // rcx
  double v11; // xmm1_8
  double v12; // xmm0_8
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int16 v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+88h] [rbp+28h] BYREF
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF
  int v22; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  v17 = 65;
  v18 = a4;
  v19 = a3;
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64, __int16 *, __int64 *))(*(_QWORD *)a1 + 24LL);
  v21 = 0LL;
  if ( a2 )
  {
    v8 = v7(a1, &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82, 1LL, &v17, &v21);
    if ( v8 < 0 )
    {
      v10 = v21;
      goto LABEL_7;
    }
  }
  else
  {
    v8 = v7(a1, &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa, 1LL, &v17, &v21);
    if ( v8 < 0 )
    {
      if ( !v21 )
        goto LABEL_32;
      v9 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
      goto LABEL_5;
    }
  }
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v21)(
         v21,
         &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
         &v16);
  v10 = v21;
  if ( v8 < 0 )
    goto LABEL_7;
  if ( v21 )
    (*(void (**)(void))(*(_QWORD *)v21 + 16LL))();
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 40LL))(v16, &v20);
  if ( v8 < 0 )
    goto LABEL_32;
  if ( !v20 )
  {
    v11 = (double)*(int *)(a3 + 48);
    v12 = (double)(int)a5;
LABEL_31:
    *a6 = (int)(v11 * v12 / 10000000.0 + 0.5);
    goto LABEL_32;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 32LL))(v16, &v22);
  if ( v8 < 0 )
    goto LABEL_32;
  if ( !v22 )
  {
    v13 = 20000;
    if ( a5 >= 0x4E20 )
      v13 = a5;
    v11 = (double)v13;
    v12 = (double)*(int *)(a3 + 48);
    goto LABEL_31;
  }
  v15 = 0LL;
  v21 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
         v16,
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v21);
  if ( v8 >= 0 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
           v16,
           &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
           &v15);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, 0x40000LL);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v16 + 24LL))(v16, a5, 0LL);
        if ( (int)(v8 + 0x80000000) < 0 || v8 == -2005139372 )
          v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v15 + 32LL))(v15, a6);
      }
    }
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v10 = v15;
LABEL_7:
  if ( v10 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
LABEL_5:
    v9();
  }
LABEL_32:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)v8;
}
