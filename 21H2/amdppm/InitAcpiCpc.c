/*
 * XREFs of InitAcpiCpc @ 0x1C0023388
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002A3A0 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0002EE8 (ReadGenAddrMaybeHiddenEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C00032BC (WriteGenAddrMaybeHiddenEx.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     CpcRegisterIsSupportedEx @ 0x1C000475C (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_S @ 0x1C000526C (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x1C0005700 (GetSubspaceFromGenAddrEx.c)
 *     Display_CPC @ 0x1C00063AC (Display_CPC.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C00254BC (ExecutePccCommand.c)
 *     RegisterSubspaceForGenAddr @ 0x1C00257FC (RegisterSubspaceForGenAddr.c)
 *     StartPccCommand @ 0x1C002585C (StartPccCommand.c)
 *     AcpiEval_CPC @ 0x1C0025E7C (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002B6DC (ValidateAcpiCPC.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  unsigned int *v10; // rbp
  unsigned int v11; // r15d
  char v12; // r13
  unsigned int i; // r12d
  _BYTE *v14; // r14
  int started; // eax
  __int64 SubspaceFromGenAddr; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // xmm1_8
  unsigned __int16 v20; // r9
  _BYTE *v21; // rcx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v23; // rcx
  int v25; // [rsp+28h] [rbp-30h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = AcpiEval_CPC(a1, a1 + 576);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_afd74aa2afb53b4debe5468e509e74e6_Traceguids);
      goto LABEL_50;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v4 = 11;
LABEL_7:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v4,
      (__int64)&WPP_afd74aa2afb53b4debe5468e509e74e6_Traceguids,
      v2);
    goto LABEL_50;
  }
  v5 = *(_QWORD *)(a1 + 576);
  v2 = ValidateAcpiCPC(v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x40000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v4 = 12;
    goto LABEL_7;
  }
  Display_CPC((_DWORD *)v5, v6, v7, v8);
  if ( dword_1C001483C != 1 )
  {
    v9 = *(_DWORD *)(v5 + 4);
    if ( v9 == 1 )
    {
      v10 = (unsigned int *)&CpcRegisterTable;
      v11 = 15;
    }
    else if ( v9 == 2 )
    {
      v10 = (unsigned int *)&Cpc2RegisterTable;
      v11 = 19;
    }
    else
    {
      v10 = (unsigned int *)&Cpc3RegisterTable;
      v11 = 21;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00143F8,
      0LL);
    v12 = 0;
    for ( i = 0; i < v11; ++i )
    {
      v14 = (_BYTE *)(v5 + *v10);
      if ( *v14 == 10 )
      {
        started = RegisterSubspaceForGenAddr(a1, v5 + *v10);
        v3 = started;
        v12 = 1;
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v20 = 13;
LABEL_36:
          v25 = started;
LABEL_37:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            v20,
            (__int64)&WPP_afd74aa2afb53b4debe5468e509e74e6_Traceguids,
            v25);
          goto LABEL_49;
        }
        SubspaceFromGenAddr = GetSubspaceFromGenAddrEx((__int64)v14);
        v17 = *(_QWORD *)(a1 + 248);
        if ( v17 )
        {
          if ( v17 != SubspaceFromGenAddr )
          {
            v3 = -1073741270;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_S(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0xEu,
                (__int64)&WPP_afd74aa2afb53b4debe5468e509e74e6_Traceguids,
                *(const wchar_t **)(a1 + 64));
            goto LABEL_49;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 248) = SubspaceFromGenAddr;
        }
      }
      v10 += 6;
    }
    if ( !CpcRegisterIsSupportedEx(v5 + 440) || *(_BYTE *)v18 == 126 && !*(_QWORD *)(v5 + 444) )
    {
      v19 = *(_QWORD *)(v5 + 48);
      *(_OWORD *)v18 = *(_OWORD *)(v5 + 32);
      *(_QWORD *)(v18 + 16) = v19;
    }
    if ( v12 )
    {
      started = StartPccCommand(*(_QWORD *)(a1 + 248));
      v3 = started;
      if ( started < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_49;
        v20 = 15;
        goto LABEL_36;
      }
    }
    if ( CpcRegisterIsSupportedEx(v5 + 344) )
      WriteGenAddrMaybeHiddenEx(a1, v21, 1LL);
    if ( !v12 )
      goto LABEL_46;
    v3 = ExecutePccCommand(*(_QWORD *)(a1 + 248), 0LL);
    if ( v3 == -1073741435 )
      v3 = 0;
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 16;
        v25 = v3;
        goto LABEL_37;
      }
    }
    else
    {
LABEL_46:
      *(_QWORD *)(a1 + 376) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 8));
      *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 32));
      GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 56));
      v23 = *(_QWORD *)(a1 + 384);
      *(_QWORD *)(a1 + 392) = GenAddrMaybeHidden;
      if ( GenAddrMaybeHidden > v23 )
        *(_QWORD *)(a1 + 392) = v23;
      *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v5 + 80));
    }
LABEL_49:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00143F8);
  }
LABEL_50:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
