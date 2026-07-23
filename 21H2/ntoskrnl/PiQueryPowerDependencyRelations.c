/*
 * XREFs of PiQueryPowerDependencyRelations @ 0x14074CBE8
 * Callers:
 *     PiQueryPowerRelations @ 0x14074C564 (PiQueryPowerRelations.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14062EA2C (PnpAcquireDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x140741B18 (PiGetProviderList.c)
 *     PiEnumerateProviderListEntry @ 0x14089DA8C (PiEnumerateProviderListEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiQueryPowerDependencyRelations(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // r13
  __int64 *ProviderList; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // r15
  __int64 *v7; // rbx
  _QWORD *v9; // r11
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rbp
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v24 = 0LL;
  PnpAcquireDependencyRelationsLock(0);
  v3 = a1 + 160;
  ProviderList = PiGetProviderList(*(_QWORD *)(a1 + 32));
  v5 = (_QWORD *)(a1 + 192);
  v6 = *(_QWORD **)(a1 + 192);
  while ( v6 != v5 )
  {
    v9 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v9 + 48) )
    {
      v10 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList == ProviderList )
        goto LABEL_13;
      do
      {
        PiEnumerateProviderListEntry(v10, &v24, 0LL);
        if ( v24 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
          if ( v11 )
          {
            if ( v9[5] == v11 + 160 )
              break;
          }
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != ProviderList );
      if ( v10 == ProviderList )
      {
LABEL_13:
        v12 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9
          || (v13 = (_QWORD *)v9[1], (_QWORD *)*v13 != v9)
          || (*v13 = v12, *(_QWORD *)(v12 + 8) = v13, v14 = v9[3], *(_QWORD **)(v14 + 8) != v9 + 3)
          || (v15 = (_QWORD *)v9[4], (_QWORD *)*v15 != v9 + 3) )
        {
LABEL_29:
          __fastfail(3u);
        }
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        ExFreePoolWithTag(v9, 0x72775044u);
      }
    }
  }
  v7 = (__int64 *)*ProviderList;
  while ( v7 != ProviderList )
  {
    PiEnumerateProviderListEntry(v7, &v24, 0LL);
    v7 = (__int64 *)*v7;
    if ( v24 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 16) )
        {
          v17 = (_QWORD *)*v5;
          if ( (_QWORD *)*v5 == v5 )
            goto LABEL_25;
          do
          {
            if ( v17[5] == v16 + 160 )
              break;
            v17 = (_QWORD *)*v17;
          }
          while ( v17 != v5 );
          if ( v17 == v5 )
          {
LABEL_25:
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72775044u);
            v19 = PoolWithTag;
            if ( !PoolWithTag )
            {
              v2 = -1073741670;
              break;
            }
            *((_BYTE *)PoolWithTag + 48) = 1;
            PoolWithTag[2] = v3;
            PoolWithTag[5] = v16 + 160;
            v20 = (_QWORD *)v5[1];
            if ( (_QWORD *)*v20 != v5 )
              goto LABEL_29;
            *v19 = v5;
            v21 = v16 + 176;
            v19[1] = v20;
            *v20 = v19;
            v5[1] = v19;
            v22 = v19 + 3;
            v23 = *(_QWORD **)(v21 + 8);
            if ( *v23 != v21 )
              goto LABEL_29;
            *v22 = v21;
            v22[1] = v23;
            *v23 = v22;
            *(_QWORD *)(v21 + 8) = v22;
          }
        }
      }
    }
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return v2;
}
