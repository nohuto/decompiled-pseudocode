/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C02669D8
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0207F5C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(struct _RTL_BITMAP *this, __int64 a2)
{
  ULONG v2; // esi
  __int64 v4; // rax
  __int64 v5; // rdx

  v2 = a2;
  if ( (unsigned int)a2 >= this[71].SizeOfBitMap )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 3410LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&this[35].Buffer);
  RtlClearBits(this + 38, v2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)&this[35].Buffer, v5);
}
