/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AFEAC
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C019D0A0 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C000F2B0 (_HMObjectFromHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01981A0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C01A43BC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C01A4B0C (WPP_RECORDER_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01AC330 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01AF830 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01AFBA8 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C01B0818 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_dqddd @ 0x1C01B0B20 (WPP_RECORDER_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C01BFF70 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01C0004 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(LARGE_INTEGER *this, LARGE_INTEGER *a2)
{
  BOOL v2; // r15d
  unsigned int LowPart; // r8d
  char v6; // cl
  char v7; // r12
  __int64 *QuadPart; // rdx
  unsigned int v9; // eax
  struct tagPOINT v10; // rbx
  int v11; // r13d
  unsigned __int8 v12; // si
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v14; // r15
  int v15; // eax
  LARGE_INTEGER v16; // rax
  int v17; // eax
  LONG HighPart; // eax
  LONG v19; // eax
  LARGE_INTEGER v20; // rcx
  LONG v21; // eax
  LARGE_INTEGER v22; // rax
  int v23; // eax
  struct tagPOINT v24; // r9
  struct tagPOINT v25; // r8
  void *v26; // rdx
  bool v27; // al
  int v28; // r8d
  int v29; // r9d
  unsigned __int8 v30; // cl
  bool v31; // r12
  char v32; // al
  LARGE_INTEGER v33; // rcx
  DWORD v34; // eax
  int v35; // edx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  CHidInput *v39; // rcx
  CHidInput *v40; // rcx
  LARGE_INTEGER v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  bool v44; // zf
  LARGE_INTEGER v45; // rcx
  int v47; // [rsp+28h] [rbp-99h]
  struct CDelayZonePanelTelemetryData *v48; // [rsp+30h] [rbp-91h]
  __int64 v49; // [rsp+38h] [rbp-89h]
  __int64 v50; // [rsp+40h] [rbp-81h]
  char v51; // [rsp+58h] [rbp-69h]
  char v52; // [rsp+59h] [rbp-68h]
  char v53; // [rsp+5Ah] [rbp-67h]
  bool v54; // [rsp+5Bh] [rbp-66h] BYREF
  char v55; // [rsp+5Ch] [rbp-65h]
  BOOL v56; // [rsp+60h] [rbp-61h]
  BOOL v57; // [rsp+64h] [rbp-5Dh]
  __int64 *v58[2]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v59; // [rsp+78h] [rbp-49h]
  unsigned int v60; // [rsp+7Ch] [rbp-45h]
  __int128 v61; // [rsp+80h] [rbp-41h] BYREF
  __int128 v62; // [rsp+90h] [rbp-31h]
  _OWORD v63[2]; // [rsp+A8h] [rbp-19h] BYREF
  _OWORD v64[2]; // [rsp+C8h] [rbp+7h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      8u,
      0xDu,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      this->HighPart,
      a2[5].LowPart);
  LowPart = a2[6].LowPart;
  v6 = 0;
  v7 = 0;
  v52 = 0;
  LOBYTE(v2) = 0;
  v51 = 0;
  QuadPart = 0LL;
  v56 = v2;
  v9 = 0;
  LOBYTE(v57) = 0;
  v10 = 0LL;
  v58[0] = 0LL;
  v11 = 0;
  v53 = 0;
  v55 = 0;
  v12 = 1;
  v60 = LowPart;
  v59 = 0;
  if ( LowPart )
  {
    while ( 1 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a2, v9);
      v14 = PointerInfo;
      if ( !PointerInfo )
        break;
      v15 = *(_DWORD *)PointerInfo;
      if ( v15 == 3 )
      {
        v16 = this[4];
        if ( !v16.QuadPart )
        {
          v16 = a2[8];
          this[4] = v16;
        }
        if ( a2[8].QuadPart != v16.QuadPart )
          goto LABEL_93;
        v52 = 1;
        this[6] = KeQueryPerformanceCounter(0LL);
        v17 = *((_DWORD *)v14 + 3);
        if ( (v17 & 1) != 0 )
        {
          HighPart = this[5].HighPart;
          if ( !HighPart )
          {
            v10 = (struct tagPOINT)*((_QWORD *)v14 + 7);
            v53 = 1;
          }
          v19 = HighPart + 1;
          this[5].HighPart = v19;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v50) = v19;
            LODWORD(v48) = *((_DWORD *)v14 + 1);
            WPP_RECORDER_SF_dqd(
              (__int64)&WPP_RECORDER_INITIALIZED,
              4u,
              8u,
              0xEu,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v48,
              this[4].QuadPart,
              v50);
          }
          v20 = this[20];
          if ( v20.QuadPart )
          {
            memset(v63, 0, sizeof(v63));
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
              (LARGE_INTEGER)v20.QuadPart,
              0xFFFFFFFFLL,
              v63,
              v14,
              v11++);
          }
        }
        else if ( (v17 & 2) == 0 )
        {
          v21 = this[5].HighPart;
          if ( v21 )
            this[5].HighPart = --v21;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v50) = v21;
            LODWORD(v48) = *((_DWORD *)v14 + 1);
            WPP_RECORDER_SF_dqd(
              (__int64)&WPP_RECORDER_INITIALIZED,
              4u,
              8u,
              0xFu,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v48,
              this[4].QuadPart,
              v50);
          }
        }
        QuadPart = v58[0];
        if ( (*((_DWORD *)v14 + 3) & 0x8000) != 0 )
          v55 = 1;
        goto LABEL_45;
      }
      if ( v15 != 2 )
        goto LABEL_93;
      v22 = this[2];
      if ( !v22.QuadPart )
      {
        v22 = a2[8];
        this[2] = v22;
      }
      if ( a2[8].QuadPart != v22.QuadPart )
        goto LABEL_93;
      v7 = 1;
      v51 = 1;
      QuadPart = (__int64 *)KeQueryPerformanceCounter(0LL).QuadPart;
      v58[0] = QuadPart;
      v23 = *((_DWORD *)v14 + 3);
      if ( (v23 & 0x10000) != 0 )
      {
        v54 = 0;
        ++this[5].LowPart;
        v24 = (struct tagPOINT)*((_QWORD *)v14 + 7);
        v25 = (struct tagPOINT)*((_QWORD *)v14 + 6);
        v26 = (void *)*((_QWORD *)v14 + 2);
        v61 = 0LL;
        v62 = 0LL;
        v27 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                v26,
                v25,
                v24,
                &v54,
                (struct CDelayZonePanelTelemetryData *)&v61);
        v30 = v57;
        v31 = v27;
        if ( !v57 )
        {
          v30 = v27;
          v57 = v27;
        }
        v32 = v56;
        if ( !v56 )
        {
          v32 = !v31;
          v56 = !v31;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqddd(
            v30,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            v28,
            v29,
            v47,
            *((_DWORD *)v14 + 1),
            this[2].QuadPart,
            this[5].LowPart,
            v30,
            v32);
        v33 = this[20];
        if ( v33.QuadPart && v31 )
        {
          v64[0] = v61;
          v64[1] = v62;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
            (LARGE_INTEGER)v33.QuadPart,
            v54,
            v64,
            v14,
            v11++);
        }
        v7 = 1;
      }
      else
      {
        if ( (v23 & 0x40000) == 0 )
          goto LABEL_46;
        v34 = this[5].LowPart;
        if ( v34 )
          this[5].LowPart = --v34;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        LODWORD(v50) = v34;
        LODWORD(v48) = *((_DWORD *)v14 + 1);
        WPP_RECORDER_SF_dqd(
          (__int64)&WPP_RECORDER_INITIALIZED,
          4u,
          8u,
          0x11u,
          (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
          v48,
          this[2].QuadPart,
          v50);
      }
      QuadPart = v58[0];
LABEL_46:
      v9 = v59 + 1;
      v59 = v9;
      if ( v9 >= v60 )
      {
        LOBYTE(v2) = v56;
        v6 = v52;
        goto LABEL_48;
      }
    }
    QuadPart = v58[0];
LABEL_45:
    v7 = v51;
    goto LABEL_46;
  }
LABEL_48:
  if ( LOBYTE(this->LowPart) )
  {
    if ( v7 )
    {
      v36 = this[13].HighPart;
      if ( v36 )
      {
        v37 = (unsigned __int64)(1000 * ((_QWORD)QuadPart - this[6].QuadPart)) / gliQpcFreq.QuadPart;
        v38 = (unsigned __int64)(1000 * ((_QWORD)QuadPart - this[6].QuadPart)) % gliQpcFreq.QuadPart;
        if ( (unsigned int)v37 > v36 )
        {
          LOBYTE(this->LowPart) = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v38) = 4;
            WPP_RECORDER_SF_L(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v38,
              8,
              19,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v37);
          }
        }
      }
    }
  }
  else
  {
    v35 = 1;
    if ( v6 )
    {
      LOBYTE(this->LowPart) = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v35) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v35,
          8,
          18,
          (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids);
      }
    }
  }
  v39 = (CHidInput *)(unsigned int)this->HighPart;
  if ( !(_DWORD)v39 )
  {
    if ( LOBYTE(this->LowPart) )
    {
      if ( v52 && v53 )
      {
        v41 = this[20];
        this->HighPart = 2;
        v12 = 1;
        if ( !v41.QuadPart )
          goto LABEL_93;
        v42 = 1LL;
        v43 = 2LL;
        goto LABEL_84;
      }
      if ( v7 && v57 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v39, 0, this[12].HighPart);
        this[7].QuadPart = (LONGLONG)a2;
        v44 = this[3].QuadPart == 0;
        LOBYTE(this[1].LowPart) = 1;
        this[8].QuadPart = (LONGLONG)a2;
        if ( v44 )
        {
          v45 = this[2];
          v58[0] = (__int64 *)&this[3];
          v58[1] = (__int64 *)HMObjectFromHandle(v45.LowPart);
          HMAssignmentLock(v58);
        }
        v41 = this[20];
        v12 = 0;
        this->HighPart = 1;
        if ( v41.QuadPart )
        {
          v42 = 0LL;
          v43 = 1LL;
          goto LABEL_84;
        }
        goto LABEL_93;
      }
    }
    this->HighPart = 2;
    goto LABEL_92;
  }
  v40 = (CHidInput *)(unsigned int)((_DWORD)v39 - 1);
  if ( (_DWORD)v40 )
  {
    if ( (_DWORD)v40 != 1 )
      goto LABEL_93;
    if ( !this[5].HighPart && !this[5].LowPart && !v55 )
    {
      this[4].QuadPart = 0LL;
      this[2].QuadPart = 0LL;
      this->HighPart = 0;
    }
    goto LABEL_92;
  }
  if ( v52 && v53 )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v40, 1, 0);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::SuppressDeadzoneContacts((DelayZonePalmRejection *)this, v10);
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
    v41 = this[20];
    if ( v41.QuadPart )
    {
      v42 = 1LL;
LABEL_70:
      v43 = (unsigned int)this->HighPart;
LABEL_84:
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
        (LARGE_INTEGER)v41.QuadPart,
        v43,
        v42);
      goto LABEL_93;
    }
    goto LABEL_93;
  }
  if ( !v7 )
  {
LABEL_92:
    v12 = 1;
    goto LABEL_93;
  }
  if ( v2 )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v40, 1, 0);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
  }
  else
  {
    this[8].QuadPart = (LONGLONG)a2;
    v12 = 0;
  }
  v41 = this[20];
  if ( v41.QuadPart )
  {
    v42 = 0LL;
    goto LABEL_70;
  }
LABEL_93:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v49) = v12;
    LODWORD(v48) = this->HighPart;
    WPP_RECORDER_SF_Dd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      8u,
      0x14u,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      v48,
      v49);
  }
  return v12;
}
