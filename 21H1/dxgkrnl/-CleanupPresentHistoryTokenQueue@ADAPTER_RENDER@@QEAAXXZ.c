/*
 * XREFs of ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0158C48
 * Callers:
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0158BE0 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C001A448 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 */

void __fastcall ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(struct _KTHREAD **this)
{
  __int64 v2; // rcx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v4; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v5; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, this + 105, 0);
  DXGPUSHLOCK::AcquireExclusive(v7);
  v8 = 2;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v2);
  if ( CurrentProcessSessionId < *((_DWORD *)this + 218) )
  {
    v4 = CurrentProcessSessionId;
    v5 = (DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[110] + CurrentProcessSessionId);
    if ( v5 )
    {
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v5);
      *((_QWORD *)this[110] + v4) = 0LL;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
