/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C007F970
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0090830 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00D04F0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0006A90 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007B40 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0008AF0 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000C0E0 (VidSchIsTDRPending.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0016058 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0017820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0082620 (VidSchWaitForCompletionEvent.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C008B210 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00CFABC (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 i; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // cf
  unsigned int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  void (__fastcall *v26)(_QWORD); // rax
  __int64 v27; // r13
  UINT v28; // r12d
  UINT64 SegmentOffset; // rbx
  UINT v30; // ebp
  __int64 v31; // r14
  struct VIDMM_PROCESS *v32; // r14
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  struct _KEVENT *v43; // rcx
  __int64 v45; // [rsp+20h] [rbp-118h]
  struct VIDMM_PROCESS *v46; // [rsp+20h] [rbp-118h]
  _QWORD *v47; // [rsp+28h] [rbp-110h]
  _DWORD v48[40]; // [rsp+40h] [rbp-F8h] BYREF
  _DXGKARG_SETROOTPAGETABLE v49; // [rsp+E0h] [rbp-58h] BYREF

  v47 = (_QWORD *)*((_QWORD *)this + 11);
  v2 = v47[13];
  v3 = v47[12];
  v4 = *(_QWORD *)(v2 + 32);
  if ( (*(_BYTE *)(v4 + 2940) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v2 + 32))
    || *(_BYTE *)(v2 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 200), 0, 0) )
  {
    VidSchiDiscardQueuePacket(this);
    return 3221225473LL;
  }
  else
  {
    v5 = *(unsigned __int16 *)(v3 + 4);
    v6 = *(__int64 **)(v4 + 624);
    if ( (unsigned int)v5 < *(_DWORD *)(v4 + 696) )
      v6 += v5;
    v7 = *v6;
    v45 = ++*(_QWORD *)(v7 + 48);
    *((_QWORD *)this + 15) = v45;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v3 + 24); ; VidSchWaitForCompletionEvent(i, v48, 20LL) )
    {
      *(_QWORD *)(i + 1440) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1400));
      v9 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1720), (_QWORD **)(v3 + 11232), 0LL);
      v10 = v9;
      if ( v9 )
        break;
      memset(v48, 0, sizeof(v48));
      v11 = *(unsigned __int16 *)(v3 + 4);
      v48[8] |= 0x41u;
      v48[12] = v11;
      v48[5] = 1;
    }
    memset(v9 - 2, 0, 0xE0uLL);
    v10[4] = v47;
    v10[5] = this;
    *((_DWORD *)v10 - 4) = 912353622;
    v10[6] = *((_QWORD *)this + 35);
    v12 = v10[5];
    v10[8] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v10 + 14) = 7;
    v13 = *((_DWORD *)v10 + 19) ^ (*((_DWORD *)v10 + 19) ^ (*(_DWORD *)(v12 + 72) >> 3)) & 4;
    *((_DWORD *)v10 + 19) = v13;
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(v12 + 72) >> 4)) & 8 ^ v13;
    *((_DWORD *)v10 + 19) = v14;
    v15 = ((unsigned __int16)v14 ^ (unsigned __int16)(*(_DWORD *)(v12 + 72) >> 8)) & 0x100 ^ v14;
    *((_DWORD *)v10 + 19) = v15;
    v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_DWORD *)(v12 + 72))) & 0x10 ^ v15 | 0x2000;
    *((_DWORD *)v10 + 19) = v16;
    v17 = *((_DWORD *)this + 32) != 0;
    v10[11] = v45;
    v18 = v16 & 0xFFFFBFFF | (v17 ? 0x4000 : 0);
    *((_DWORD *)v10 + 18) = 0;
    v19 = v10[6];
    *((_DWORD *)v10 + 19) = v18;
    *((_DWORD *)v10 + 20) = *((_DWORD *)this + 28);
    if ( v19 )
    {
      v20 = v18 | 2;
      *((_DWORD *)v10 + 19) = v20;
      *((_DWORD *)v10 + 19) = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      v10[12] = *(_QWORD *)(v19 + 160);
    }
    v10[20] = *(_QWORD *)(v12 + 312);
    if ( (*(_DWORD *)(v12 + 272) & 0x8000000) != 0 )
    {
      v21 = *(_QWORD *)(v12 + 288);
      if ( v21 )
      {
        v22 = v21 + 16;
      }
      else
      {
        v23 = *(_QWORD *)(v12 + 280);
        if ( v23 )
          v22 = *(_QWORD *)(v23 + 128);
        else
          v22 = 0LL;
      }
      v10[22] = v22;
      *((_DWORD *)v10 + 42) = *(_DWORD *)(v12 + 352);
    }
    else
    {
      v10[22] = 0LL;
    }
    *((_DWORD *)v10 + 34) = 0;
    *((_DWORD *)v10 + 35) = *(_DWORD *)(v12 + 348);
    *((_DWORD *)v10 + 32) = 0;
    *((_DWORD *)v10 + 33) = *(_DWORD *)(v12 + 324);
    v24 = *((_DWORD *)this + 18);
    if ( (v24 & 1) != 0 )
    {
      v25 = *((unsigned int *)this + 97);
      if ( (_DWORD)v25 != -1 && (v24 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 8 * v25 + 3104) + 33288LL) != -1 )
        {
          v26 = *(void (__fastcall **)(_QWORD))(v4 + 2960);
          if ( v26 )
            v26(*(_QWORD *)(v4 + 3024));
        }
        *((_DWORD *)v10 + 19) |= 0x800u;
      }
    }
    v27 = 0LL;
    v28 = 0;
    SegmentOffset = 0LL;
    v30 = 0;
    v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10[4] + 104LL) + 40LL) + 8LL) + 64LL);
    if ( v31 )
    {
      v32 = *(struct VIDMM_PROCESS **)(v31 + 8);
      v46 = v32;
      if ( v32 )
      {
        v33 = *(unsigned __int16 *)(v3 + 6);
        v34 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 232LL);
        v35 = *(_QWORD *)(*((_QWORD *)v32 + 2) + 8 * v34);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 504);
          if ( v36 )
          {
            v37 = *(unsigned __int16 *)(v3 + 6);
            v38 = *(_QWORD *)(v36 + 120) + 32LL * (unsigned int)v33;
            if ( v38 && *(_QWORD *)v38 && (v39 = *(_QWORD *)(*(_QWORD *)v38 + 16LL)) != 0 && *(_QWORD *)(v39 + 128) )
            {
              v27 = *(_QWORD *)(v38 + 8);
              v30 = *(_DWORD *)(v38 + 16);
              SegmentOffset = *(_QWORD *)(v39 + 136);
              v28 = *(_DWORD *)(v38 + 24);
            }
            else
            {
              SegmentOffset = 0LL;
              v40 = WdLogNewEntry5_WdAssertion(v34, v35, v33);
              *(_QWORD *)(v40 + 24) = v36;
              *(_QWORD *)(v40 + 32) = v37;
              WdLogEvent5_WdAssertion(v40);
            }
          }
          v32 = v46;
        }
        v41 = v10[4];
        if ( *(_QWORD *)(v41 + 816) != v27 && v30 )
        {
          *(_QWORD *)(v41 + 816) = v27;
          v42 = v10[4];
          *(&v49.Address.SegmentId + 1) = 0;
          *(&v49.NumEntries + 1) = 0;
          v49.hContext = *(HANDLE *)(v42 + 64);
          v49.Address.SegmentId = v28;
          v49.Address.SegmentOffset = SegmentOffset;
          v49.NumEntries = v30;
          if ( (*(_DWORD *)(v42 + 112) & 0x1000) == 0 )
          {
            ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v4 + 8), &v49);
            SegmentOffset = v49.Address.SegmentOffset;
          }
          v47[103] = SegmentOffset;
          VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
            *(VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 648LL),
            v32,
            &v49,
            v47);
        }
      }
    }
    v43 = *(struct _KEVENT **)(v10[4] + 96LL);
    v10[8] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v10 + 14) = 8;
    v43[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v43 + 10);
    VidSchiSendToExecutionQueue((__int64)(v10 - 2), 1);
    return 0LL;
  }
}
