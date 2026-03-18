/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C031F890
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C0187480 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C031EFF0 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C03220AC (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C019A7B8 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C019EA90 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C031FC2C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ecx
  struct DXGRESOURCE *v16; // rsi
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // edx
  int v21; // eax
  PERESOURCE *Global; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _BYTE v28[32]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v3[3] = this;
  v3[4] = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 4);
  v3[5] = v7;
  if ( !*((_QWORD *)this + 1) )
    return;
  if ( *((_QWORD *)this + 4) != PsGetCurrentProcess(v4, v7, v5, v6)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v23[3] = PsGetCurrentProcess(v25, v24, v26, v27);
    v23[4] = *((_QWORD *)this + 4);
    v23[5] = *((_QWORD *)this + 1);
    return;
  }
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent(v9, v8, v10, v11);
    if ( !Current )
    {
      WdLogSingleEntry1(1LL, 575LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 575LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v28, Current);
    v13 = (*((_DWORD *)this + 22) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v13 < *((_DWORD *)Current + 74) )
    {
      v14 = *((_QWORD *)Current + 35);
      v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
      if ( ((*((_DWORD *)this + 22) >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        if ( (v15 & 0x1F) == 4 )
        {
          v16 = *(struct DXGRESOURCE **)(v14 + 16LL * (unsigned int)v13);
          if ( v16 )
          {
LABEL_15:
            v17 = *((_DWORD *)this + 22);
            v18 = (v17 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v18 < *((_DWORD *)Current + 74) )
            {
              v19 = *((_QWORD *)Current + 35);
              v20 = *(_DWORD *)(v19 + 16 * v18 + 8);
              if ( ((v17 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
                && (v20 & 0x2000) == 0
                && (v20 & 0x1F) != 0 )
              {
                *(_DWORD *)(v19 + 16LL * ((v17 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
            DXGDEVICE::DestroyAllocationInternal(
              *((DXGDEVICE **)this + 1),
              0LL,
              0LL,
              v16,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            *((_QWORD *)this + 11) = 0LL;
            goto LABEL_21;
          }
LABEL_14:
          WdLogSingleEntry1(1LL, 581LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pResource", 581LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_15;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v16 = 0LL;
    goto LABEL_14;
  }
LABEL_21:
  v21 = *((_DWORD *)this + 24);
  if ( !v21 )
    goto LABEL_24;
  if ( *((_QWORD *)this + 13) )
  {
    Global = (PERESOURCE *)DXGGLOBAL_GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 13), *((_DWORD *)this + 24));
    v21 = 0;
    *((_DWORD *)this + 24) = 0;
    *((_QWORD *)this + 13) = 0LL;
LABEL_24:
    if ( *((_QWORD *)this + 13) )
    {
      WdLogSingleEntry1(1LL, 601LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pFenceSyncObj", 601LL, 0LL, 0LL, 0LL, 0LL);
      v21 = *((_DWORD *)this + 24);
    }
  }
  if ( v21 )
  {
    WdLogSingleEntry1(1LL, 602LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_hFenceLocal", 602LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
