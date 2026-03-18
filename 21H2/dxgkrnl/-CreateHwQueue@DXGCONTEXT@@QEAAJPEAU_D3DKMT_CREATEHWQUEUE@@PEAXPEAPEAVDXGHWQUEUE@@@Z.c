/*
 * XREFs of ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C030DAEC
 * Callers:
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DxgkCreateHwQueueInternal @ 0x1C0312760 (DxgkCreateHwQueueInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_GDXGHWQUEUE@@IEAAPEAXI@Z @ 0x1C005417C (--_GDXGHWQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C030E1A0 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C030EDA0 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CreateHwQueue(
        DXGCONTEXT *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3,
        struct DXGHWQUEUE **a4)
{
  __int64 v5; // rcx
  __int64 v9; // r9
  __int64 Pool2; // rax
  int v11; // esi
  DXGHWQUEUE *v12; // rax
  DXGHWQUEUE **v13; // rcx
  __int64 v14; // rdx

  v5 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v5 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 136)) )
  {
    WdLogSingleEntry1(1LL, 545LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      545LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 546LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      546LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 547LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HwQueue != NULL", 547LL, 0LL, 0LL, 0LL, 0LL);
  }
  Pool2 = ExAllocatePool2(65LL, 144LL, 1265072196LL, v9);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = this;
    *(_OWORD *)Pool2 = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_QWORD *)(Pool2 + 72) = 0LL;
    *(_QWORD *)(Pool2 + 80) = 0LL;
    *(_QWORD *)(Pool2 + 88) = 0LL;
    *(_QWORD *)(Pool2 + 96) = 0LL;
    *(_QWORD *)(Pool2 + 104) = 1LL;
    *(_BYTE *)(Pool2 + 112) = 0;
    *(_QWORD *)(Pool2 + 120) = 0LL;
    *(_QWORD *)(Pool2 + 128) = 0LL;
    *(_DWORD *)(Pool2 + 136) = 0;
    *a4 = (struct DXGHWQUEUE *)Pool2;
    v11 = DXGHWQUEUE::Initialize((DXGHWQUEUE *)Pool2, a2, a3);
    if ( v11 >= 0 )
    {
      v12 = *a4;
      v13 = (DXGHWQUEUE **)((char *)this + 408);
      v14 = *((_QWORD *)this + 51);
      if ( *(DXGCONTEXT **)(v14 + 8) != (DXGCONTEXT *)((char *)this + 408) )
        __fastfail(3u);
      *(_QWORD *)v12 = v14;
      *((_QWORD *)v12 + 1) = v13;
      *(_QWORD *)(v14 + 8) = v12;
      *v13 = v12;
      _InterlockedIncrement64((volatile signed __int64 *)this + 4);
      return 0LL;
    }
  }
  else
  {
    *a4 = 0LL;
    v11 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  if ( *a4 )
  {
    DXGHWQUEUE::DestroyCoreState(*a4, 0LL);
    if ( *a4 )
      DXGHWQUEUE::`scalar deleting destructor'(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v11;
}
