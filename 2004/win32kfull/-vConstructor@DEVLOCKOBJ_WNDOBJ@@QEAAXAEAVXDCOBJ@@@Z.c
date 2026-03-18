/*
 * XREFs of ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C027CF38
 * Callers:
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C027C144 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     UserGetHwnd @ 0x1C01E903C (UserGetHwnd.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::vConstructor(DEVLOCKOBJ_WNDOBJ *this, struct XDCOBJ *a2, __int64 a3)
{
  int v3; // ebp
  __int64 *v4; // rsi
  __int64 v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 22);
  v4 = (__int64 *)((char *)this + 80);
  *((_QWORD *)this + 10) = 0LL;
  UserEnterUserCritSec(this, a2, a3);
  DEVLOCKOBJ::bLock(this, a2, 0);
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) == 0 || *(_DWORD *)(v7 + 32) )
  {
    v9 = *(_QWORD *)(v7 + 496);
    if ( v9 )
      v9 = *(_QWORD *)(v9 + 136);
    *v4 = v9;
  }
  else
  {
    v8 = *(__int64 **)v7;
    v10 = 0LL;
    if ( !(unsigned int)UserGetHwnd(v8, &v10, v4) )
      EngSetLastError(6u);
  }
  if ( !v3 )
    UserLeaveUserCritSec();
}
