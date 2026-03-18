/*
 * XREFs of CmpLockIXLockIntent @ 0x14067EF3C
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140657ADC (CmpUndoDeleteKeyForTransEx.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmEqualTrans @ 0x140721FD0 (CmEqualTrans.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

bool __fastcall CmpLockIXLockIntent(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax

  v3 = *a1;
  if ( !*a1 )
  {
    *a1 = 1;
    *((_QWORD *)a1 + 1) = a2;
LABEL_9:
    *(_QWORD *)(a2 + 16) = a1;
    return 1;
  }
  if ( v3 < 0 )
    return (unsigned __int8)CmEqualTrans(*(_QWORD *)(*((_QWORD *)a1 + 1) + 56LL), *(_QWORD *)(a2 + 56), a3) != 0;
  if ( v3 != 1 )
  {
    v9 = 0LL;
    while ( !(unsigned __int8)CmEqualTrans(
                                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v9) + 56LL),
                                *(_QWORD *)(a2 + 56),
                                a3) )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *a1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (*a1 + 1), 0x78494D43u);
        v11 = PoolWithTag;
        if ( !PoolWithTag )
          return 0;
        memmove(PoolWithTag, *((const void **)a1 + 1), 8LL * *a1);
        ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x78494D43u);
        v12 = *a1;
        *((_QWORD *)a1 + 1) = v11;
        v11[v12] = a2;
        goto LABEL_18;
      }
    }
    return 1;
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v7 + 56), *(_QWORD *)(a2 + 56), a3) )
    return 1;
  v8 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x78494D43u);
  if ( v8 )
  {
    *((_QWORD *)a1 + 1) = v8;
    *v8 = v7;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL) = a2;
LABEL_18:
    ++*a1;
    goto LABEL_9;
  }
  return 0;
}
