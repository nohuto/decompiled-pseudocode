/*
 * XREFs of RootHub_PrepareHardware @ 0x1C006F968
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E9D0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     XilRegister_GetOperationalRegisters @ 0x1C0001920 (XilRegister_GetOperationalRegisters.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Controller_IsSecureDevice @ 0x1C0005AD0 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RootHub_DumpPortData @ 0x1C00133B0 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x1C0016730 (RootHub_InitializeReadModifyWriteLock.c)
 *     Register_FindFirstExtendedCapability @ 0x1C0017208 (Register_FindFirstExtendedCapability.c)
 *     XilRegister_ReadBufferUlong @ 0x1C00181E8 (XilRegister_ReadBufferUlong.c)
 *     Register_FindNextExtendedCapability @ 0x1C0018848 (Register_FindNextExtendedCapability.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_cccc @ 0x1C003EE3C (WPP_RECORDER_SF_cccc.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x1C0072764 (RootHub_PopulatePortFlagsFromRegistry.c)
 */

__int64 __fastcall RootHub_PrepareHardware(unsigned __int64 *a1)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 Pool2; // rax
  unsigned int i; // edx
  __int64 v8; // rcx
  unsigned int *FirstExtendedCapability; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  char v14; // r9d^2
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  int v17; // edi
  unsigned int v18; // eax
  __int64 v19; // rdi
  int Ulong; // eax
  char v21; // dl
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // r13d
  int v25; // eax
  int v26; // edx
  __int64 v27; // rcx
  char IsSecureDevice; // al
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // r9
  int v32; // eax
  int v33; // edx
  __int64 v34; // rcx
  bool v35; // zf
  int v36; // r8d
  int v37; // ecx
  __int64 v38; // r9
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // r10d
  int v44; // ecx
  int v46; // r9d
  int v47; // r9d
  char *v48; // rcx
  unsigned int j; // esi
  __int64 v50; // r14
  int v51; // [rsp+28h] [rbp-99h]
  char v52; // [rsp+58h] [rbp-69h]
  int v53; // [rsp+60h] [rbp-61h]
  __int64 v54; // [rsp+60h] [rbp-61h]
  __int128 v55; // [rsp+68h] [rbp-59h] BYREF
  __int128 v56; // [rsp+78h] [rbp-49h]
  __int64 v57; // [rsp+88h] [rbp-39h]
  unsigned int v58; // [rsp+90h] [rbp-31h]
  unsigned int v59; // [rsp+94h] [rbp-2Dh]
  unsigned int v60; // [rsp+98h] [rbp-29h]
  int v61; // [rsp+9Ch] [rbp-25h]
  _OWORD v62[2]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-1h]
  void *v64; // [rsp+D0h] [rbp+Fh]
  unsigned int *v65; // [rsp+D8h] [rbp+17h]
  __int128 v66; // [rsp+E0h] [rbp+1Fh] BYREF

  LODWORD(v64) = 0;
  LODWORD(v57) = 0;
  v2 = a1[1];
  v3 = 0;
  memset(v62, 0, sizeof(v62));
  v52 = 0;
  v63 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v4 = *(_QWORD *)(v2 + 88);
  v66 = 0LL;
  *((_DWORD *)a1 + 4) = *(unsigned __int8 *)(v4 + 83);
  *((_DWORD *)a1 + 5) = 0;
  *((_WORD *)a1 + 12) = (unsigned __int8)*(_WORD *)(v4 + 96);
  *((_WORD *)a1 + 13) = *(_WORD *)(v4 + 98);
  a1[4] = XilRegister_GetOperationalRegisters(v4);
  a1[5] = *(_QWORD *)(v4 + 32) + 1024LL;
  if ( Register_FindFirstExtendedCapability(v5, 0xAu) )
    *((_BYTE *)a1 + 56) = 1;
  Pool2 = ExAllocatePool2(64LL, 112LL * *((unsigned int *)a1 + 4), 1229146200LL);
  a1[6] = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72), 2, 11, 20, (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    v23 = -1073741670;
    goto LABEL_71;
  }
  for ( i = 0; i < *((_DWORD *)a1 + 4); *(_DWORD *)(v8 + 8) = i )
  {
    v8 = a1[6] + 112LL * i++;
    *(_QWORD *)v8 = a1;
  }
  FirstExtendedCapability = Register_FindFirstExtendedCapability(v4, 2u);
  v65 = FirstExtendedCapability;
  if ( !FirstExtendedCapability )
  {
LABEL_67:
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_70;
    v46 = 26;
    goto LABEL_69;
  }
  while ( 1 )
  {
    XilRegister_ReadBufferUlong(v4, FirstExtendedCapability, &v66, 4u);
    v13 = DWORD1(v66);
    if ( DWORD1(v66) != 541217621 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_cccc(*(_QWORD *)(a1[1] + 72), DWORD1(v66), v11, v12, v51);
      goto LABEL_26;
    }
    v14 = BYTE2(v66);
    v61 = v66;
    v15 = BYTE3(v66);
    v60 = BYTE3(v66);
    if ( BYTE3(v66) - 2 <= 1u )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a1[1] + 72),
        v13,
        11,
        24,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        SBYTE3(v66),
        SBYTE2(v66));
    }
LABEL_26:
    FirstExtendedCapability = Register_FindNextExtendedCapability(v4, v65);
    v65 = FirstExtendedCapability;
    if ( !FirstExtendedCapability )
    {
      if ( !v52 )
        goto LABEL_67;
      v22 = *((_DWORD *)a1 + 4);
      if ( v22 )
      {
        do
        {
          RootHub_DumpPortData(a1[5] + 16LL * v3, a1[1]);
          v22 = *((_DWORD *)a1 + 4);
          ++v3;
        }
        while ( v3 < v22 );
      }
      v23 = 0;
      v24 = 0;
      if ( !v22 )
      {
LABEL_44:
        RootHub_PopulatePortFlagsFromRegistry(a1);
        return v23;
      }
      while ( 1 )
      {
        v25 = RootHub_InitializeReadModifyWriteLock(a1, v24);
        v26 = 0;
        v23 = v25;
        if ( v25 < 0 )
          break;
        v27 = a1[1];
        *(_QWORD *)((char *)&v62[1] + 4) = 0x100000000LL;
        v57 = 0LL;
        v56 = 0LL;
        LODWORD(v56) = 0;
        *(_QWORD *)&v55 = 0LL;
        *((_QWORD *)&v55 + 1) = RootHub_WdfEvtTimerPortOperationPendingTimerDpc;
        v64 = off_1C0061400;
        v63 = *a1;
        LODWORD(v55) = 40;
        BYTE4(v56) = 1;
        DWORD2(v56) = 0;
        v57 = 1LL;
        *(_OWORD *)((char *)v62 + 4) = 0LL;
        LODWORD(v62[0]) = 56;
        HIDWORD(v62[1]) = 1;
        IsSecureDevice = Controller_IsSecureDevice(v27);
        v30 = v29;
        if ( IsSecureDevice )
          v30 = 2;
        v31 = a1[6] + 72;
        DWORD2(v62[1]) = v30;
        v54 = 112LL * v24;
        v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01023 + 2544))(
                WdfDriverGlobals,
                &v55,
                v62,
                v54 + v31);
        v23 = v32;
        if ( v32 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_71;
          v47 = 28;
          goto LABEL_64;
        }
        *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     *(_QWORD *)(a1[6] + v54 + 72),
                     off_1C0061400) = v54 + a1[6];
        v34 = a1[1];
        v57 = 0LL;
        v56 = 0LL;
        LODWORD(v56) = 0;
        DWORD2(v56) = 0;
        *(_QWORD *)&v55 = 0LL;
        *((_QWORD *)&v55 + 1) = RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc;
        v64 = off_1C0061400;
        v63 = *a1;
        LODWORD(v55) = 40;
        BYTE4(v56) = 1;
        LOBYTE(v57) = 1;
        *(_OWORD *)((char *)v62 + 4) = 0LL;
        *(_QWORD *)((char *)&v62[1] + 4) = 0x100000000LL;
        LODWORD(v62[0]) = 56;
        HIDWORD(v62[1]) = 1;
        v35 = Controller_IsSecureDevice(v34) == 0;
        v37 = v36;
        if ( !v35 )
          v37 = 2;
        v38 = a1[6] + v54 + 80;
        DWORD2(v62[1]) = v37;
        v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01023 + 2544))(
                WdfDriverGlobals,
                &v55,
                v62,
                v38);
        v23 = v32;
        if ( v32 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_71;
          v47 = 29;
          goto LABEL_64;
        }
        *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     *(_QWORD *)(a1[6] + v54 + 80),
                     off_1C0061400) = v54 + a1[6];
        if ( *(_BYTE *)(a1[6] + v54 + 13) == 2 )
        {
          v39 = a1[1];
          v57 = 0LL;
          *(_QWORD *)((char *)&v62[1] + 4) = 0x100000000LL;
          v56 = 0LL;
          LODWORD(v56) = 0;
          DWORD2(v56) = 0;
          *(_QWORD *)&v55 = 0LL;
          *((_QWORD *)&v55 + 1) = RootHub_WdfEvtTimer20PortResumeCompleteDpc;
          v64 = off_1C0061400;
          v63 = *a1;
          LODWORD(v55) = 40;
          BYTE4(v56) = 1;
          LOBYTE(v57) = 1;
          *(_OWORD *)((char *)v62 + 4) = 0LL;
          LODWORD(v62[0]) = 56;
          HIDWORD(v62[1]) = 1;
          v40 = Controller_IsSecureDevice(v39);
          v44 = v43;
          if ( v40 )
            v44 = 2;
          DWORD2(v62[1]) = v44;
          v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _OWORD *, __int64))(WdfFunctions_01023 + 2544))(
                  WdfDriverGlobals,
                  &v55,
                  v62,
                  v41 + v42 + 40);
          v23 = v32;
          if ( v32 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_71;
            v47 = 30;
LABEL_64:
            LOBYTE(v33) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1[1] + 72),
              v33,
              11,
              v47,
              (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
              v32);
            goto LABEL_71;
          }
          *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(a1[6] + v54 + 40),
                       off_1C0061400) = a1[6] + v54;
        }
        if ( ++v24 >= *((_DWORD *)a1 + 4) )
          goto LABEL_44;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 2;
        WPP_RECORDER_SF_DD(
          *(_QWORD *)(a1[1] + 72),
          v26,
          11,
          27,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v25,
          v24);
      }
      goto LABEL_71;
    }
  }
  v16 = DWORD2(v66);
  LODWORD(v10) = BYTE9(v66);
  v17 = BYTE8(v66);
  v59 = BYTE9(v66);
  v53 = BYTE8(v66);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(a1[1] + 72),
      4u,
      0xBu,
      0x15u,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    v15 = v60;
    v16 = DWORD2(v66);
    LODWORD(v10) = v59;
    v14 = BYTE2(v61);
  }
  if ( !v17 || !(_DWORD)v10 || (unsigned int)(v10 + v17 - 1) > *((_DWORD *)a1 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_70;
    v46 = 22;
LABEL_69:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72), v10, 11, v46, (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids);
    goto LABEL_70;
  }
  v18 = 0;
  v52 = 1;
  v58 = 0;
  while ( 1 )
  {
    v10 = v18 + v17 - 1;
    v19 = a1[6] + 112 * v10;
    if ( *(_BYTE *)(v19 + 13) )
      break;
    if ( v15 == 2 )
      ++*((_WORD *)a1 + 10);
    else
      ++*((_WORD *)a1 + 11);
    *(_BYTE *)(v19 + 12) = v14;
    *(_BYTE *)(v19 + 13) = v15;
    *(_BYTE *)(v19 + 15) = (v16 & 0x20000) != 0;
    *(_BYTE *)(v19 + 16) = (v16 & 0x40000) != 0;
    Ulong = XilRegister_ReadUlong(v4, (unsigned int *)(a1[5] + 16 * v10));
    v16 = DWORD2(v66);
    v21 = 0;
    *(_BYTE *)(v19 + 19) = 0;
    if ( (v16 & 0x80000) != 0 )
    {
      *(_BYTE *)(v19 + 19) = 1;
      v21 = 1;
    }
    if ( (v16 & 0x100000) != 0 )
      *(_BYTE *)(v19 + 19) = v21 | 2;
    if ( (Ulong & 0x40000000) == 0 )
      *(_BYTE *)(v19 + 17) = 1;
    v15 = v60;
    v14 = BYTE2(v61);
    *(_BYTE *)(v19 + 14) = (v16 >> 25) & 7;
    *(_WORD *)(v19 + 54) = v16 >> 28;
    *(_QWORD *)(v19 + 56) = v65 + 4;
    v17 = v53;
    v18 = v58 + 1;
    v58 = v18;
    if ( v18 >= v59 )
    {
      v3 = 0;
      goto LABEL_26;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v46 = 23;
    goto LABEL_69;
  }
LABEL_70:
  v23 = -1073741811;
LABEL_71:
  v48 = (char *)a1[6];
  if ( v48 )
  {
    for ( j = 0; j < *((_DWORD *)a1 + 4); ++j )
    {
      v48 = (char *)a1[6];
      v50 = 112LL * j;
      if ( *(_QWORD *)&v48[v50 + 72] )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(a1[6] + v50 + 72) = 0LL;
        v48 = (char *)a1[6];
      }
      if ( *(_QWORD *)&v48[v50 + 80] )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(a1[6] + v50 + 80) = 0LL;
        v48 = (char *)a1[6];
      }
    }
    ExFreePoolWithTag(v48, 0x49434858u);
    a1[6] = 0LL;
  }
  return v23;
}
