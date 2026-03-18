/*
 * XREFs of GreMarkDCUnreadable @ 0x1C0050C48
 * Callers:
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreMarkDCUnreadable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  v8 = 0;
  v9 = 0;
  LOBYTE(a2) = 1;
  v2 = HmgShareLockEx(a1, a2);
  v7 = v2;
  GreAcquireHmgrSemaphore(v4, v3);
  if ( v2 )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 496) + 112LL) |= 0x10000000u;
    v5 = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v5 + 180) |= 0x10000000u;
    *(_DWORD *)(v5 + 188) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v7);
  }
  return GreReleaseHmgrSemaphore();
}
