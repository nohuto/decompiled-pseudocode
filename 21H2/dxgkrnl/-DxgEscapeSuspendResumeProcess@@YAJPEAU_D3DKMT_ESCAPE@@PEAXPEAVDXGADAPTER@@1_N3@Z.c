/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0267748
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001FDC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00E3090 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00E3130 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0247F54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C02864A0 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(
        struct _D3DKMT_ESCAPE *a1,
        unsigned __int8 *a2,
        struct DXGADAPTER *a3,
        void *a4,
        bool a5,
        bool a6)
{
  __int64 v6; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  struct DXGPROCESS *Process; // rax
  DXGPROCESS *v18; // rsi
  __int64 v19; // rax
  UINT v20; // ebx
  unsigned int HostProcess; // eax
  size_t v23; // [rsp+38h] [rbp-A0h]
  _BYTE v24[8]; // [rsp+50h] [rbp-88h] BYREF
  void *v25; // [rsp+58h] [rbp-80h]
  __int64 v26; // [rsp+60h] [rbp-78h]
  int v27; // [rsp+68h] [rbp-70h]
  __int16 v28; // [rsp+6Ch] [rbp-6Ch]
  char v29; // [rsp+6Eh] [rbp-6Ah]

  LODWORD(v6) = 0;
  v25 = a4;
  v26 = 0LL;
  v27 = 2048;
  v28 = 0;
  v29 = 0;
  if ( a4 )
  {
    v11 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v24, 1);
    v6 = v11;
    if ( v11 < 0 )
    {
      v15 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v15 + 24) = a4;
      *(_QWORD *)(v15 + 32) = v6;
      WdLogEvent5_WdWarning(v15);
      goto LABEL_12;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v24);
  }
  else
  {
    Process = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  }
  v18 = Process;
  KeEnterCriticalRegion();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v18 + 176, 0LL);
  *((_QWORD *)v18 + 23) = KeGetCurrentThread();
  v19 = *((_QWORD *)a3 + 338);
  if ( v19 )
  {
    if ( *((_BYTE *)a3 + 209) )
    {
      v20 = *((_DWORD *)a3 + 1078);
      HostProcess = DXGPROCESS::GetHostProcess(v18);
      LODWORD(v23) = a1->PrivateDriverDataSize;
      LODWORD(v6) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (struct DXGADAPTER *)((char *)a3 + 4240),
                      HostProcess,
                      v20,
                      0,
                      0,
                      a1->Type,
                      a1->Flags,
                      v23,
                      a2);
    }
    else if ( *(_QWORD *)(v19 + 624) )
    {
      DXGPROCESS::SuspendResumeEscapeAllDevices(v18, a3, a5, a6);
    }
  }
  KeLeaveCriticalRegion();
  *((_QWORD *)v18 + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v18 + 176, 0LL);
  KeLeaveCriticalRegion();
LABEL_12:
  if ( (_BYTE)v28 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v24, v16);
  return (unsigned int)v6;
}
