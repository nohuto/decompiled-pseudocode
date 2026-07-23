/*
 * XREFs of HalpDpReplaceBegin @ 0x140866610
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpInterruptDpReplaceBegin @ 0x1404D6C9C (HalpInterruptDpReplaceBegin.c)
 *     HalpDpSortApicList @ 0x140866808 (HalpDpSortApicList.c)
 *     HalpBuildResumeStructures @ 0x14099935C (HalpBuildResumeStructures.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpDpReplaceBegin(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // ebx
  SIZE_T v9; // rbp
  char *PoolWithTag; // rax
  char *v11; // rdi
  char v12; // bp
  char v13; // al
  __int64 v14; // rdx
  PVOID v15; // rax
  void *v16; // rcx
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v18 = 0;
  v6 = *(unsigned int *)(v2 + 16);
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( (unsigned int)v6 < (unsigned int)v7 )
    return (unsigned int)-1073741811;
  v9 = (unsigned int)(4 * (v6 + 2 * (v7 + 16)));
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x206C6148u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v9);
  *(_DWORD *)v11 = v7;
  v12 = 1;
  v13 = (*(_DWORD *)a1 & 2) != 0;
  v11[45] = v13;
  if ( !(_DWORD)v7 )
  {
LABEL_11:
    if ( v13 )
    {
      if ( (_DWORD)v7 )
      {
        v15 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v3 * v7), 0x206C6148u);
        *((_QWORD *)v11 + 4) = v15;
        if ( !v15 )
        {
          v8 = -1073741670;
          goto LABEL_15;
        }
      }
      HalpBuildResumeStructures();
    }
    *a2 = v11;
    return 0;
  }
  *((_QWORD *)v11 + 1) = v11 + 128;
  v14 = (__int64)&v11[4 * v7 + 128];
  *((_QWORD *)v11 + 2) = v14;
  *((_QWORD *)v11 + 3) = v14 + 4 * v6;
  memmove(v11 + 128, (const void *)(*(_QWORD *)(a1 + 8) + 20LL), 4 * v7);
  memmove(*((void **)v11 + 2), (const void *)(*(_QWORD *)(a1 + 16) + 20LL), 4 * v6);
  HalpDpSortApicList(*((_QWORD *)v11 + 1), (unsigned int)v7);
  HalpDpSortApicList(*((_QWORD *)v11 + 2), (unsigned int)v6);
  if ( (*(_DWORD *)a1 & 1) != 0 )
    v11[44] = 1;
  else
    v12 = v11[44];
  v8 = HalpInterruptDpReplaceBegin(
         *((char **)v11 + 1),
         *((char **)v11 + 2),
         *((ULONG **)v11 + 3),
         *(_DWORD *)v11,
         v12,
         v11[45],
         &v18);
  if ( v8 >= 0 )
  {
    v3 = v18;
    v13 = v11[45];
    *((_DWORD *)v11 + 10) = v18;
    goto LABEL_11;
  }
LABEL_15:
  v16 = (void *)*((_QWORD *)v11 + 4);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x206C6148u);
  ExFreePoolWithTag(v11, 0x206C6148u);
  return (unsigned int)v8;
}
