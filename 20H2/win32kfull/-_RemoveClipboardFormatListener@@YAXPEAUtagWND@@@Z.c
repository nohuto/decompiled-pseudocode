/*
 * XREFs of ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000F13C
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C000EFB0 (NtUserRemoveClipboardFormatListener.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C000FF00 (_GetProcessWindowStation.c)
 */

void __fastcall _RemoveClipboardFormatListener(struct tagWND *a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  struct tagWND *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v2 = (__int64 *)(GetProcessWindowStation(0LL, a2) + 152);
  v3 = *v2;
  if ( *v2 )
  {
    while ( (struct tagWND *)v3 != v4 )
    {
      v2 = (__int64 *)(v3 + 240);
      v3 = *(_QWORD *)(v3 + 240);
      if ( !v3 )
        return;
    }
    *v2 = *((_QWORD *)v4 + 30);
    *((_QWORD *)v4 + 30) = 0LL;
    *(_DWORD *)(*((_QWORD *)v4 + 5) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v4);
  }
}
