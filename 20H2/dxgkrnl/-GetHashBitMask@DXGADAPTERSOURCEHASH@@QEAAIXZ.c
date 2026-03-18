/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009B40
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C011DCFC (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01290D0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C015CAC4 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(DXGADAPTERSOURCEHASH *this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  DXGFASTMUTEX *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v10 = this;
  v11 = 0;
  if ( !this )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v7 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v7);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v10 + 2) == CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v8 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( v11 )
  {
    v9 = WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    *(_QWORD *)(v9 + 40) = &v10;
    *(_QWORD *)(v9 + 24) = 275LL;
    *(_QWORD *)(v9 + 32) = 4LL;
    *(_OWORD *)(v9 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v9);
  }
  DXGFASTMUTEX::Acquire(v10);
  v11 = 0;
  v4 = 0xFFFFFFFF >> (32 - *((_BYTE *)this + 60)) << (32 - *((_BYTE *)this + 60));
  DXGFASTMUTEX::Release((struct _KTHREAD **)v10, v5);
  return v4;
}
