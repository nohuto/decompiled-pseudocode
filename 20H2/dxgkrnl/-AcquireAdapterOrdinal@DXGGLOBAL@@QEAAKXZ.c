/*
 * XREFs of ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKXZ @ 0x1C0177AEC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGGLOBAL::AcquireAdapterOrdinal(struct _RTL_BITMAP *this)
{
  ULONG ClearBitsAndSet; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)&this[42].Buffer, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  ClearBitsAndSet = RtlFindClearBitsAndSet(this + 45, 1u, 0);
  v6 = -1;
  if ( ClearBitsAndSet == -1 )
  {
    v8 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v8 + 24) = this[78].SizeOfBitMap;
    WdLogEvent5_WdWarning(v8);
  }
  else
  {
    v6 = ClearBitsAndSet;
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v3);
  return v6;
}
