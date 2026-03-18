/*
 * XREFs of FindNSObj @ 0x1C0013EF0
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C0013E20 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x1C0013EF0 (FindNSObj.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C00093E0 (GetObjectPathNoLock.c)
 *     FindNSObj @ 0x1C0013EF0 (FindNSObj.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r10d
  int v7; // eax
  int v8; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned int v12; // r14d
  void *v13; // r13
  _QWORD *ObjectPathNoLock; // rax
  size_t v15; // rbx
  _BYTE *v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // ebp
  char *v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  _QWORD *v25; // r14
  __int64 v26; // r10
  _QWORD *v27; // rax
  _QWORD *j; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rbx
  _QWORD *v39; // r14
  __int64 v40; // r10
  _QWORD *v41; // rax
  _QWORD *k; // r8
  _QWORD *v43; // rcx
  _QWORD *v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  _QWORD *i; // rbx
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // r14
  __int64 v57; // rcx
  _QWORD *v58; // rax
  unsigned int NSObj; // eax
  __int64 v60; // r9
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // r14
  __int64 v64; // rdx
  _QWORD *v65; // rax
  unsigned int v66; // [rsp+30h] [rbp-48h]
  unsigned int v67; // [rsp+34h] [rbp-44h]
  int v69; // [rsp+90h] [rbp+18h]
  int v70; // [rsp+98h] [rbp+20h]

  v70 = a4;
  v69 = a3;
  v6 = a1;
  v7 = a4;
  v8 = a6;
  v10 = -1073741772;
  if ( (a6 & 1) != 0 && (!a2 || a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3) || !a2 )
    return v10;
  if ( v6 != *(_DWORD *)(a2 + 40) && (a6 & 2) == 0 )
  {
LABEL_47:
    for ( i = *(_QWORD **)(a2 + 24); (_QWORD *)(a2 + 24) != i; v6 = a1 )
    {
      NSObj = FindNSObj(v6, (_DWORD)i, a3, v7, a5, v8);
      v10 = NSObj;
      if ( NSObj != -1073741772 && NSObj )
        break;
      i = (_QWORD *)*i;
      v7 = v70;
      v8 = a6;
      LODWORD(a3) = v69;
    }
    return v10;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  v12 = v11 + 1;
  v66 = v11 + 1;
  if ( v11 + 1 < v11 )
    return 3221225621LL;
  v13 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v12);
  ObjectPathNoLock = GetObjectPathNoLock(a2);
  v15 = -1LL;
  v16 = ObjectPathNoLock;
  v17 = -1LL;
  do
    ++v17;
  while ( *((_BYTE *)ObjectPathNoLock + v17) );
  v18 = v17 + *(_DWORD *)(a5 + 24) + 1;
  v67 = v18;
  v19 = (char *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v18);
  if ( v19 && v13 )
  {
    memset(v13, 0, v12);
    memset(v19, 0, v18);
    v20 = *(_DWORD *)(a5 + 24);
    if ( v20 )
      memmove(v19, *(const void **)(a5 + 32), v20);
    v21 = *(_QWORD *)(a5 + 8);
    v22 = *(_DWORD *)(v21 + 24);
    if ( v22 )
      memmove(v13, *(const void **)(v21 + 32), v22);
    do
      ++v15;
    while ( v16[v15] );
    memmove(&v19[*(unsigned int *)(a5 + 24)], v16, v15);
    v23 = *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL);
    if ( *(_QWORD *)(a2 + 24) == a2 + 24 )
      *((_BYTE *)v13 + v23) = 48;
    else
      *((_BYTE *)v13 + v23) = 49;
    v10 = 0;
    if ( *(_DWORD *)(a5 + 24) )
    {
      v24 = *(_QWORD **)(a5 + 32);
      *((_DWORD *)v24 - 4) = 0;
      v25 = v24 - 2;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v26 = *(v24 - 1);
      v27 = *(_QWORD **)(v26 + 40);
      for ( j = (_QWORD *)(v26 + 40); v27 != j; v27 = (_QWORD *)*v27 )
      {
        if ( v24 < v27 )
          break;
      }
      v29 = (_QWORD *)v27[1];
      if ( (_QWORD *)*v29 != v27 )
        goto LABEL_71;
      v24[1] = v29;
      *v24 = v27;
      *v29 = v24;
      v27[1] = v24;
      v30 = (_QWORD *)*v24;
      v31 = *v24 - 16LL;
      if ( (_QWORD *)*v24 != j )
      {
        v60 = *((unsigned int *)v25 + 1);
        if ( (_QWORD *)v31 == (_QWORD *)((char *)v25 + v60) )
        {
          *((_DWORD *)v25 + 1) = v60 + *(_DWORD *)(v31 + 4);
          v61 = *v30;
          if ( *(_QWORD **)(*v30 + 8LL) != v30 )
            goto LABEL_71;
          v62 = (_QWORD *)v30[1];
          if ( (_QWORD *)*v62 != v30 )
            goto LABEL_71;
          *v62 = v61;
          *(_QWORD *)(v61 + 8) = v62;
        }
      }
      v32 = (_QWORD *)v25[3];
      v33 = v32 - 2;
      if ( v32 != j )
      {
        v34 = *((unsigned int *)v33 + 1);
        if ( v25 == (_QWORD *)((char *)v33 + v34) )
        {
          *((_DWORD *)v33 + 1) = *((_DWORD *)v25 + 1) + v34;
          v35 = *v24;
          if ( *(_QWORD **)(*v24 + 8LL) != v24 )
            goto LABEL_71;
          v36 = (_QWORD *)v24[1];
          if ( (_QWORD *)*v36 != v24 )
            goto LABEL_71;
          *v36 = v35;
          v25 = v33;
          *(_QWORD *)(v35 + 8) = v36;
        }
      }
      if ( *(_QWORD *)(v26 + 32) <= (unsigned __int64)v25 + *((unsigned int *)v25 + 1) )
      {
        *(_QWORD *)(v26 + 32) = v25;
        v56 = v25 + 2;
        v57 = *v56;
        if ( *(_QWORD **)(*v56 + 8LL) != v56 )
          goto LABEL_71;
        v58 = (_QWORD *)v56[1];
        if ( (_QWORD *)*v58 != v56 )
          goto LABEL_71;
        *v58 = v57;
        *(_QWORD *)(v57 + 8) = v58;
      }
      KeReleaseSpinLock(&gmutHeap, NewIrql);
      v12 = v66;
    }
    v37 = *(_QWORD *)(a5 + 8);
    if ( !*(_DWORD *)(v37 + 24) )
    {
LABEL_44:
      ++*(_QWORD *)(a5 + 16);
      *(_DWORD *)(a5 + 24) = v67;
      *(_QWORD *)(a5 + 32) = v19;
      *(_QWORD *)(v37 + 32) = v13;
      *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = v12;
      ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      v6 = a1;
      LODWORD(a3) = v69;
      v8 = a6;
      v7 = v70;
      goto LABEL_47;
    }
    v38 = *(_QWORD **)(v37 + 32);
    *((_DWORD *)v38 - 4) = 0;
    v39 = v38 - 2;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v40 = *(v38 - 1);
    v41 = *(_QWORD **)(v40 + 40);
    for ( k = (_QWORD *)(v40 + 40); v41 != k; v41 = (_QWORD *)*v41 )
    {
      if ( v38 < v41 )
        break;
    }
    v43 = (_QWORD *)v41[1];
    if ( (_QWORD *)*v43 == v41 )
    {
      *v38 = v41;
      v38[1] = v43;
      *v43 = v38;
      v41[1] = v38;
      v44 = (_QWORD *)*v38;
      v45 = *v38 - 16LL;
      if ( (_QWORD *)*v38 != k )
      {
        v46 = *((unsigned int *)v39 + 1);
        if ( (_QWORD *)v45 == (_QWORD *)((char *)v39 + v46) )
        {
          *((_DWORD *)v39 + 1) = *(_DWORD *)(v45 + 4) + v46;
          v54 = *v44;
          if ( *(_QWORD **)(*v44 + 8LL) != v44 )
            goto LABEL_71;
          v55 = (_QWORD *)v44[1];
          if ( (_QWORD *)*v55 != v44 )
            goto LABEL_71;
          *v55 = v54;
          *(_QWORD *)(v54 + 8) = v55;
        }
      }
      v47 = (_QWORD *)v39[3];
      v48 = v47 - 2;
      if ( v47 != k )
      {
        v51 = *((unsigned int *)v48 + 1);
        if ( v39 == (_QWORD *)((char *)v48 + v51) )
        {
          *((_DWORD *)v48 + 1) = *((_DWORD *)v39 + 1) + v51;
          v52 = *v38;
          if ( *(_QWORD **)(*v38 + 8LL) != v38 )
            goto LABEL_71;
          v53 = (_QWORD *)v38[1];
          if ( (_QWORD *)*v53 != v38 )
            goto LABEL_71;
          *v53 = v52;
          v39 = v48;
          *(_QWORD *)(v52 + 8) = v53;
        }
      }
      if ( *(_QWORD *)(v40 + 32) > (unsigned __int64)v39 + *((unsigned int *)v39 + 1) )
      {
LABEL_43:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        v37 = *(_QWORD *)(a5 + 8);
        v12 = v66;
        goto LABEL_44;
      }
      *(_QWORD *)(v40 + 32) = v39;
      v63 = v39 + 2;
      v64 = *v63;
      if ( *(_QWORD **)(*v63 + 8LL) == v63 )
      {
        v65 = (_QWORD *)v63[1];
        if ( (_QWORD *)*v65 == v63 )
        {
          *v65 = v64;
          *(_QWORD *)(v64 + 8) = v65;
          goto LABEL_43;
        }
      }
    }
LABEL_71:
    __fastfail(3u);
  }
  return 3221225626LL;
}
