/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x1C00854D0
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0075090 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000C094 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C00843C8 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C00848B4 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EvaluateDSD @ 0x1C0084CF0 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_EnumChildren @ 0x1C00850B8 (HUBACPI_EnumChildren.c)
 *     TUNNEL_RegisterUsb4HostForPort @ 0x1C0087B24 (TUNNEL_RegisterUsb4HostForPort.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rax
  char v4; // r14
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *); // rax
  int v6; // eax
  int v7; // edi
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // dx
  _QWORD *i; // rax
  _QWORD *v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 v21; // r9
  unsigned __int8 v22; // dl
  unsigned int v23; // r8d
  int v24; // ecx
  __int64 v25; // rdx
  unsigned __int16 v26; // r9
  unsigned __int8 v27; // dl
  unsigned int v28; // r8d
  int v29; // ecx
  __int64 v30; // rcx
  unsigned __int16 v31; // r14
  const EVENT_DESCRIPTOR *v32; // rdx
  unsigned __int16 v33; // r9
  unsigned __int64 v34; // rdx
  unsigned int v35; // r8d
  unsigned int v36; // r9d
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-89h]
  __int64 v41; // [rsp+28h] [rbp-81h]
  __int64 v42; // [rsp+28h] [rbp-81h]
  __int64 v43; // [rsp+28h] [rbp-81h]
  __int64 v44; // [rsp+28h] [rbp-81h]
  __int64 v45; // [rsp+30h] [rbp-79h]
  __int64 v46; // [rsp+40h] [rbp-69h] BYREF
  __int64 v47; // [rsp+48h] [rbp-61h] BYREF
  __int64 v48; // [rsp+50h] [rbp-59h] BYREF
  __int128 v49; // [rsp+58h] [rbp-51h] BYREF
  __int64 v50; // [rsp+68h] [rbp-41h] BYREF
  __int64 v51; // [rsp+70h] [rbp-39h] BYREF
  __int64 v52; // [rsp+78h] [rbp-31h] BYREF
  __int128 v53; // [rsp+80h] [rbp-29h] BYREF
  __int64 v54; // [rsp+90h] [rbp-19h]
  __int64 v55; // [rsp+98h] [rbp-11h]
  __int128 v56; // [rsp+A0h] [rbp-9h]
  __int64 v57; // [rsp+B0h] [rbp+7h]
  _QWORD v58[9]; // [rsp+B8h] [rbp+Fh] BYREF
  unsigned __int16 v59; // [rsp+118h] [rbp+6Fh]
  int v60; // [rsp+120h] [rbp+77h]
  __int64 v61; // [rsp+128h] [rbp+7Fh]

  v1 = 0;
  v57 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v54 = 0LL;
  v58[0] = 0LL;
  v56 = v2;
  v53 = 0LL;
  v4 = 0;
  v50 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v52 = 0LL;
  LODWORD(v53) = 56;
  v55 = 0x100000001LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536);
  v49 = 0LL;
  v6 = v5(WdfDriverGlobals, &v53, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 20LL, &v52, v58);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v41) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x29u,
        (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
        v41);
    }
    goto LABEL_4;
  }
  v9 = HUBACPI_EnumChildren(a1, v52);
  v7 = v9;
  if ( v9 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x2Au, (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids);
    goto LABEL_4;
  }
  if ( v9 != -2147483643 )
    goto LABEL_4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x2Bu, (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids);
  v10 = *(unsigned int *)(v58[0] + 4LL);
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0x100000001LL;
  v56 = *(unsigned __int64 *)(a1 + 16);
  v53 = 0LL;
  LODWORD(v53) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v53,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         v10,
         &v51,
         &v50);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_23:
      v4 = 0;
      goto LABEL_4;
    }
    v11 = 44;
LABEL_22:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, v11, (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids);
    goto LABEL_23;
  }
  v12 = HUBACPI_EnumChildren(a1, v51);
  v7 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v42) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x2Du,
        (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
        v42);
    }
    goto LABEL_23;
  }
  v57 = 0LL;
  v54 = 0LL;
  v55 = 0x100000001LL;
  v56 = *(unsigned __int64 *)(a1 + 16);
  v53 = 0LL;
  LODWORD(v53) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v53,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         1044LL,
         &v46,
         &v47);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v11 = 46;
    goto LABEL_22;
  }
  v60 = 1;
  v13 = v50 + 8;
  if ( *(_DWORD *)(v50 + 4) <= 1u )
  {
    v4 = 0;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v13 += *(unsigned int *)(v13 + 4) + 8LL;
    v61 = v13;
    if ( (*(_BYTE *)v13 & 1) == 0 || !*(_DWORD *)(v13 + 4) )
      goto LABEL_131;
    *((_QWORD *)&v49 + 1) = v13 + 8;
    WORD1(v49) = *(_WORD *)(v13 + 4);
    LOWORD(v49) = WORD1(v49) - 1;
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v49, 1380204895, v46);
    if ( v7 < 0 )
    {
      v7 = 0;
      goto LABEL_130;
    }
    if ( !*(_DWORD *)(v47 + 8) || *(_WORD *)(v47 + 12) )
      goto LABEL_130;
    v16 = *(_WORD *)(v47 + 16);
    v59 = v16;
    if ( v16 )
    {
      if ( v16 <= *(_WORD *)(a1 + 48) )
        break;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = 47;
      LODWORD(v43) = *(unsigned __int16 *)(v47 + 16);
      goto LABEL_129;
    }
LABEL_130:
    v13 = v61;
LABEL_131:
    if ( (unsigned int)++v60 >= *(_DWORD *)(v50 + 4) )
      goto LABEL_23;
  }
  for ( i = *(_QWORD **)(a1 + 2360); ; i = (_QWORD *)*i )
  {
    v18 = i - 31;
    if ( (_QWORD *)(a1 + 2360) == i )
      goto LABEL_130;
    if ( *((_WORD *)v18 + 100) == v16 )
      break;
  }
  if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v49, v14, v15, 2, v46) >= 0 )
  {
    if ( *(_WORD *)(v47 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_60;
      v21 = 48;
      v22 = 2;
      v23 = 6;
    }
    else
    {
      v24 = *(unsigned __int16 *)(v47 + 16);
      *((_DWORD *)v18 + 54) = v24;
      switch ( v24 )
      {
        case 0:
          goto LABEL_60;
        case 1:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_60;
          v21 = 49;
          break;
        case 2:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_60;
          v21 = 50;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_60;
          v21 = 51;
          LODWORD(v44) = v24;
          v22 = 2;
          v23 = 6;
          goto LABEL_59;
      }
      v22 = 4;
      v23 = 3;
    }
    LODWORD(v44) = v59;
LABEL_59:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      v22,
      v23,
      v21,
      (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
      v44);
  }
LABEL_60:
  v48 = 0LL;
  if ( *((_DWORD *)v18 + 52) != 768 )
    goto LABEL_66;
  v25 = *(_QWORD *)(a1 + 2760);
  if ( v25 )
  {
    v48 = *(_QWORD *)(a1 + 2760);
  }
  else
  {
    if ( (int)HUBACPI_EvaluateDSD(a1, (unsigned __int16 *)&v49, v19, v20, v46, (__int64)&v48) < 0 )
      goto LABEL_66;
    v25 = v48;
  }
  v7 = TUNNEL_RegisterUsb4HostForPort(a1, v25, v18);
  if ( v7 >= 0 )
  {
LABEL_66:
    if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v49, v19, v20, 5, v46) < 0 )
      goto LABEL_78;
    if ( *(_WORD *)(v47 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v26 = 53;
      v27 = 2;
      v28 = 6;
    }
    else
    {
      v29 = *(_DWORD *)(v47 + 16);
      if ( !v29 )
        goto LABEL_78;
      if ( v29 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_78;
        v26 = 55;
        LODWORD(v43) = *(_DWORD *)(v47 + 16);
        v27 = 2;
        v28 = 6;
        goto LABEL_77;
      }
      *((_DWORD *)v18 + 51) |= 0x400u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_78;
      v26 = 54;
      v27 = 4;
      v28 = 3;
    }
    LODWORD(v43) = v59;
LABEL_77:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      v27,
      v28,
      v26,
      (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
      v43);
LABEL_78:
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v49, 1129338207, v46);
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_81:
        v31 = v59;
      }
      else
      {
        v31 = v59;
        LODWORD(v43) = v59;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2520),
          4u,
          3u,
          0x38u,
          (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
          v43);
      }
LABEL_82:
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        v32 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
        goto LABEL_84;
      }
      goto LABEL_85;
    }
    v30 = v47;
    if ( *(_DWORD *)(v47 + 8) )
    {
      v34 = v47 + 12;
      v35 = 0;
      if ( v47 + 12 < v47 + (unsigned __int64)*(unsigned int *)(v47 + 4) )
      {
        while ( 1 )
        {
          if ( v35 >= *(_DWORD *)(v30 + 8) )
            goto LABEL_102;
          if ( v35 >= 4 )
          {
            v7 = -1072431093;
            goto LABEL_107;
          }
          if ( *(_WORD *)v34 )
            break;
          v30 = acpiUpcPackageFields[2 * v35];
          v36 = acpiUpcPackageFields[2 * v35 + 1];
          if ( v36 == 1 )
          {
            *((_BYTE *)v18 + v30 + 1340) = *(_BYTE *)(v34 + 4);
          }
          else
          {
            if ( v36 != 4 )
            {
              v7 = -1072431089;
LABEL_107:
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_81;
              v31 = v59;
              LODWORD(v45) = v7;
              LODWORD(v43) = v59;
              WPP_RECORDER_SF_DD(
                *(_QWORD *)(a1 + 2520),
                2u,
                6u,
                0x3Au,
                (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
                v43,
                v45);
              goto LABEL_82;
            }
            *(_DWORD *)((char *)v18 + v30 + 1340) = *(_DWORD *)(v34 + 4);
          }
          v37 = *(unsigned __int16 *)(v34 + 2);
          if ( (unsigned __int16)v37 < 4u )
            v37 = 4LL;
          v30 = v47;
          v34 += v37 + 4;
          ++v35;
          if ( v34 >= v47 + (unsigned __int64)*(unsigned int *)(v47 + 4) )
            goto LABEL_102;
        }
        v7 = -1072431096;
        goto LABEL_107;
      }
LABEL_102:
      _InterlockedOr((volatile signed __int32 *)v18 + 51, 2u);
      if ( *((_BYTE *)v18 + 1340) )
        _InterlockedOr((volatile signed __int32 *)v18 + 51, 1u);
      else
        _InterlockedAnd((volatile signed __int32 *)v18 + 51, 0xFFFFFFFE);
      if ( *((_BYTE *)v18 + 1341) == 10 )
        _InterlockedOr((volatile signed __int32 *)v18 + 51, 0x200u);
      v38 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v49, 1145851999, v46);
      v7 = v38;
      if ( v38 < 0 )
      {
        v31 = v59;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v45) = v38;
          LODWORD(v43) = v59;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(a1 + 2520),
            4u,
            3u,
            0x3Bu,
            (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
            v43,
            v45);
        }
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          v32 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
LABEL_84:
          LODWORD(v43) = v7;
          LODWORD(v40) = v31;
          McTemplateK0pqq_EtwWriteTransfer(v30, v32, 0LL, *(_QWORD *)(a1 + 16), v40, v43);
        }
LABEL_85:
        v7 = 0;
        goto LABEL_130;
      }
      v39 = v47;
      if ( *(_DWORD *)(v47 + 8) && *(_WORD *)(v47 + 12) == 2 && *(_WORD *)(v47 + 14) >= 0x10u )
      {
        *(_OWORD *)(v18 + 169) = *(_OWORD *)(v47 + 16);
        _InterlockedOr((volatile signed __int32 *)v18 + 51, 4u);
        if ( (*(_BYTE *)(v39 + 24) & 1) == 0 )
          _InterlockedAnd((volatile signed __int32 *)v18 + 51, 0xFFFFFFFE);
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v43) = v59;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x3Cu,
            (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
            v43);
        }
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          LODWORD(v43) = v7;
          LODWORD(v40) = v59;
          McTemplateK0pqq_EtwWriteTransfer(
            v30,
            &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE,
            0LL,
            *(_QWORD *)(a1 + 16),
            v40,
            v43);
        }
      }
      goto LABEL_130;
    }
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      LODWORD(v43) = -1072431093;
      LODWORD(v40) = v59;
      McTemplateK0pqq_EtwWriteTransfer(
        v47,
        &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE,
        0LL,
        *(_QWORD *)(a1 + 16),
        v40,
        v43);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v33 = 57;
      LODWORD(v43) = v59;
LABEL_129:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        6u,
        v33,
        (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
        v43);
      goto LABEL_130;
    }
    goto LABEL_130;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v45) = v7;
    LODWORD(v44) = *((unsigned __int16 *)v18 + 100);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      0x34u,
      (__int64)&WPP_c5068035c0c03895c2d054ff6dfe9623_Traceguids,
      v44,
      v45);
  }
  v4 = 1;
LABEL_4:
  if ( v51 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v46 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v52 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v4 == 1 )
    return (unsigned int)v7;
  return v1;
}
