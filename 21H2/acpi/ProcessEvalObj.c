/*
 * XREFs of ProcessEvalObj @ 0x1C0025310
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     DumpObject @ 0x1C0068B08 (DumpObject.c)
 */

__int64 __fastcall ProcessEvalObj(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *i; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 ObjectPath; // rax
  void *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v21 = (void *)ObjectPath;
    if ( ObjectPath )
    {
      PrintDebugMessage(45, ObjectPath, 0, 0, 0LL);
      ExFreePoolWithTag(v21, 0);
    }
    else
    {
      PrintDebugMessage(45, (unsigned int)&unk_1C006FB8B, 0, 0, 0LL);
    }
    DumpObject(*(_QWORD *)(a2 + 48), v22, 0LL);
    ConPrintf("\n");
  }
  v6 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v6[1];
  v7 = v6 - 2;
  *((_DWORD *)v6 - 4) = 0;
  byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v8 = *(v6 - 1);
  v9 = *(_QWORD **)(v8 + 40);
  for ( i = (_QWORD *)(v8 + 40); v9 != i; v9 = (_QWORD *)*v9 )
  {
    if ( v6 < v9 )
      break;
  }
  v11 = (_QWORD *)v9[1];
  if ( (_QWORD *)*v11 != v9 )
    goto LABEL_11;
  v6[1] = v11;
  *v6 = v9;
  *v11 = v6;
  v9[1] = v6;
  v12 = (_QWORD *)*v6;
  v13 = *v6 - 16LL;
  if ( (_QWORD *)*v6 != i )
  {
    v23 = *((unsigned int *)v7 + 1);
    if ( (_QWORD *)v13 == (_QWORD *)((char *)v7 + v23) )
    {
      *((_DWORD *)v7 + 1) = v23 + *(_DWORD *)(v13 + 4);
      v24 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_11;
      v25 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v25 != v12 )
        goto LABEL_11;
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
    }
  }
  v14 = (_QWORD *)v7[3];
  v15 = v14 - 2;
  if ( v14 != i )
  {
    v26 = *((unsigned int *)v15 + 1);
    if ( v7 == (_QWORD *)((char *)v15 + v26) )
    {
      *((_DWORD *)v15 + 1) = *((_DWORD *)v7 + 1) + v26;
      v27 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_11;
      v28 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v28 != v6 )
        goto LABEL_11;
      *v28 = v27;
      v7 = v15;
      *(_QWORD *)(v27 + 8) = v28;
    }
  }
  if ( *(_QWORD *)(v8 + 32) <= (unsigned __int64)v7 + *((unsigned int *)v7 + 1) )
  {
    *(_QWORD *)(v8 + 32) = v7;
    v16 = v7 + 2;
    v17 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) == v16 )
    {
      v18 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v18 == v16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        goto LABEL_10;
      }
    }
LABEL_11:
    __fastfail(3u);
  }
LABEL_10:
  KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
  return a3;
}
