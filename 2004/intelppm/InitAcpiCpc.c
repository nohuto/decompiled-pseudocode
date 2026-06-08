/*
 * XREFs of InitAcpiCpc @ 0x1C0020D88
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021A14 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0008830 (ReadGenAddrMaybeHiddenEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0008BC0 (WriteGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupportedEx @ 0x1C000902C (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_S @ 0x1C0009B2C (WPP_RECORDER_SF_S.c)
 *     GetSubspaceFromGenAddrEx @ 0x1C000B1A8 (GetSubspaceFromGenAddrEx.c)
 *     Display_CPC @ 0x1C000BB80 (Display_CPC.c)
 *     AcpiEval_CPC @ 0x1C0022A10 (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002DD78 (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C00315BC (RegisterSubspaceForGenAddr.c)
 *     StartPccCommand @ 0x1C003161C (StartPccCommand.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int v3; // esi
  unsigned __int16 v5; // r9
  __int64 v6; // rbp
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  unsigned int *v11; // rbx
  unsigned int v12; // r15d
  char v13; // r13
  unsigned int i; // r12d
  _BYTE *v15; // r14
  int started; // eax
  __int64 SubspaceFromGenAddr; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // xmm1_8
  unsigned __int16 v21; // r9
  _BYTE *v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v26; // rcx
  int v27; // [rsp+28h] [rbp-30h]

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
          (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids);
      goto LABEL_5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v5 = 11;
LABEL_8:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v5,
      (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids,
      v2);
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(a1 + 576);
  v2 = ValidateAcpiCPC(v6);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x40000u);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v5 = 12;
    goto LABEL_8;
  }
  Display_CPC((_DWORD *)v6, v7, v8, v9);
  if ( dword_1C001C84C != 1 )
  {
    v10 = *(_DWORD *)(v6 + 4);
    if ( v10 == 1 )
    {
      v11 = (unsigned int *)&CpcRegisterTable;
      v12 = 15;
    }
    else if ( v10 == 2 )
    {
      v11 = (unsigned int *)&Cpc2RegisterTable;
      v12 = 19;
    }
    else
    {
      v11 = (unsigned int *)&Cpc3RegisterTable;
      v12 = 21;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001C418,
      0LL);
    v13 = 0;
    for ( i = 0; i < v12; ++i )
    {
      v15 = (_BYTE *)(v6 + *v11);
      if ( *v15 == 10 )
      {
        started = RegisterSubspaceForGenAddr(a1, v6 + *v11);
        v3 = started;
        v13 = 1;
        if ( started < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_50;
          v21 = 13;
LABEL_35:
          v27 = started;
LABEL_38:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            v21,
            (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids,
            v27);
          goto LABEL_50;
        }
        SubspaceFromGenAddr = GetSubspaceFromGenAddrEx((__int64)v15);
        v18 = *(_QWORD *)(a1 + 248);
        if ( v18 )
        {
          if ( v18 != SubspaceFromGenAddr )
          {
            v3 = -1073741270;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_S(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0xEu,
                (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids,
                *(const wchar_t **)(a1 + 64));
            goto LABEL_50;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 248) = SubspaceFromGenAddr;
        }
      }
      v11 += 6;
    }
    if ( !CpcRegisterIsSupportedEx(v6 + 440) || *(_BYTE *)v19 == 126 && !*(_QWORD *)(v6 + 444) )
    {
      v20 = *(_QWORD *)(v6 + 48);
      *(_OWORD *)v19 = *(_OWORD *)(v6 + 32);
      *(_QWORD *)(v19 + 16) = v20;
    }
    if ( v13 )
    {
      started = StartPccCommand(*(_QWORD *)(a1 + 248));
      v3 = started;
      if ( started < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_50;
        v21 = 15;
        goto LABEL_35;
      }
    }
    if ( CpcRegisterIsSupportedEx(v6 + 344) )
      WriteGenAddrMaybeHiddenEx(a1, v22, 1LL);
    if ( !v13 )
      goto LABEL_47;
    v23 = *(_QWORD *)(a1 + 248);
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v23 + 120))(*(_QWORD *)(v23 + 72), 0LL);
    *(_DWORD *)(v23 + 144) &= ~1u;
    v3 = v24;
    if ( v24 == -1073741435 )
      v3 = 0;
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 16;
        v27 = v3;
        goto LABEL_38;
      }
    }
    else
    {
LABEL_47:
      *(_QWORD *)(a1 + 376) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v6 + 8));
      *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v6 + 32));
      GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v6 + 56));
      v26 = *(_QWORD *)(a1 + 384);
      *(_QWORD *)(a1 + 392) = GenAddrMaybeHidden;
      if ( GenAddrMaybeHidden > v26 )
        *(_QWORD *)(a1 + 392) = v26;
      *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHiddenEx(a1, (_BYTE *)(v6 + 80));
    }
LABEL_50:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001C418);
  }
LABEL_5:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
