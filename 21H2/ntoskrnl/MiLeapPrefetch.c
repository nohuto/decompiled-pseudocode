/*
 * XREFs of MiLeapPrefetch @ 0x14037BAFC
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x140316B10 (MiInPagePageTable.c)
 *     MiPrefetchJumpVad @ 0x14053970C (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // esi
  unsigned __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  char Queue; // al
  _KPROCESS *Process; // rbp
  unsigned __int8 v11; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v17; // r8
  _QWORD *v18; // rax
  unsigned __int64 v19; // r9
  _QWORD **v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rcx

  v4 = a2;
  v6 = 1;
  if ( a2 )
  {
LABEL_20:
    v17 = a1[3];
    v18 = (_QWORD *)(a1[1] + 16 * v17);
    v19 = *v18 & 0xFFFFFFFFFFFFF000uLL;
    if ( v4 >= v19 && v4 < v19 + (((*(_DWORD *)v18 & 0xFFF) + v18[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v4 - v19) >> 12;
      return v6;
    }
    goto LABEL_22;
  }
  v7 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v7 <= 0x7FFFFFFEFFFFLL )
  {
    CurrentThread = KeGetCurrentThread();
    Queue = (char)CurrentThread[1].Queue;
    if ( Queue >= 0 && ((unsigned __int8)~(BYTE1(CurrentThread[1].Queue) >> 6) & ((Queue & 3) == 0)) != 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v11 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], 2LL * a1[3], a3, a4);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 && *(_QWORD *)&Process[1].Spare2[31] )
      {
        i = *(_QWORD *)&Process[1].Spare2[15];
        v13 = v7 >> 12;
        while ( i )
        {
          v14 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
          if ( v13 >= v14 )
          {
            if ( v13 <= (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) )
              goto LABEL_16;
            v15 = *(_QWORD *)(i + 8);
          }
          else
          {
            v15 = *(_QWORD *)i;
          }
          if ( !v15 )
          {
            if ( v14 >= v13 )
              goto LABEL_19;
            v20 = *(_QWORD ***)(i + 8);
            v21 = i;
            if ( v20 )
            {
              v22 = *v20;
              for ( i = *(_QWORD *)(i + 8); v22; v22 = (_QWORD *)*v22 )
                i = (unsigned __int64)v22;
            }
            else
            {
              while ( 1 )
              {
                i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !i || *(_QWORD *)i == v21 )
                  break;
                v21 = i;
              }
            }
            if ( i )
            {
LABEL_19:
              v4 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
              MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v11);
              goto LABEL_20;
            }
            break;
          }
          i = v15;
        }
        MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v11);
        v17 = a1[3];
LABEL_22:
        a1[4] = 0LL;
        a1[3] = v17 + 1;
        return v6;
      }
      v6 = 0;
LABEL_16:
      MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v11);
    }
  }
  return v6;
}
