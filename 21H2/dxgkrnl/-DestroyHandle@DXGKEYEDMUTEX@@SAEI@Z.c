/*
 * XREFs of ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C033F5C8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1C031D980 (DxgkOpenKeyedMutexFromNtHandle.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C031FC2C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C033F7C8 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C03423C0 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C0342740 (DxgkCreateKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C0342C50 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C0342F70 (DxgkOpenKeyedMutex2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z @ 0x1C033FA3C (-FreeHostHandle@DXGKEYEDMUTEX@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1C033FD28 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0376A5C (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 */

unsigned __int8 __fastcall DXGKEYEDMUTEX::DestroyHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  struct DXGPROCESS *Current; // rbx
  _QWORD *v6; // r8
  __int64 v7; // rax
  DXGKEYEDMUTEX *v8; // rdi
  unsigned int HostHandle; // ebp
  unsigned int v10; // ebx
  struct DXGGLOBAL *Global; // rax
  _BYTE v13[32]; // [rsp+50h] [rbp-28h] BYREF

  v4 = a1;
  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( !Current )
  {
    WdLogSingleEntry1(1LL, 3917LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 3917LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v13, Current);
  v6 = (_QWORD *)((char *)Current + 280);
  v7 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 < *((_DWORD *)Current + 74)
    && ((v4 >> 25) & 0x60) == (*(_BYTE *)(*v6 + 16 * v7 + 8) & 0x60)
    && (*(_DWORD *)(*v6 + 16 * v7 + 8) & 0x1F) == 9
    && (v8 = *(DXGKEYEDMUTEX **)(*v6 + 16LL * (unsigned int)v7)) != 0LL )
  {
    HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 280), v4);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    if ( *((_BYTE *)v8 + 176) )
    {
      HostHandle = DXGKEYEDMUTEX::GetHostHandle(v8, v4);
      if ( HostHandle )
      {
        v10 = *((_DWORD *)Current + 126);
        Global = DXGGLOBAL_GetGlobal();
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyKeyedMutex(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 218), v10, HostHandle);
        DXGKEYEDMUTEX::FreeHostHandle(v8, v4);
      }
    }
    DXGKEYEDMUTEX::ReleaseReference(v8);
    return 1;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
}
