/*
 * XREFs of MiZeroPageThread @ 0x1403CABA0
 * Callers:
 *     <none>
 * Callees:
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiInitializeColorTable @ 0x1403B0D1C (MiInitializeColorTable.c)
 *     MiZeroBootLargePages @ 0x1403CABF4 (MiZeroBootLargePages.c)
 *     MiDeleteZeroThreadContext @ 0x14054FC14 (MiDeleteZeroThreadContext.c)
 *     MiGetPagesToZero @ 0x14054FD4C (MiGetPagesToZero.c)
 *     MiSetZeroPageThreadPriority @ 0x14054FEB4 (MiSetZeroPageThreadPriority.c)
 *     MiWaitForFreePagesToZero @ 0x14054FF8C (MiWaitForFreePagesToZero.c)
 */

__int64 __fastcall MiZeroPageThread(ULONG_PTR *a1)
{
  __int64 result; // rax
  _DWORD *v3; // r14
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v6; // r12d
  int v7; // eax
  unsigned int i; // esi
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 != &MiSystemPartition || (result = MiZeroBootLargePages(), (int)result < 0) )
  {
    v3 = (_DWORD *)a1[805];
    v4 = 0;
    v3[67] = -1;
    MiInitializeColorTable(v3 + 62, 0);
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
    v6 = MiSetZeroPageThreadPriority(a1, CurrentThread, 0LL);
    while ( 1 )
    {
      v7 = MiWaitForFreePagesToZero(a1, &v9, v4);
      if ( v7 == -1 )
        break;
      if ( v4 != v7 )
      {
        v4 = v7;
        MiInitializeColorTable(v3 + 62, v7);
      }
      for ( i = 0; i <= 3; ++i )
      {
        if ( (unsigned int)MiGetPagesToZero(a1, v3, i) )
          break;
      }
      if ( i <= 3 )
        MiZeroPage((__int64)v3, (__int64)a1);
    }
    MiSetZeroPageThreadPriority(a1, CurrentThread, v6);
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x400u;
    result = MiDeleteZeroThreadContext(v3);
    a1[805] = 0LL;
  }
  return result;
}
