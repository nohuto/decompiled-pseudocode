/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x1C0083988
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0073E00 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C000BCAC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0082C40 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C0083130 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EnumChildren @ 0x1C0083570 (HUBACPI_EnumChildren.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  __int64 (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *); // rax
  int v3; // eax
  unsigned __int16 v4; // r9
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r13d
  __int64 i; // rdi
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 v17; // r9
  unsigned int v18; // r8d
  unsigned __int8 v19; // dl
  int v20; // ecx
  unsigned __int16 v21; // r9
  unsigned int v22; // r8d
  unsigned __int8 v23; // dl
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // r12d
  const EVENT_DESCRIPTOR *v27; // rdx
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  unsigned int v31; // r9d
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // [rsp+20h] [rbp-79h]
  __int64 v36; // [rsp+28h] [rbp-71h]
  __int64 v37; // [rsp+28h] [rbp-71h]
  __int64 v38; // [rsp+28h] [rbp-71h]
  __int64 v39; // [rsp+30h] [rbp-69h]
  __int128 v40; // [rsp+40h] [rbp-59h] BYREF
  __int64 v41; // [rsp+50h] [rbp-49h] BYREF
  __int64 v42; // [rsp+58h] [rbp-41h] BYREF
  __int64 v43; // [rsp+60h] [rbp-39h] BYREF
  __int128 v44; // [rsp+68h] [rbp-31h] BYREF
  __int128 v45; // [rsp+78h] [rbp-21h]
  __int128 v46; // [rsp+88h] [rbp-11h]
  __int64 v47; // [rsp+98h] [rbp-1h]
  _QWORD v48[10]; // [rsp+A0h] [rbp+7h] BYREF
  int v49; // [rsp+100h] [rbp+67h]
  __int64 v50; // [rsp+108h] [rbp+6Fh]
  __int64 v51; // [rsp+110h] [rbp+77h] BYREF
  __int64 v52; // [rsp+118h] [rbp+7Fh] BYREF

  v47 = 0LL;
  *(_QWORD *)&v45 = 0LL;
  v48[0] = 0LL;
  v41 = 0LL;
  *((_QWORD *)&v45 + 1) = 0x100000001LL;
  v46 = *(unsigned __int64 *)(a1 + 16);
  v44 = 0LL;
  v51 = 0LL;
  v42 = 0LL;
  v52 = 0LL;
  v43 = 0LL;
  LODWORD(v44) = 56;
  v2 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536);
  v40 = 0LL;
  v3 = v2(WdfDriverGlobals, &v44, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 20LL, &v43, v48);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v4 = 36;
    goto LABEL_4;
  }
  v5 = HUBACPI_EnumChildren(a1, v43);
  if ( v5 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v6 = 37;
    v7 = 4;
    goto LABEL_8;
  }
  if ( v5 != -2147483643 )
    goto LABEL_71;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x26u, (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids);
  v8 = *(unsigned int *)(v48[0] + 4LL);
  v47 = 0LL;
  *(_QWORD *)&v45 = 0LL;
  *((_QWORD *)&v45 + 1) = 0x100000001LL;
  v46 = *(unsigned __int64 *)(a1 + 16);
  v44 = 0LL;
  LODWORD(v44) = 56;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v44,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         v8,
         &v42,
         &v41) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 39;
LABEL_15:
      v7 = 2;
LABEL_8:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), v7, 3u, v6, (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids);
      goto LABEL_71;
    }
    goto LABEL_71;
  }
  v3 = HUBACPI_EnumChildren(a1, v42);
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 40;
LABEL_4:
      LODWORD(v36) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v4,
        (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
        v36);
      goto LABEL_71;
    }
    goto LABEL_71;
  }
  v47 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  LODWORD(v44) = 56;
  v46 = *(unsigned __int64 *)(a1 + 16);
  *((_QWORD *)&v45 + 1) = 0x100000001LL;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v44,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         1044LL,
         &v52,
         &v51) >= 0 )
  {
    v49 = 1;
    v9 = v41 + 8;
    if ( *(_DWORD *)(v41 + 4) <= 1u )
      goto LABEL_71;
    while ( 1 )
    {
      v9 += *(unsigned int *)(v9 + 4) + 8LL;
      v50 = v9;
      if ( (*(_BYTE *)v9 & 1) == 0 || !*(_DWORD *)(v9 + 4) )
        goto LABEL_70;
      *((_QWORD *)&v40 + 1) = v9 + 8;
      WORD1(v40) = *(_WORD *)(v9 + 4);
      LOWORD(v40) = WORD1(v40) - 1;
      if ( (int)HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v40, 1380204895, v52) < 0
        || !*(_DWORD *)(v51 + 8)
        || *(_WORD *)(v51 + 12) )
      {
        goto LABEL_69;
      }
      v12 = *(unsigned __int16 *)(v51 + 16);
      if ( !(_WORD)v12 || (unsigned __int16)v12 > *(_WORD *)(a1 + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = *(unsigned __int16 *)(v51 + 16);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x2Au,
            (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
            v37);
        }
        goto LABEL_69;
      }
      for ( i = *(_QWORD *)(a1 + 2360); ; i = *(_QWORD *)(v14 + 248) )
      {
        v14 = i - 248;
        if ( a1 == v14 - 2112 )
          goto LABEL_69;
        if ( *(_WORD *)(v14 + 200) == (_WORD)v12 )
          break;
      }
      if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v40, v10, v11, 2, v52) >= 0 )
        break;
LABEL_51:
      if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v40, v15, v16, 5, v52) < 0 )
        goto LABEL_63;
      if ( *(_WORD *)(v51 + 12) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_63;
        v21 = 47;
        v22 = 6;
        v23 = 2;
      }
      else
      {
        v24 = *(_DWORD *)(v51 + 16);
        if ( !v24 )
          goto LABEL_63;
        if ( v24 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_63;
          v21 = 49;
          LODWORD(v37) = *(_DWORD *)(v51 + 16);
          v23 = 2;
          v22 = 6;
          goto LABEL_62;
        }
        *(_DWORD *)(v14 + 204) |= 0x400u;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_63;
        v21 = 48;
        v23 = 4;
        v22 = 3;
      }
      LODWORD(v37) = v12;
LABEL_62:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        v23,
        v22,
        v21,
        (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
        v37);
LABEL_63:
      v26 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v40, 1129338207, v52);
      if ( v26 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = v12;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            4u,
            3u,
            0x32u,
            (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
            v37);
        }
        goto LABEL_66;
      }
      v25 = v51;
      if ( *(_DWORD *)(v51 + 8) )
      {
        v29 = v51 + 12;
        v30 = 0;
        if ( v51 + 12 < v51 + (unsigned __int64)*(unsigned int *)(v51 + 4) )
        {
          while ( v30 < *(_DWORD *)(v25 + 8) )
          {
            if ( v30 >= 4 )
            {
              v26 = -1072431093;
              goto LABEL_95;
            }
            if ( *(_WORD *)v29 )
            {
              v26 = -1072431096;
              goto LABEL_95;
            }
            v25 = acpiUpcPackageFields[2 * v30];
            v31 = acpiUpcPackageFields[2 * v30 + 1];
            if ( v31 == 1 )
            {
              *(_BYTE *)(v25 + v14 + 1340) = *(_BYTE *)(v29 + 4);
            }
            else
            {
              if ( v31 != 4 )
              {
                v26 = -1072431089;
                break;
              }
              *(_DWORD *)(v25 + v14 + 1340) = *(_DWORD *)(v29 + 4);
            }
            v32 = *(unsigned __int16 *)(v29 + 2);
            if ( (unsigned __int16)v32 < 4u )
              v32 = 4LL;
            v25 = v51;
            v29 += v32 + 4;
            ++v30;
            if ( v29 >= v51 + (unsigned __int64)*(unsigned int *)(v51 + 4) )
              break;
          }
        }
        if ( v26 < 0 )
        {
LABEL_95:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v39) = v26;
            LODWORD(v37) = v12;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2520),
              2u,
              6u,
              0x34u,
              (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
              v37,
              v39);
          }
LABEL_66:
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) == 0 )
            goto LABEL_69;
          v27 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_68:
          LODWORD(v37) = v26;
          LODWORD(v35) = v12;
          McTemplateK0pqq_EtwWriteTransfer(v25, v27, 0LL, *(_QWORD *)(a1 + 16), v35, v37);
          goto LABEL_69;
        }
        _InterlockedOr((volatile signed __int32 *)(v14 + 204), 2u);
        if ( *(_BYTE *)(v14 + 1340) )
          _InterlockedOr((volatile signed __int32 *)(v14 + 204), 1u);
        else
          _InterlockedAnd((volatile signed __int32 *)(v14 + 204), 0xFFFFFFFE);
        if ( *(_BYTE *)(v14 + 1341) == 10 )
          _InterlockedOr((volatile signed __int32 *)(v14 + 204), 0x200u);
        v33 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v40, 1145851999, v52);
        v26 = v33;
        if ( v33 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v39) = v33;
            LODWORD(v37) = v12;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2520),
              4u,
              3u,
              0x35u,
              (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
              v37,
              v39);
          }
          goto LABEL_108;
        }
        v34 = v51;
        if ( !*(_DWORD *)(v51 + 8) || *(_WORD *)(v51 + 12) != 2 || *(_WORD *)(v51 + 14) < 0x10u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v37) = v12;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 2520),
              2u,
              6u,
              0x36u,
              (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
              v37);
          }
LABEL_108:
          if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
          {
            v27 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
            goto LABEL_68;
          }
          goto LABEL_69;
        }
        *(_OWORD *)(v14 + 1352) = *(_OWORD *)(v51 + 16);
        _InterlockedOr((volatile signed __int32 *)(v14 + 204), 4u);
        if ( (*(_BYTE *)(v34 + 24) & 1) == 0 )
          _InterlockedAnd((volatile signed __int32 *)(v14 + 204), 0xFFFFFFFE);
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
      }
      else
      {
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          LODWORD(v37) = -1072431093;
          LODWORD(v35) = v12;
          McTemplateK0pqq_EtwWriteTransfer(
            v51,
            &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE,
            0LL,
            *(_QWORD *)(a1 + 16),
            v35,
            v37);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v37) = v12;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 2520),
            2u,
            6u,
            0x33u,
            (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
            v37);
        }
      }
LABEL_69:
      v9 = v50;
LABEL_70:
      if ( (unsigned int)++v49 >= *(_DWORD *)(v41 + 4) )
        goto LABEL_71;
    }
    if ( *(_WORD *)(v51 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_51;
      v17 = 43;
      v18 = 6;
      v19 = 2;
    }
    else
    {
      v20 = *(unsigned __int16 *)(v51 + 16);
      *(_DWORD *)(v14 + 216) = v20;
      switch ( v20 )
      {
        case 0:
          goto LABEL_51;
        case 1:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v17 = 44;
          break;
        case 2:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v17 = 45;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_51;
          v17 = 46;
          LODWORD(v38) = v20;
          v19 = 2;
          v18 = 6;
          goto LABEL_50;
      }
      v19 = 4;
      v18 = 3;
    }
    LODWORD(v38) = v12;
LABEL_50:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      v19,
      v18,
      v17,
      (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
      v38);
    goto LABEL_51;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 41;
    goto LABEL_15;
  }
LABEL_71:
  if ( v42 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v52 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v43 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return 0LL;
}
