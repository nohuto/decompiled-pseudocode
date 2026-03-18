/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01AA14C
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01973B0 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C0023AC0 (_HMObjectFromHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013B8DC (WPP_RECORDER_SF_Dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01924A0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C019E65C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C019EDAC (WPP_RECORDER_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A65D0 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A9AD0 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01A9E48 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C01AAAB8 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_dqddd @ 0x1C01AADC0 (WPP_RECORDER_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C01BA210 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01BA2A4 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(
        LARGE_INTEGER *this,
        LARGE_INTEGER *a2,
        __int64 a3,
        __int64 a4)
{
  BOOL v4; // r15d
  unsigned int LowPart; // r8d
  char v8; // cl
  char v9; // r12
  __int64 *QuadPart; // rdx
  unsigned int v11; // eax
  struct tagPOINT v12; // rbx
  int v13; // r13d
  unsigned __int8 v14; // si
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v16; // r15
  int v17; // eax
  LARGE_INTEGER v18; // rax
  int v19; // eax
  LONG HighPart; // eax
  LONG v21; // eax
  LARGE_INTEGER v22; // rcx
  LONG v23; // eax
  LARGE_INTEGER v24; // rax
  int v25; // eax
  struct tagPOINT v26; // r9
  struct tagPOINT v27; // r8
  void *v28; // rdx
  bool v29; // al
  int v30; // r8d
  unsigned __int8 v31; // cl
  bool v32; // r12
  char v33; // al
  LARGE_INTEGER v34; // rcx
  DWORD v35; // eax
  int v36; // edx
  unsigned int v37; // ecx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  CHidInput *v40; // rcx
  CHidInput *v41; // rcx
  LARGE_INTEGER v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  bool v45; // zf
  LARGE_INTEGER v46; // rcx
  int v48; // [rsp+28h] [rbp-99h]
  struct CDelayZonePanelTelemetryData *v49; // [rsp+30h] [rbp-91h]
  __int64 v50; // [rsp+38h] [rbp-89h]
  __int64 v51; // [rsp+40h] [rbp-81h]
  char v52; // [rsp+58h] [rbp-69h]
  char v53; // [rsp+59h] [rbp-68h]
  char v54; // [rsp+5Ah] [rbp-67h]
  bool v55; // [rsp+5Bh] [rbp-66h] BYREF
  char v56; // [rsp+5Ch] [rbp-65h]
  BOOL v57; // [rsp+60h] [rbp-61h]
  BOOL v58; // [rsp+64h] [rbp-5Dh]
  __int64 *v59[2]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v60; // [rsp+78h] [rbp-49h]
  unsigned int v61; // [rsp+7Ch] [rbp-45h]
  __int128 v62; // [rsp+80h] [rbp-41h] BYREF
  __int128 v63; // [rsp+90h] [rbp-31h]
  _OWORD v64[2]; // [rsp+A8h] [rbp-19h] BYREF
  _OWORD v65[2]; // [rsp+C8h] [rbp+7h] BYREF

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
  v8 = 0;
  v9 = 0;
  v53 = 0;
  LOBYTE(v4) = 0;
  v52 = 0;
  QuadPart = 0LL;
  v57 = v4;
  v11 = 0;
  LOBYTE(v58) = 0;
  v12 = 0LL;
  v59[0] = 0LL;
  v13 = 0;
  v54 = 0;
  v56 = 0;
  v14 = 1;
  v61 = LowPart;
  v60 = 0;
  if ( LowPart )
  {
    while ( 1 )
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a2, v11);
      v16 = PointerInfo;
      if ( !PointerInfo )
        break;
      v17 = *(_DWORD *)PointerInfo;
      if ( v17 == 3 )
      {
        v18 = this[4];
        if ( !v18.QuadPart )
        {
          v18 = a2[8];
          this[4] = v18;
        }
        if ( a2[8].QuadPart != v18.QuadPart )
          goto LABEL_93;
        v53 = 1;
        this[6] = KeQueryPerformanceCounter(0LL);
        v19 = *((_DWORD *)v16 + 3);
        if ( (v19 & 1) != 0 )
        {
          HighPart = this[5].HighPart;
          if ( !HighPart )
          {
            v12 = (struct tagPOINT)*((_QWORD *)v16 + 7);
            v54 = 1;
          }
          v21 = HighPart + 1;
          this[5].HighPart = v21;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v51) = v21;
            LODWORD(v49) = *((_DWORD *)v16 + 1);
            WPP_RECORDER_SF_dqd(
              (__int64)&WPP_RECORDER_INITIALIZED,
              4u,
              8u,
              0xEu,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v49,
              this[4].QuadPart,
              v51);
          }
          v22 = this[20];
          if ( v22.QuadPart )
          {
            memset(v64, 0, sizeof(v64));
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
              (LARGE_INTEGER)v22.QuadPart,
              0xFFFFFFFFLL,
              v64,
              v16,
              v13++);
          }
        }
        else if ( (v19 & 2) == 0 )
        {
          v23 = this[5].HighPart;
          if ( v23 )
            this[5].HighPart = --v23;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v51) = v23;
            LODWORD(v49) = *((_DWORD *)v16 + 1);
            WPP_RECORDER_SF_dqd(
              (__int64)&WPP_RECORDER_INITIALIZED,
              4u,
              8u,
              0xFu,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v49,
              this[4].QuadPart,
              v51);
          }
        }
        QuadPart = v59[0];
        if ( (*((_DWORD *)v16 + 3) & 0x8000) != 0 )
          v56 = 1;
        goto LABEL_45;
      }
      if ( v17 != 2 )
        goto LABEL_93;
      v24 = this[2];
      if ( !v24.QuadPart )
      {
        v24 = a2[8];
        this[2] = v24;
      }
      if ( a2[8].QuadPart != v24.QuadPart )
        goto LABEL_93;
      v9 = 1;
      v52 = 1;
      QuadPart = (__int64 *)KeQueryPerformanceCounter(0LL).QuadPart;
      v59[0] = QuadPart;
      v25 = *((_DWORD *)v16 + 3);
      if ( (v25 & 0x10000) != 0 )
      {
        v55 = 0;
        ++this[5].LowPart;
        v26 = (struct tagPOINT)*((_QWORD *)v16 + 7);
        v27 = (struct tagPOINT)*((_QWORD *)v16 + 6);
        v28 = (void *)*((_QWORD *)v16 + 2);
        v62 = 0LL;
        v63 = 0LL;
        v29 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                v28,
                v27,
                v26,
                &v55,
                (struct CDelayZonePanelTelemetryData *)&v62);
        v31 = v58;
        v32 = v29;
        if ( !v58 )
        {
          v31 = v29;
          v58 = v29;
        }
        v33 = v57;
        if ( !v57 )
        {
          v33 = !v32;
          v57 = !v32;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqddd(
            v31,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            v30,
            a4,
            v48,
            *((_DWORD *)v16 + 1),
            this[2].QuadPart,
            this[5].LowPart,
            v31,
            v33);
        v34 = this[20];
        if ( v34.QuadPart && v32 )
        {
          v65[0] = v62;
          v65[1] = v63;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
            (LARGE_INTEGER)v34.QuadPart,
            v55,
            v65,
            v16,
            v13++);
        }
        v9 = 1;
      }
      else
      {
        if ( (v25 & 0x40000) == 0 )
          goto LABEL_46;
        v35 = this[5].LowPart;
        if ( v35 )
          this[5].LowPart = --v35;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        LODWORD(v51) = v35;
        LODWORD(v49) = *((_DWORD *)v16 + 1);
        WPP_RECORDER_SF_dqd(
          (__int64)&WPP_RECORDER_INITIALIZED,
          4u,
          8u,
          0x11u,
          (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
          v49,
          this[2].QuadPart,
          v51);
      }
      QuadPart = v59[0];
LABEL_46:
      v11 = v60 + 1;
      v60 = v11;
      if ( v11 >= v61 )
      {
        LOBYTE(v4) = v57;
        v8 = v53;
        goto LABEL_48;
      }
    }
    QuadPart = v59[0];
LABEL_45:
    v9 = v52;
    goto LABEL_46;
  }
LABEL_48:
  if ( LOBYTE(this->LowPart) )
  {
    if ( v9 )
    {
      v37 = this[13].HighPart;
      if ( v37 )
      {
        v38 = (unsigned __int64)(1000 * ((_QWORD)QuadPart - this[6].QuadPart)) / gliQpcFreq.QuadPart;
        v39 = (unsigned __int64)(1000 * ((_QWORD)QuadPart - this[6].QuadPart)) % gliQpcFreq.QuadPart;
        if ( (unsigned int)v38 > v37 )
        {
          LOBYTE(this->LowPart) = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v39) = 4;
            WPP_RECORDER_SF_L(
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              v39,
              8,
              19,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v38);
          }
        }
      }
    }
  }
  else
  {
    v36 = 1;
    if ( v8 )
    {
      LOBYTE(this->LowPart) = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v36,
          8,
          18,
          (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids);
      }
    }
  }
  v40 = (CHidInput *)(unsigned int)this->HighPart;
  if ( !(_DWORD)v40 )
  {
    if ( LOBYTE(this->LowPart) )
    {
      if ( v53 && v54 )
      {
        v42 = this[20];
        this->HighPart = 2;
        v14 = 1;
        if ( !v42.QuadPart )
          goto LABEL_93;
        v43 = 1LL;
        v44 = 2LL;
        goto LABEL_84;
      }
      if ( v9 && v58 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v40, 0, this[12].HighPart, a4);
        this[7].QuadPart = (LONGLONG)a2;
        v45 = this[3].QuadPart == 0;
        LOBYTE(this[1].LowPart) = 1;
        this[8].QuadPart = (LONGLONG)a2;
        if ( v45 )
        {
          v46 = this[2];
          v59[0] = (__int64 *)&this[3];
          v59[1] = (__int64 *)HMObjectFromHandle(v46.LowPart);
          HMAssignmentLock(v59);
        }
        v42 = this[20];
        v14 = 0;
        this->HighPart = 1;
        if ( v42.QuadPart )
        {
          v43 = 0LL;
          v44 = 1LL;
          goto LABEL_84;
        }
        goto LABEL_93;
      }
    }
    this->HighPart = 2;
    goto LABEL_92;
  }
  v41 = (CHidInput *)(unsigned int)((_DWORD)v40 - 1);
  if ( (_DWORD)v41 )
  {
    if ( (_DWORD)v41 != 1 )
      goto LABEL_93;
    if ( !this[5].HighPart && !this[5].LowPart && !v56 )
    {
      this[4].QuadPart = 0LL;
      this[2].QuadPart = 0LL;
      this->HighPart = 0;
    }
    goto LABEL_92;
  }
  if ( v53 && v54 )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v41, 1, 0, a4);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::SuppressDeadzoneContacts((DelayZonePalmRejection *)this, v12);
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
    v42 = this[20];
    if ( v42.QuadPart )
    {
      v43 = 1LL;
LABEL_70:
      v44 = (unsigned int)this->HighPart;
LABEL_84:
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
        (LARGE_INTEGER)v42.QuadPart,
        v44,
        v43);
      goto LABEL_93;
    }
    goto LABEL_93;
  }
  if ( !v9 )
  {
LABEL_92:
    v14 = 1;
    goto LABEL_93;
  }
  if ( v4 )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v41, 1, 0, a4);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this);
  }
  else
  {
    this[8].QuadPart = (LONGLONG)a2;
    v14 = 0;
  }
  v42 = this[20];
  if ( v42.QuadPart )
  {
    v43 = 0LL;
    goto LABEL_70;
  }
LABEL_93:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v50) = v14;
    LODWORD(v49) = this->HighPart;
    WPP_RECORDER_SF_Dd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      8u,
      0x14u,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      v49,
      v50);
  }
  return v14;
}
