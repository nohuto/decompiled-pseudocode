/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1C0096600
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00AE010 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00F379C (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C00053F4 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0005BF0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0007350 (VidSchiSendToExecutionQueue.c)
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0018D8C (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C00A71B8 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00F2F7C (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 i; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
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
  __int64 v23; // rbp
  UINT v24; // r10d
  UINT64 SegmentOffset; // r12
  UINT v26; // r9d
  __int64 v27; // rax
  struct VIDMM_PROCESS *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  struct _KEVENT *v34; // rcx
  int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  void (__fastcall *v41)(_QWORD); // rax
  __int64 v42; // rcx
  _QWORD *v43; // [rsp+58h] [rbp-110h]
  _DWORD v44[40]; // [rsp+70h] [rbp-F8h] BYREF
  _DXGKARG_SETROOTPAGETABLE v45; // [rsp+110h] [rbp-58h] BYREF

  v43 = (_QWORD *)*((_QWORD *)this + 11);
  v2 = v43[13];
  v3 = v43[12];
  v4 = *(_QWORD *)(v2 + 32);
  if ( (*(_BYTE *)(v4 + 3036) & 1) != 0
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
    v6 = *(__int64 **)(v4 + 632);
    if ( (unsigned int)v5 < *(_DWORD *)(v4 + 704) )
      v6 += v5;
    v7 = *v6;
    v8 = ++*(_QWORD *)(v7 + 48);
    *((_QWORD *)this + 15) = v8;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v3 + 24); ; VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)i, (__int64)v44, 20LL) )
    {
      *(_QWORD *)(i + 1456) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1416));
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1736), (_QWORD **)(v3 + 11248), 0LL);
      v11 = v10;
      if ( v10 )
        break;
      memset(v44, 0, sizeof(v44));
      v39 = *(unsigned __int16 *)(v3 + 4);
      v44[8] |= 0x41u;
      v44[12] = v39;
      v44[5] = 1;
    }
    memset(v10 - 2, 0, 0xE0uLL);
    v11[5] = this;
    v11[4] = v43;
    *((_DWORD *)v11 - 4) = 912353622;
    v11[6] = *((_QWORD *)this + 35);
    v12 = v11[5];
    v11[8] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v11 + 14) = 7;
    v13 = *((_DWORD *)v11 + 19) ^ (*((_DWORD *)v11 + 19) ^ (*(_DWORD *)(v12 + 72) >> 3)) & 4;
    *((_DWORD *)v11 + 19) = v13;
    v14 = ((unsigned __int8)v13 ^ (unsigned __int8)(*(_DWORD *)(v12 + 72) >> 4)) & 8 ^ v13;
    *((_DWORD *)v11 + 19) = v14;
    v15 = ((unsigned __int16)v14 ^ (unsigned __int16)(*(_DWORD *)(v12 + 72) >> 8)) & 0x100 ^ v14;
    *((_DWORD *)v11 + 19) = v15;
    v16 = ((unsigned __int8)v15 ^ (unsigned __int8)(4 * *(_DWORD *)(v12 + 72))) & 0x10 ^ v15 | 0x2000;
    *((_DWORD *)v11 + 19) = v16;
    v17 = *((_DWORD *)this + 32) != 0;
    v11[11] = v8;
    v18 = v16 & 0xFFFFBFFF | (v17 ? 0x4000 : 0);
    *((_DWORD *)v11 + 18) = 0;
    v19 = v11[6];
    *((_DWORD *)v11 + 19) = v18;
    *((_DWORD *)v11 + 20) = *((_DWORD *)this + 28);
    if ( v19 )
    {
      v36 = v18 | 2;
      *((_DWORD *)v11 + 19) = v36;
      *((_DWORD *)v11 + 19) = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      v11[12] = *(_QWORD *)(v19 + 160);
    }
    v11[20] = *(_QWORD *)(v12 + 312);
    if ( (*(_DWORD *)(v12 + 272) & 0x8000000) != 0 )
    {
      v20 = *(_QWORD *)(v12 + 288);
      if ( v20 )
      {
        v21 = v20 + 16;
      }
      else
      {
        v37 = *(_QWORD *)(v12 + 280);
        if ( v37 )
          v21 = *(_QWORD *)(v37 + 128);
        else
          v21 = 0LL;
      }
      v11[22] = v21;
      *((_DWORD *)v11 + 42) = *(_DWORD *)(v12 + 352);
    }
    else
    {
      v11[22] = 0LL;
    }
    *((_DWORD *)v11 + 34) = 0;
    *((_DWORD *)v11 + 35) = *(_DWORD *)(v12 + 348);
    *((_DWORD *)v11 + 32) = 0;
    *((_DWORD *)v11 + 33) = *(_DWORD *)(v12 + 324);
    v22 = *((_DWORD *)this + 18);
    if ( (v22 & 1) != 0 )
    {
      v40 = *((unsigned int *)this + 97);
      if ( (_DWORD)v40 != -1 && (v22 & 0x40000) == 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v4 + 8 * v40 + 3200) + 44232LL) != -1 )
        {
          v41 = *(void (__fastcall **)(_QWORD))(v4 + 3056);
          if ( v41 )
            v41(*(_QWORD *)(v4 + 3120));
        }
        *((_DWORD *)v11 + 19) |= 0x800u;
      }
    }
    v23 = 0LL;
    v24 = 0;
    SegmentOffset = 0LL;
    v26 = 0;
    v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11[4] + 104LL) + 40LL) + 8LL) + 64LL);
    if ( v27 )
    {
      v28 = *(struct VIDMM_PROCESS **)(v27 + 8);
      if ( v28 )
      {
        v29 = *(_QWORD *)(*((_QWORD *)v28 + 2) + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 16) + 240LL));
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 504);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v30 + 120) + 32LL * *(unsigned __int16 *)(v3 + 6);
            if ( v31 && *(_QWORD *)v31 && (v32 = *(_QWORD *)(*(_QWORD *)v31 + 16LL)) != 0 && *(_QWORD *)(v32 + 120) )
            {
              v23 = *(_QWORD *)(v31 + 8);
              v26 = *(_DWORD *)(v31 + 16);
              SegmentOffset = *(_QWORD *)(v32 + 128);
              v24 = *(_DWORD *)(v31 + 24);
            }
            else
            {
              WdLogSingleEntry2(1LL, *(_QWORD *)(v29 + 504), *(unsigned __int16 *)(v3 + 6));
              DxgkLogInternalTriageEvent(v42, 0x40000LL);
              v26 = 0;
              v24 = 0;
            }
          }
        }
        v33 = v11[4];
        if ( *(_QWORD *)(v33 + 816) != v23 && v26 )
        {
          *(_QWORD *)(v33 + 816) = v23;
          v38 = v11[4];
          *(&v45.Address.SegmentId + 1) = 0;
          *(&v45.NumEntries + 1) = 0;
          v45.hContext = *(HANDLE *)(v38 + 64);
          v45.Address.SegmentId = v24;
          v45.Address.SegmentOffset = SegmentOffset;
          v45.NumEntries = v26;
          if ( (*(_DWORD *)(v38 + 112) & 0x1000) == 0 )
          {
            ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v4 + 8), &v45);
            SegmentOffset = v45.Address.SegmentOffset;
          }
          v43[103] = SegmentOffset;
          VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
            *(VIDMM_GLOBAL **)(*(_QWORD *)(v4 + 8) + 656LL),
            v28,
            &v45,
            v43);
        }
      }
    }
    v34 = *(struct _KEVENT **)(v11[4] + 96LL);
    v11[8] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v11 + 14) = 8;
    v34[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v34 + 10);
    VidSchiSendToExecutionQueue((__int64)(v11 - 2), 1);
    return 0LL;
  }
}
