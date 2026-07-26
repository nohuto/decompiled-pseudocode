/*
 * XREFs of ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0017C10
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

__int64 __fastcall ndisOidPreSupportedList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebp
  KIRQL v7; // dl
  unsigned __int8 v8; // bl
  __int64 v10; // rcx
  KIRQL v11; // dl
  KIRQL v12; // dl
  int v13; // eax
  unsigned __int8 v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v14 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Au,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    v8 = 1;
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_14;
  }
  v3 = *((_QWORD *)a1 + 3);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    goto LABEL_8;
  }
  if ( !*((_QWORD *)a1 + 1) )
  {
    v4 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL);
LABEL_8:
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    if ( *(_QWORD *)(v4 + 3088) )
    {
      v5 = 0;
      v6 = *(_DWORD *)(v4 + 3096) + *(_DWORD *)(v4 + 3408);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v6 )
      {
        v5 = -1073676268;
        *(_DWORD *)(v1 + 56) = v6;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      if ( v5 )
      {
LABEL_12:
        v7 = v14;
        *(_QWORD *)(v4 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v7);
LABEL_13:
        v8 = 1;
        goto LABEL_14;
      }
      memmove(*(void **)(v1 + 40), *(const void **)(v4 + 3088), *(unsigned int *)(v4 + 3096));
      v10 = *(unsigned int *)(v4 + 3096);
LABEL_18:
      memmove((void *)(*(_QWORD *)(v1 + 40) + v10), *(const void **)(v4 + 3400), *(unsigned int *)(v4 + 3408));
      v11 = v14;
      *(_QWORD *)(v4 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v11);
      *(_DWORD *)(*((_QWORD *)a1 + 4) + 52LL) = v6;
      goto LABEL_13;
    }
    goto LABEL_23;
  }
  if ( *((_QWORD *)a1 + 2) )
  {
    v8 = 0;
    goto LABEL_14;
  }
  v4 = *(_QWORD *)a1;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*(struct _NDIS_MINIPORT_BLOCK **)a1, &v14);
  if ( *(_QWORD *)(v4 + 496) )
  {
    v13 = 0;
    v6 = *(_DWORD *)(v4 + 200) + *(_DWORD *)(v4 + 3408);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < v6 )
    {
      v13 = -1073676268;
      *(_DWORD *)(v1 + 56) = v6;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( v13 )
      goto LABEL_12;
    memmove(*(void **)(v1 + 40), *(const void **)(v4 + 496), *(unsigned int *)(v4 + 200));
    v10 = *(unsigned int *)(v4 + 200);
    goto LABEL_18;
  }
LABEL_23:
  v12 = v14;
  *(_QWORD *)(v4 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v12);
  v8 = 0;
LABEL_14:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Bu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1);
  return v8;
}
