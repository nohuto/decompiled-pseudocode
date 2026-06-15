/*
 * XREFs of ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140009360
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140008A90 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::InitializeRateConverterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-39h] BYREF
  __int64 v10; // [rsp+28h] [rbp-31h] BYREF
  __int64 v11; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v12[2]; // [rsp+38h] [rbp-21h] BYREF
  __int128 v13; // [rsp+58h] [rbp-1h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  int v15; // [rsp+70h] [rbp+17h]

  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
         &v11) < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 6) )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v8 + 16))(a2, &v9);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, &v10);
      if ( v6 >= 0 )
        goto LABEL_13;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(v8 + 8))(a2, &v9);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v10);
      if ( v6 >= 0 )
      {
LABEL_13:
        LODWORD(v12[0]) = 60;
        *(GUID *)((char *)v12 + 4) = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
        *((float *)&v12[1] + 1) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9) + 4);
        *((float *)&v12[1] + 2) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4);
        if ( (float)((float)(1.0 - *((float *)this + 50))
                   * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9) + 4)) < 10.0 )
          HIDWORD(v12[1]) = 1092616192;
        else
          *((float *)&v12[1] + 3) = (float)(1.0 - *((float *)this + 50))
                                  * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9) + 4);
        if ( (float)((float)(*((float *)this + 51) + 1.0)
                   * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9) + 4)) > 384000.0 )
          LODWORD(v13) = 1220247552;
        else
          *(float *)&v13 = (float)(*((float *)this + 51) + 1.0)
                         * (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9) + 4);
        *((float *)&v13 + 1) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4);
        *((float *)&v13 + 2) = (float)*(int *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL))(v10) + 4);
        HIDWORD(v13) = *((_DWORD *)this + 52);
        HIDWORD(v14) = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9) + 2);
        v15 = 0;
        LODWORD(v14) = *((_DWORD *)this + 3) != 0;
        v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _OWORD *))a3->lpVtbl->Initialize)(
               a3,
               60LL,
               v12);
        if ( v6 >= 0 )
          goto LABEL_3;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      46LL,
      &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
      (unsigned int)v6);
  }
  AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeRateConverterInterface", 0xDD0u, v6);
LABEL_3:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v6;
}
