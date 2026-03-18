/*
 * XREFs of _xxxWaitForInputIdle@12 @ 0xE365C
 * Callers:
 *     _NtUserWaitForInputIdle@12 @ 0xE362E (_NtUserWaitForInputIdle@12.c)
 * Callees:
 *     _LockProcessByClientId@8 @ 0x1AD58 (_LockProcessByClientId@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788 (-xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z.c)
 *     _WaitOnPseudoEvent@8 @ 0xE3978 (_WaitOnPseudoEvent@8.c)
 */

int __fastcall xxxWaitForInputIdle(HANDLE ProcessId, struct _KEVENT *a2, int a3)
{
  int ProcessWin32Process; // eax
  int v5; // esi
  int v6; // eax
  int i; // eax
  struct _KEVENT *v8; // ebx
  int v9; // edi
  int j; // eax
  int result; // eax
  int *v12; // esi
  void *v13; // [esp+0h] [ebp-20h]
  unsigned int v14; // [esp+4h] [ebp-1Ch]
  PVOID Object; // [esp+Ch] [ebp-14h] BYREF
  struct _KEVENT *v16; // [esp+10h] [ebp-10h]
  _DWORD v17[3]; // [esp+14h] [ebp-Ch] BYREF

  Object = 0;
  v16 = a2;
  memset(v17, 0, sizeof(v17));
  if ( !a3 )
  {
    if ( (PsGetThreadProcessId((PETHREAD)*_gptiCurrent) != ProcessId
       || _gptiCurrent != *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 184))
      && LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) >= 0 )
    {
      if ( !(unsigned __int8)PsGetProcessExitProcessCalled(Object) )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object);
        v5 = ProcessWin32Process;
        if ( ProcessWin32Process )
        {
          v6 = *(_DWORD *)(ProcessWin32Process + 8);
          if ( (*(_DWORD *)(v5 + 8) & 0x21) == 0x20 )
          {
            *(_DWORD *)(v5 + 8) = (unsigned int)&loc_20000 | v6;
            for ( i = *(_DWORD *)(v5 + 180); i; i = *(_DWORD *)(i + 364) )
              *(_DWORD *)(i + 264) |= 0x4000u;
            PushW32ThreadLock(v5, v17, (int)DereferenceW32Process);
            ObfReferenceObject(*(PVOID *)v5);
            _InterlockedIncrement((volatile signed __int32 *)(v5 + 4));
            ObfDereferenceObject(Object);
            v8 = v16;
            v9 = WaitOnPseudoEvent(v5 + 12, v16);
            if ( v9 == 128 )
              v9 = xxxPollAndWaitForSingleObject(v8, v13, v14);
            *(_DWORD *)(v5 + 8) &= ~0x20000u;
            for ( j = *(_DWORD *)(v5 + 180); j; j = *(_DWORD *)(j + 364) )
              *(_DWORD *)(j + 264) &= ~0x4000u;
            PopAndFreeW32ThreadLock((int)v17);
            return v9;
          }
        }
        UserSetLastError((struct _NT_TIB *)0x5BF);
      }
      ObfDereferenceObject(Object);
    }
    return -1;
  }
  v12 = (int *)_gpwtiFirst;
  if ( !_gpwtiFirst )
    return -1;
  do
  {
    if ( (HANDLE)v12[3] == PsGetThreadProcessId((PETHREAD)*_gptiCurrent) && (HANDLE)v12[2] == ProcessId )
      break;
    v12 = (int *)*v12;
  }
  while ( v12 );
  if ( !v12 )
    return -1;
  result = WaitOnPseudoEvent(v12 + 4, v16);
  if ( result == 128 )
    return xxxPollAndWaitForSingleObject(v16, v13, v14);
  return result;
}
