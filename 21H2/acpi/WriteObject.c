/*
 * XREFs of WriteObject @ 0x1C0017010
 * Callers:
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     Store @ 0x1C0016F00 (Store.c)
 *     Index @ 0x1C0019050 (Index.c)
 *     CondRefOf @ 0x1C0019C00 (CondRefOf.c)
 *     ToInteger @ 0x1C001C4B0 (ToInteger.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00277F0 (ConcatenateResTemplate.c)
 *     MidString @ 0x1C0028D90 (MidString.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     ProcessIncDec @ 0x1C002AD60 (ProcessIncDec.c)
 *     ExprOp1_64 @ 0x1C002BDF0 (ExprOp1_64.c)
 *     ExprOp2_32 @ 0x1C0031BC2 (ExprOp2_32.c)
 *     CopyObject @ 0x1C0069E40 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C0069F64 (ExprOp1_32.c)
 *     ProcessDivide @ 0x1C006A860 (ProcessDivide.c)
 *     ToBuffer @ 0x1C006AEE0 (ToBuffer.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     WriteField @ 0x1C0017D20 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0019958 (CopyObjBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     DumpObject @ 0x1C0068B08 (DumpObject.c)
 */

__int64 __fastcall WriteObject(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  unsigned int v7; // ebp
  struct _SLIST_ENTRY *v8; // r14
  unsigned int v9; // ebx
  _SLIST_ENTRY *v11; // rax
  size_t v12; // rdx
  _SLIST_ENTRY *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  _DWORD *v16; // r12
  _DWORD *v17; // r15
  int v18; // esi
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int v22; // edx
  int ObjectTypeName; // eax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_WORD *)(a2 + 2);
      if ( v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( !*(_WORD *)(a2 + 2) )
  {
    v7 = 0;
    v8 = (struct _SLIST_ENTRY *)gpheapGlobal;
    if ( a2 == a3 )
      return v7;
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
    if ( !*(_QWORD *)(a3 + 32) )
      return v7;
    v13 = NewObjData(v8, a3);
    *(_QWORD *)(a2 + 32) = v13;
    if ( !v13 )
    {
      v7 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(43, 0, 0, 0, 0LL);
      return v7;
    }
    memmove(v13, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v14 = *(unsigned __int16 *)(a2 + 2);
    if ( v14 >= 4 )
    {
      v15 = v14 - 4;
      if ( v15 )
      {
        v19 = v15 - 1;
        if ( !v19 )
          goto LABEL_50;
        v20 = v19 - 125;
        if ( !v20 )
        {
          v25 = *(_QWORD **)(a2 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*v25 + 112LL));
            v25 = *(_QWORD **)(a2 + 32);
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v25[1] + 112LL));
          goto LABEL_18;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            v24 = *(_QWORD **)(a2 + 32);
            if ( (gdwfAMLI & 4) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v24[1] + 112LL));
              v24 = *(_QWORD **)(a2 + 32);
            }
            if ( (gdwfAMLI & 4) != 0 )
              _InterlockedIncrement((volatile signed __int32 *)(*v24 + 112LL));
          }
        }
        else
        {
LABEL_50:
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(a2 + 32) + 112LL));
        }
      }
      else
      {
        v16 = *(_DWORD **)(a2 + 32);
        v17 = *(_DWORD **)(a3 + 32);
        v18 = 0;
        for ( *v16 = *v17; v18 < *v17; ++v18 )
        {
          v7 = DupObjData(v8, (__int64)&v16[10 * v18 + 2], (__int64)&v17[10 * v18 + 2]);
          if ( v7 )
            break;
        }
      }
    }
LABEL_18:
    *(_WORD *)a2 &= ~1u;
    _InterlockedExchange((volatile __int32 *)(a2 + 8), 0);
    return v7;
  }
  switch ( *(_WORD *)(a2 + 2) )
  {
    case 1:
      v26 = 0;
      if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v26), v26 >= 2) )
        v12 = 8LL;
      else
        v12 = 4LL;
      return CopyObjBuffer((void *)(a2 + 16), v12);
    case 2:
      v22 = *(_DWORD *)(a2 + 24);
      if ( v22 )
        return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v22 - 1));
      else
        return (unsigned int)-1073741811;
    case 3:
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
    case 5:
      v11 = HeapAlloc(a1 + 30, 1297237576, 0x30u);
      if ( v11 )
      {
        *((_QWORD *)&v11->Next + 1) = a1[26].Next;
        a1[26].Next = v11;
        *((_QWORD *)&v11[1].Next + 1) = AccFieldUnit;
        LODWORD(v11->Next) = 1430668097;
        v11[2].Next = (_SLIST_ENTRY *)a2;
        *((_QWORD *)&v11[2].Next + 1) = a3;
        return 0LL;
      }
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      v9 = -1072431102;
      break;
    case 0xE:
      return WriteField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
    case 0x10:
      if ( (gDebugger & 0x20000) != 0 )
        DumpObject(a3, 0x1C0000000uLL, 0LL);
      return 0LL;
    default:
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(215, ObjectTypeName, 0, 0, 0LL);
      return (unsigned int)-1072431095;
  }
  return v9;
}
