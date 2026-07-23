/*
 * XREFs of MiAdjustCachedStacks @ 0x140265838
 * Callers:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 * Callees:
 *     KeGetPrcb @ 0x140219160 (KeGetPrcb.c)
 *     MiDeleteCachedKernelStack @ 0x1402659DC (MiDeleteCachedKernelStack.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 MiAdjustCachedStacks()
{
  unsigned int i; // ebx
  __int64 Prcb; // rax
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // r15
  _SLIST_HEADER *v6; // rbp
  __int64 result; // rax
  int Alignment; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int v13; // edx
  int v14; // esi
  int v15; // r9d
  PSLIST_ENTRY v16; // rax

  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( *(_QWORD *)(Prcb + 32520) && _InterlockedExchange64((volatile __int64 *)(Prcb + 32520), 0LL) )
      ((void (*)(void))MiDeleteCachedKernelStack)();
  }
  v2 = (unsigned __int16)KeNumberNodes;
  v3 = 0;
  do
  {
    v4 = 0LL;
    v5 = 11LL * v3;
    do
    {
      v6 = &SListHead[v5];
      result = (unsigned int)(*((_DWORD *)&SListHead[v5 + 1].HeaderX64 + 1)
                            - *((_DWORD *)&SListHead[v5 + 1].HeaderX64 + 2));
      if ( (_DWORD)result )
      {
        Alignment = v6[1].Alignment;
        if ( Alignment < 16 || (unsigned int)result >= 0x10 )
        {
          v15 = 4;
          v9 = v6[1].Alignment;
          v10 = Alignment >> 31;
        }
        else
        {
          v9 = v6[1].Alignment;
          v10 = Alignment >> 31;
          if ( Alignment >= 64 )
          {
            result = (unsigned int)(Alignment / 16);
LABEL_11:
            *((_DWORD *)&v6[1].HeaderX64 + 2) = *((_DWORD *)&SListHead[v5 + 1].HeaderX64 + 1);
            if ( !(_DWORD)result )
              result = 1LL;
            v11 = result + Alignment;
            if ( v11 > 256 )
              v11 = 256;
            LODWORD(v6[1].Alignment) = v11;
            goto LABEL_16;
          }
          v15 = 8;
        }
        result = (unsigned int)(__SPAIR64__(v10, v9) / v15);
        goto LABEL_11;
      }
      if ( !*((_DWORD *)&v6[1].HeaderX64 + 3) )
      {
        v12 = v6[1].Alignment;
        v13 = v12 / 20;
        if ( !(v12 / 20) )
          v13 = v12 != 0;
        v14 = v12 - v13;
        if ( v4 != 1 && v14 < 5 )
          v14 = 5;
        LODWORD(v6[1].Alignment) = v14;
        while ( 1 )
        {
          result = LOWORD(v6->Alignment);
          if ( (int)result <= v14 )
            break;
          v16 = RtlpInterlockedPopEntrySList(v6);
          if ( v16 )
            MiDeleteCachedKernelStack(v16);
        }
      }
LABEL_16:
      *((_DWORD *)&v6[1].HeaderX64 + 3) = 0;
      ++v4;
      v5 += 2LL;
    }
    while ( v4 <= 1 );
    ++v3;
  }
  while ( v3 < v2 );
  return result;
}
