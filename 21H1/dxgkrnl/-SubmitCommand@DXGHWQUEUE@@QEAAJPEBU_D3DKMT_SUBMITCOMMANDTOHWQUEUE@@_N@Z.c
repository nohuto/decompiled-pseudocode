/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C026A2FC
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C026D408 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C000A8F8 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0016FF4 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C0149E98 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C0268124 (-AllocateElements@-$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z.c)
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
  struct _SLIST_ENTRY *v26; // r15
  PSLIST_ENTRY v27; // rcx
  UINT PrivateDriverDataSize; // eax
  char *pPrivateDriverData; // rdx
  size_t v30; // r8
  struct _SLIST_ENTRY *v31; // rcx
  UINT v32; // r15d
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r15
  __int64 v39; // rax
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
  struct _SLIST_ENTRY *v53[2]; // [rsp+58h] [rbp-2A0h] BYREF
  ADAPTER_RENDER *v54; // [rsp+68h] [rbp-290h]
  __int64 v55; // [rsp+70h] [rbp-288h]
  void *v56; // [rsp+78h] [rbp-280h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v57; // [rsp+80h] [rbp-278h] BYREF
  PVOID P; // [rsp+2B0h] [rbp-48h] BYREF
  char v59; // [rsp+2B8h] [rbp-40h] BYREF
  unsigned int v60; // [rsp+2C0h] [rbp-38h]

  v54 = (ADAPTER_RENDER *)this;
  v55 = 0x8000000LL;
  v6 = this[2];
  if ( a2->PrivateDriverDataSize > LODWORD(v6[13].Next) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v7 + 24) = a2->PrivateDriverDataSize;
    *(_QWORD *)(v7 + 32) = LODWORD(this[2][13].Next);
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
  Next = v6[1].Next[1].Next;
  v53[0] = 0LL;
  v53[1] = Next;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v53);
  v14 = v53[0];
  if ( !v53[0] )
  {
    v15 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = 820LL;
    WdLogEvent5_WdLowResource(v15);
LABEL_5:
    CVidSchSubmitData::~CVidSchSubmitData(v53);
    return 3221225495LL;
  }
  v53[0]->Next = (struct _SLIST_ENTRY *)v55;
  P = 0LL;
  v60 = 0;
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
        *(_QWORD *)(v22 + 24) = 837LL;
        WdLogEvent5_WdLowResource(v22);
        if ( P != &v59 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v60 = 0;
        CVidSchSubmitData::~CVidSchSubmitData(v53);
        return 3221225495LL;
      }
      v23 = P;
      v55 = (__int64)P;
      v24 = v60;
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
  if ( !a2->PrivateDriverDataSize )
    goto LABEL_35;
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
    if ( P != &v59 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v60 = 0;
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
    && (&pPrivateDriverData[v30] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v30] > MmUserProbeAddress) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v31, pPrivateDriverData, v30);
  v32 = a2->PrivateDriverDataSize;
  if ( !v32 )
    goto LABEL_35;
  v54 = (ADAPTER_RENDER *)this[2][1].Next[1].Next;
  if ( !*(_QWORD *)(*((_QWORD *)v54 + 2) + 1296LL) )
    goto LABEL_35;
  memset(&v57, 0, sizeof(v57));
  v57.Flags.Value = 1;
  v57.Commands = a2->CommandBuffer;
  v57.CommandLength = a2->CommandLength;
  v57.ContextCount = 1;
  v57.Context[0] = this[4];
  v57.pPrivateDriverData = &v14[1].Next[1];
  v57.PrivateDriverDataSize = v32;
  v57.UmdPrivateDataSize = v32;
  v57.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
  v34 = ADAPTER_RENDER::DdiValidateSubmitCommand(v54, &v57, v33);
  v38 = v34;
  if ( v34 < 0 )
  {
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v39 + 24) = v38;
    *(_QWORD *)(v39 + 32) = 910LL;
  }
  else
  {
LABEL_35:
    *((_QWORD *)&v14[2].Next + 1) = a2->CommandBuffer;
    HIDWORD(v14[3].Next) = a2->CommandLength;
    LODWORD(v14[5].Next) = a2->PrivateDriverDataSize;
    v14[30].Next = (struct _SLIST_ENTRY *)a2->HwQueueProgressFenceId;
    *((_DWORD *)&v14[30].Next + 2) = 1;
    *((_QWORD *)&v14[31].Next + 1) = this[7];
    v14[31].Next = this[8];
    LODWORD(v38) = (*(__int64 (__fastcall **)(_QWORD, struct _SLIST_ENTRY *, _QWORD, void *, int, struct _SLIST_ENTRY *, struct _SLIST_ENTRY *, _QWORD))(*((_QWORD *)&this[2][1].Next[1].Next[40].Next->Next + 1) + 864LL))(
                     *((_QWORD *)&this[2][1].Next[1].Next[40].Next + 1),
                     this[2][1].Next,
                     a2->NumPrimaries,
                     v16,
                     1,
                     v14 + 12,
                     this[5],
                     0LL);
    if ( (int)v38 >= 0 )
    {
      p_Next = &v14[1].Next;
      v44 = v14[1].Next;
      if ( v44 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&v44->Next + 3);
        v14 = v53[0];
      }
      this[10] = (struct _SLIST_ENTRY *)((char *)this[10] + 1);
      v14[33].Next = this[10];
      v45 = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))(*(_QWORD *)(*((_QWORD *)&this[2][1].Next[1].Next[38].Next
                                                                                                  + 1)
                                                                                                + 8LL)
                                                                                    + 432LL))(
              this[5],
              v14);
      v38 = v45;
      if ( v45 >= 0 )
        goto LABEL_48;
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
      v39 = WdLogNewEntry5_WdWarning(v48, v46, v47);
      *(_QWORD *)(v39 + 24) = this;
      *(_QWORD *)(v39 + 32) = v38;
    }
    else
    {
      v39 = WdLogNewEntry5_WdWarning(v41, v40, v42);
      *(_QWORD *)(v39 + 24) = 936LL;
    }
  }
  WdLogEvent5_WdWarning(v39);
LABEL_48:
  v51 = v14[1].Next;
  if ( v51 )
    CRefCountedBuffer::RefCountedBufferRelease(v51);
  if ( P != &v59 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v60 = 0;
  CVidSchSubmitData::~CVidSchSubmitData(v53);
  return (unsigned int)v38;
}
