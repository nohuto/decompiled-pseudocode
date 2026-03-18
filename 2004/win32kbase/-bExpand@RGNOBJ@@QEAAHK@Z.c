/*
 * XREFs of ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00812E0
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C00814D0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C009A558 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00C3244 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C00809E0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0080B34 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0081260 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0081350 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C0084160 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v6 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v5, a2);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v5);
  if ( v5 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v5, this);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v5);
    v3 = 1;
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v5);
  return v3;
}
