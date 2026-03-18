/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C007E070
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C008D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D1920 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0006300 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00073B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0008360 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000B6C0 (VidSchIsTDRPending.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0014478 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080C20 (VidSchWaitForCompletionEvent.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00880A0 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00D0EEC (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  _QWORD *v1; // r15
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 i; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // cf
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  _QWORD *v23; // rdx
  __int64 v24; // r12
  UINT v25; // r9d
  UINT64 v26; // r10
  UINT v27; // r13d
  __int64 v28; // rcx
  struct VIDMM_PROCESS *v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // r14
  __int64 v35; // rax
  struct _KEVENT *v36; // rcx
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rax
  ADAPTER_RENDER *v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  void (__fastcall *v44)(_QWORD); // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+20h] [rbp-108h]
  _DWORD v47[40]; // [rsp+30h] [rbp-F8h] BYREF
  _DXGKARG_SETROOTPAGETABLE v48; // [rsp+D0h] [rbp-58h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v3 = v1[13];
  v4 = v1[12];
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 2940) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v3 + 32))
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    VidSchiDiscardQueuePacket(this);
    return 3221225473LL;
  }
  else
  {
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(__int64 **)(v5 + 624);
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 696) )
      v7 += v6;
    v8 = *v7;
    v46 = ++*(_QWORD *)(v8 + 48);
    *((_QWORD *)this + 15) = v46;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, v47, 20LL) )
    {
      *(_QWORD *)(i + 1440) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1400));
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1720), (_QWORD **)(v4 + 11232), 0LL);
      if ( v10 )
        break;
      memset(v47, 0, sizeof(v47));
      v42 = *(unsigned __int16 *)(v4 + 4);
      v47[8] |= 0x41u;
      v47[12] = v42;
      v47[5] = 1;
    }
    v11 = (__int64)(v10 - 2);
    memset((char *)v10 - 12, 0, 0xDCuLL);
    *(_QWORD *)(v11 + 56) = this;
    *(_DWORD *)v11 = 912353622;
    *(_QWORD *)(v11 + 48) = v1;
    *(_QWORD *)(v11 + 64) = *((_QWORD *)this + 35);
    v12 = *(_QWORD *)(v11 + 56);
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 7;
    v13 = *(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v11 + 92) ^ (*(_DWORD *)(v12 + 72) >> 3)) & 4;
    *(_DWORD *)(v11 + 92) = v13;
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(v12 + 72) >> 4)) & 8 ^ v13;
    *(_DWORD *)(v11 + 92) = v14;
    v15 = ((unsigned __int16)v14 ^ (unsigned __int16)(*(_DWORD *)(v12 + 72) >> 8)) & 0x100 ^ v14;
    *(_DWORD *)(v11 + 92) = v15;
    v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_DWORD *)(v12 + 72))) & 0x10 ^ v15 | 0x2000;
    *(_DWORD *)(v11 + 92) = v16;
    v17 = *((_DWORD *)this + 32) != 0;
    *(_QWORD *)(v11 + 104) = v46;
    v18 = v16 & 0xFFFFBFFF | (v17 ? 0x4000 : 0);
    *(_DWORD *)(v11 + 88) = 0;
    v19 = *(_QWORD *)(v11 + 64);
    *(_DWORD *)(v11 + 92) = v18;
    *(_DWORD *)(v11 + 96) = *((_DWORD *)this + 28);
    if ( v19 )
    {
      v38 = v18 | 2;
      *(_DWORD *)(v11 + 92) = v38;
      *(_DWORD *)(v11 + 92) = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      *(_QWORD *)(v11 + 112) = *(_QWORD *)(v19 + 160);
    }
    *(_QWORD *)(v11 + 176) = *(_QWORD *)(v12 + 312);
    if ( (*(_DWORD *)(v12 + 272) & 0x8000000) != 0 )
    {
      v20 = *(_QWORD *)(v12 + 288);
      if ( v20 )
      {
        v21 = v20 + 16;
      }
      else
      {
        v39 = *(_QWORD *)(v12 + 280);
        if ( v39 )
          v21 = *(_QWORD *)(v39 + 128);
        else
          v21 = 0LL;
      }
      *(_QWORD *)(v11 + 192) = v21;
      *(_DWORD *)(v11 + 184) = *(_DWORD *)(v12 + 352);
    }
    else
    {
      *(_QWORD *)(v11 + 192) = 0LL;
    }
    *(_DWORD *)(v11 + 152) = 0;
    *(_DWORD *)(v11 + 156) = *(_DWORD *)(v12 + 348);
    *(_DWORD *)(v11 + 144) = 0;
    *(_DWORD *)(v11 + 148) = *(_DWORD *)(v12 + 324);
    v22 = *((_DWORD *)this + 18);
    if ( (v22 & 1) != 0 )
    {
      v43 = *((unsigned int *)this + 97);
      if ( (_DWORD)v43 != -1 && (v22 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 8 * v43 + 3104) + 33288LL) != -1 )
        {
          v44 = *(void (__fastcall **)(_QWORD))(v5 + 2960);
          if ( v44 )
            v44(*(_QWORD *)(v5 + 3024));
        }
        *(_DWORD *)(v11 + 92) |= 0x800u;
      }
    }
    v23 = *(_QWORD **)(v11 + 48);
    v24 = 0LL;
    v25 = 0;
    v26 = 0LL;
    v27 = 0;
    v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23[13] + 40LL) + 8LL) + 64LL);
    if ( v28 )
      v29 = *(struct VIDMM_PROCESS **)(v28 + 8);
    else
      v29 = 0LL;
    if ( v29 )
    {
      v30 = *(unsigned __int16 *)(v4 + 6);
      v31 = *(unsigned int *)(*(_QWORD *)(v5 + 16) + 232LL);
      v32 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 8 * v31);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 504);
        if ( v33 )
        {
          v34 = *(unsigned __int16 *)(v4 + 6);
          v35 = *(_QWORD *)(v33 + 120) + 32LL * (unsigned int)v30;
          if ( v35 && (v31 = *(_QWORD *)v35) != 0 && (v31 = *(_QWORD *)(v31 + 8)) != 0 && *(_QWORD *)(v31 + 128) )
          {
            v24 = *(_QWORD *)(v35 + 8);
            v27 = *(_DWORD *)(v35 + 16);
            v26 = *(_QWORD *)(v31 + 136);
            v25 = *(_DWORD *)(v35 + 24);
          }
          else
          {
            v45 = WdLogNewEntry5_WdAssertion(v31, v32, v30);
            *(_QWORD *)(v45 + 24) = v33;
            *(_QWORD *)(v45 + 32) = v34;
            WdLogEvent5_WdAssertion(v45);
            v25 = 0;
            v26 = 0LL;
          }
        }
      }
      v23 = *(_QWORD **)(v11 + 48);
      if ( v23[102] != v24 )
      {
        if ( v27 )
        {
          v23[102] = v24;
          v40 = *(_QWORD *)(v11 + 48);
          *(&v48.Address.SegmentId + 1) = 0;
          *(&v48.NumEntries + 1) = 0;
          v48.hContext = *(HANDLE *)(v40 + 64);
          v41 = *(ADAPTER_RENDER **)(v5 + 8);
          v48.Address.SegmentId = v25;
          v48.Address.SegmentOffset = v26;
          v48.NumEntries = v27;
          ADAPTER_RENDER::DdiSetRootPageTable(v41, &v48);
          v1[103] = v48.Address.SegmentOffset;
          VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
            *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 648LL),
            v29,
            &v48,
            v1);
          v23 = *(_QWORD **)(v11 + 48);
        }
      }
    }
    v36 = (struct _KEVENT *)v23[12];
    *(_QWORD *)(v11 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v11 + 72) = 8;
    v36[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v36 + 10);
    VidSchiSendToExecutionQueue(v11, 1);
    return 0LL;
  }
}
