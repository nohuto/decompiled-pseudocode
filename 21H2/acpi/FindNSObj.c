/*
 * XREFs of FindNSObj @ 0x1C00175E0
 * Callers:
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C001F71C (FindNSObjMainNoLock.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0010780 (GetObjectPathNoLock.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     HeapInsertFreeList @ 0x1C0017940 (HeapInsertFreeList.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, size_t a6)
{
  int v6; // r15d
  int v7; // r12d
  int v8; // eax
  unsigned int v10; // esi
  unsigned int v11; // ecx
  _BYTE *ObjectPathNoLock; // rax
  size_t v13; // rbx
  _BYTE *v14; // rdi
  __int64 v15; // rcx
  _SLIST_ENTRY *v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rbx
  _QWORD *i; // rbp
  unsigned int NSObj; // eax
  size_t v28; // [rsp+28h] [rbp-50h]
  unsigned int Size; // [rsp+30h] [rbp-48h]
  _SLIST_ENTRY *v30; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+80h] [rbp+8h]
  int v32; // [rsp+90h] [rbp+18h]
  unsigned int v33; // [rsp+A8h] [rbp+30h]

  v32 = a3;
  v31 = a1;
  v6 = a6;
  v7 = a4;
  v8 = a3;
  v10 = -1073741772;
  if ( !a2 || (a6 & 1) != 0 && a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3 )
    return v10;
  if ( a1 != *(_DWORD *)(a2 + 40) && (a6 & 2) == 0 )
  {
LABEL_27:
    v24 = *(_QWORD **)(a2 + 24);
    for ( i = (_QWORD *)(a2 + 24); i != v24; a1 = v31 )
    {
      LODWORD(v28) = v6;
      NSObj = FindNSObj(a1, (int)v24, v8, v7, a5, v28);
      v10 = NSObj;
      if ( NSObj != -1073741772 && NSObj )
        break;
      v24 = (_QWORD *)*v24;
      v8 = v32;
    }
    return v10;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  Size = v11 + 1;
  if ( v11 + 1 < v11 )
    return 3221225621LL;
  v30 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v11 + 1);
  ObjectPathNoLock = GetObjectPathNoLock(a2);
  v13 = -1LL;
  v14 = ObjectPathNoLock;
  v15 = -1LL;
  do
    ++v15;
  while ( ObjectPathNoLock[v15] );
  v33 = v15 + *(_DWORD *)(a5 + 24) + 1;
  v16 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v33);
  if ( v16 && v30 )
  {
    memset(v30, 0, Size);
    memset(v16, 0, v33);
    v17 = *(_DWORD *)(a5 + 24);
    if ( v17 )
      memmove(v16, *(const void **)(a5 + 32), v17);
    v18 = *(_QWORD *)(a5 + 8);
    v19 = *(_DWORD *)(v18 + 24);
    if ( v19 )
      memmove(v30, *(const void **)(v18 + 32), v19);
    do
      ++v13;
    while ( v14[v13] );
    memmove((char *)v16 + *(unsigned int *)(a5 + 24), v14, v13);
    v20 = *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL);
    if ( *(_QWORD *)(a2 + 24) == a2 + 24 )
      *((_BYTE *)&v30->Next + v20) = 48;
    else
      *((_BYTE *)&v30->Next + v20) = 49;
    v10 = 0;
    if ( *(_DWORD *)(a5 + 24) )
    {
      v21 = *(_QWORD *)(a5 + 32);
      *(_DWORD *)(v21 - 16) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v21 - 8), v21 - 16);
      KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
    }
    v22 = *(_QWORD *)(a5 + 8);
    if ( *(_DWORD *)(v22 + 24) )
    {
      v23 = *(_QWORD *)(v22 + 32);
      *(_DWORD *)(v23 - 16) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v23 - 8), v23 - 16);
      KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
      v22 = *(_QWORD *)(a5 + 8);
    }
    ++*(_QWORD *)(a5 + 16);
    *(_DWORD *)(a5 + 24) = v33;
    *(_QWORD *)(a5 + 32) = v16;
    *(_QWORD *)(v22 + 32) = v30;
    *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = Size;
    ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    a1 = v31;
    v8 = v32;
    goto LABEL_27;
  }
  return 3221225626LL;
}
