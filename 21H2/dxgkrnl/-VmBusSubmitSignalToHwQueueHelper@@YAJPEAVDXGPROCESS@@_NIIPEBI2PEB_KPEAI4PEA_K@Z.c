/*
 * XREFs of ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C024FD88
 * Callers:
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C024BC24 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 * Callees:
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0290DFC (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall VmBusSubmitSignalToHwQueueHelper(
        struct DXGPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned __int64 *a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned __int64 *a10)
{
  struct DXGPROCESS *v11; // r13
  __int64 i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 j; // rdi
  __int64 v21; // rdx
  unsigned int v22; // r11d
  unsigned int v23; // esi
  __int64 v24; // r9
  unsigned int v25; // ecx
  DXGSYNCOBJECT *v26; // rcx
  unsigned int HostHandle; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 *v30; // rdx
  char v32; // [rsp+78h] [rbp+10h]
  unsigned int v33; // [rsp+80h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v11 = a1;
  if ( a7 && a6 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a4 )
      {
        for ( j = 0LL; (unsigned int)j < v33; j = (unsigned int)(j + 1) )
        {
          v21 = (a6[j] >> 6) & 0xFFFFFF;
          v22 = a6[j] >> 30;
          v23 = *((_DWORD *)v11 + 64);
          if ( (unsigned int)v21 < v23
            && (LOBYTE(a3) = a6[j] >> 6,
                v24 = *((_QWORD *)v11 + 30),
                v25 = *(_DWORD *)(v24 + 16LL * (unsigned int)v21 + 8),
                v22 == ((v25 >> 5) & 3))
            && (v25 & 0x2000) == 0
            && (v25 & 0x1F) != 0
            && (LOBYTE(a3) = 2 * (a6[j] >> 6), (v25 & 0x1F) == 8) )
          {
            v26 = *(DXGSYNCOBJECT **)(v24 + 16LL * (unsigned int)v21);
          }
          else
          {
            v26 = 0LL;
          }
          if ( v26 )
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(v26, a6[j], a3);
          }
          else
          {
            if ( (unsigned int)v21 >= v23 )
              goto LABEL_34;
            a3 = *((_QWORD *)v11 + 30);
            v26 = (DXGSYNCOBJECT *)*(unsigned int *)(a3 + 16 * v21 + 8);
            if ( v22 != ((*(_DWORD *)(a3 + 16 * v21 + 8) >> 5) & 3)
              || ((unsigned __int16)v26 & 0x2000) != 0
              || ((unsigned __int8)v26 & 0x1F) == 0 )
            {
              goto LABEL_34;
            }
            v21 *= 2LL;
            v26 = (DXGSYNCOBJECT *)((unsigned __int8)v26 & 0x1F);
            if ( (_BYTE)v26 != 11 )
            {
              v28 = WdLogNewEntry5_WdError(v26, v21);
              *(_QWORD *)(v28 + 24) = 316LL;
              WdLogEvent5_WdError(v28);
LABEL_34:
              v18 = WdLogNewEntry5_WdError(v26, v21);
              v19 = a6[j];
              goto LABEL_16;
            }
            v29 = *(_QWORD *)(a3 + 8 * v21);
            if ( !v29 )
              goto LABEL_34;
            HostHandle = *(_DWORD *)(v29 + 44);
          }
          a9[j] = HostHandle;
          if ( v32 )
          {
            v30 = (unsigned __int64 *)&a7[j];
            if ( (unsigned __int64)v30 >= MmUserProbeAddress )
              v30 = (unsigned __int64 *)MmUserProbeAddress;
            a10[j] = *v30;
          }
          else
          {
            a10[j] = a7[j];
          }
        }
        return 0LL;
      }
      v13 = a5[i];
      v14 = (a5[i] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v14 >= *((_DWORD *)v11 + 64) )
        goto LABEL_11;
      LOBYTE(a3) = a5[i] >> 6;
      v15 = *((_QWORD *)v11 + 30);
      a1 = (struct DXGPROCESS *)*(unsigned int *)(v15 + 16 * v14 + 8);
      v13 = ((unsigned int)v13 >> 25) & 0x60;
      if ( (_BYTE)v13 != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
        || ((unsigned __int16)a1 & 0x2000) != 0
        || ((unsigned __int8)a1 & 0x1F) == 0 )
      {
        goto LABEL_11;
      }
      LOBYTE(a3) = 2 * (a5[i] >> 6);
      a1 = (struct DXGPROCESS *)((unsigned __int8)a1 & 0x1F);
      if ( (_BYTE)a1 != 15 )
        break;
      v17 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
LABEL_12:
      if ( !v17 )
      {
        v18 = WdLogNewEntry5_WdError(a1, v13);
        v19 = a5[i];
LABEL_16:
        *(_QWORD *)(v18 + 24) = v19;
        goto LABEL_45;
      }
      a8[i] = *(_DWORD *)(v17 + 28);
    }
    v16 = WdLogNewEntry5_WdError(a1, v13);
    *(_QWORD *)(v16 + 24) = 316LL;
    WdLogEvent5_WdError(v16);
LABEL_11:
    v17 = 0LL;
    goto LABEL_12;
  }
  v18 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v18 + 24) = 7562LL;
LABEL_45:
  WdLogEvent5_WdError(v18);
  return 3221225485LL;
}
