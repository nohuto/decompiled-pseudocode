/*
 * XREFs of ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C0067D64
 * Callers:
 *     ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0001F94 (-InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z @ 0x1C0067BB4 (-AppendReadyPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@PEA_K@Z.c)
 *     ?Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0084C68 (-Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C0084FA0 (-Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00BBBC8 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall VIDMM_PAGING_QUEUE::SetStatus(__int64 *a1, int a2)
{
  __int64 *v2; // rax
  __int64 v4; // rdi
  int v5; // edi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 **v9; // rcx
  struct _KEVENT *v10; // rcx
  __int64 **v11; // rcx
  __int64 *v12; // rax
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 **v15; // rcx
  __int64 *v16; // rax
  __int64 **v17; // rcx

  LODWORD(v2) = *(_DWORD *)&g_IsInternalReleaseOrDbg;
  v4 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v2 = (__int64 *)WdLogNewEntry5_WdTrace(a1);
    v2[3] = (__int64)a1;
    v2[4] = *((int *)a1 + 28);
    v2[5] = v4;
  }
  if ( !(_DWORD)v4 )
  {
    v12 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) == a1 )
    {
      v13 = (__int64 **)a1[1];
      if ( *v13 == a1 )
      {
        *v13 = v12;
        v12[1] = (__int64)v13;
        *a1 = 0LL;
        a1[1] = 0LL;
        *((_DWORD *)a1 + 28) = 0;
        v10 = (struct _KEVENT *)a1[15];
        goto LABEL_13;
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( *((_DWORD *)a1 + 28) == 2 )
    {
      v14 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 )
        goto LABEL_26;
      v15 = (__int64 **)a1[1];
      if ( *v15 != a1 )
        goto LABEL_26;
      *v15 = v14;
      v14[1] = (__int64)v15;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v6 = *((_BYTE *)a1 + 128) == 0;
    v7 = a1[10];
    *((_DWORD *)a1 + 28) = 1;
    if ( v6 )
    {
      if ( *((_BYTE *)a1 + 129) )
      {
        v8 = v7 + 96;
        goto LABEL_11;
      }
    }
    else if ( *((_DWORD *)a1 + 29) != 3 )
    {
      v8 = v7 + 112;
      goto LABEL_11;
    }
    v8 = v7 + 80;
LABEL_11:
    v9 = *(__int64 ***)(v8 + 8);
    if ( *v9 == (__int64 *)v8 )
    {
      *a1 = v8;
      a1[1] = (__int64)v9;
      *v9 = a1;
      *(_QWORD *)(v8 + 8) = a1;
      v10 = *(struct _KEVENT **)(a1[10] + 176);
LABEL_13:
      LODWORD(v2) = KeSetEvent(v10, 0, 0);
      return (int)v2;
    }
    goto LABEL_26;
  }
  if ( v5 != 1 )
    return (int)v2;
  if ( *((_DWORD *)a1 + 28) == 1 )
  {
    v16 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 )
      goto LABEL_26;
    v17 = (__int64 **)a1[1];
    if ( *v17 != a1 )
      goto LABEL_26;
    *v17 = v16;
    v16[1] = (__int64)v17;
    *a1 = 0LL;
    a1[1] = 0LL;
  }
  v2 = (__int64 *)(a1[10] + 128);
  v11 = *(__int64 ***)(a1[10] + 136);
  if ( *v11 != v2 )
    goto LABEL_26;
  *a1 = (__int64)v2;
  a1[1] = (__int64)v11;
  *v11 = a1;
  v2[1] = (__int64)a1;
  *((_DWORD *)a1 + 28) = 2;
  return (int)v2;
}
