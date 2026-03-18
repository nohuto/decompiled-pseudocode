/*
 * XREFs of ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C029B328
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C014B874 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C029A0A0 (-DestroyTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

void __fastcall CTTMDEVICE::UnRegisterTtmDevice(CTTMDEVICE *this, __int64 a2)
{
  char v2; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _KEVENT *p_Event; // rax
  __int64 v17; // rdx
  CTTMDEVICE **v18; // r8
  CTTMDEVICE **v19; // rdx
  char v20; // al
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-50h] BYREF
  char v23; // [rsp+78h] [rbp-20h]

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Global + 88) + 344LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
    *(_QWORD *)(v7 + 24) = 5907LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_BYTE *)this + 913);
  if ( v8 )
  {
    if ( v2 )
    {
      v9 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
      *(_QWORD *)(v9 + 24) = 5914LL;
      WdLogEvent5_WdAssertion(v9);
      v8 = *((_BYTE *)this + 913);
    }
    if ( v8 && *(CTTMDEVICE **)this != this )
    {
      v10 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
      *(_QWORD *)(v10 + 24) = 5920LL;
      WdLogEvent5_WdAssertion(v10);
    }
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v11 = WdLogNewEntry5_WdAssertion(CurrentThread, v5);
    *(_QWORD *)(v11 + 24) = 5929LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u) & 0x1F;
  *((_DWORD *)this + 2 * v12 + 157) = 1073741825;
  *((_DWORD *)this + 2 * (unsigned int)v12 + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 6);
  if ( *((_QWORD *)this + 7) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v15 + 24) = 5949LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( v2 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    p_Event = &Event;
  }
  else
  {
    p_Event = 0LL;
  }
  *((_QWORD *)this + 7) = p_Event;
  v17 = *((_QWORD *)this + 4);
  v23 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v17 + 18632));
  *((_QWORD *)this + 4) = 0LL;
  v18 = (CTTMDEVICE **)*((_QWORD *)this + 2);
  if ( v18[1] != (CTTMDEVICE *)((char *)this + 16)
    || (v19 = (CTTMDEVICE **)*((_QWORD *)this + 3), *v19 != (CTTMDEVICE *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v19 = (CTTMDEVICE *)v18;
  v18[1] = (CTTMDEVICE *)v19;
  TtmNotifyDeviceDeparture(1LL, this);
  v20 = v23;
  if ( v23 )
  {
    KeUnstackDetachProcess(&ApcState);
    v20 = 0;
    v23 = 0;
  }
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v20 = v23;
  }
  if ( v20 )
    KeUnstackDetachProcess(&ApcState);
}
