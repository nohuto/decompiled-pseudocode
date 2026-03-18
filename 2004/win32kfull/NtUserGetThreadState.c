/*
 * XREFs of NtUserGetThreadState @ 0x1C00F1DC0
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x1C014EB7C (_GetQueueStatus.c)
 */

__int64 __fastcall NtUserGetThreadState(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  __int64 *v21; // rax
  HANDLE CurrentProcessId; // rax
  __int64 v23; // rax

  v2 = EnterSharedCrit(0LL, 1LL);
  v6 = 0LL;
  v7 = v2;
  if ( a1 > 8 )
  {
    v9 = a1 - 9;
    if ( !v9 )
    {
      v6 = *(int *)(v2 + 560);
      goto LABEL_7;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v4 = (__int64 *)gpqForeground;
      LOBYTE(v6) = *(_QWORD *)(v2 + 424) == gpqForeground;
      goto LABEL_7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v6 = *(unsigned int *)(*(_QWORD *)(v2 + 416) + 776LL);
      goto LABEL_7;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v6 = *(_QWORD *)(v2 + 792);
      goto LABEL_7;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          v6 = ((unsigned __int64)*(unsigned int *)(v2 + 1224) >> 29) & 1;
        goto LABEL_7;
      }
    }
    else
    {
      CurrentProcessId = PsGetCurrentProcessId();
      v4 = (__int64 *)gpidLogon;
      if ( CurrentProcessId != (HANDLE)gpidLogon && *(PVOID *)(v7 + 448) != grpdeskLogon )
        goto LABEL_7;
    }
    v6 = 1LL;
    goto LABEL_7;
  }
  if ( a1 == 8 )
  {
    v23 = *(_QWORD *)(v2 + 504);
    if ( v23 )
    {
      v4 = (__int64 *)*(unsigned int *)(v23 + 84);
      if ( *(_QWORD *)(v23 + 32) )
      {
        v3 = 1LL;
      }
      else
      {
        v3 = 4LL;
        if ( ((unsigned __int16)v4 & 0x300) == 0 )
          v3 = 2LL;
      }
      v6 = v3 | 8;
      LOBYTE(v4) = (unsigned __int8)v4 & 1;
      if ( !(_BYTE)v4 )
        v6 = v3;
    }
  }
  else
  {
    if ( !a1 )
    {
      v4 = *(__int64 **)(*(_QWORD *)(v2 + 424) + 112LL);
      goto LABEL_5;
    }
    v15 = a1 - 1;
    if ( !v15 )
    {
      v4 = *(__int64 **)(*(_QWORD *)(v2 + 424) + 120LL);
LABEL_5:
      if ( v4 )
        v6 = *v4;
      goto LABEL_7;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      v4 = *(__int64 **)(*(_QWORD *)(v2 + 424) + 104LL);
      goto LABEL_5;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 == 1 )
              v6 = *(_QWORD *)(*(_QWORD *)(v2 + 424) + 408LL);
          }
          else
          {
            v6 = *(unsigned __int16 *)(*(_QWORD *)(v2 + 440) + 4LL);
          }
        }
        else
        {
          LOBYTE(v6) = (GetQueueStatus(7295LL) & 5) != 0;
        }
        goto LABEL_7;
      }
      v21 = *(__int64 **)(v2 + 784);
    }
    else
    {
      v21 = *(__int64 **)(v2 + 776);
    }
    if ( v21 )
      v6 = *v21;
  }
LABEL_7:
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
