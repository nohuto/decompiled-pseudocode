/*
 * XREFs of HandlerProc @ 0x180038010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038140 @ 0x180038140 (sub_180038140.c)
 *     sub_180053C10 @ 0x180053C10 (sub_180053C10.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180061D94 @ 0x180061D94 (sub_180061D94.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall HandlerProc(DWORD dwControl, __int64 dwEventType, unsigned int *lpEventData, LPVOID lpContext)
{
  unsigned int v4; // esi
  DWORD v6; // ecx
  DWORD v7; // ecx
  DWORD v8; // ecx
  __int64 v9; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v11; // rbx
  void *v12; // rax

  v4 = dwEventType;
  v6 = dwControl - 1;
  if ( !v6 )
    goto LABEL_21;
  v7 = v6 - 3;
  if ( !v7 )
  {
    sub_180061D94((unsigned int)dword_18019E654, 0LL, 0LL, lpContext);
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_21:
    dword_18019FAA8 = 0;
    sub_180061D94(3LL, 0LL, 5000LL, lpContext);
    SetEvent(qword_18019E648);
    return 0LL;
  }
  v9 = v8 - 8;
  if ( !(_DWORD)v9 )
    return sub_180053C10((unsigned int)dwEventType, lpEventData, lpEventData, lpContext);
  if ( (_DWORD)v9 == 1 )
  {
    if ( !(unsigned int)IsTSServiceSessionChangeSupported(v9, dwEventType, lpEventData, lpContext) )
      return 0LL;
    TS_SessionChanged(v4, lpEventData);
    ProcessHeap = GetProcessHeap();
    v11 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( v11 )
    {
      *v11 = off_180148190;
      v11[2] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
      return 0LL;
    *((_DWORD *)v11 + 2) = v4;
    if ( lpEventData )
    {
      v12 = (void *)o_malloc(*lpEventData);
      v11[2] = v12;
      if ( !v12 )
      {
        sub_18005E8F8("SESSION_EVENT::Initialize", 61LL, 2147942414LL);
        goto LABEL_19;
      }
      memcpy(v12, lpEventData, *lpEventData);
    }
    if ( PostQueuedCompletionStatus(CompletionPort, 0, (ULONG_PTR)v11, 0LL) )
      return 0LL;
LABEL_19:
    sub_180038140(v11, 1LL);
    return 0LL;
  }
  return 120LL;
}
