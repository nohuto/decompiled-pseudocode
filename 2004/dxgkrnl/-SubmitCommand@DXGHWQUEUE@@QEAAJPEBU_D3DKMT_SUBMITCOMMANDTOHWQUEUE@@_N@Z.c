/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C026E7B8
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0271868 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004384 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016934 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9F4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C00DB7C4 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C0157668 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C026C494 (-AllocateElements@-$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(
        struct _SLIST_ENTRY **this,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2,
        char a3)
{
  struct _SLIST_ENTRY *v6; // rcx
  __int64 v7; // rax
  struct _SLIST_ENTRY *Next; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _SLIST_ENTRY *v14; // rsi
  __int64 v15; // rax
  void *v16; // r13
  UINT NumPrimaries; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  PVOID v23; // rcx
  size_t v24; // r8
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  struct _SLIST_ENTRY *v26; // r14
  PSLIST_ENTRY v27; // rcx
  UINT PrivateDriverDataSize; // eax
  char *pPrivateDriverData; // rdx
  size_t v30; // r8
  struct _SLIST_ENTRY *v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  UINT v37; // r14d
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct _SLIST_ENTRY **p_Next; // r13
  struct _SLIST_ENTRY *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  struct _SLIST_ENTRY *v48; // rcx
  UINT i; // r13d
  struct _SLIST_ENTRY *v50; // rcx
  struct _SLIST_ENTRY *v51; // rcx
  struct _SLIST_ENTRY *v53; // [rsp+58h] [rbp-2B0h]
  struct _SLIST_ENTRY *v54[2]; // [rsp+60h] [rbp-2A8h] BYREF
  ADAPTER_RENDER *v55; // [rsp+70h] [rbp-298h]
  void *v56; // [rsp+78h] [rbp-290h]
  int Next_high; // [rsp+80h] [rbp-288h]
  PVOID v58; // [rsp+88h] [rbp-280h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v59; // [rsp+90h] [rbp-278h] BYREF
  PVOID P; // [rsp+2C0h] [rbp-48h] BYREF
  char v61; // [rsp+2C8h] [rbp-40h] BYREF
  unsigned int v62; // [rsp+2D0h] [rbp-38h]

  v55 = (ADAPTER_RENDER *)this;
  LODWORD(v53) = 0x8000000;
  v6 = this[2];
  Next_high = HIDWORD(v6[26].Next);
  HIDWORD(v53) = (4 * (_BYTE)Next_high) & 0x80;
  if ( a2->PrivateDriverDataSize > LODWORD(v6[13].Next) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, (unsigned __int8)(4 * Next_high) & 0x80);
    *(_QWORD *)(v7 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v7 + 32) = LODWORD(this[2][13].Next);
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
  Next = v6[1].Next[1].Next;
  v54[0] = 0LL;
  v54[1] = Next;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v54);
  v14 = v54[0];
  if ( !v54[0] )
  {
    v15 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = 865LL;
    WdLogEvent5_WdLowResource(v15);
LABEL_5:
    CVidSchSubmitData::~CVidSchSubmitData(v54);
    return 3221225495LL;
  }
  v54[0]->Next = v53;
  P = 0LL;
  v62 = 0;
  v16 = 0LL;
  v56 = 0LL;
  NumPrimaries = a2->NumPrimaries;
  if ( NumPrimaries )
  {
    if ( a3 )
    {
      if ( !PagedPoolZeroedArray<unsigned int,2>::AllocateElements(&P, NumPrimaries) )
      {
        v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
        *(_QWORD *)(v22 + 24) = 882LL;
        WdLogEvent5_WdLowResource(v22);
        if ( P != &v61 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v62 = 0;
        CVidSchSubmitData::~CVidSchSubmitData(v54);
        return 3221225495LL;
      }
      v23 = P;
      v58 = P;
      v24 = v62;
      WrittenPrimaries = a2->WrittenPrimaries;
      if ( &WrittenPrimaries[v24] < WrittenPrimaries || (unsigned __int64)&WrittenPrimaries[v24] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v23, WrittenPrimaries, v24 * 4);
      v16 = P;
    }
    else
    {
      v16 = (void *)a2->WrittenPrimaries;
    }
    v56 = v16;
  }
  if ( a2->PrivateDriverDataSize )
  {
    v26 = this[2][32].Next;
    ++HIDWORD(v26[1].Next);
    v27 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v26);
    if ( !v27 )
    {
      ++*((_DWORD *)&v26[1].Next + 2);
      v27 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))v26[3].Next)(
                            HIDWORD(v26[2].Next),
                            *((unsigned int *)&v26[2].Next + 3),
                            *((unsigned int *)&v26[2].Next + 2),
                            v26);
    }
    if ( !v27 )
    {
      if ( P != &v61 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v62 = 0;
      goto LABEL_5;
    }
    v14[1].Next = v27;
    PrivateDriverDataSize = a2->PrivateDriverDataSize;
    v27->Next = v26;
    *((_DWORD *)&v27->Next + 2) = PrivateDriverDataSize;
    *((_DWORD *)&v27->Next + 3) = 1;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    v30 = a2->PrivateDriverDataSize;
    v31 = v14[1].Next + 1;
    if ( a3
      && (&pPrivateDriverData[v30] < pPrivateDriverData
       || (unsigned __int64)&pPrivateDriverData[v30] > MmUserProbeAddress) )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v31, pPrivateDriverData, v30);
  }
  if ( SBYTE4(v53) >= 0 )
  {
    v37 = a2->PrivateDriverDataSize;
    if ( v37 )
    {
      v55 = (ADAPTER_RENDER *)this[2][1].Next[1].Next;
      if ( *(_QWORD *)(*((_QWORD *)v55 + 2) + 1296LL) )
      {
        memset(&v59, 0, sizeof(v59));
        v59.Flags.Value = 1;
        v59.Commands = a2->CommandBuffer;
        v59.CommandLength = a2->CommandLength;
        v59.ContextCount = 1;
        v59.Context[0] = this[4];
        v59.pPrivateDriverData = &v14[1].Next[1];
        v59.PrivateDriverDataSize = v37;
        v59.UmdPrivateDataSize = v37;
        v59.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
        v39 = ADAPTER_RENDER::DdiValidateSubmitCommand(v55, &v59, v38);
        v32 = v39;
        if ( v39 < 0 )
        {
          v36 = WdLogNewEntry5_WdWarning(v41, v40, v42);
          *(_QWORD *)(v36 + 24) = v32;
          *(_QWORD *)(v36 + 32) = 966LL;
LABEL_50:
          WdLogEvent5_WdWarning(v36);
          goto LABEL_51;
        }
      }
    }
LABEL_34:
    *((_QWORD *)&v14[2].Next + 1) = a2->CommandBuffer;
    HIDWORD(v14[3].Next) = a2->CommandLength;
    LODWORD(v14[5].Next) = a2->PrivateDriverDataSize;
    v14[30].Next = (struct _SLIST_ENTRY *)a2->HwQueueProgressFenceId;
    *((_DWORD *)&v14[30].Next + 2) = 1;
    *((_QWORD *)&v14[31].Next + 1) = this[7];
    v14[31].Next = this[8];
    LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *, _QWORD, void *, int, struct _SLIST_ENTRY *, struct _SLIST_ENTRY *, _QWORD))(*((_QWORD *)&this[2][1].Next[1].Next[40].Next->Next + 1) + 864LL))(
                     *((_QWORD *)&this[2][1].Next[1].Next[40].Next + 1),
                     this[2][1].Next,
                     a2->NumPrimaries,
                     v16,
                     1,
                     v14 + 12,
                     this[5],
                     0LL);
    if ( (int)v32 >= 0 )
    {
      p_Next = &v14[1].Next;
      v44 = v14[1].Next;
      if ( v44 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v44->Next + 3);
        v14 = v54[0];
      }
      this[10] = (struct _SLIST_ENTRY *)((char *)this[10] + 1);
      v14[33].Next = this[10];
      v45 = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))(*(_QWORD *)(*((_QWORD *)&this[2][1].Next[1].Next[38].Next
                                                                                                  + 1)
                                                                                                + 8LL)
                                                                                    + 432LL))(
              this[5],
              v14);
      v32 = v45;
      if ( v45 >= 0 )
        goto LABEL_51;
      v48 = *p_Next;
      if ( *p_Next )
        CRefCountedBuffer::RefCountedBufferRelease(v48);
      for ( i = 0; i < a2->NumPrimaries; ++i )
      {
        v47 = *((_QWORD *)&v14[12].Next + i + 1);
        if ( v47 )
        {
          v50 = this[2][1].Next[1].Next;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*((_QWORD *)&v50[40].Next->Next + 1) + 432LL))(
            *((_QWORD *)&v50[40].Next + 1),
            0LL,
            v47,
            0LL);
        }
      }
      v36 = WdLogNewEntry5_WdWarning(v48, v46, v47);
      *(_QWORD *)(v36 + 24) = this;
      *(_QWORD *)(v36 + 32) = v32;
    }
    else
    {
      v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v36 + 24) = 992LL;
    }
    goto LABEL_50;
  }
  LODWORD(v32) = CheckNoKmdAccessPrivateData(a2->PrivateDriverDataSize, &v14[1].Next[1], 0xFF000002);
  if ( (int)v32 >= 0 )
    goto LABEL_34;
LABEL_51:
  v51 = v14[1].Next;
  if ( v51 )
    CRefCountedBuffer::RefCountedBufferRelease(v51);
  if ( P != &v61 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v62 = 0;
  CVidSchSubmitData::~CVidSchSubmitData(v54);
  return (unsigned int)v32;
}
