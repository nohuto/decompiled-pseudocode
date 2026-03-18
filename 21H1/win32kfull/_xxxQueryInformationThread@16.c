/*
 * XREFs of _xxxQueryInformationThread@16 @ 0xCF7F4
 * Callers:
 *     _NtUserQueryInformationThread@16 @ 0xCF6D0 (_NtUserQueryInformationThread@16.c)
 * Callees:
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     _LockW32Thread@8 @ 0x3C2F8 (_LockW32Thread@8.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NPAU_EPROCESS@@@Z @ 0xA22AC (-IsProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NPAU_EPROCESS@@@Z.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 *     _xxxSetCsrssThreadDesktop@8 @ 0xC9346 (_xxxSetCsrssThreadDesktop@8.c)
 *     ?IsProcessUserService@@YGHQAU_EPROCESS@@@Z @ 0xCFB44 (-IsProcessUserService@@YGHQAU_EPROCESS@@@Z.c)
 *     _GetTaskName@12 @ 0x141D7C (_GetTaskName@12.c)
 */

NTSTATUS __fastcall xxxQueryInformationThread(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  int v5; // edi
  _DWORD *ThreadWin32Thread; // ebx
  NTSTATUS result; // eax
  int ProcessWin32Process; // eax
  PEPROCESS ThreadProcess; // eax
  NTSTATUS v10; // esi
  void *v11; // ecx
  int v12; // edx
  unsigned int v13; // edx
  int v14; // ebx
  HANDLE ThreadId; // eax
  char *v16; // ecx
  PVOID v17; // ecx
  int v18; // eax
  int v19; // ecx
  _DWORD *v20; // eax
  struct _KTHREAD *v21; // edi
  PEPROCESS v22; // eax
  PEPROCESS v23; // eax
  int v24; // eax
  PVOID *v25; // edi
  struct _EPROCESS *v26; // [esp+0h] [ebp-2Ch]
  LONG_PTR v27[3]; // [esp+Ch] [ebp-20h] BYREF
  int v28; // [esp+18h] [ebp-14h]
  PVOID v29; // [esp+1Ch] [ebp-10h] BYREF
  PVOID Object; // [esp+20h] [ebp-Ch] BYREF
  PVOID v31; // [esp+24h] [ebp-8h]
  PVOID v32; // [esp+28h] [ebp-4h]
  int v33; // [esp+34h] [ebp+8h]
  int v34; // [esp+38h] [ebp+Ch]

  v5 = 0;
  v28 = a2;
  v32 = 0;
  ThreadWin32Thread = 0;
  v31 = 0;
  if ( a2 != 11 )
  {
    v29 = 0;
    result = ObReferenceObjectByHandle(Handle, 0x40u, (POBJECT_TYPE)PsThreadType, 1, &v29, 0);
    v33 = result;
    v32 = v29;
    if ( result < 0 )
      return result;
    ThreadProcess = PsGetThreadProcess((PETHREAD)v29);
    if ( PsGetProcessSessionId(ThreadProcess) == _gSessionId )
      ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(v32);
    goto LABEL_8;
  }
  Object = 0;
  result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0);
  v33 = result;
  v31 = Object;
  if ( result < 0 )
    return result;
  if ( PsGetProcessSessionId(Object) != _gSessionId )
  {
LABEL_8:
    ProcessWin32Process = 0;
    goto LABEL_9;
  }
  ProcessWin32Process = PsGetProcessWin32Process(v31);
LABEL_9:
  if ( v28 )
  {
    if ( v28 == 1 )
    {
      if ( ThreadWin32Thread )
      {
        *a3 = ThreadWin32Thread[66];
        goto LABEL_31;
      }
    }
    else
    {
      if ( v28 != 2 )
      {
        switch ( v28 )
        {
          case 3:
            *a3 = 0;
            a3[1] = 0;
            if ( ThreadWin32Thread )
            {
              if ( (ThreadWin32Thread[66] & 2) != 0 )
              {
                *a3 = *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread[58] + 200) + 12);
                v18 = ThreadWin32Thread[83];
                if ( v18 )
                  a3[1] = *(unsigned __int16 *)(v18 + 20);
              }
            }
            break;
          case 4:
            if ( ThreadWin32Thread )
              v5 = IsThreadHung(ThreadWin32Thread, *a3);
            *a3 = v5;
            break;
          case 11:
            v11 = 0;
            v29 = 0;
            if ( a4 < 4 )
            {
              v10 = -1073741811;
LABEL_75:
              v17 = v31;
              goto LABEL_33;
            }
            if ( ProcessWin32Process && (v12 = *(_DWORD *)(ProcessWin32Process + 212)) != 0 )
            {
              v13 = 4 * v12 + 4;
              if ( v13 > a4 )
              {
                *a3 = v13;
                v10 = -1073741801;
                goto LABEL_75;
              }
              v14 = *(_DWORD *)(ProcessWin32Process + 180);
              while ( v14 )
              {
                ThreadId = PsGetThreadId(*(PETHREAD *)v14);
                v16 = (char *)v29;
                a3[(_DWORD)v29] = ThreadId;
                v11 = v16 + 1;
                v14 = *(_DWORD *)(v14 + 364);
                v29 = v11;
              }
              a3[(_DWORD)v11] = 0;
            }
            else
            {
              *a3 = 0;
            }
            v10 = v33;
            goto LABEL_75;
          default:
            v10 = -1073741821;
            goto LABEL_74;
        }
LABEL_31:
        v10 = v33;
        goto LABEL_32;
      }
      if ( ThreadWin32Thread )
      {
        GetTaskName(ThreadWin32Thread, a3, a4);
        goto LABEL_31;
      }
    }
    v10 = -1073741816;
    goto LABEL_32;
  }
  v34 = a3[2];
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  if ( ThreadWin32Thread )
  {
    v19 = ThreadWin32Thread[62];
    if ( v19 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v19 + 20) + 32) & 4) == 0 )
      {
        v20 = *(_DWORD **)(*(_DWORD *)(v19 + 4) + 12);
        if ( v20 )
          v20 = (_DWORD *)*v20;
        *a3 = v20;
      }
    }
  }
  v21 = (struct _KTHREAD *)v32;
  if ( PsGetThreadProcessId((PETHREAD)v32) == (HANDLE)_gpidLogon )
    goto LABEL_60;
  if ( PsGetThreadProcessId(v21) == (HANDLE)_gpidLogonUI )
    goto LABEL_60;
  v22 = PsGetThreadProcess(v21);
  if ( UmfdHostLifeTimeManager::IsProcessUmfdHost(v22) )
    goto LABEL_60;
  v23 = PsGetThreadProcess(v21);
  if ( IsProcessDwm(v23) )
    goto LABEL_60;
  PsGetThreadProcess(v21);
  if ( IsProcessUserService(v26) )
    goto LABEL_60;
  if ( !ThreadWin32Thread || !ThreadWin32Thread[62] )
  {
    a3[1] = 2;
    goto LABEL_61;
  }
  v24 = ThreadWin32Thread[58];
  if ( v24 )
  {
    if ( *(char *)(v24 + 464) < 0 && (v34 & 0x800) == 0 )
LABEL_60:
      a3[1] = 1;
  }
LABEL_61:
  if ( ThreadWin32Thread && ThreadWin32Thread[126] )
    a3[2] |= 1u;
  if ( (a3[2] & 1) == 0 )
    goto LABEL_31;
  if ( a3[1] )
    goto LABEL_31;
  memset(v27, 0, sizeof(v27));
  if ( *(_DWORD *)(_gptiCurrent + 248) == ThreadWin32Thread[62] )
    goto LABEL_31;
  LockW32Thread((LONG_PTR)ThreadWin32Thread, v27);
  v25 = (PVOID *)(a3 + 3);
  if ( *(_DWORD *)(_gptiCurrent + 248) )
    v10 = xxxRestoreCsrssThreadDesktop(a3 + 3, 0);
  else
    v10 = v33;
  if ( v10 >= 0 )
    v10 = xxxSetCsrssThreadDesktop((_BYTE *)ThreadWin32Thread[62], v25);
  PopAndFreeW32ThreadLock((int)v27);
LABEL_74:
  if ( v28 == 11 )
    goto LABEL_75;
LABEL_32:
  v17 = v32;
LABEL_33:
  ObfDereferenceObject(v17);
  return v10;
}
