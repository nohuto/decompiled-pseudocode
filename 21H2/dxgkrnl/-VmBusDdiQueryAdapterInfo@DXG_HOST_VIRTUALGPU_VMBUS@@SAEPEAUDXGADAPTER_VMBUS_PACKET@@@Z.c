/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036B450
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C6C4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C01FECB8 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 *     ?GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z @ 0x1C021BF94 (-GetPhysicalAdapterCapsSizeFromDdiVersion@@YAII@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  const wchar_t *v4; // r9
  char v5; // r13
  __int64 v6; // rax
  int *v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r12
  unsigned int v13; // r14d
  unsigned int PhysicalAdapterCapsSizeFromDdiVersion; // eax
  unsigned int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int DriverCapsSizeFromDdiVersion; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  _DWORD *v27; // rax
  _QWORD v29[7]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v30[8]; // [rsp+88h] [rbp-80h] BYREF
  DXGPUSHLOCK *v31; // [rsp+90h] [rbp-78h]
  int v32; // [rsp+98h] [rbp-70h]
  _BYTE v33[144]; // [rsp+A8h] [rbp-60h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v31);
  v2 = *((_QWORD *)a1 + 10);
  v32 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v3 = 4370LL;
    WdLogSingleEntry1(2LL, 4370LL);
    v4 = L"The adapter is already closed by the guest";
LABEL_94:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_95;
  }
  v5 = 0;
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v7 = (int *)v6;
  if ( !v6 )
  {
LABEL_95:
    v5 = 0;
    goto LABEL_96;
  }
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
  if ( *(int *)(v8 + 2424) < 0x2000 )
    v9 = 1;
  else
    v9 = *(_DWORD *)(v8 + 288);
  v10 = *(unsigned int *)(v6 + 28);
  v11 = *((unsigned int *)a1 + 36);
  if ( v11 - 39 < v10 )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v11, 4380LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid packet size: 0x%I64x",
      *((unsigned int *)a1 + 36),
      4380LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_95;
  }
  v12 = *(unsigned int *)(v6 + 32);
  v13 = *(_DWORD *)(v6 + 32);
  switch ( *(_DWORD *)(v6 + 24) )
  {
    case 1:
      DriverCapsSizeFromDdiVersion = GetDriverCapsSizeFromDdiVersion(*(_DWORD *)(v8 + 1968));
      v13 = DriverCapsSizeFromDdiVersion;
      if ( v7[7] || v7[8] > DriverCapsSizeFromDdiVersion )
      {
        v3 = 4398LL;
        WdLogSingleEntry1(2LL, 4398LL);
        v4 = L"Invalid buffer size for DXGKQAITYPE_DRIVERCAPS";
        goto LABEL_94;
      }
      goto LABEL_57;
    case 0xA:
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 4 )
        {
          v3 = 4463LL;
          WdLogSingleEntry1(2LL, 4463LL);
          v4 = L"Invalid input buffer size for DXGKQAITYPE_HISTORYBUFFERPRECISION";
          goto LABEL_94;
        }
        v20 = *(unsigned int *)(v6 + 36);
      }
      else
      {
        v20 = 0LL;
      }
      if ( (unsigned int)v20 >= v9 )
      {
        v3 = 4470LL;
        WdLogSingleEntry1(2LL, 4470LL);
        v4 = L"Invalid PhysicalAdapterIndex for DXGKQAITYPE_HISTORYBUFFERPRECISION";
        goto LABEL_94;
      }
      if ( v12 == 4LL * *(unsigned __int16 *)(344 * v20 + *(_QWORD *)(v8 + 2680)) )
        goto LABEL_57;
      v3 = 4476LL;
      WdLogSingleEntry1(2LL, 4476LL);
      goto LABEL_24;
    case 0xD:
      if ( (_DWORD)v10 != 4 || (_DWORD)v12 != 24 )
      {
        v3 = 4425LL;
        WdLogSingleEntry1(2LL, 4425LL);
        v4 = L"Invalid buffer size for DXGKQAITYPE_GPUMMUCAPS";
        goto LABEL_94;
      }
      if ( *(_DWORD *)(v6 + 36) < v9 )
        goto LABEL_57;
      v3 = 4430LL;
      WdLogSingleEntry1(2LL, 4430LL);
      goto LABEL_29;
    case 0xE:
      if ( (_DWORD)v10 != 4 || (_DWORD)v12 != 20 )
      {
        v3 = 4438LL;
        WdLogSingleEntry1(2LL, 4438LL);
        v4 = L"Invalid buffer size for DXGKQAITYPE_PAGETABLELEVELDESC";
        goto LABEL_94;
      }
      v17 = *(unsigned __int16 *)(v6 + 38);
      if ( (unsigned int)v17 >= v9
        || (*(_DWORD *)(v8 + 2156) & 0x40) == 0
        || ((v18 = *(_QWORD *)(*(_QWORD *)(v8 + 2800) + 1152LL)) != 0 ? (v19 = v18 + 144 * v17) : (v19 = 0LL),
            (unsigned int)*(unsigned __int16 *)(v6 + 36) >= *(_DWORD *)(v19 + 16)) )
      {
        v3 = 4447LL;
        WdLogSingleEntry1(2LL, 4447LL);
        v4 = L"Invalid parameters DXGKQAITYPE_PAGETABLELEVELDESC";
        goto LABEL_94;
      }
      goto LABEL_57;
    case 0xF:
      PhysicalAdapterCapsSizeFromDdiVersion = GetPhysicalAdapterCapsSizeFromDdiVersion(*(_DWORD *)(v8 + 1968));
      v13 = PhysicalAdapterCapsSizeFromDdiVersion;
      if ( v16 != 4 || (unsigned int)v12 > PhysicalAdapterCapsSizeFromDdiVersion )
      {
        v3 = 4412LL;
        WdLogSingleEntry1(2LL, 4412LL);
        v4 = L"Invalid buffer size for DXGKQAITYPE_PHYSICALADAPTERCAPS";
        goto LABEL_94;
      }
      if ( v7[9] < v15 )
        goto LABEL_57;
      v3 = 4417LL;
      WdLogSingleEntry1(2LL, 4417LL);
LABEL_29:
      v4 = L"Invalid physical adapter index";
      goto LABEL_94;
    case 0x1A:
      if ( (_DWORD)v12 == 28 && (_DWORD)v10 == 4 )
      {
        if ( *(_DWORD *)(v6 + 36) >= v9 )
        {
          v3 = 4492LL;
          WdLogSingleEntry1(2LL, 4492LL);
          v4 = L"Invalid PhysicalAdapterIndex for DXGKQAITYPE_ADAPTERPERFDATA_CAPS";
          goto LABEL_94;
        }
        goto LABEL_57;
      }
      v3 = 4486LL;
      WdLogSingleEntry1(2LL, 4486LL);
LABEL_24:
      v4 = L"Invalid output buffer size for DXGKQAITYPE_HISTORYBUFFERPRECISION";
      goto LABEL_94;
  }
  if ( *(_DWORD *)(v6 + 24) != 27 )
  {
    WdLogSingleEntry1(2LL, *(int *)(v6 + 24));
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid query type: 0x%I64x", v7[6], 0LL, 0LL, 0LL, 0LL);
    goto LABEL_95;
  }
  if ( (_DWORD)v12 != 128 )
  {
    v3 = 4501LL;
    WdLogSingleEntry1(2LL, 4501LL);
    v4 = L"Invalid output buffer size for DXGKQAITYPE_GPUVERSION";
    goto LABEL_94;
  }
LABEL_57:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, (struct DXGADAPTER *const)v8, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL) >= 0 )
  {
    v24 = v7[6];
    memset(&v29[1], 0, 48);
    LODWORD(v29[1]) = v24;
    HIDWORD(v29[5]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) | 1;
    LODWORD(v29[3]) = v7[7];
    v29[2] = v7 + 9;
    if ( v13 )
    {
      if ( v13 > 0x20000 )
      {
        WdLogSingleEntry1(2LL, v13);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid output buffer size: 0x%I64x",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_92;
      }
      LODWORD(v29[5]) = v13;
      v29[4] = operator new[](v13, 0x4B677844u, 64LL, v23);
      if ( !v29[4] )
      {
        WdLogSingleEntry1(6LL, 4533LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate pOutputData",
          4533LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_92;
      }
    }
    if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v8, (struct _DXGKARG_QUERYADAPTERINFO *)&v29[1], v22) < 0 )
    {
LABEL_90:
      if ( v29[4] )
        operator delete[]((void *)v29[4]);
      goto LABEL_92;
    }
    v25 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL) + 392LL);
    if ( v7[6] != 1 )
    {
      if ( v7[6] == 13 )
      {
        if ( v25 <= 0x25 )
          *(_DWORD *)v29[4] &= 0x7FFu;
      }
      else if ( v7[6] == 15 )
      {
        v26 = v29[4];
        *(_QWORD *)(v29[4] + 8LL) = 0LL;
        if ( v25 > 0x10 )
        {
          if ( v25 <= 0x25 )
            *(_DWORD *)(v26 + 16) &= 0x3Fu;
        }
        else
        {
          *(_DWORD *)(v26 + 16) &= 0x1Fu;
        }
      }
      goto LABEL_89;
    }
    v27 = (_DWORD *)v29[4];
    if ( v25 > 0x25 )
    {
      if ( v25 > 0x28 )
      {
LABEL_89:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)v29[4], v12);
        v5 = 1;
        goto LABEL_90;
      }
    }
    else
    {
      *(_DWORD *)(v29[4] + 60LL) &= 0x7Fu;
      v27[16] &= 0x7FFu;
    }
    v27[12] &= 0x3Fu;
    v27[13] &= ~0x80000000;
    if ( v25 > 0x10 )
    {
      if ( v25 > 0x1B )
      {
        if ( v25 <= 0x25 )
        {
          if ( (int)v27[84] > 10240 )
            v27[84] = 10240;
          v27[17] &= 0x3FFFu;
          v27[144] &= 0x3Fu;
        }
      }
      else
      {
        if ( (int)v27[84] > 9984 )
          v27[84] = 9984;
        v27[17] &= 0x3FFFu;
        v27[144] &= 0x1Fu;
      }
    }
    else
    {
      if ( (int)v27[84] > 9728 )
        v27[84] = 9728;
      v27[17] &= 0x1FFFu;
      v27[144] &= 0xFu;
    }
    goto LABEL_89;
  }
LABEL_92:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
LABEL_96:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v5;
}
