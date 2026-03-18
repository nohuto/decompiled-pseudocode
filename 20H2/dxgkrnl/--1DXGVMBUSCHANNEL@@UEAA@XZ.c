/*
 * XREFs of ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C02B1344
 * Callers:
 *     ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1C02B13F0 (--_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000653C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B16A8 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::~DXGVMBUSCHANNEL(void **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  *this = &DXGVMBUSCHANNEL::`vftable';
  DXGVMBUSCHANNEL::Cleanup((DXGVMBUSCHANNEL *)this);
  if ( this[6] != this + 6 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 166LL;
    WdLogEvent5_WdAssertion(v4);
  }
  operator delete(this[4]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 14), v5);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 9), v6);
}
