/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C019FE54
 * Callers:
 *     NtSetShellCursorState @ 0x1C0131B60 (NtSetShellCursorState.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C005956C (ApiSetEditionInternalSetCursorPos.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C019FEF8 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     SendShellClipChanged @ 0x1C01ABE10 (SendShellClipChanged.c)
 */

__int64 __fastcall CCursorClip::SetShellClip(CCursorClip *this, struct tagRECT *a2, unsigned int a3)
{
  CCursorClip *v3; // rdi
  CPushLock *v6; // rbx
  __int64 v7; // rcx
  int v8; // edi

  v3 = gpCursorClip;
  v6 = (CCursorClip *)((char *)gpCursorClip + 32);
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v7 = *((_QWORD *)v3 + 10);
  if ( v7 )
    Win32FreePool(v7);
  *((_QWORD *)v3 + 10) = a2;
  *((_DWORD *)v3 + 22) = a3;
  InputTraceLogging::Mouse::SetShellClip(a2, a3);
  v8 = *((_DWORD *)v3 + 22);
  CPushLock::ReleaseLock(v6);
  SendShellClipChanged(a2);
  if ( v8 )
    ApiSetEditionInternalSetCursorPos(*((_DWORD *)gpsi + 1240), *((_DWORD *)gpsi + 1241), 2u);
  return 0LL;
}
