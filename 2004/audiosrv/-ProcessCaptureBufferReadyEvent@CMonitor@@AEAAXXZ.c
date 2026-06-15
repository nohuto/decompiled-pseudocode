/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180103600
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x1801011BC (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180058034 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180100FEC (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18010107C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180101120 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1801042F8 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x180105394 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 *     WPP_SF_qdDdigi @ 0x1801055A0 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x180145008 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x1801450B4 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rsi
  int *v2; // rbx
  _QWORD *v3; // r12
  int v4; // r14d
  unsigned __int8 v5; // r8
  __int64 v6; // r8
  double v7; // xmm0_8
  __int64 v8; // rcx
  double v9; // xmm1_8
  __int64 v10; // rax
  int *v11; // rax
  unsigned int v12; // ecx
  unsigned __int8 v13; // r8
  int v14; // ecx
  ATL::CAtlException *v15; // rbx
  unsigned __int64 v16; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v17; // [rsp+38h] [rbp-A0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-80h] BYREF
  char v19; // [rsp+60h] [rbp-78h]
  unsigned __int64 v20; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-68h] BYREF
  int v22; // [rsp+78h] [rbp-60h] BYREF
  int *v23; // [rsp+80h] [rbp-58h] BYREF
  _QWORD *v24; // [rsp+88h] [rbp-50h] BYREF
  void *Src; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v26; // [rsp+98h] [rbp-40h] BYREF
  CMonitor *v27; // [rsp+E0h] [rbp+8h] BYREF
  unsigned __int64 v28; // [rsp+E8h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+F0h] [rbp+18h] BYREF
  int v30; // [rsp+F8h] [rbp+20h] BYREF

  v27 = this;
  v1 = this;
  v2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 400);
  v19 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = (_QWORD *)((char *)v1 + 88);
  v24 = (_QWORD *)((char *)v1 + 88);
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 11) + 40LL))(*((_QWORD *)v1 + 11), &v30);
  if ( v4 >= 0 )
  {
    while ( 1 )
    {
      if ( !v30 )
        goto LABEL_43;
      if ( !*((_QWORD *)v1 + 40) )
        break;
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 48LL))(*((_QWORD *)v1 + 10), &v22);
      if ( v4 < 0 )
        goto LABEL_8;
      v4 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)*v3 + 24LL))(
             *v3,
             &Src,
             &v28,
             &v29);
      if ( v4 < 0 )
        goto LABEL_8;
      v2 = (int *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((char *)v1 + 304);
      AEWMILOG_POSITION(*v2, v1, v5, 5u, (unsigned __int64)&v21, *v2, v21, (unsigned int)v28);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v17 = v21;
        LODWORD(v16) = v22;
        WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, v6, v2, v28, v29);
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 12) + 32LL))(
             *((_QWORD *)v1 + 12),
             &v21,
             &v20);
      if ( v4 < 0 )
      {
LABEL_17:
        if ( !v19 )
          goto LABEL_45;
        goto LABEL_44;
      }
      if ( (v21 & 0x8000000000000000uLL) != 0LL )
        v7 = (double)(int)(v21 & 1 | (v21 >> 1)) + (double)(int)(v21 & 1 | (v21 >> 1));
      else
        v7 = (double)(int)v21;
      v8 = *((_QWORD *)v1 + 17);
      if ( v8 < 0 )
      {
        v10 = *((_QWORD *)v1 + 17) & 1LL | ((unsigned __int64)v8 >> 1);
        v9 = (double)(int)v10 + (double)(int)v10;
      }
      else
      {
        v9 = (double)(int)v8;
      }
      *((double *)v2 + 2) = v7 / v9;
      memcpy_0(*((void **)v2 + 4), Src, (unsigned int)v28 * *((_QWORD *)v1 + 56));
      try
      {
        v2[3] = v28;
        v2[6] = 0;
        v2[1] = v29;
        v11 = v2;
        v2 = 0LL;
        v23 = v11;
        ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
          (__int64 *)v1 + 44,
          (__int64)&v23);
      }
      catch ( ATL::CAtlException *v26 )
      {
        v15 = v26;
        if ( *(_DWORD *)v26 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v23) = *(_DWORD *)v15;
        v4 = (int)v23;
        if ( (int)v23 < 0 )
        {
          if ( v19 )
            LeaveCriticalSection(lpCriticalSection);
          v1 = v27;
          v2 = 0LL;
          goto LABEL_45;
        }
        v1 = v27;
        v2 = 0LL;
        v3 = v24;
      }
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             (unsigned int)v28);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 11) + 40LL))(*((_QWORD *)v1 + 11), &v30);
        if ( v4 >= 0 )
          continue;
      }
      goto LABEL_17;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x24u,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        v30);
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **, CMonitor **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 24LL))(
           *((_QWORD *)v1 + 11),
           &v24,
           &v27,
           &v28,
           &v20,
           &v29);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             (unsigned int)v27);
      if ( v4 >= 0 )
      {
        AEWMILOG_GLITCH(v12, v1, v13, 0xCu, v20, v29, v16, v17);
        if ( (byte_1801A0981 & 1) != 0 )
          McTemplateU0pxx_EtwEventWriteTransfer(v14, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v20, v29);
        ShipAssert(90113LL, 1LL);
LABEL_43:
        v2 = 0LL;
        if ( !v19 )
          goto LABEL_45;
LABEL_44:
        LeaveCriticalSection(lpCriticalSection);
        goto LABEL_45;
      }
    }
LABEL_8:
    if ( v19 )
      LeaveCriticalSection(lpCriticalSection);
    v2 = 0LL;
  }
  else if ( v19 )
  {
    LeaveCriticalSection(lpCriticalSection);
  }
LABEL_45:
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x25u,
        (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids,
        v4);
    }
    CMonitor::AbortMonitor(v1);
  }
  if ( v2 )
    CMonitor::SampleDataBlock::`scalar deleting destructor'((void **)v2);
}
