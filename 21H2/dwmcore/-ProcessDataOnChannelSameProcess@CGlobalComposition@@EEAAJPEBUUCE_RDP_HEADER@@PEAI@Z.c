/*
 * XREFs of ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800A1B90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800A3070 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::ProcessDataOnChannelSameProcess(
        CGlobalComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  volatile signed __int32 *v4; // rsi
  struct _SLIST_ENTRY *v5; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 *Next; // rax
  __int64 ***v13; // rcx
  struct _SLIST_ENTRY *i; // rbx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v19; // rcx
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  *a3 = 0;
  v8 = *((_DWORD *)a2 + 4);
  if ( v8 < 0x10000 && v8 < *((_DWORD *)this + 80) && (v9 = v8, v10 = *((_QWORD *)this + 37), *(_QWORD *)(v10 + 8 * v9)) )
  {
    v4 = *(volatile signed __int32 **)(v10 + 8 * v9);
    _InterlockedIncrement(v4 + 2);
    v5 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 3);
    v11 = 0;
    if ( !v5 )
      goto LABEL_14;
    Next = (__int64 *)v5[2].Next;
    if ( Next )
    {
      v13 = (__int64 ***)*((_QWORD *)&v5->Next + 1);
      if ( *v13 != (__int64 **)v5 )
        __fastfail(3u);
      *Next = (__int64)v5;
      Next[1] = (__int64)v13;
      *v13 = (__int64 **)Next;
      *((_QWORD *)&v5->Next + 1) = Next;
      v5[2].Next = 0LL;
    }
    for ( i = v5->Next; i != v5; i = i->Next )
    {
      v15 = CComposition::ProcessCommandBatch(
              this,
              &i[1].Next + 1,
              HIDWORD(i[1].Next),
              (struct CChannelContext *)v4,
              &v20);
      v11 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x73u, 0LL);
        break;
      }
      *a3 += v20;
    }
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x76Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x64u, 0LL);
  }
  if ( v5 )
  {
    v17 = *((_QWORD *)this + 64);
    InterlockedPushEntrySList((PSLIST_HEADER)(v17 + 192), v5 + 4);
    *(_DWORD *)(v17 + 208) = GetTickCount();
    *(_BYTE *)(v17 + 212) = 1;
  }
LABEL_14:
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
  return v11;
}
