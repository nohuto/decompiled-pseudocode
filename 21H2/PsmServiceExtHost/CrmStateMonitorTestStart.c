/*
 * XREFs of CrmStateMonitorTestStart @ 0x18008585C
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B290 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002BE6C (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorTestStart(_QWORD *lpParameter)
{
  _DWORD *v2; // rdx
  unsigned int v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  const void *v6; // rdx
  void *v7; // r9
  HANDLE EventW; // rax
  HANDLE Thread; // rax

  v2 = lpParameter + 9;
  v3 = 0;
  lpParameter[5] = lpParameter + 9;
  v4 = *(_DWORD *)lpParameter;
  *v2 = 0;
  v5 = CrmStateMonitorStateSizeGet(v4);
  memcpy_0(v7, v6, v5);
  if ( CrmStateMonitorTestProvideRandomNotifications )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    lpParameter[8] = EventW;
    if ( !EventW
      || (Thread = CreateThread(0LL, 0LL, CrmStateMonitorWorkerThread, lpParameter, 0, 0LL),
          (lpParameter[7] = Thread) == 0LL) )
    {
      if ( (int)GetLastError() > 0 )
        return (unsigned __int16)GetLastError() | 0xC0070000;
      else
        return GetLastError();
    }
  }
  return v3;
}
