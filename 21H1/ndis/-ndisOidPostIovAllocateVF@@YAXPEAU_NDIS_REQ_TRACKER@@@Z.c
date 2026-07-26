/*
 * XREFs of ?ndisOidPostIovAllocateVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00780D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisOidPostIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  struct _NDIS_MINIPORT_BLOCK *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  _LIST_ENTRY *Flink; // rax
  unsigned __int16 v8; // r8
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v10; // rax
  __int64 v11; // r8
  __int64 *i; // rax
  __int64 *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 *j; // rax
  __int64 *v18; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  KIRQL v21; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  v4 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x21u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
    v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  }
  if ( v4 )
  {
    v5 = *(_QWORD *)(v1 + 144);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v5 )
        ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
      goto LABEL_7;
    }
    v6 = *(_QWORD *)(v1 + 40);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
    if ( v5 )
    {
      *(_WORD *)(v5 + 1722) = *(_WORD *)(v6 + 1626);
      *(_DWORD *)(v5 + 1724) = *(_DWORD *)(v6 + 1628);
    }
    Flink = v3->VFList.Flink;
    if ( Flink == &v3->VFList )
    {
LABEL_17:
      Blink = Flink->Blink;
      v10 = Blink->Flink;
      if ( Blink->Flink->Blink != Blink )
        goto LABEL_28;
      *(_QWORD *)v5 = v10;
      *(_QWORD *)(v5 + 8) = Blink;
      v10->Blink = (_LIST_ENTRY *)v5;
      Blink->Flink = (_LIST_ENTRY *)v5;
      ++v3->NumAllocatedVFs;
    }
    else
    {
      v8 = *(_WORD *)(v5 + 1722);
      while ( WORD1(Flink[107].Blink) != v8 )
      {
        if ( WORD1(Flink[107].Blink) <= v8 )
        {
          Flink = Flink->Flink;
          if ( Flink != &v3->VFList )
            continue;
        }
        goto LABEL_17;
      }
    }
    v11 = *(_QWORD *)(v5 + 56);
    for ( i = *(__int64 **)(v11 + 808); i != (__int64 *)(v11 + 808); i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 853) > *(_WORD *)(v5 + 1722) )
        break;
    }
    v13 = (__int64 *)i[1];
    v14 = (_QWORD *)(v5 + 16);
    v15 = *v13;
    if ( *(__int64 **)(*v13 + 8) == v13 )
    {
      *(_QWORD *)(v5 + 24) = v13;
      *v14 = v15;
      *(_QWORD *)(v15 + 8) = v14;
      *v13 = (__int64)v14;
      ++*(_DWORD *)(v11 + 800);
      v16 = *(_QWORD *)(v5 + 64);
      for ( j = *(__int64 **)(v16 + 80); j != (__int64 *)(v16 + 80); j = (__int64 *)*j )
      {
        if ( *((_WORD *)j + 845) > *(_WORD *)(v5 + 1722) )
          break;
      }
      v18 = (__int64 *)j[1];
      v19 = (_QWORD *)(v5 + 32);
      v20 = *v18;
      if ( *(__int64 **)(*v18 + 8) == v18 )
      {
        v21 = NewIrql;
        v19[1] = v18;
        *v19 = v20;
        *(_QWORD *)(v20 + 8) = v19;
        *v18 = (__int64)v19;
        ++*(_DWORD *)(v16 + 72);
        v3->MiniportThread = 0LL;
        KeReleaseSpinLock(&v3->Lock, v21);
        goto LABEL_7;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x22u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v3,
      v1);
}
