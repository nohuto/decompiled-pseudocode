/*
 * XREFs of ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C029A604
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C014B874 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0188240 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct DXGSESSIONDATA **v18; // rdx
  struct DXGSESSIONDATA *v19; // rax
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  v21[1] = 0LL;
  v21[3] = 0LL;
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 88) + 344LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 5823LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v7 = *((_BYTE *)this + 912);
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    LODWORD(v11) = -1073741130;
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = -1073741130LL;
    WdLogEvent5_WdEvent(v10);
  }
  else
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
    *((_DWORD *)this + 2 * v12 + 157) = 0x40000000;
    v21[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)v12 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v13 = *((unsigned int *)this + 21);
    v21[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v14 = TtmNotifyDeviceArrival(1LL, this, v21, v13, (char *)this + 608);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v18 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2325);
      v19 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v18 != (struct DXGSESSIONDATA *)((char *)a2 + 18592) )
        __fastfail(3u);
      *(_QWORD *)v19 = (char *)a2 + 18592;
      *((_QWORD *)this + 3) = v18;
      *v18 = v19;
      *((_QWORD *)a2 + 2325) = v19;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v17[3] = *((unsigned int *)this + 20);
      v17[4] = *((_QWORD *)this + 8);
      v17[5] = v11;
      WdLogEvent5_WdError(v17);
    }
  }
  return (unsigned int)v11;
}
