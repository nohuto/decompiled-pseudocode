/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0191040
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0044948 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00574F4 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0179A80 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C01DBD18 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C0317E84 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        struct _SLIST_ENTRY *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct _VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 Flags; // rdx
  int v11; // r15d
  __int64 BroadcastContextCount; // r12
  __int64 Next_low; // rcx
  struct _SLIST_ENTRY *v14; // r13
  PSLIST_ENTRY v15; // rbx
  struct _SLIST_ENTRY *v16; // rax
  int v17; // edx
  unsigned int v18; // eax
  struct _SLIST_ENTRY *v19; // rax
  int v20; // edx
  int v21; // r8d
  bool v22; // al
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // eax
  struct _SLIST_ENTRY *v26; // rdx
  struct _SLIST_ENTRY *v27; // r14
  PSLIST_ENTRY v28; // rdx
  int v29; // ecx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  struct _SLIST_ENTRY *v32; // rcx
  __int64 v33; // r14
  UINT v34; // r14d
  struct _SLIST_ENTRY *v35; // r15
  __int64 v36; // r12
  __int64 v37; // r14
  struct _SLIST_ENTRY *v38; // rax
  struct DXGCONTEXT *v39; // rcx
  int v40; // eax
  struct _SLIST_ENTRY *v41; // rdi
  __int64 i; // r8
  int v44; // eax
  struct _SLIST_ENTRY *v45; // rsi
  int v46; // eax
  unsigned int v47; // ebx
  int v48; // ecx
  struct _SLIST_ENTRY *v49; // rcx
  __int64 v50; // r14
  __int64 j; // rcx
  __int64 v52; // r12
  __int64 v53; // r8
  int v54; // eax
  struct _SLIST_ENTRY *v55; // [rsp+A0h] [rbp-728h]
  __int64 v56; // [rsp+A0h] [rbp-728h]
  struct _SLIST_ENTRY *v57[3]; // [rsp+C0h] [rbp-708h] BYREF
  struct _SLIST_ENTRY *Next; // [rsp+D8h] [rbp-6F0h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v59; // [rsp+E0h] [rbp-6E8h]
  struct COREDEVICEACCESS *v60; // [rsp+E8h] [rbp-6E0h]
  size_t v61; // [rsp+F0h] [rbp-6D8h]
  char *v62; // [rsp+F8h] [rbp-6D0h]
  struct _SLIST_ENTRY *v63; // [rsp+100h] [rbp-6C8h]
  _DXGKARG_VALIDATESUBMITCOMMAND v64; // [rsp+110h] [rbp-6B8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v65; // [rsp+340h] [rbp-488h] BYREF

  v59 = a4;
  v60 = a3;
  v57[2] = this;
  Flags = (unsigned int)a2->Flags;
  v11 = (Flags & 1 | 0x1000) << 15;
  LODWORD(v55) = v11;
  HIDWORD(v55) = (32 * (_BYTE)Flags) & 0x80;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  Next_low = LODWORD(this[13].Next);
  if ( a2->PrivateDriverDataSize > (unsigned int)Next_low )
  {
    WdLogSingleEntry2(3LL, a2->PrivateDriverDataSize, Next_low);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v55) = v11;
    v46 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1, a3);
    v47 = v46;
    if ( v46 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v46);
      return v47;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(Next_low, Flags, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventRender, (__int64)a3, 0LL);
    }
  }
  Next = this[1].Next[1].Next;
  v14 = Next;
  v57[1] = Next;
  ++HIDWORD(Next[81].Next);
  v15 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&v14[80]);
  if ( !v15 )
  {
    ++*((_DWORD *)&v14[81].Next + 2);
    v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))v14[83].Next)(
                          HIDWORD(v14[82].Next),
                          *((unsigned int *)&v14[82].Next + 3),
                          *((unsigned int *)&v14[82].Next + 2),
                          &v14[80]);
  }
  v57[0] = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(6LL, 2140LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      2140LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_101;
  }
  v16 = v14[1].Next;
  if ( *((int *)&v16[151].Next + 2) < 0x2000 )
    v17 = 1;
  else
    v17 = (int)v16[18].Next;
  if ( *((int *)&v16[151].Next + 2) >= 0x2000 || BYTE4(v16[170].Next) )
    v18 = 8 * v17 + *((_DWORD *)&v16[164].Next + 2) * ((v17 << 6) + ((8 * v17 + 231) & 0xFFFFFFF8)) + 616;
  else
    v18 = 1304;
  memset(v15, 0, v18);
  v19 = v14[1].Next;
  if ( *((int *)&v19[151].Next + 2) < 0x2000 )
    v20 = 1;
  else
    v20 = (int)v19[18].Next;
  v21 = *((_DWORD *)&v19[164].Next + 2);
  v22 = *((int *)&v19[151].Next + 2) >= 0x2000 || BYTE4(v19[170].Next);
  BYTE4(v15[22].Next) = v22;
  if ( v22 )
  {
    *((_DWORD *)&v15[37].Next + 3) = v21;
    LODWORD(v15[38].Next) = v20;
    v23 = 8 * v20;
    v24 = v20 << 6;
    HIDWORD(v15[38].Next) = v21 * (v24 + ((v23 + 231) & 0xFFFFFFF8)) + 16;
    v25 = v21 * (v24 + ((v23 + 231) & 0xFFFFFFF8)) + 616;
    *((_DWORD *)&v15[34].Next + 2) = v25;
    *((_DWORD *)&v15[34].Next + 3) = v23 + v25;
  }
  v15->Next = v55;
  if ( (v11 & 0x20) != 0 )
  {
    v48 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v48 = 3072;
    LODWORD(v15->Next) = (__int64)v15->Next & 0xFFFFFBFF | v48;
    if ( (struct _SLIST_ENTRY *)*((_QWORD *)&this[1].Next[115].Next + 1) != this[1].Next[1].Next[1].Next )
      HIDWORD(v15[7].Next) = 0;
  }
  if ( LODWORD(this[13].Next) )
  {
    v26 = this[1].Next[1].Next[1].Next;
    if ( !a2->PrivateDriverDataSize
      && LODWORD(v26[123].Next) < 0x8000
      && (*((_DWORD *)&v26[25].Next + 3) == 4318 || (HIDWORD(v26[27].Next) & 0x10) != 0) )
    {
      WdLogSingleEntry1(3LL, 2174LL);
      CVidSchSubmitData::~CVidSchSubmitData(v57);
      return 3221225485LL;
    }
    v27 = this[31].Next;
    ++HIDWORD(v27[1].Next);
    v28 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v27);
    if ( !v28 )
    {
      ++*((_DWORD *)&v27[1].Next + 2);
      v28 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))v27[3].Next)(
                            HIDWORD(v27[2].Next),
                            *((unsigned int *)&v27[2].Next + 3),
                            *((unsigned int *)&v27[2].Next + 2),
                            v27);
    }
    if ( v28 )
    {
      v15[1].Next = v28;
      v29 = (int)this[13].Next;
      v28->Next = this[31].Next;
      *((_DWORD *)&v28->Next + 2) = v29;
      *((_DWORD *)&v28->Next + 3) = 1;
      if ( a8 )
      {
        PrivateDriverDataSize = a2->PrivateDriverDataSize;
        v61 = PrivateDriverDataSize;
        pPrivateDriverData = (char *)a2->pPrivateDriverData;
        v62 = pPrivateDriverData;
        v32 = v15[1].Next + 1;
        v63 = v32;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v32, pPrivateDriverData, PrivateDriverDataSize);
      }
      else
      {
        memmove(&v15[1].Next[1], a2->pPrivateDriverData, a2->PrivateDriverDataSize);
      }
      goto LABEL_31;
    }
LABEL_101:
    CVidSchSubmitData::~CVidSchSubmitData(v57);
    return 3221225495LL;
  }
LABEL_31:
  *((_QWORD *)&v15[2].Next + 1) = a2->Commands;
  HIDWORD(v15[3].Next) = a2->CommandLength;
  *((_DWORD *)&v15[4].Next + 3) = this[13].Next;
  LODWORD(v15[5].Next) = a2->PrivateDriverDataSize;
  v33 = BroadcastContextCount;
  v56 = BroadcastContextCount;
  if ( (*(_DWORD *)&a2->Flags & 4) == 0 )
  {
    v34 = (UINT)this[13].Next;
    if ( v34 )
    {
      v35 = this[1].Next[1].Next;
      if ( *((_QWORD *)&v35[1].Next[84].Next + 1) )
      {
        v64.Flags.Value = 0;
        memset(&v64.ContextCount + 1, 0, 0x21CuLL);
        v64.Commands = a2->Commands;
        v64.CommandLength = a2->CommandLength;
        v64.ContextCount = BroadcastContextCount;
        if ( BroadcastContextCount > 0 )
        {
          for ( i = 0LL; i < BroadcastContextCount; ++i )
            v64.Context[i] = (HANDLE)*((_QWORD *)a5[i] + 23);
        }
        v64.pPrivateDriverData = &v15[1].Next[1];
        v64.PrivateDriverDataSize = v34;
        v64.UmdPrivateDataSize = a2->PrivateDriverDataSize;
        v44 = ADAPTER_RENDER::DdiValidateSubmitCommand((ADAPTER_RENDER *)v35, &v64);
        LODWORD(v35) = v44;
        if ( v44 < 0 )
        {
          WdLogSingleEntry2(3LL, v44, 2245LL);
          goto LABEL_45;
        }
      }
    }
    v33 = BroadcastContextCount;
LABEL_35:
    LODWORD(v35) = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *, _QWORD, D3DKMT_HANDLE *, _DWORD, struct _SLIST_ENTRY **, _QWORD, struct DXGCONTEXT **))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[40].Next + 1) + 8LL) + 872LL))(
                     this[1].Next[1].Next[41].Next,
                     this[1].Next,
                     a2->NumPrimaries,
                     a2->WrittenPrimaries,
                     BroadcastContextCount,
                     &v15[12].Next + 1,
                     0LL,
                     a5);
    if ( (int)v35 < 0 )
    {
      WdLogSingleEntry1(3LL, 2262LL);
    }
    else
    {
      *((_QWORD *)&v15[21].Next + 1) = a6;
      LODWORD(v15[22].Next) = a7;
      v36 = 0LL;
      if ( v33 <= 0 )
      {
LABEL_44:
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          memset(&v65, 0, sizeof(v65));
          v65.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
          v65.Token.Flip.FenceValue = a2->PresentHistoryToken;
          v54 = SubmitPresentHistoryToken(
                  &v65,
                  (struct _SLIST_ENTRY *)v60,
                  v59,
                  0LL,
                  0,
                  0LL,
                  0LL,
                  0LL,
                  (struct DXGCONTEXT *)this,
                  0LL,
                  0LL);
          LODWORD(v35) = v54;
          if ( (int)(v54 + 0x80000000) >= 0 && v54 != -1073741130 )
          {
            WdLogSingleEntry2(3LL, this, v54);
            LODWORD(v35) = 0;
          }
        }
      }
      else
      {
        v37 = 0LL;
        while ( 1 )
        {
          v38 = v15[1].Next;
          if ( v38 )
            _InterlockedIncrement((volatile signed __int32 *)&v38->Next + 3);
          v39 = a5[v37];
          if ( *((struct _KTHREAD **)v39 + 57) != KeGetCurrentThread() )
          {
            WdLogSingleEntry1(1LL, 2286LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
              2286LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v39 = a5[v37];
          }
          v40 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*((_QWORD *)&this[1].Next[1].Next[39].Next->Next + 1)
                                                                + 424LL))(
                  *((_QWORD *)v39 + 32),
                  v15);
          v35 = (struct _SLIST_ENTRY *)v40;
          if ( v40 < 0 )
            break;
          LODWORD(v15->Next) &= ~0x800u;
          v36 = (unsigned int)(v36 + 1);
          if ( ++v37 >= v56 )
            goto LABEL_44;
        }
        v49 = v15[1].Next;
        if ( v49 )
          CRefCountedBuffer::RefCountedBufferRelease(v49);
        v50 = (unsigned int)v36;
        do
          (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)&this[1].Next[1].Next[39].Next->Next + 1) + 440LL))(
            *((_QWORD *)a5[v36--] + 32),
            0LL);
        while ( v36 >= 0 );
        for ( j = v56; v50 < j; ++v50 )
        {
          v52 = 0LL;
          if ( a2->NumPrimaries )
          {
            do
            {
              v53 = *((_QWORD *)&v15[13].Next + v52);
              if ( v53 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[40].Next
                                                                                      + 1)
                                                                                    + 8LL)
                                                                        + 440LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5[v50] + 2) + 16LL) + 656LL),
                  0LL,
                  v53,
                  0LL);
              v52 = (unsigned int)(v52 + 1);
            }
            while ( (unsigned int)v52 < a2->NumPrimaries );
            j = v56;
          }
        }
        WdLogSingleEntry2(3LL, this, v35);
      }
    }
    goto LABEL_45;
  }
  LODWORD(v35) = CheckNoKmdAccessPrivateData(a2->PrivateDriverDataSize, &v15[1].Next[1], 0xFF000002);
  if ( (int)v35 >= 0 )
    goto LABEL_35;
LABEL_45:
  v41 = v15[1].Next;
  if ( v41 && _InterlockedExchangeAdd((volatile signed __int32 *)&v41->Next + 3, 0xFFFFFFFF) == 1 )
  {
    v45 = v41->Next;
    if ( v41->Next )
    {
      ++*((_DWORD *)&v45[1].Next + 3);
      if ( ExQueryDepthSList((PSLIST_HEADER)v45) >= LOWORD(v45[1].Next) )
      {
        ++LODWORD(v45[2].Next);
        (*((void (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))&v45[3].Next + 1))(v41, v45);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v45, v41);
      }
    }
    else
    {
      ExFreePoolWithTag(v41, 0);
    }
  }
  ++*((_DWORD *)&v14[81].Next + 3);
  if ( ExQueryDepthSList((PSLIST_HEADER)&v14[80]) >= LOWORD(v14[81].Next) )
  {
    ++LODWORD(v14[82].Next);
    (*((void (__fastcall **)(PSLIST_ENTRY, struct _SLIST_ENTRY *))&v14[83].Next + 1))(v15, v14 + 80);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)&v14[80], v15);
  }
  return (unsigned int)v35;
}
