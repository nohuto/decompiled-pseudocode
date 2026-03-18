/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C0164E64
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01E2190 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        unsigned __int8 a5)
{
  struct DXGDEVICE *v6; // rsi
  struct DXGADAPTER *v7; // rdi
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // eax
  struct DXGADAPTER *v12; // rdx
  __int64 v13; // r15
  int CddDevice; // edi
  struct DXGDEVICE *v15; // rdx
  __int64 v16; // rcx
  volatile signed __int64 **v18; // rax
  volatile signed __int64 *v19; // rax
  struct DXGHWQUEUE **v20; // rax
  struct DXGHWQUEUE *v21; // rcx
  struct DXGADAPTER *v22; // rdx
  struct DXGADAPTER **v23; // rax
  struct DXGADAPTER *v24; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  DXGADAPTER *v26; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-8h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+40h]

  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v6 )
    {
      SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, v6);
      v6 = 0LL;
    }
    v28 = *((_QWORD *)*this + 2332);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v28 + 216, 0LL);
    *(_QWORD *)(v28 + 224) = KeGetCurrentThread();
    v24 = 0LL;
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v24);
    PairingAdapters = DxgkpGetPairingAdapters(this[2], 0, v10, &v25, 0LL, 0LL, a5);
    if ( PairingAdapters < 0 )
      break;
    v12 = v24;
    if ( !v24 )
    {
      WdLogSingleEntry1(1LL, 2552LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef", 2552LL, 0LL, 0LL, 0LL, 0LL);
      v12 = v24;
    }
    if ( v7 == v12 )
    {
      CddDevice = -1073741275;
      WdLogSingleEntry3(1LL, v12, this[2], -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v24,
        (__int64)this[2],
        -1073741275LL,
        0LL,
        0LL);
      goto LABEL_39;
    }
    v13 = *((_QWORD *)v12 + 350);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13 + 48, 0LL);
    CddDevice = 0;
    *(_QWORD *)(v13 + 56) = KeGetCurrentThread();
    v15 = this[7];
    if ( v15 )
    {
      if ( *(struct DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL) == v24 )
      {
        if ( a2 )
        {
          *a2 = v15;
          _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
        }
        if ( a3 )
        {
          v18 = (volatile signed __int64 **)(this + 8);
          if ( *((_DWORD *)this + 13) != 1 )
            v18 = (volatile signed __int64 **)*v18;
          v19 = *v18;
          *a3 = (struct DXGCONTEXT *)v19;
          _InterlockedIncrement64(v19 + 4);
        }
        if ( a4 )
        {
          v20 = (struct DXGHWQUEUE **)this[9];
          v21 = *v20;
          *a4 = *v20;
          if ( v21 )
            _InterlockedIncrement64((volatile signed __int64 *)v21 + 13);
        }
LABEL_14:
        *(_QWORD *)(v13 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign(&v24, 0LL);
        v16 = v28 + 216;
        *(_QWORD *)(v28 + 224) = 0LL;
        goto LABEL_15;
      }
      v6 = this[7];
      if ( !a5 )
      {
        WdLogSingleEntry1(1LL, 2645LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"AllowPairingChanged", 2645LL, 0LL, 0LL, 0LL, 0LL);
        v6 = this[7];
      }
      v7 = *(struct DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL);
    }
    else
    {
      v22 = v24;
      if ( v24 != this[2] )
      {
        v26 = 0LL;
        v23 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v26);
        CddDevice = DxgkpGetPairingAdapters(this[2], 0, v23, &v27, 0LL, 0LL, a5);
        if ( CddDevice < 0 )
        {
          DXGADAPTER_REFERENCE::Assign(&v26, 0LL);
          goto LABEL_36;
        }
        v7 = v24;
        if ( v24 != v26 )
        {
          WdLogSingleEntry1(3LL, v24);
          DXGADAPTER_REFERENCE::Assign(&v26, 0LL);
          goto LABEL_29;
        }
        DXGADAPTER_REFERENCE::Assign(&v26, 0LL);
        v22 = v24;
      }
      CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v22, a2, a3, a4);
      if ( CddDevice != -1073741267 )
        goto LABEL_14;
      if ( !a5 )
      {
        CddDevice = -1073741130;
        WdLogSingleEntry2(3LL, v24, -1073741130LL);
LABEL_36:
        *(_QWORD *)(v13 + 56) = 0LL;
        ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_39;
      }
      v7 = v24;
      WdLogSingleEntry1(3LL, v24);
    }
LABEL_29:
    *(_QWORD *)(v13 + 56) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 48, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v24, 0LL);
    *(_QWORD *)(v28 + 224) = 0LL;
    ExReleasePushLockExclusiveEx(v28 + 216, 0LL);
    KeLeaveCriticalRegion();
  }
  CddDevice = PairingAdapters;
LABEL_39:
  DXGADAPTER_REFERENCE::Assign(&v24, 0LL);
  v16 = v28 + 216;
  *(_QWORD *)(v28 + 224) = 0LL;
LABEL_15:
  ExReleasePushLockExclusiveEx(v16, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)CddDevice;
}
