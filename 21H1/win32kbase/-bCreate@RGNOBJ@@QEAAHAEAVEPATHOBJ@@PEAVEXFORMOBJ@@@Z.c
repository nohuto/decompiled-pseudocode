/*
 * XREFs of ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C43F0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 * Callees:
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0074EF0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C00757F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0075940 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0075DA0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C4480 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bCreate(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  unsigned int v5; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  v5 = 0;
  v9 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, *(_DWORD *)(*(_QWORD *)this + 80LL));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
  if ( v8 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v8, this);
    v5 = RGNOBJ::bOutline((RGNOBJ *)&v8, a2, a3);
  }
  else
  {
    EngSetLastError(8u);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v8);
  return v5;
}
