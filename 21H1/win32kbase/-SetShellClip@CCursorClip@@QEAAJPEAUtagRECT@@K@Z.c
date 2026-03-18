/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C01A5BB4
 * Callers:
 *     NtSetShellCursorState @ 0x1C0137B50 (NtSetShellCursorState.c)
 * Callees:
 *     ApiSetEditionInternalSetCursorPos @ 0x1C004B81C (ApiSetEditionInternalSetCursorPos.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B5BD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C01A5C58 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     SendShellClipChanged @ 0x1C01B1B70 (SendShellClipChanged.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, unsigned int a3)
{
  CCursorClip *v3; // rdi
  CPushLock *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // edi

  v3 = gpCursorClip;
  v6 = (CCursorClip *)((char *)gpCursorClip + 32);
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v9 = *((_QWORD *)v3 + 10);
  if ( v9 )
    Win32FreePool(v9, v7, v8);
  *((_QWORD *)v3 + 10) = a2;
  *((_DWORD *)v3 + 22) = a3;
  InputTraceLogging::Mouse::SetShellClip(a2, a3);
  v10 = *((_DWORD *)v3 + 22);
  CPushLock::ReleaseLock(v6);
  SendShellClipChanged(a2);
  if ( v10 )
    ApiSetEditionInternalSetCursorPos(*((_DWORD *)gpsi + 1240), *((_DWORD *)gpsi + 1241), 2u);
  return 0LL;
}
