/*
 * XREFs of PnpAddVetoInformation @ 0x1408ABC1C
 * Callers:
 *     PnpCollectOpenHandlesCallBack @ 0x1408ABE00 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PnpAddVetoInformation(PVOID Object, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  char v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // rax
  PVOID *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  _QWORD *v19; // rcx

  v3 = (_QWORD *)*a2;
  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v9 = 1;
  v10 = *a2 - 24LL;
  if ( v4 == v3 )
    goto LABEL_15;
  while ( 1 )
  {
    if ( *(_DWORD *)(v10 + 16) == a3 )
    {
      v11 = *(_QWORD **)v10;
      v6 = (_QWORD *)v10;
      v9 = 0;
      while ( 1 )
      {
        v12 = (PVOID *)(v11 - 1);
        if ( (_QWORD *)v10 == v11 )
          goto LABEL_11;
        if ( *v12 == Object )
          return;
        if ( *v12 > Object )
        {
          v6 = v11;
          goto LABEL_11;
        }
        v11 = (_QWORD *)*v11;
      }
    }
    if ( *(_DWORD *)(v10 + 16) > a3 )
      break;
LABEL_11:
    v13 = *(_QWORD **)(v10 + 24);
    v10 = (__int64)(v13 - 3);
    if ( v4 == v13 )
      goto LABEL_14;
  }
  v4 = (_QWORD *)(v10 + 24);
LABEL_14:
  if ( v9 )
  {
LABEL_15:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4F706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 4) = a3;
      v15 = PoolWithTag + 3;
      v16 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v16 == v4 )
      {
        *v15 = v4;
        v6 = v5;
        v15[1] = v16;
        *v16 = v15;
        v4[1] = v15;
        v5[1] = v5;
        *v5 = v5;
        goto LABEL_18;
      }
LABEL_24:
      __fastfail(3u);
    }
  }
  else
  {
LABEL_18:
    v17 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x50706E50u);
    if ( v17 )
    {
      ObfReferenceObject(Object);
      *v17 = Object;
      v18 = v17 + 1;
      v19 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v19 != v6 )
        goto LABEL_24;
      *v18 = v6;
      v17[2] = v19;
      *v19 = v18;
      v6[1] = v18;
    }
    else if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x4F706E50u);
    }
  }
}
