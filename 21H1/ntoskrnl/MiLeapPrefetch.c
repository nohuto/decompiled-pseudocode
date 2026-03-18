/*
 * XREFs of MiLeapPrefetch @ 0x14037926C
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x1402B1DE0 (MiInPagePageTable.c)
 *     MiPrefetchJumpVad @ 0x1405339AC (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  char Queue; // al
  _KPROCESS *Process; // rbp
  unsigned __int8 v9; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  unsigned __int64 v17; // r9
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx

  v2 = a2;
  v4 = 1;
  if ( a2 )
  {
LABEL_20:
    v15 = a1[3];
    v16 = (_QWORD *)(a1[1] + 16 * v15);
    v17 = *v16 & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 >= v17 && v2 < v17 + (((*(_DWORD *)v16 & 0xFFF) + v16[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v2 - v17) >> 12;
      return v4;
    }
    goto LABEL_22;
  }
  v5 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v5 <= 0x7FFFFFFEFFFFLL )
  {
    CurrentThread = KeGetCurrentThread();
    Queue = (char)CurrentThread[1].Queue;
    if ( Queue >= 0 && ((unsigned __int8)~(BYTE1(CurrentThread[1].Queue) >> 6) & ((Queue & 3) == 0)) != 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v9 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 && *(_QWORD *)&Process[1].Spare2[31] )
      {
        i = *(_QWORD *)&Process[1].Spare2[15];
        v11 = v5 >> 12;
        while ( i )
        {
          v12 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
          if ( v11 >= v12 )
          {
            if ( v11 <= (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) )
              goto LABEL_16;
            v13 = *(_QWORD *)(i + 8);
          }
          else
          {
            v13 = *(_QWORD *)i;
          }
          if ( !v13 )
          {
            if ( v12 >= v11 )
              goto LABEL_19;
            v18 = *(_QWORD ***)(i + 8);
            v19 = i;
            if ( v18 )
            {
              v20 = *v18;
              for ( i = *(_QWORD *)(i + 8); v20; v20 = (_QWORD *)*v20 )
                i = (unsigned __int64)v20;
            }
            else
            {
              while ( 1 )
              {
                i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !i || *(_QWORD *)i == v19 )
                  break;
                v19 = i;
              }
            }
            if ( i )
            {
LABEL_19:
              v2 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v9);
              goto LABEL_20;
            }
            break;
          }
          i = v13;
        }
        MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v9);
        v15 = a1[3];
LABEL_22:
        a1[4] = 0LL;
        a1[3] = v15 + 1;
        return v4;
      }
      v4 = 0;
LABEL_16:
      MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v9);
    }
  }
  return v4;
}
