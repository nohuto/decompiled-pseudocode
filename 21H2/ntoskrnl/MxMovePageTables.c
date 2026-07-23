/*
 * XREFs of MxMovePageTables @ 0x140A579B4
 * Callers:
 *     MxRelocatePageTables @ 0x140A57734 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140A579B4 (MxMovePageTables.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MxMovePageTables @ 0x140A579B4 (MxMovePageTables.c)
 *     MiIsRegularMemory @ 0x140A58070 (MiIsRegularMemory.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 */

__int64 __fastcall MxMovePageTables(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  BOOL v14; // r14d
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r14d
  unsigned __int64 v18; // rbx
  __int64 *v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  __int64 v22; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v24; // rdx
  struct _LIST_ENTRY *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct _LIST_ENTRY *v28; // rdx
  _QWORD v29[2]; // [rsp+30h] [rbp-10h] BYREF
  int v30; // [rsp+80h] [rbp+40h]
  __int64 v31; // [rsp+88h] [rbp+48h] BYREF
  __int64 v32; // [rsp+98h] [rbp+58h]

  v32 = a4;
  v5 = a1;
  v29[0] = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = v29[0];
  result = MiPteInShadowRange((unsigned __int64)v29);
  v30 = result;
  v10 = result;
  if ( (_DWORD)result )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      result = (__int64)KeGetCurrentThread();
      if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 912LL) != 1 && (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
      {
        result = (__int64)KeGetCurrentThread();
        v22 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1928LL);
        if ( v22 )
        {
          result = *(_QWORD *)(v22 + 8 * (((unsigned __int64)v29 >> 3) & 0x1FF));
          if ( (result & 0x20) != 0 )
            v8 |= 0x20uLL;
        }
      }
    }
  }
  v11 = (v8 >> 12) & 0xFFFFFFFFFLL;
  if ( v5 <= a2 )
  {
    v12 = a5;
    while ( 1 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        v29[0] = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v20 = v29[0];
        if ( v10
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v29[0] & 1) != 0
          && ((v29[0] & 0x20) == 0 || (v29[0] & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v29 >> 3) & 0x1FF)) & 0x20) != 0 )
              v20 = v29[0] | 0x20LL;
          }
        }
        v11 = (v20 >> 12) & 0xFFFFFFFFFLL;
      }
      result = MI_READ_PTE_LOCK_FREE(v5);
      v31 = result;
      v13 = result;
      if ( (result & 1) == 0 )
        goto LABEL_12;
      result = 0xFFFFF6FB7DBEDF68uLL;
      if ( v5 == 0xFFFFF6FB7DBEDF68uLL )
        goto LABEL_12;
      if ( a3 && (v13 & 0x80u) != 0LL )
      {
        v17 = 512;
        v31 = MI_READ_PTE_LOCK_FREE(v5);
        v18 = v31;
        if ( MiPteInShadowRange((unsigned __int64)&v31)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v18 & 1) != 0
          && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
        {
          v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v24 && ((__int64)*(&v24->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF)) & 0x20) != 0 )
            v18 |= 0x20uLL;
        }
        v19 = (__int64 *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
        do
        {
          result = v11 & 0xFFFFFFFFFLL | *v19 & 0xFFFFFFF000000000uLL;
          *v19 = result;
          v19 += 6;
          --v17;
        }
        while ( v17 );
        goto LABEL_12;
      }
      v14 = MiPteInShadowRange((unsigned __int64)&v31);
      if ( v14
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
      {
        v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v25 )
        {
          v26 = *((_QWORD *)&v25->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF));
          v27 = v13 | 0x20;
          if ( (v26 & 0x20) == 0 )
            v27 = v13;
          v13 = v27;
          if ( (v26 & 0x42) != 0 )
            v13 = v27;
        }
      }
      v15 = (v13 >> 12) & 0xFFFFFFFFFLL;
      if ( a3 )
        break;
      result = MiIsRegularMemory(v32, v15);
      if ( (_DWORD)result )
        goto LABEL_11;
LABEL_12:
      v10 = v30;
      v5 += 8LL;
      if ( v5 > a2 )
        return result;
    }
    MxSwapPages(v12, v5);
    MxMovePageTables((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1, v32, v12);
    v31 = MI_READ_PTE_LOCK_FREE(v5);
    v21 = v31;
    if ( v14
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      v28 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v28 )
      {
        if ( ((__int64)*(&v28->Flink + (((unsigned __int64)&v31 >> 3) & 0x1FF)) & 0x20) != 0 )
          v21 = v31 | 0x20;
      }
    }
    v15 = (v21 >> 12) & 0xFFFFFFFFFLL;
LABEL_11:
    v16 = 48 * v15 - 0x58000000000LL;
    result = (*(_QWORD *)(v16 + 40) ^ v11) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v16 + 40) ^= result;
    goto LABEL_12;
  }
  return result;
}
