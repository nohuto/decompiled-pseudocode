/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C006C830
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006C830 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxDoSyncPaint @ 0x1C00EFEE4 (xxxDoSyncPaint.c)
 * Callees:
 *     xxxInternalDoSyncPaint @ 0x1C006C830 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  struct tagBWL *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rax
  char *v10; // r14
  __int64 v11; // rcx
  unsigned __int64 i; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 *v19; // r15
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int128 v33; // [rsp+20h] [rbp-48h] BYREF
  __int64 v34; // [rsp+30h] [rbp-38h]

  result = xxxSimpleDoSyncPaint((struct tagWND *)a1);
  if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (result = *(_QWORD *)(a1 + 40), (*(_BYTE *)(result + 31) & 2) != 0) )
  {
    v5 = *(_QWORD **)(a1 + 112);
    v6 = pbwlCache;
    v34 = 0LL;
    v33 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      result = Win32AllocPool(296LL, 1819767637LL);
      v6 = (struct tagBWL *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 16) = result + 280;
    }
    *((_QWORD *)v6 + 3) = 0LL;
    for ( *((_QWORD *)v6 + 1) = (char *)v6 + 32; v5; v5 = (_QWORD *)v5[11] )
    {
      v7 = *((_QWORD *)v6 + 3);
      if ( !v7 || v7 == v5[2] )
      {
        **((_QWORD **)v6 + 1) = *v5;
        *((_QWORD *)v6 + 1) += 8LL;
        v8 = *((_QWORD *)v6 + 1);
        if ( v8 == *((_QWORD *)v6 + 2) )
        {
          v25 = v8 - (_QWORD)v6;
          v26 = UserReAllocPool(v6, (unsigned int)v25 + 8LL, (unsigned int)v25 + 72LL, 1819767637LL);
          if ( !v26 )
            break;
          v27 = v26 + v25;
          v6 = (struct tagBWL *)v26;
          *(_QWORD *)(v26 + 8) = v27;
          *(_QWORD *)(v26 + 16) = v27 + 64;
        }
      }
    }
    v9 = (_QWORD *)*((_QWORD *)v6 + 1);
    if ( (unsigned __int64)v9 >= *((_QWORD *)v6 + 2) )
    {
      return Win32FreePool(v6);
    }
    else
    {
      *v9 = 1LL;
      v10 = (char *)v6 + 32;
      *((_QWORD *)v6 + 3) = gptiCurrent;
      v11 = gpbwlList;
      *(_QWORD *)v6 = gpbwlList;
      gpbwlList = v6;
      for ( i = *((_QWORD *)v6 + 4); i != 1; v10 += 8 )
      {
        if ( i )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v11)
            || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            PsGetThreadWin32Thread(CurrentThread);
          }
          v11 = gpsi;
          if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
          {
            v17 = gSharedInfo[1] + (unsigned int)(unsigned __int16)i * LODWORD(gSharedInfo[2]);
            v18 = i >> 16;
            v19 = (__int64 *)HMPkheFromPhe(v17);
            if ( ((_WORD)v18 == *(_WORD *)(v17 + 26)
               || (_WORD)v18 == 0xFFFF
               || !(_WORD)v18 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11)) != 0)
              && (*(_BYTE *)(v17 + 25) & 1) == 0
              && *(_BYTE *)(v17 + 24) == 1 )
            {
              v20 = *v19;
              if ( *v19 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v20 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v20 + 16) )
                {
                  v21 = *v19;
                  *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 408LL);
                  *(_QWORD *)(gptiCurrent + 408LL) = &v33;
                  *((_QWORD *)&v33 + 1) = v20;
                  HMLockObject(v21);
                  xxxInternalDoSyncPaint(v20, a2);
                  ThreadUnlock1(v23, v22, v24);
                }
              }
            }
          }
        }
        i = *((_QWORD *)v10 + 1);
      }
      return FreeHwndList(v6);
    }
  }
  return result;
}
