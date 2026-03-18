/*
 * XREFs of _NtUserGetThreadState@4 @ 0x98C72
 * Callers:
 *     <none>
 * Callees:
 *     __GetQueueStatus@4 @ 0x6E7E0 (__GetQueueStatus@4.c)
 */

int __stdcall NtUserGetThreadState(int a1)
{
  int v1; // ebx
  int v2; // esi
  int *v3; // eax
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // [esp-4h] [ebp-10h]

  v1 = 0;
  v2 = EnterSharedCrit(0, 1);
  switch ( a1 )
  {
    case 0:
      v3 = *(int **)(*(_DWORD *)(v2 + 236) + 60);
      goto LABEL_3;
    case 1:
      v3 = *(int **)(*(_DWORD *)(v2 + 236) + 64);
      goto LABEL_3;
    case 2:
      v3 = *(int **)(*(_DWORD *)(v2 + 236) + 56);
      goto LABEL_3;
    case 3:
      v3 = *(int **)(v2 + 436);
      goto LABEL_3;
    case 4:
      v3 = *(int **)(v2 + 440);
LABEL_3:
      if ( v3 )
        v1 = *v3;
      break;
    case 5:
      v1 = (_GetQueueStatus(7295) & 5) != 0;
      break;
    case 6:
      v1 = *(unsigned __int16 *)(*(_DWORD *)(v2 + 244) + 4);
      break;
    case 7:
      v1 = *(_DWORD *)(*(_DWORD *)(v2 + 236) + 300);
      break;
    case 8:
      v5 = *(_DWORD *)(v2 + 276);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 16) == 0;
        v7 = *(_DWORD *)(v5 + 44);
        if ( v6 )
        {
          if ( (v7 & 0x300) != 0 )
            v8 = 4;
          else
            v8 = 2;
          v1 = v8;
        }
        else
        {
          v1 = 1;
        }
        if ( (v7 & 1) != 0 )
          v1 |= 8u;
      }
      break;
    case 9:
      v1 = *(_DWORD *)(v2 + 304);
      break;
    case 10:
      v1 = _gpqForeground == *(_DWORD *)(v2 + 236);
      break;
    case 11:
      v1 = *(_DWORD *)(*(_DWORD *)(v2 + 232) + 420);
      break;
    case 12:
      v1 = *(_DWORD *)(v2 + 444);
      break;
    case 13:
      if ( PsGetCurrentProcessId() == (HANDLE)_gpidLogon || *(PVOID *)(v2 + 248) == grpdeskLogon )
        goto LABEL_12;
      break;
    case 14:
LABEL_12:
      v1 = 1;
      break;
    case 15:
      v1 = (*(_DWORD *)(v2 + 688) >> 29) & 1;
      break;
    default:
      break;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
