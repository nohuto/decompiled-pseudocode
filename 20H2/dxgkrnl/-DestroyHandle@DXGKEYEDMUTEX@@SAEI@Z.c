/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C028F1BC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0113134 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1C0277EE0 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C028F3B0 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C0291910 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C0291C50 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C0292110 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C02923F0 (DxgkOpenKeyedMutex2.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C029798C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003FF70 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0108DF0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1C028F5AC (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C028F850 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rax
  DXGKEYEDMUTEX *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int HostHandle; // ebp
  int v13; // ebx
  struct DXGGLOBAL *Global; // rax
  struct _KTHREAD **v15; // rcx
  _BYTE v17[24]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+54h] [rbp-24h]
  int v21; // [rsp+58h] [rbp-20h]
  unsigned int v22; // [rsp+60h] [rbp-18h]

  v2 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v6 + 24) = 3894LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
    (DXGHANDLETABLELOCKEXCLUSIVE *)v17,
    (struct _KTHREAD **)Current);
  v7 = (_QWORD *)((char *)Current + 240);
  v8 = (v2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)Current + 64)
    && ((v2 >> 25) & 0x60) == (*(_BYTE *)(*v7 + 16 * v8 + 8) & 0x60)
    && (*(_DWORD *)(*v7 + 16 * v8 + 8) & 0x1F) == 9
    && (v9 = *(DXGKEYEDMUTEX **)(*v7 + 16LL * (unsigned int)v8)) != 0LL )
  {
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 240), v2);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    if ( *((_BYTE *)v9 + 168) )
    {
      HostHandle = DXGKEYEDMUTEX::GetHostHandle(v9, v2);
      if ( HostHandle )
      {
        v13 = *((_DWORD *)Current + 106);
        Global = DXGGLOBAL::GetGlobal(v11, v10);
        v18 = 0LL;
        v19 = v13;
        v15 = (struct _KTHREAD **)*((_QWORD *)Global + 197);
        v20 = 1;
        v21 = 1013;
        v22 = HostHandle;
        DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v15, (struct DXGKVMB_COMMAND_BASE *)&v18, 32LL, 0LL, 0LL);
        DXGKEYEDMUTEX::FreeHostHandle(v9, v2);
      }
    }
    DXGKEYEDMUTEX::ReleaseReference(v9, v10);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 0;
  }
}
