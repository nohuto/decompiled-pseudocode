/*
 * XREFs of ndisIfSetCompartmentJobObject @ 0x1C00B0A10
 * Callers:
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C012629C (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfSetCompartmentJobObject(__int64 a1, PVOID *a2, char a3)
{
  unsigned int v4; // edi
  PVOID *v5; // rbx
  PVOID *v8; // rsi
  KIRQL v9; // r12
  PVOID *i; // rax
  PVOID v11; // rcx
  void **v12; // rax
  PVOID **PoolWithTag; // rax
  PVOID **v14; // rbx
  PVOID *v15; // rax

  v4 = 0;
  v5 = 0LL;
  v8 = (PVOID *)(a1 + 1728);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  for ( i = (PVOID *)*v8; i != v8; i = (PVOID *)*i )
  {
    if ( i[2] == a2 )
    {
      v5 = i;
      break;
    }
  }
  if ( !a3 )
  {
    if ( v5 )
      goto LABEL_18;
    PoolWithTag = (PVOID **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6669444Eu);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_18;
    }
    PoolWithTag[2] = a2;
    ObfReferenceObject(a2);
    ++*(_DWORD *)(a1 + 1720);
    v15 = (PVOID *)*v8;
    if ( *((PVOID **)*v8 + 1) == v8 )
    {
      *v14 = v15;
      v14[1] = v8;
      v15[1] = v14;
      *v8 = v14;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  if ( v5 )
  {
    --*(_DWORD *)(a1 + 1720);
    ObfDereferenceObject(v5[2]);
    v11 = *v5;
    if ( *((PVOID **)*v5 + 1) == v5 )
    {
      v12 = (void **)v5[1];
      if ( *v12 == v5 )
      {
        *v12 = v11;
        *((_QWORD *)v11 + 1) = v12;
        ExFreePoolWithTag(v5, 0);
        goto LABEL_18;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
LABEL_18:
  KeReleaseSpinLock(&ndisIfListLock, v9);
  return v4;
}
