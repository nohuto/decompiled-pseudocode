/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C0143A4C
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0143960 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009FD8 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014F614 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        unsigned __int8 a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  struct DXGADAPTER *v11; // rdi
  struct DXGADAPTER **v12; // rax
  int PairingAdapters; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGADAPTER *v16; // rax
  __int64 v17; // r14
  int CddDevice; // edi
  struct DXGDEVICE *v19; // rax
  volatile signed __int64 **v21; // rax
  volatile signed __int64 *v22; // rax
  struct DXGHWQUEUE **v23; // rax
  struct DXGHWQUEUE *v24; // rcx
  struct DXGADAPTER *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  struct DXGADAPTER **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  struct DXGADAPTER *v38; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-18h] BYREF
  DXGADAPTER *v40; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-8h] BYREF
  __int64 v42; // [rsp+90h] [rbp+30h]

  v9 = *((_QWORD *)*this + 2330) + 176LL;
  v42 = v9;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
  v11 = 0LL;
  while ( 1 )
  {
    v38 = 0LL;
    v12 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v38, v10);
    PairingAdapters = DxgkpGetPairingAdapters(this[2], 0LL, v12, &v39, 0LL, 0LL, a5);
    if ( PairingAdapters < 0 )
      break;
    v16 = v38;
    if ( !v38 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v29 + 24) = 2504LL;
      WdLogEvent5_WdAssertion(v29);
      v16 = v38;
    }
    if ( v11 == v16 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdAssertion(v15, v14);
      CddDevice = -1073741275;
      v37[3] = v38;
      v37[4] = this[2];
      v37[5] = -1073741275LL;
      WdLogEvent5_WdAssertion(v37);
      goto LABEL_12;
    }
    v17 = *((_QWORD *)v16 + 338);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17 + 48, 0LL);
    CddDevice = 0;
    *(_QWORD *)(v17 + 56) = KeGetCurrentThread();
    v19 = this[7];
    if ( v19 )
    {
      if ( a2 )
      {
        *a2 = v19;
        _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
      }
      if ( a3 )
      {
        v21 = (volatile signed __int64 **)(this + 8);
        if ( *((_DWORD *)this + 13) != 1 )
          v21 = (volatile signed __int64 **)*v21;
        v22 = *v21;
        *a3 = (struct DXGCONTEXT *)v22;
        _InterlockedIncrement64(v22 + 4);
      }
      if ( a4 )
      {
        v23 = (struct DXGHWQUEUE **)this[9];
        v24 = *v23;
        *a4 = *v23;
        if ( v24 )
          _InterlockedIncrement64((volatile signed __int64 *)v24 + 11);
      }
      goto LABEL_11;
    }
    v25 = v38;
    if ( v38 != this[2] )
    {
      v40 = 0LL;
      v30 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v40, (__int64)v38);
      CddDevice = DxgkpGetPairingAdapters(this[2], 0LL, v30, &v41, 0LL, 0LL, a5);
      if ( CddDevice < 0 )
      {
        DXGADAPTER_REFERENCE::Assign(&v40, 0LL);
        goto LABEL_11;
      }
      v11 = v38;
      if ( v38 != v40 )
      {
        v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        *(_QWORD *)(v34 + 24) = v38;
        WdLogEvent5_WdWarning(v34);
        DXGADAPTER_REFERENCE::Assign(&v40, 0LL);
        goto LABEL_25;
      }
      DXGADAPTER_REFERENCE::Assign(&v40, 0LL);
      v25 = v38;
    }
    CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v25, a2, a3, a4);
    if ( CddDevice != -1073741267 )
      goto LABEL_11;
    if ( !a5 )
    {
      v36 = WdLogNewEntry5_WdWarning(v27, v26, v28);
      CddDevice = -1073741130;
      *(_QWORD *)(v36 + 24) = v38;
      *(_QWORD *)(v36 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v36);
LABEL_11:
      *(_QWORD *)(v17 + 56) = 0LL;
      ExReleasePushLockExclusiveEx(v17 + 48, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
    v11 = v38;
    v35 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v35 + 24) = v38;
    WdLogEvent5_WdWarning(v35);
LABEL_25:
    *(_QWORD *)(v17 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v17 + 48, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v38, 0LL);
  }
  CddDevice = PairingAdapters;
LABEL_12:
  DXGADAPTER_REFERENCE::Assign(&v38, 0LL);
  *(_QWORD *)(v42 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v42, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)CddDevice;
}
