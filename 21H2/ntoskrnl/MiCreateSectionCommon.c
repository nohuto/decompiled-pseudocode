/*
 * XREFs of MiCreateSectionCommon @ 0x1406FD140
 * Callers:
 *     NtCreateSection @ 0x1406FD0D0 (NtCreateSection.c)
 *     NtCreateSectionEx @ 0x14096C100 (NtCreateSectionEx.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     CcZeroEndOfLastPage @ 0x14028866C (CcZeroEndOfLastPage.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     MiCreateSection @ 0x1406FD4A0 (MiCreateSection.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x1406FE1A0 (MiCaptureSectionCreateExtendedParameters.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCreateSectionCommon(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address)
{
  void *v8; // r14
  BOOL v10; // edx
  int v11; // eax
  char PreviousMode; // si
  __int64 result; // rax
  int v14; // r12d
  _KPROCESS *Process; // r15
  int SessionId; // r13d
  int Section; // r15d
  PVOID v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  struct _FILE_OBJECT *v21; // rbx
  __int64 v22; // [rsp+70h] [rbp-68h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  __int64 v24; // [rsp+80h] [rbp-58h] BYREF
  __int128 v25; // [rsp+88h] [rbp-50h] BYREF
  int v26; // [rsp+98h] [rbp-40h]
  char v27; // [rsp+9Ch] [rbp-3Ch]
  _QWORD *v28; // [rsp+E0h] [rbp+8h]
  char v30; // [rsp+108h] [rbp+30h]

  v28 = (_QWORD *)a1;
  v8 = 0LL;
  Object = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  LODWORD(v22) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  v10 = (a6 & 0x2100000) != 0 && (a6 & 0x1100000) != 0x1100000;
  if ( (a6 & 0x2081FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v11 = -872022016;
    if ( (a6 & 0x2100000) == 0 )
      v11 = -867827712;
    if ( (v11 & a6) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0xC000000) == 0xC000000 )
    return 3221225716LL;
  if ( a6 < 0 )
  {
    if ( (a6 & 0x80000) != 0 || (a6 & 0x20000) != 0 )
      return 3221225716LL;
  }
  else if ( (a6 & 0xA0000) == 0xA0000 )
  {
    return 3221225716LL;
  }
  if ( (a5 & 0x701) != 0 )
    return 3221225541LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    if ( a4 )
      v22 = *a4;
    goto LABEL_22;
  }
  if ( v10 )
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
LABEL_22:
  result = MiCaptureSectionCreateExtendedParameters(Address, (__int64)&v25);
  if ( (int)result >= 0 )
  {
    v14 = 0;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PreviousMode == 1 )
    {
      v30 = BYTE1(Process[2].Header.WaitListHead.Flink);
      v8 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
    }
    else if ( (v26 & 8) != 0 )
    {
      v30 = BYTE12(v25);
      v14 = 16;
    }
    else
    {
      v30 = 0;
    }
    SessionId = MmGetSessionIdEx((__int64)Process);
    while ( 1 )
    {
      Section = MiCreateSection(
                  (unsigned int)&Object,
                  a3,
                  v22,
                  a5,
                  a6,
                  v14,
                  (__int64)v8,
                  v30,
                  a7,
                  0LL,
                  PreviousMode,
                  SessionId,
                  (__int64)&v25);
      if ( Section != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v8 )
      ObfDereferenceObject(v8);
    if ( Section < 0 )
    {
      return (unsigned int)Section;
    }
    else
    {
      v18 = Object;
      v19 = MiSectionControlArea((__int64)Object);
      v20 = v19;
      if ( v19 && *(_QWORD *)(v19 + 64) )
      {
        v21 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v19);
        CcZeroEndOfLastPage(v21);
        MiDereferenceControlAreaFile(v20, (unsigned __int64)v21);
      }
      result = ObInsertObjectEx(v18, 0LL, 0, 0LL, (__int64)&v24);
      if ( (int)result >= 0 )
        *v28 = v24;
    }
  }
  return result;
}
