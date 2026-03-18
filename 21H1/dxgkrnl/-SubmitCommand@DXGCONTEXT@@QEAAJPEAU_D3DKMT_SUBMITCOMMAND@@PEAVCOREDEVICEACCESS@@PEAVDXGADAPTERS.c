/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00F8F90
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F95F0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0038290 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x1C00466E8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0147070 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C0149E98 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
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
  __int64 Flags; // rcx
  unsigned int v11; // r15d
  __int64 BroadcastContextCount; // r13
  struct _SLIST_ENTRY *Next; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  PSLIST_ENTRY v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _SLIST_ENTRY *v19; // rcx
  int v20; // edx
  unsigned int v22; // edx
  struct _SLIST_ENTRY *v23; // rcx
  int v24; // edx
  bool v25; // al
  __int64 Next_low; // r8
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  struct _SLIST_ENTRY *v30; // rcx
  struct _SLIST_ENTRY *v31; // rdx
  struct _SLIST_ENTRY *v32; // rdi
  PSLIST_ENTRY v33; // rdx
  int v34; // ecx
  size_t PrivateDriverDataSize; // r8
  char *pPrivateDriverData; // rdx
  struct _SLIST_ENTRY *v37; // rcx
  UINT v38; // r15d
  struct _SLIST_ENTRY *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r15
  int v44; // r12d
  __int64 v45; // rdi
  struct _SLIST_ENTRY *v46; // rax
  struct DXGCONTEXT *v47; // rcx
  int v48; // eax
  __int64 v49; // r8
  struct _SLIST_ENTRY *v50; // rdi
  __int64 i; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct _SLIST_ENTRY *v57; // rsi
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  struct _SLIST_ENTRY *v69; // rcx
  __int64 v70; // rdi
  __int64 j; // r12
  __int64 v72; // r12
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rax
  struct _SLIST_ENTRY *v78; // [rsp+A0h] [rbp-718h]
  UINT v79; // [rsp+A8h] [rbp-710h]
  PSLIST_ENTRY ListEntry; // [rsp+B8h] [rbp-700h]
  struct _SLIST_ENTRY *v81; // [rsp+C0h] [rbp-6F8h]
  struct _SLIST_ENTRY *v82[4]; // [rsp+C8h] [rbp-6F0h] BYREF
  struct DXGADAPTERSTOPRESETLOCKSHARED *v83; // [rsp+E8h] [rbp-6D0h]
  struct COREDEVICEACCESS *v84; // [rsp+F0h] [rbp-6C8h]
  _DXGKARG_VALIDATESUBMITCOMMAND v85; // [rsp+100h] [rbp-6B8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v86; // [rsp+330h] [rbp-488h] BYREF

  v83 = a4;
  v84 = a3;
  v82[2] = this;
  Flags = (unsigned int)a2->Flags;
  v11 = (*(_DWORD *)&a2->Flags & 1 | 0x1000) << 15;
  v81 = (struct _SLIST_ENTRY *)v11;
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  v79 = a2->BroadcastContextCount;
  if ( a2->PrivateDriverDataSize > LODWORD(this[13].Next) )
  {
    v58 = WdLogNewEntry5_WdWarning(Flags, 0LL, a3);
    *(_QWORD *)(v58 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v58 + 32) = LODWORD(this[13].Next);
    WdLogEvent5_WdWarning(v58);
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v81) = v11;
    v59 = DXGCONTEXT::WaitForQueuedPresentLimit((DXGCONTEXT *)this, 0, 1u, a3);
    v61 = v59;
    if ( v59 < 0 )
    {
      v62 = WdLogNewEntry5_WdEvent(Flags, v60);
      *(_QWORD *)(v62 + 24) = this;
      *(_QWORD *)(v62 + 32) = v61;
      WdLogEvent5_WdEvent(v62);
      return (unsigned int)v61;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(Flags, 0LL, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventRender, (__int64)a3, 0LL);
    }
  }
  Next = this[1].Next[1].Next;
  v78 = Next;
  v82[3] = Next;
  v82[1] = Next;
  ++HIDWORD(Next[79].Next);
  v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&Next[78]);
  if ( !v16 )
  {
    ++*((_DWORD *)&Next[79].Next + 2);
    v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))Next[81].Next)(
                          HIDWORD(Next[80].Next),
                          *((unsigned int *)&Next[80].Next + 3),
                          *((unsigned int *)&Next[80].Next + 2),
                          &Next[78]);
  }
  v82[0] = v16;
  if ( !v16 )
  {
    v63 = WdLogNewEntry5_WdLowResource(v15, v14, v17, v18);
    *(_QWORD *)(v63 + 24) = 2139LL;
    WdLogEvent5_WdLowResource(v63);
    goto LABEL_73;
  }
  v19 = Next[1].Next;
  if ( SLODWORD(v19[144].Next) < 0x2000 )
    v20 = 1;
  else
    v20 = *((_DWORD *)&v19[17].Next + 2);
  if ( SLODWORD(v19[144].Next) >= 0x2000 || *((_BYTE *)&v19[162].Next + 12) )
    v22 = LODWORD(v19[157].Next) * ((v20 << 6) + ((8 * v20 + 199) & 0xFFFFFFF8)) + 8 * v20 + 584;
  else
    v22 = 1288;
  memset(v16, 0, v22);
  v23 = Next[1].Next;
  if ( SLODWORD(v23[144].Next) < 0x2000 )
    v24 = 1;
  else
    v24 = *((_DWORD *)&v23[17].Next + 2);
  v25 = SLODWORD(v23[144].Next) >= 0x2000 || *((_BYTE *)&v23[162].Next + 12);
  Next_low = LODWORD(v23[157].Next);
  *((_BYTE *)&v16[21].Next + 12) = v25;
  if ( v25 )
  {
    *((_DWORD *)&v16[35].Next + 3) = Next_low;
    LODWORD(v16[36].Next) = v24;
    v27 = 8 * v24;
    v28 = v24 << 6;
    HIDWORD(v16[36].Next) = Next_low * (v28 + ((v27 + 199) & 0xFFFFFFF8)) + 16;
    v29 = Next_low * (v28 + ((v27 + 199) & 0xFFFFFFF8)) + 584;
    *((_DWORD *)&v16[33].Next + 2) = v29;
    *((_DWORD *)&v16[33].Next + 3) = v27 + v29;
  }
  v16->Next = v81;
  if ( (v11 & 0x20) != 0 )
  {
    v64 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v64 = 3072;
    LODWORD(v16->Next) = (__int64)v16->Next & 0xFFFFFBFF | v64;
    if ( (struct _SLIST_ENTRY *)*((_QWORD *)&this[1].Next[115].Next + 1) != this[1].Next[1].Next[1].Next )
      HIDWORD(v16[7].Next) = 0;
  }
  if ( !LODWORD(this[13].Next) )
    goto LABEL_33;
  v30 = this[1].Next[1].Next;
  v31 = v30[1].Next;
  if ( !a2->PrivateDriverDataSize
    && *((_DWORD *)&v31[115].Next + 2) < 0x8000u
    && (HIDWORD(v31[20].Next) == 4318 || (*((_DWORD *)&v31[21].Next + 3) & 0x10) != 0) )
  {
    v65 = WdLogNewEntry5_WdWarning(v30, v31, Next_low);
    *(_QWORD *)(v65 + 24) = 2173LL;
    WdLogEvent5_WdWarning(v65);
    CVidSchSubmitData::~CVidSchSubmitData(v82);
    return 3221225485LL;
  }
  v32 = this[32].Next;
  ++HIDWORD(v32[1].Next);
  v33 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v32);
  if ( !v33 )
  {
    ++*((_DWORD *)&v32[1].Next + 2);
    v33 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))v32[3].Next)(
                          HIDWORD(v32[2].Next),
                          *((unsigned int *)&v32[2].Next + 3),
                          *((unsigned int *)&v32[2].Next + 2),
                          v32);
  }
  if ( !v33 )
  {
LABEL_73:
    CVidSchSubmitData::~CVidSchSubmitData(v82);
    return 3221225495LL;
  }
  v16[1].Next = v33;
  v34 = (int)this[13].Next;
  v33->Next = this[32].Next;
  *((_DWORD *)&v33->Next + 2) = v34;
  *((_DWORD *)&v33->Next + 3) = 1;
  if ( a8 )
  {
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    v37 = v16[1].Next + 1;
    if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
      || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v37, pPrivateDriverData, PrivateDriverDataSize);
  }
  else
  {
    memmove(&v16[1].Next[1], a2->pPrivateDriverData, a2->PrivateDriverDataSize);
  }
LABEL_33:
  *((_QWORD *)&v16[2].Next + 1) = a2->Commands;
  HIDWORD(v16[3].Next) = a2->CommandLength;
  *((_DWORD *)&v16[4].Next + 3) = this[13].Next;
  LODWORD(v16[5].Next) = a2->PrivateDriverDataSize;
  v38 = (UINT)this[13].Next;
  ListEntry = (PSLIST_ENTRY)BroadcastContextCount;
  if ( !v38 )
    goto LABEL_35;
  v39 = this[1].Next[1].Next;
  if ( !v39[1].Next[81].Next )
    goto LABEL_35;
  v85.Flags.Value = 0;
  memset(&v85.ContextCount + 1, 0, 0x21CuLL);
  v85.Commands = a2->Commands;
  v85.CommandLength = a2->CommandLength;
  v85.ContextCount = v79;
  if ( BroadcastContextCount > 0 )
  {
    for ( i = 0LL; i < BroadcastContextCount; ++i )
      v85.Context[i] = (HANDLE)*((_QWORD *)a5[i] + 23);
  }
  v85.pPrivateDriverData = &v16[1].Next[1];
  v85.PrivateDriverDataSize = v38;
  v85.UmdPrivateDataSize = a2->PrivateDriverDataSize;
  v53 = ADAPTER_RENDER::DdiValidateSubmitCommand((ADAPTER_RENDER *)v39, &v85);
  v43 = v53;
  if ( v53 < 0 )
  {
    v66 = WdLogNewEntry5_WdWarning(v55, v54, v56);
    *(_QWORD *)(v66 + 24) = v43;
    *(_QWORD *)(v66 + 32) = 2233LL;
    WdLogEvent5_WdWarning(v66);
  }
  else
  {
LABEL_35:
    LODWORD(v43) = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *, _QWORD, D3DKMT_HANDLE *, UINT, PSLIST_ENTRY, _QWORD, struct DXGCONTEXT **))(*((_QWORD *)&this[1].Next[1].Next[40].Next->Next + 1) + 864LL))(
                     *((_QWORD *)&this[1].Next[1].Next[40].Next + 1),
                     this[1].Next,
                     a2->NumPrimaries,
                     a2->WrittenPrimaries,
                     v79,
                     v16 + 12,
                     0LL,
                     a5);
    if ( (int)v43 < 0 )
    {
      v67 = WdLogNewEntry5_WdWarning(v41, v40, v42);
      *(_QWORD *)(v67 + 24) = 2250LL;
      WdLogEvent5_WdWarning(v67);
    }
    else
    {
      v16[21].Next = (struct _SLIST_ENTRY *)a6;
      *((_DWORD *)&v16[21].Next + 2) = a7;
      v44 = 0;
      if ( BroadcastContextCount <= 0 )
      {
LABEL_44:
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          memset(&v86, 0, sizeof(v86));
          v86.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
          v86.Token.Flip.FenceValue = a2->PresentHistoryToken;
          v74 = SubmitPresentHistoryToken(&v86, v84, v83, 0LL, 0, 0LL, 0LL, 0LL, (struct DXGCONTEXT *)this, 0LL, 0LL);
          v43 = v74;
          if ( (int)(v74 + 0x80000000) >= 0 && v74 != -1073741130 )
          {
            v77 = WdLogNewEntry5_WdWarning(0x80000000LL, v75, v76);
            *(_QWORD *)(v77 + 24) = this;
            *(_QWORD *)(v77 + 32) = v43;
            WdLogEvent5_WdWarning(v77);
            LODWORD(v43) = 0;
          }
        }
      }
      else
      {
        v45 = 0LL;
        while ( 1 )
        {
          v46 = v16[1].Next;
          if ( v46 )
            _InterlockedIncrement((volatile signed __int32 *)&v46->Next + 3);
          v47 = a5[v45];
          if ( *((struct _KTHREAD **)v47 + 59) != KeGetCurrentThread() )
          {
            v68 = WdLogNewEntry5_WdAssertion(v47, v40);
            *(_QWORD *)(v68 + 24) = 2274LL;
            WdLogEvent5_WdAssertion(v68);
            v47 = a5[v45];
          }
          v48 = (*(__int64 (__fastcall **)(_QWORD, PSLIST_ENTRY))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[38].Next
                                                                              + 1)
                                                                            + 8LL)
                                                                + 424LL))(
                  *((_QWORD *)v47 + 34),
                  v16);
          v43 = v48;
          if ( v48 < 0 )
            break;
          LODWORD(v16->Next) &= ~0x800u;
          ++v44;
          if ( ++v45 >= BroadcastContextCount )
            goto LABEL_44;
        }
        v69 = v16[1].Next;
        if ( v69 )
          CRefCountedBuffer::RefCountedBufferRelease(v69);
        v70 = v44;
        for ( j = v70; j >= 0; --j )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)&this[1].Next[1].Next[38].Next + 1) + 8LL)
                                                 + 440LL))(
            *((_QWORD *)a5[j] + 34),
            0LL);
        for ( ; v70 < BroadcastContextCount; ++v70 )
        {
          v72 = 0LL;
          if ( a2->NumPrimaries )
          {
            do
            {
              v49 = *((_QWORD *)&v16[12].Next + v72 + 1);
              if ( v49 )
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*((_QWORD *)&this[1].Next[1].Next[40].Next->Next
                                                                          + 1)
                                                                        + 432LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5[v70] + 2) + 16LL) + 648LL),
                  0LL,
                  v49,
                  0LL);
              v72 = (unsigned int)(v72 + 1);
            }
            while ( (unsigned int)v72 < a2->NumPrimaries );
            BroadcastContextCount = (__int64)ListEntry;
          }
        }
        v73 = WdLogNewEntry5_WdWarning(v69, v40, v49);
        *(_QWORD *)(v73 + 24) = this;
        *(_QWORD *)(v73 + 32) = v43;
        WdLogEvent5_WdWarning(v73);
      }
      Next = v78;
    }
  }
  v50 = v16[1].Next;
  if ( v50 && _InterlockedExchangeAdd((volatile signed __int32 *)&v50->Next + 3, 0xFFFFFFFF) == 1 )
  {
    v57 = v50->Next;
    if ( v50->Next )
    {
      ++*((_DWORD *)&v57[1].Next + 3);
      if ( ExQueryDepthSList((PSLIST_HEADER)v57) >= LOWORD(v57[1].Next) )
      {
        ++LODWORD(v57[2].Next);
        (*((void (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))&v57[3].Next + 1))(v50, v57);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v57, v50);
      }
    }
    else
    {
      ExFreePoolWithTag(v50, 0);
    }
  }
  ++*((_DWORD *)&Next[79].Next + 3);
  if ( ExQueryDepthSList((PSLIST_HEADER)&Next[78]) >= LOWORD(Next[79].Next) )
  {
    ++LODWORD(Next[80].Next);
    (*((void (__fastcall **)(PSLIST_ENTRY, struct _SLIST_ENTRY *))&Next[81].Next + 1))(v16, Next + 78);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[78], v16);
  }
  return (unsigned int)v43;
}
