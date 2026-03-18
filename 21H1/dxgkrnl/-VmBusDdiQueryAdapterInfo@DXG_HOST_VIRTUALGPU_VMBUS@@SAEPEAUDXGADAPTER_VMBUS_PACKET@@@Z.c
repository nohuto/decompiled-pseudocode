/*
 * XREFs of ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003E8CC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?GetDriverCapsSizeFromDdiVersion@@YAII@Z @ 0x1C017A358 (-GetDriverCapsSizeFromDdiVersion@@YAII@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  char v6; // r15
  __int64 v7; // rax
  int *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // r14d
  int v24; // eax
  SIZE_T v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD v32[7]; // [rsp+20h] [rbp-E8h] BYREF
  DXGPUSHLOCK *v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+68h] [rbp-A0h]
  _BYTE v35[144]; // [rsp+78h] [rbp-90h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v33[1]);
  v4 = *((_QWORD *)a1 + 5);
  v34 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v5 + 24) = 3850LL;
LABEL_74:
    WdLogEvent5_WdError(v5);
    goto LABEL_75;
  }
  v6 = 0;
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v8 = (int *)v7;
  if ( !v7 )
  {
LABEL_75:
    v6 = 0;
    goto LABEL_76;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_QWORD *)(v9 + 16);
  if ( *(int *)(v10 + 2304) < 0x2000 )
    v11 = 1;
  else
    v11 = *(_DWORD *)(v10 + 280);
  v12 = *(unsigned int *)(v7 + 28);
  if ( (unsigned __int64)*((unsigned int *)a1 + 22) - 39 < v12 )
  {
    v5 = WdLogNewEntry5_WdError(v9, v12);
    *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v5 + 32) = 3860LL;
    goto LABEL_74;
  }
  v13 = (unsigned int)(*(_DWORD *)(v7 + 24) - 1);
  if ( *(_DWORD *)(v7 + 24) == 1 )
  {
    if ( (_DWORD)v12
      || *(_DWORD *)(v7 + 32) != (unsigned int)GetDriverCapsSizeFromDdiVersion(*(unsigned int *)(v10 + 1848), v12) )
    {
      v5 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v5 + 24) = 3869LL;
      goto LABEL_74;
    }
  }
  else
  {
    v14 = (unsigned int)(*(_DWORD *)(v7 + 24) - 10);
    if ( *(_DWORD *)(v7 + 24) == 10 )
    {
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 != 4 )
        {
          v5 = WdLogNewEntry5_WdError(v14, v12);
          *(_QWORD *)(v5 + 24) = 3928LL;
          goto LABEL_74;
        }
        v19 = *(unsigned int *)(v7 + 36);
      }
      else
      {
        v19 = 0LL;
      }
      if ( (unsigned int)v19 >= v11 )
      {
        v5 = WdLogNewEntry5_WdError(v14, v12);
        *(_QWORD *)(v5 + 24) = 3935LL;
        goto LABEL_74;
      }
      v20 = 4LL * *(unsigned __int16 *)(360 * v19 + *(_QWORD *)(v10 + 2560));
      if ( v8[8] != v20 )
      {
        v5 = WdLogNewEntry5_WdError(360 * v19, v20);
        *(_QWORD *)(v5 + 24) = 3941LL;
        goto LABEL_74;
      }
    }
    else
    {
      v15 = (unsigned int)(*(_DWORD *)(v7 + 24) - 13);
      if ( *(_DWORD *)(v7 + 24) == 13 )
      {
        if ( (_DWORD)v12 != 4 || *(_DWORD *)(v7 + 32) != 24 )
        {
          v5 = WdLogNewEntry5_WdError(v15, v12);
          *(_QWORD *)(v5 + 24) = 3890LL;
          goto LABEL_74;
        }
        if ( *(_DWORD *)(v7 + 36) >= v11 )
        {
          v5 = WdLogNewEntry5_WdError(v15, v12);
          *(_QWORD *)(v5 + 24) = 3895LL;
          goto LABEL_74;
        }
      }
      else if ( *(_DWORD *)(v7 + 24) == 14 )
      {
        if ( (_DWORD)v12 != 4 || *(_DWORD *)(v7 + 32) != 20 )
        {
          v5 = WdLogNewEntry5_WdError((unsigned int)(*(_DWORD *)(v7 + 24) - 14), v12);
          *(_QWORD *)(v5 + 24) = 3903LL;
          goto LABEL_74;
        }
        v18 = *(unsigned __int16 *)(v7 + 38);
        if ( (unsigned int)v18 >= v11
          || (*(_DWORD *)(v10 + 2036) & 0x40) == 0
          || ((v12 = *(_QWORD *)(*(_QWORD *)(v10 + 2680) + 1128LL)) != 0 ? (v18 = v12 + 144 * v18) : (v18 = 0LL),
              (unsigned int)*(unsigned __int16 *)(v7 + 36) >= *(_DWORD *)(v18 + 16)) )
        {
          v5 = WdLogNewEntry5_WdError(v18, v12);
          *(_QWORD *)(v5 + 24) = 3912LL;
          goto LABEL_74;
        }
      }
      else
      {
        v16 = (unsigned int)(*(_DWORD *)(v7 + 24) - 15);
        if ( *(_DWORD *)(v7 + 24) == 15 )
        {
          if ( (_DWORD)v12 != 4 || *(_DWORD *)(v7 + 32) != 32 )
          {
            v5 = WdLogNewEntry5_WdError(v16, v12);
            *(_QWORD *)(v5 + 24) = 3877LL;
            goto LABEL_74;
          }
          if ( *(_DWORD *)(v7 + 36) >= v11 )
          {
            v5 = WdLogNewEntry5_WdError(v16, v12);
            *(_QWORD *)(v5 + 24) = 3882LL;
            goto LABEL_74;
          }
        }
        else
        {
          v17 = (unsigned int)(*(_DWORD *)(v7 + 24) - 26);
          if ( *(_DWORD *)(v7 + 24) == 26 )
          {
            if ( *(_DWORD *)(v7 + 32) != 28 || (_DWORD)v12 != 4 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12);
              *(_QWORD *)(v5 + 24) = 3951LL;
              goto LABEL_74;
            }
            if ( *(_DWORD *)(v7 + 36) >= v11 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12);
              *(_QWORD *)(v5 + 24) = 3957LL;
              goto LABEL_74;
            }
          }
          else
          {
            if ( *(_DWORD *)(v7 + 24) != 27 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12);
              *(_QWORD *)(v5 + 24) = v8[6];
              goto LABEL_74;
            }
            if ( *(_DWORD *)(v7 + 32) != 128 )
            {
              v5 = WdLogNewEntry5_WdError(v17, v12);
              *(_QWORD *)(v5 + 24) = 3966LL;
              goto LABEL_74;
            }
          }
        }
      }
    }
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, (struct DXGADAPTER *const)v10, 0LL);
  v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL);
  if ( v23 >= 0 )
  {
    v24 = v8[7];
    v32[1] = (unsigned int)v8[6];
    memset(&v32[3], 0, 32);
    LODWORD(v32[3]) = v24;
    v32[2] = v8 + 9;
    v25 = (unsigned int)v8[8];
    v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) | 1u;
    HIDWORD(v32[5]) = v26;
    if ( (_DWORD)v25 )
    {
      if ( (unsigned int)v25 > 0x20000 )
      {
        v27 = WdLogNewEntry5_WdError(v26, v21);
        *(_QWORD *)(v27 + 24) = (unsigned int)v8[8];
        WdLogEvent5_WdError(v27);
        goto LABEL_72;
      }
      LODWORD(v32[5]) = v25;
      v32[4] = operator new(v25, 0x4B677844u, 1, (POOL_TYPE)512);
      if ( !v32[4] )
      {
        v30 = WdLogNewEntry5_WdLowResource(v28, v21, v22, v29);
        *(_QWORD *)(v30 + 24) = 3998LL;
        WdLogEvent5_WdLowResource(v30);
        v23 = -1073741801;
      }
    }
    if ( v23 >= 0 )
    {
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v10, (struct _DXGKARG_QUERYADAPTERINFO *)&v32[1], v22) >= 0 )
      {
        if ( v8[6] == 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 7) + 496LL) + 352LL) <= 0x10u && *(int *)(v32[4] + 336LL) > 9728 )
            *(_DWORD *)(v32[4] + 336LL) = 9728;
        }
        else if ( v8[6] == 15 )
        {
          *(_QWORD *)(v32[4] + 8LL) = 0LL;
        }
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), (void *)v32[4], v32[5]);
        v6 = 1;
      }
      if ( v32[4] )
        operator delete[]((void *)v32[4]);
    }
  }
LABEL_72:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35, v21);
LABEL_76:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v6;
}
