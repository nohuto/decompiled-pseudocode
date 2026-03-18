/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01A7DCC
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C0194E80 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     _HMObjectFromHandle @ 0x1C00870D0 (_HMObjectFromHandle.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C018FF80 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_SF_L @ 0x1C019C15C (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C019C8AC (WPP_RECORDER_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01A4250 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01A7750 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01A7AC8 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C01A8738 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 *     WPP_RECORDER_SF_dqddd @ 0x1C01A8A40 (WPP_RECORDER_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C01B7EA0 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01B7F34 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(
        LARGE_INTEGER *this,
        LARGE_INTEGER *a2,
        __int64 a3,
        __int64 a4)
{
  BOOL v4; // r15d
  __int64 LowPart; // r8
  char v8; // cl
  char v9; // r12
  LARGE_INTEGER PerformanceCounter; // rdx
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
  unsigned __int8 v30; // cl
  bool v31; // r12
  char v32; // al
  LARGE_INTEGER v33; // rcx
  DWORD v34; // eax
  __int64 v35; // rdx
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  CHidInput *v39; // rcx
  CHidInput *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  LARGE_INTEGER v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  bool v50; // zf
  LARGE_INTEGER v51; // rcx
  __int64 v52; // rdx
  int v54; // [rsp+28h] [rbp-99h]
  struct CDelayZonePanelTelemetryData *v55; // [rsp+30h] [rbp-91h]
  __int64 v56; // [rsp+38h] [rbp-89h]
  __int64 v57; // [rsp+40h] [rbp-81h]
  char v58; // [rsp+58h] [rbp-69h]
  char v59; // [rsp+59h] [rbp-68h]
  char v60; // [rsp+5Ah] [rbp-67h]
  bool v61; // [rsp+5Bh] [rbp-66h] BYREF
  char v62; // [rsp+5Ch] [rbp-65h]
  BOOL v63; // [rsp+60h] [rbp-61h]
  BOOL v64; // [rsp+64h] [rbp-5Dh]
  _QWORD v65[2]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-49h]
  unsigned int v67; // [rsp+7Ch] [rbp-45h]
  __int128 v68; // [rsp+80h] [rbp-41h] BYREF
  __int128 v69; // [rsp+90h] [rbp-31h]
  _OWORD v70[2]; // [rsp+A8h] [rbp-19h] BYREF
  _OWORD v71[2]; // [rsp+C8h] [rbp+7h] BYREF

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
  v59 = 0;
  LOBYTE(v4) = 0;
  v58 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v63 = v4;
  v11 = 0;
  LOBYTE(v64) = 0;
  v12 = 0LL;
  v65[0] = 0LL;
  v13 = 0;
  v60 = 0;
  v62 = 0;
  v14 = 1;
  v67 = LowPart;
  v66 = 0;
  if ( (_DWORD)LowPart )
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
          goto LABEL_94;
        v59 = 1;
        this[6] = KeQueryPerformanceCounter(0LL);
        v19 = *((_DWORD *)v16 + 3);
        if ( (v19 & 1) != 0 )
        {
          HighPart = this[5].HighPart;
          if ( !HighPart )
          {
            v12 = (struct tagPOINT)*((_QWORD *)v16 + 7);
            v60 = 1;
          }
          v21 = HighPart + 1;
          this[5].HighPart = v21;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v57) = v21;
            LODWORD(v55) = *((_DWORD *)v16 + 1);
            WPP_RECORDER_SF_dqd(
              (__int64)&WPP_RECORDER_INITIALIZED,
              4u,
              8u,
              0xEu,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v55,
              this[4].QuadPart,
              v57);
          }
          v22 = this[20];
          if ( v22.QuadPart )
          {
            memset(v70, 0, sizeof(v70));
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
              (LARGE_INTEGER)v22.QuadPart,
              0xFFFFFFFFLL,
              v70,
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
            LODWORD(v57) = v23;
            LODWORD(v55) = *((_DWORD *)v16 + 1);
            WPP_RECORDER_SF_dqd(
              (__int64)&WPP_RECORDER_INITIALIZED,
              4u,
              8u,
              0xFu,
              (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
              v55,
              this[4].QuadPart,
              v57);
          }
        }
        PerformanceCounter = (LARGE_INTEGER)v65[0];
        if ( (*((_DWORD *)v16 + 3) & 0x8000) != 0 )
          v62 = 1;
        goto LABEL_45;
      }
      if ( v17 != 2 )
        goto LABEL_94;
      v24 = this[2];
      if ( !v24.QuadPart )
      {
        v24 = a2[8];
        this[2] = v24;
      }
      if ( a2[8].QuadPart != v24.QuadPart )
        goto LABEL_94;
      v9 = 1;
      v58 = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v65[0] = PerformanceCounter.QuadPart;
      v25 = *((_DWORD *)v16 + 3);
      if ( (v25 & 0x10000) != 0 )
      {
        v61 = 0;
        ++this[5].LowPart;
        v26 = (struct tagPOINT)*((_QWORD *)v16 + 7);
        v27 = (struct tagPOINT)*((_QWORD *)v16 + 6);
        v28 = (void *)*((_QWORD *)v16 + 2);
        v68 = 0LL;
        v69 = 0LL;
        v29 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                v28,
                v27,
                v26,
                &v61,
                (struct CDelayZonePanelTelemetryData *)&v68);
        v30 = v64;
        v31 = v29;
        if ( !v64 )
        {
          v30 = v29;
          v64 = v29;
        }
        v32 = v63;
        if ( !v63 )
        {
          v32 = !v31;
          v63 = !v31;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqddd(
            v30,
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            LowPart,
            a4,
            v54,
            *((_DWORD *)v16 + 1),
            this[2].QuadPart,
            this[5].LowPart,
            v30,
            v32);
        v33 = this[20];
        if ( v33.QuadPart && v31 )
        {
          v71[0] = v68;
          v71[1] = v69;
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo)(
            (LARGE_INTEGER)v33.QuadPart,
            v61,
            v71,
            v16,
            v13++);
        }
        v9 = 1;
      }
      else
      {
        if ( (v25 & 0x40000) == 0 )
          goto LABEL_46;
        v34 = this[5].LowPart;
        if ( v34 )
          this[5].LowPart = --v34;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_46;
        LODWORD(v57) = v34;
        LODWORD(v55) = *((_DWORD *)v16 + 1);
        WPP_RECORDER_SF_dqd(
          (__int64)&WPP_RECORDER_INITIALIZED,
          4u,
          8u,
          0x11u,
          (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
          v55,
          this[2].QuadPart,
          v57);
      }
      PerformanceCounter = (LARGE_INTEGER)v65[0];
LABEL_46:
      v11 = v66 + 1;
      v66 = v11;
      if ( v11 >= v67 )
      {
        LOBYTE(v4) = v63;
        v8 = v59;
        goto LABEL_48;
      }
    }
    PerformanceCounter = (LARGE_INTEGER)v65[0];
LABEL_45:
    v9 = v58;
    goto LABEL_46;
  }
LABEL_48:
  if ( LOBYTE(this->LowPart) )
  {
    if ( v9 )
    {
      v36 = this[13].HighPart;
      if ( v36 )
      {
        v37 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[6].QuadPart)) / gliQpcFreq.QuadPart;
        v38 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[6].QuadPart)) % gliQpcFreq.QuadPart;
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
    goto LABEL_57;
  }
  v35 = 1LL;
  if ( v8 )
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
LABEL_57:
      v35 = 1LL;
    }
  }
  v39 = (CHidInput *)(unsigned int)this->HighPart;
  if ( !(_DWORD)v39 )
  {
    if ( LOBYTE(this->LowPart) )
    {
      if ( v59 && v60 )
      {
        v44 = this[20];
        this->HighPart = 2;
        v14 = 1;
        if ( !v44.QuadPart )
          goto LABEL_94;
        v45 = 1LL;
        v46 = 2LL;
        goto LABEL_85;
      }
      if ( v9 && v64 )
      {
        CHidInput::HandleDelayZonePalmRejectionTimer(v39, 0, this[12].HighPart, a4);
        this[7].QuadPart = (LONGLONG)a2;
        v50 = this[3].QuadPart == 0;
        LOBYTE(this[1].LowPart) = 1;
        this[8].QuadPart = (LONGLONG)a2;
        if ( v50 )
        {
          v51 = this[2];
          v65[0] = this + 3;
          v65[1] = HMObjectFromHandle(v51.LowPart, v47, v48, v49);
          HMAssignmentLock((__int64)v65, v52);
        }
        v44 = this[20];
        v14 = 0;
        this->HighPart = 1;
        if ( v44.QuadPart )
        {
          v45 = 0LL;
          v46 = 1LL;
          goto LABEL_85;
        }
        goto LABEL_94;
      }
    }
    this->HighPart = 2;
    goto LABEL_93;
  }
  v40 = (CHidInput *)(unsigned int)((_DWORD)v39 - 1);
  if ( (_DWORD)v40 )
  {
    if ( (_DWORD)v40 != 1 )
      goto LABEL_94;
    if ( !this[5].HighPart && !this[5].LowPart && !v62 )
    {
      this[4].QuadPart = 0LL;
      this[2].QuadPart = 0LL;
      this->HighPart = 0;
    }
    goto LABEL_93;
  }
  if ( v59 && v60 )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v40, 1, 0, a4);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::SuppressDeadzoneContacts((DelayZonePalmRejection *)this, v12);
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, v41, v42, v43);
    v44 = this[20];
    if ( v44.QuadPart )
    {
      v45 = 1LL;
LABEL_71:
      v46 = (unsigned int)this->HighPart;
LABEL_85:
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
        (LARGE_INTEGER)v44.QuadPart,
        v46,
        v45);
      goto LABEL_94;
    }
    goto LABEL_94;
  }
  if ( !v9 )
  {
LABEL_93:
    v14 = 1;
    goto LABEL_94;
  }
  if ( v4 )
  {
    if ( LOBYTE(this[1].LowPart) == 1 )
    {
      CHidInput::HandleDelayZonePalmRejectionTimer(v40, 1, 0, a4);
      LOBYTE(this[1].LowPart) = 0;
    }
    DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, v35, LowPart, a4);
  }
  else
  {
    this[8].QuadPart = (LONGLONG)a2;
    v14 = 0;
  }
  v44 = this[20];
  if ( v44.QuadPart )
  {
    v45 = 0LL;
    goto LABEL_71;
  }
LABEL_94:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v56) = v14;
    LODWORD(v55) = this->HighPart;
    WPP_RECORDER_SF_Dd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      8u,
      0x14u,
      (__int64)&WPP_926a34ac5ff436dd04abf80f696c769b_Traceguids,
      v55,
      v56);
  }
  return v14;
}
