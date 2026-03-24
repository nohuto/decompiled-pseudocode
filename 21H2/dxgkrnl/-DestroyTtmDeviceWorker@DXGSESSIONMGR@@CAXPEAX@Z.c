/*
 * XREFs of ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C029EA70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C029FCF8 (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::DestroyTtmDeviceWorker(CTTMDEVICE *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  CTTMDEVICE **v5; // rcx
  CTTMDEVICE **v6; // rax
  __int64 v7; // rax

  v3 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 102);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3 + 336, 0LL);
  *(_QWORD *)(v3 + 344) = KeGetCurrentThread();
  v5 = *(CTTMDEVICE ***)this;
  if ( *(CTTMDEVICE **)this == this )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdError(v7);
  }
  else
  {
    if ( v5[1] != this || (v6 = (CTTMDEVICE **)*((_QWORD *)this + 1), *v6 != this) )
      __fastfail(3u);
    *v6 = (CTTMDEVICE *)v5;
    v5[1] = (CTTMDEVICE *)v6;
    *((_QWORD *)this + 1) = this;
    *(_QWORD *)this = this;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_BYTE *)this + 913) = 1;
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 4) )
    CTTMDEVICE::UnRegisterTtmDevice(this, 0);
  else
    operator delete(this);
  *(_QWORD *)(v3 + 344) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 336, 0LL);
  KeLeaveCriticalRegion();
}
