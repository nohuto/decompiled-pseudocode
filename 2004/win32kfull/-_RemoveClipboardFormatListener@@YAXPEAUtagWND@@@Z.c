/*
 * XREFs of ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00C3A0C
 * Callers:
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00C3880 (NtUserRemoveClipboardFormatListener.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00C40D0 (_GetProcessWindowStation.c)
 */

void __fastcall _RemoveClipboardFormatListener(struct tagWND *a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  struct tagWND *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = (__int64 *)(GetProcessWindowStation(0LL) + 152);
  v2 = *v1;
  if ( *v1 )
  {
    while ( (struct tagWND *)v2 != v3 )
    {
      v1 = (__int64 *)(v2 + 240);
      v2 = *(_QWORD *)(v2 + 240);
      if ( !v2 )
        return;
    }
    *v1 = *((_QWORD *)v3 + 30);
    *((_QWORD *)v3 + 30) = 0LL;
    *(_DWORD *)(*((_QWORD *)v3 + 5) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v3);
  }
}
