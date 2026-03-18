/*
 * XREFs of MiCreateSectionCommon @ 0x14062FC80
 * Callers:
 *     NtCreateSection @ 0x14062FC10 (NtCreateSection.c)
 *     NtCreateSectionEx @ 0x1408C30A0 (NtCreateSectionEx.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     CcZeroEndOfLastPage @ 0x1402818D4 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x14028244C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x14062FFB0 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140630C20 (MiCaptureSectionCreateExtendedParameters.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreateSectionCommon(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        ULONGLONG ullMultiplicand)
{
  struct _DMA_ADAPTER *v9; // r14
  BOOL v11; // edx
  char PreviousMode; // si
  __int64 result; // rax
  _KPROCESS *Process; // r15
  int SessionId; // r12d
  int Section; // r15d
  struct _DMA_ADAPTER *v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  struct _FILE_OBJECT *v20; // rbx
  int v21; // eax
  __int64 v22; // [rsp+70h] [rbp-68h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp-60h] BYREF
  __int64 v24; // [rsp+80h] [rbp-58h] BYREF
  _OWORD v25[5]; // [rsp+88h] [rbp-50h] BYREF
  _QWORD *v26; // [rsp+E0h] [rbp+8h]
  char v29; // [rsp+108h] [rbp+30h]

  v26 = (_QWORD *)a1;
  v9 = 0LL;
  DmaAdapter = 0LL;
  v24 = 0LL;
  v25[0] = 0LL;
  LODWORD(v22) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  v11 = (a6 & 0x2100000) != 0 && (a6 & 0x1100000) != 0x1100000;
  if ( (a6 & 0x2083FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v21 = -872153088;
    if ( (a6 & 0x2100000) == 0 )
      v21 = -867958784;
    if ( (v21 & a6) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0xC000000) == 0xC000000 || (a6 & 0x80080000) == 0x80080000 )
    return 3221225716LL;
  if ( (a5 & 0x701) != 0 )
    return 3221225541LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( a4 )
      v22 = *a4;
    goto LABEL_18;
  }
  if ( v11 )
    return 3221225716LL;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  *(_QWORD *)a1 = *(_QWORD *)a1;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = *a4;
  }
LABEL_18:
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand);
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PreviousMode == 1 )
    {
      v29 = BYTE1(Process[2].Header.WaitListHead.Flink);
      v9 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
    }
    else
    {
      v29 = 0;
    }
    SessionId = MmGetSessionIdEx((__int64)Process);
    while ( 1 )
    {
      Section = MiCreateSection(
                  (unsigned int)&DmaAdapter,
                  a3,
                  v22,
                  a5,
                  a6,
                  0,
                  (__int64)v9,
                  v29,
                  a7,
                  0LL,
                  PreviousMode,
                  SessionId,
                  (__int64)v25);
      if ( Section != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v9 )
      HalPutDmaAdapter(v9);
    if ( Section < 0 )
    {
      return (unsigned int)Section;
    }
    else
    {
      v17 = DmaAdapter;
      v18 = MiSectionControlArea((__int64)DmaAdapter);
      v19 = v18;
      if ( v18 && *(_QWORD *)(v18 + 64) )
      {
        v20 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v18);
        CcZeroEndOfLastPage(v20);
        MiDereferenceControlAreaFile(v19, (unsigned __int64)v20);
      }
      result = ObInsertObjectEx(v17, 0LL, a2, 0, 0, 0LL, &v24);
      if ( (int)result >= 0 )
        *v26 = v24;
    }
  }
  return result;
}
