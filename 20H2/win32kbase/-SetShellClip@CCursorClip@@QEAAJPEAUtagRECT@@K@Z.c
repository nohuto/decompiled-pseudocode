/*
 * XREFs of ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C019DAB4
 * Callers:
 *     NtSetShellCursorState @ 0x1C012F810 (NtSetShellCursorState.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00997E0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1C00B9044 (ApiSetEditionInternalSetCursorPos.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C019DB58 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     SendShellClipChanged @ 0x1C01A9A90 (SendShellClipChanged.c)
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
