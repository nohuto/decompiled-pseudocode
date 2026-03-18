/*
 * XREFs of ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x1C0008DA8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0008D40 (NtUserSetDisplayAutoRotationPreferences.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

bool __fastcall CRotationMgr::IsActivePpi(struct tagPROCESSINFO *a1)
{
  bool v2; // bl
  char v4; // [rsp+38h] [rbp+10h] BYREF

  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, gRotationProcessLock);
  v2 = 0;
  if ( grpdeskRitInput )
    v2 = *(_QWORD *)(grpdeskRitInput + 256LL) == (_QWORD)a1;
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v4);
  return v2;
}
