/*
 * XREFs of _ReferenceWindowStation@20 @ 0x91CE2
 * Callers:
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

NTSTATUS __stdcall ReferenceWindowStation(
        PETHREAD Thread,
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        PETHREAD *a4,
        int a5)
{
  PETHREAD v5; // esi
  PEPROCESS ThreadProcess; // eax
  int ProcessWin32Process; // ebx
  int v8; // edi
  int *ThreadWin32Thread; // eax
  int v10; // ecx
  int v11; // eax
  NTSTATUS result; // eax

  v5 = 0;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v8 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  if ( ProcessWin32Process )
  {
    if ( !a5
      || !v8
      || (v10 = *(_DWORD *)(v8 + 248)) == 0
      || *(_DWORD *)(ProcessWin32Process + 356) == *(_DWORD *)(v10 + 20) )
    {
      v5 = *(PETHREAD *)(ProcessWin32Process + 356);
      if ( v5 )
      {
        if ( !RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 364), DesiredAccess) )
        {
          UserSetLastError((struct _NT_TIB *)5);
          return -1073741790;
        }
LABEL_20:
        *a4 = v5;
        return 0;
      }
    }
    if ( v8 )
    {
      v11 = *(_DWORD *)(v8 + 248);
      if ( v11 )
      {
        v5 = *(PETHREAD *)(v11 + 20);
        if ( !AccessCheckObject(v5, DesiredAccess, 0, _WinStaMapping) )
          return -1073741790;
      }
    }
    if ( v5 )
      goto LABEL_20;
  }
  if ( Handle )
  {
    Thread = 0;
    result = ObReferenceObjectByHandle(Handle, DesiredAccess, ExWindowStationObjectType, 0, (PVOID *)&Thread, 0);
    v5 = Thread;
    if ( result < 0 )
      return result;
    ObfDereferenceObject(Thread);
    goto LABEL_20;
  }
  return -1073741275;
}
