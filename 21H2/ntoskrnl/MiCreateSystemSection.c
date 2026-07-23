/*
 * XREFs of MiCreateSystemSection @ 0x140371C2C
 * Callers:
 *     MiCreateSectionForDriver @ 0x14075DE08 (MiCreateSectionForDriver.c)
 *     MiOpenHotPatchFile @ 0x1408CCC68 (MiOpenHotPatchFile.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     MiCreateSection @ 0x14071CAF0 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     SeCompareSigningLevels @ 0x14077F400 (SeCompareSigningLevels.c)
 */

__int64 __fastcall MiCreateSystemSection(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  char v15; // bl
  void *v16; // rdi
  int v17; // ebp
  int v18; // r13d
  __int64 v19; // r12
  int i; // eax
  unsigned int v21; // esi
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  struct _FILE_OBJECT *v25; // rbx
  _KPROCESS *Process; // rcx
  char v28; // bp
  PACCESS_TOKEN v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // si
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  v33 = 0LL;
  if ( a12 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v28 = BYTE1(Process[2].Header.WaitListHead.Flink);
    v29 = PsReferencePrimaryToken(Process);
    v32 = a13;
    v16 = v29;
    v15 = v28;
    if ( a13 )
    {
      LOBYTE(v30) = a13;
      LOBYTE(v31) = v28;
      if ( !(unsigned int)SeCompareSigningLevels(v31, v30) )
        v15 = v32 & 0xF | v28 & 0x30;
    }
  }
  else
  {
    v15 = 0;
    v16 = 0LL;
  }
  v17 = a11;
  v18 = a7;
  v19 = a8;
  for ( i = MiCreateSection((unsigned int)&v33, a3, 0, a5, a6, a7, (__int64)v16, v15, a8, 0LL, 0, a11, 0LL);
        ;
        i = MiCreateSection((unsigned int)&v33, a3, 0, a5, a6, v18, (__int64)v16, v15, v19, 0LL, 0, v17, 0LL) )
  {
    v21 = i;
    if ( i >= 0 )
    {
      if ( v16 )
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
      v22 = v33;
      *a1 = v33;
      v23 = MiSectionControlArea(v22);
      v24 = v23;
      if ( v23 && *(_QWORD *)(v23 + 64) )
      {
        v25 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v23);
        CcZeroEndOfLastPage(v25);
        MiDereferenceControlAreaFile(v24, (unsigned __int64)v25);
      }
      return v21;
    }
    if ( i != -1073741740 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x746C6644u);
  return v21;
}
