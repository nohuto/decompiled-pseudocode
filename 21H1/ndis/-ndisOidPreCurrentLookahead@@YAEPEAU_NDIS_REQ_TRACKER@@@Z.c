/*
 * XREFs of ?ndisOidPreCurrentLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0037DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall ndisOidPreCurrentLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  char v3; // di
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rax
  int v16; // eax
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v3 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      *(_QWORD *)a1,
      v1);
  v4 = *(_DWORD *)(v1 + 4);
  if ( (v4 & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676266;
      goto LABEL_15;
    }
    v15 = *((_QWORD *)a1 + 3);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 264);
    }
    else
    {
      if ( !*(_QWORD *)a1 )
        goto LABEL_15;
      v16 = *(_DWORD *)(*(_QWORD *)a1 + 596LL);
    }
    **(_DWORD **)(v1 + 40) = v16;
    *(_DWORD *)(v1 + 52) = 4;
    goto LABEL_15;
  }
  if ( v4 != 1 )
    goto LABEL_15;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x2Du,
        (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
        0,
        v1,
        -1073676268);
  }
  else
  {
    v5 = **(_DWORD **)(v1 + 40);
    if ( *((_QWORD *)a1 + 3) )
    {
      v6 = *(_QWORD *)(v1 + 104);
      NewIrql = 0;
      v7 = *(_QWORD *)(v6 + 16);
      if ( v5 <= *(_DWORD *)(v7 + 596) )
      {
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*(struct _NDIS_MINIPORT_BLOCK **)(v6 + 16), &NewIrql);
        v8 = *(_QWORD *)(v7 + 56);
        v9 = 0;
        while ( v8 )
        {
          v10 = v9;
          v9 = *(_DWORD *)(v8 + 264);
          v8 = *(_QWORD *)(v8 + 392);
          if ( v9 <= v10 )
            v9 = v10;
        }
        *(_QWORD *)(v7 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), NewIrql);
        if ( v5 > v9 )
        {
          v3 = 0;
          *(_DWORD *)(v1 + 164) = v5;
          *(_QWORD *)(v1 + 152) = *(_QWORD *)(v1 + 40);
          *(_DWORD *)(v1 + 160) = *(_DWORD *)(v1 + 48);
          *(_DWORD *)(v1 + 48) = 4;
          *(_QWORD *)(v1 + 40) = v1 + 164;
          goto LABEL_15;
        }
        *(_DWORD *)(v6 + 264) = v5;
        goto LABEL_19;
      }
      goto LABEL_22;
    }
    v11 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_15;
    v13 = *(_DWORD *)(v11 + 596);
    if ( v5 > v13 )
    {
LABEL_22:
      *(_DWORD *)(v1 + 52) = 0;
      *(_DWORD *)(v1 + 56) = 0;
      *((_DWORD *)a1 + 10) = -1073676268;
      goto LABEL_15;
    }
    v14 = *(_DWORD *)(v11 + 592);
    if ( v5 < v14 )
    {
      *(_DWORD *)(v1 + 52) = 4;
      *(_DWORD *)(v1 + 56) = 4;
LABEL_19:
      *((_DWORD *)a1 + 10) = 0;
      goto LABEL_15;
    }
    if ( v14 )
      v13 = **(_DWORD **)(v1 + 40);
    if ( v13 > v14 )
    {
      v3 = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 52) = 4;
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
LABEL_15:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      *(_QWORD *)a1,
      v1);
  return v3;
}
