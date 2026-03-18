/*
 * XREFs of AccFieldUnit @ 0x1C0016690
 * Callers:
 *     <none>
 * Callees:
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     WriteField @ 0x1C0017D20 (WriteField.c)
 *     PushAccFieldObj @ 0x1C001B7F8 (PushAccFieldObj.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall AccFieldUnit(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  _DWORD *v6; // rsi
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx
  __int16 v10; // ax
  _QWORD *v11; // r8
  int v12; // eax
  int v13; // eax
  __int64 v14; // r9
  _DWORD *v15; // r8
  __int64 v16; // rdx
  unsigned int Field; // eax
  int v19; // edx
  int v20; // edx
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v22; // rbx
  __int64 v23; // rdx
  _SLIST_ENTRY *v24; // rax
  _SLIST_ENTRY *i; // r8
  _SLIST_ENTRY **v26; // rcx
  _SLIST_ENTRY *v27; // r9
  __int64 v28; // rcx
  _SLIST_ENTRY *v29; // rax
  _SLIST_ENTRY *v30; // r9
  _SLIST_ENTRY *v31; // rbx
  _SLIST_ENTRY *v32; // rdx
  _SLIST_ENTRY **v33; // rax
  __int64 Next_high; // r10
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY **v36; // rax
  __int64 v37; // rcx
  _SLIST_ENTRY *v38; // rcx
  _SLIST_ENTRY **v39; // rax

  v3 = a3;
  if ( a3 )
    goto LABEL_22;
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  v7 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v7 )
  {
    v19 = v7 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          return v3;
LABEL_22:
        if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 && ghGlobalLock )
          ghGlobalLock(5LL, 1LL, qword_1C0082828, 0LL, &a1[20].Next + 1);
        if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
        {
          ConPrintf("=");
          PrintObject(*(_QWORD *)(a2 + 40));
        }
        Next = a1[26].Next;
        v22 = Next - 1;
        a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
        LODWORD(Next[-1].Next) = 0;
        byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v23 = *((_QWORD *)&Next[-1].Next + 1);
        v24 = *(_SLIST_ENTRY **)(v23 + 40);
        for ( i = (_SLIST_ENTRY *)(v23 + 40); v24 != i; v24 = v24->Next )
        {
          if ( Next < v24 )
            break;
        }
        v26 = (_SLIST_ENTRY **)*((_QWORD *)&v24->Next + 1);
        if ( *v26 == v24 )
        {
          *((_QWORD *)&Next->Next + 1) = v26;
          Next->Next = v24;
          *v26 = Next;
          *((_QWORD *)&v24->Next + 1) = Next;
          v27 = Next->Next;
          v28 = (__int64)&Next->Next[-1];
          if ( Next->Next != i )
          {
            Next_high = HIDWORD(v22->Next);
            if ( (_SLIST_ENTRY *)v28 == (_SLIST_ENTRY *)((char *)v22 + Next_high) )
            {
              HIDWORD(v22->Next) = Next_high + *(_DWORD *)(v28 + 4);
              v35 = v27->Next;
              if ( *(&v27->Next->Next + 1) != v27 )
                goto LABEL_45;
              v36 = (_SLIST_ENTRY **)*((_QWORD *)&v27->Next + 1);
              if ( *v36 != v27 )
                goto LABEL_45;
              *v36 = v35;
              *((_QWORD *)&v35->Next + 1) = v36;
            }
          }
          v29 = (_SLIST_ENTRY *)*((_QWORD *)&v22[1].Next + 1);
          v30 = v29 - 1;
          if ( v29 != i )
          {
            v37 = HIDWORD(v30->Next);
            if ( v22 == (_SLIST_ENTRY *)((char *)v30 + v37) )
            {
              HIDWORD(v30->Next) = HIDWORD(v22->Next) + v37;
              v38 = Next->Next;
              if ( *(&Next->Next->Next + 1) != Next )
                goto LABEL_45;
              v39 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
              if ( *v39 != Next )
                goto LABEL_45;
              *v39 = v38;
              v22 = v30;
              *((_QWORD *)&v38->Next + 1) = v39;
            }
          }
          if ( *(_QWORD *)(v23 + 32) > (unsigned __int64)v22 + HIDWORD(v22->Next) )
          {
LABEL_34:
            KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
            return v3;
          }
          *(_QWORD *)(v23 + 32) = v22;
          v31 = v22 + 1;
          v32 = v31->Next;
          if ( *(&v31->Next->Next + 1) == v31 )
          {
            v33 = (_SLIST_ENTRY **)*((_QWORD *)&v31->Next + 1);
            if ( *v33 == v31 )
            {
              *v33 = v32;
              *((_QWORD *)&v32->Next + 1) = v33;
              goto LABEL_34;
            }
          }
        }
LABEL_45:
        __fastfail(3u);
      }
      goto LABEL_12;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v6 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 96LL) + 8LL) + 64LL,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 96LL) + 8LL) + 96LL) + 8LL,
                             *(_QWORD *)(*(_QWORD *)v6 + 96LL) + 16LL,
                             8);
  }
  ++*(_DWORD *)(a2 + 16);
  v8 = v6[5];
  if ( (v8 & 0x80000010) == 0 )
  {
    v9 = *(_QWORD *)v6;
    v10 = *(_WORD *)(*(_QWORD *)v6 + 66LL);
    if ( v10 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
        goto LABEL_12;
    }
    else
    {
      if ( v10 != 132 )
        goto LABEL_12;
      v11 = *(_QWORD **)(v9 + 96);
      if ( (*(_DWORD *)(*(_QWORD *)(*v11 + 96LL) + 20LL) & 0x10) == 0
        && (*(_DWORD *)(*(_QWORD *)(v11[1] + 96LL) + 20LL) & 0x10) == 0 )
      {
        goto LABEL_12;
      }
    }
  }
  v6[5] = v8 | 0x80000000;
  if ( ghGlobalLock )
  {
    v12 = ghGlobalLock(5LL, 0LL, qword_1C0082828, RestartCtxtCallback, &a1[20].Next + 1);
    if ( v12 == 259 )
      return 32772;
    if ( v12 )
    {
      v3 = -1072431086;
      LogError(3222536210LL);
      AcpiDiagTraceAmlError(a1, 3222536210LL);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
      return v3;
    }
  }
LABEL_12:
  v13 = *(_DWORD *)(a2 + 16) + 1;
  *(_DWORD *)(a2 + 16) = v13;
  if ( (int)v6[5] < 0 )
  {
    v13 |= 0x20000u;
    *(_DWORD *)(a2 + 16) = v13;
  }
  v14 = *(_QWORD *)(a2 + 40);
  v15 = v6 + 2;
  v16 = *(_QWORD *)(a2 + 32);
  if ( (v13 & 0x10000) != 0 )
    Field = ReadField(a1, v16, v15, v14);
  else
    Field = WriteField(a1, v16, v15, v14);
  v3 = Field;
  if ( Field != 32772 && (_SLIST_ENTRY *)a2 == a1[26].Next )
    goto LABEL_22;
  return v3;
}
