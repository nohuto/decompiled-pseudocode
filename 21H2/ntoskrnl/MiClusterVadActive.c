/*
 * XREFs of MiClusterVadActive @ 0x1405558E4
 * Callers:
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiClusterVadActive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  int v6; // r15d
  __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v12; // rbx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *a3 = -1LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) << 25) >> 16;
  v5 = v4 & 0xFFFFFFFFFFFF0000uLL;
  if ( (v4 & 0xFFFFFFFFFFFF0000uLL) >> 12 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || (v5 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v6 = 0;
  v7 = -1LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  do
  {
    v14 = MI_READ_PTE_LOCK_FREE(v8);
    v10 = v14;
    if ( (v14 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v14)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v14 >> 3) & 0x1FF)) & 0x20) != 0 )
            v10 |= 0x20uLL;
        }
      }
      v12 = (v10 >> 12) & 0xFFFFFFFFFLL;
      if ( (v12 & 0xF) != (unsigned int)v9 )
        return 0LL;
      if ( v7 == -1 )
      {
        v7 = v12 - (unsigned int)v9;
      }
      else
      {
        if ( v12 != v9 + v7 )
          return 0LL;
        v6 = 1;
      }
    }
    v9 = (unsigned int)(v9 + 1);
    v8 += 8LL;
  }
  while ( (unsigned int)v9 < 0x10 );
  if ( !v6 )
  {
    *a3 = (unsigned __int16)v4 >> 12;
    return 0LL;
  }
  return 1LL;
}
