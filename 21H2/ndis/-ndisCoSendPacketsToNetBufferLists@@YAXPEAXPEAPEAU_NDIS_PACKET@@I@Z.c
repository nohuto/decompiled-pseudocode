/*
 * XREFs of ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BB660
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005A00 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032C88 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z @ 0x1C0076044 (-ndisXlateSendPacketArrayToNetBufferLists@@YAEPEAU_NDIS_PKT_ARRAY_TO_NBLS@@@Z.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00BB054 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 */

void __fastcall ndisCoSendPacketsToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v6; // rax
  unsigned int v7; // edi
  struct _NDIS_RW_LOCK_EX *v9; // rcx
  struct _NDIS_PACKET **v10; // r14
  __int64 v11; // r15
  bool v12; // al
  struct _NDIS_PACKET **v13; // r9
  __int64 v14; // r15
  bool v15; // r13
  unsigned int v16; // r14d
  struct _NDIS_PACKET *v17; // rcx
  struct _NDIS_STACK_RESERVED *v18; // rax
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdi
  struct _NDIS_PACKET **v24; // rsi
  _QWORD v25[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+40h] [rbp-28h]
  int v27; // [rsp+44h] [rbp-24h]
  __int64 v28; // [rsp+48h] [rbp-20h]
  unsigned int v29; // [rsp+50h] [rbp-18h]
  int v30; // [rsp+54h] [rbp-14h]
  int v31; // [rsp+58h] [rbp-10h]
  int v32; // [rsp+5Ch] [rbp-Ch]
  struct _NDIS_STACK_RESERVED *v33; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+50h]
  struct _LOCK_STATE_EX LockState; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v36; // [rsp+C8h] [rbp+60h]

  v3 = a1[24];
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  v34 = a1[9];
  v6 = *(_QWORD *)(v3 + 400);
  v7 = 0;
  v27 = 0;
  v30 = 0;
  v9 = *(struct _NDIS_RW_LOCK_EX **)(v6 + 288);
  v32 = 0;
  v33 = 0LL;
  v36 = v6;
  NdisAcquireRWLockRead(v9, &LockState, 0);
  if ( *(_BYTE *)(a1[24] + 90LL) && a3 )
  {
    v10 = a2;
    v11 = a3;
    do
    {
      ndisCoIndicatePromiscPacket(
        a1,
        (struct _NDIS_MINIPORT_BLOCK *)a1[24],
        *(struct _NDIS_OPEN_BLOCK **)(v3 + 56),
        *v10++,
        0);
      --v11;
    }
    while ( v11 );
  }
  v25[0] = a1;
  v25[1] = a2;
  v26 = a3;
  v28 = 0LL;
  v31 = 2;
  v29 = 0;
  do
  {
    v12 = ndisXlateSendPacketArrayToNetBufferLists((struct _NDIS_PKT_ARRAY_TO_NBLS *)v25);
    v14 = v28;
    v15 = v12;
    if ( v28 )
    {
      v16 = v29;
      if ( v7 < v29 )
      {
        v13 = &a2[v7];
        do
        {
          v17 = *v13;
          ++*(_DWORD *)&v17[-1].ProtocolReserved[4];
          NDIS_STACK_RESERVED_FROM_PACKET(v17, &v33);
          v18 = v33;
          v13 = (struct _NDIS_PACKET **)(v19 + 8);
          *(_QWORD *)v33 = a1[10];
          *((_QWORD *)v18 + 1) = a1;
        }
        while ( v20 != 1 );
      }
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, struct _NDIS_PACKET **))a1[30])(a1[25], v14, 0LL, v13);
      v7 = v16;
    }
  }
  while ( v15 );
  if ( !v14 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        3u,
        0xBu,
        (struct _GUID *)&WPP_d3463f6b73bf32dd4c2bbb7d32504344_Traceguids);
    if ( v7 < a3 )
    {
      v21 = v7;
      v22 = a3 - v7;
      v23 = v34;
      v24 = &a2[v21];
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v23 + 48))(3221225626LL, *(_QWORD *)(v23 + 24), *v24++);
        --v22;
      }
      while ( v22 );
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v36 + 288), &LockState);
}
