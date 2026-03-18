/*
 * XREFs of SeAuditProcessCreation @ 0x1407A401C
 * Callers:
 *     PspInsertProcess @ 0x14066F7BC (PspInsertProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsQueryProcessCommandLine @ 0x14030EFD0 (PsQueryProcessCommandLine.c)
 *     SepAdtLogAuditRecord @ 0x1403BD520 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     Feature_Servicing_2011c_29270241__private_IsEnabled @ 0x1403F1658 (Feature_Servicing_2011c_29270241__private_IsEnabled.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsLookupProcessByProcessId @ 0x1405E0070 (PsLookupProcessByProcessId.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14064FF78 (PsGetAllocatedFullProcessImageNameEx.c)
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall SeAuditProcessCreation(struct _KPROCESS *BugCheckParameter1, unsigned __int16 *a2)
{
  _QWORD *v2; // rsi
  unsigned __int16 *PoolWithTag; // r14
  unsigned int v5; // r13d
  void *v6; // rbx
  int AllocatedFullProcessImageName; // edi
  PEPROCESS v8; // rbx
  _QWORD *v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  bool v15; // r8
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  char v19; // [rsp+30h] [rbp-D0h]
  unsigned int NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Process; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  struct _LIST_ENTRY *Flink; // [rsp+78h] [rbp-88h]
  void *v28; // [rsp+80h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  LOBYTE(v2) = 0;
  v25 = a2;
  memset(NumberOfBytes, 0, sizeof(NumberOfBytes));
  PoolWithTag = 0LL;
  Process = 0LL;
  v5 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v19 = 0;
  DestinationString = 0LL;
  v23 = DestinationSid;
  if ( !BugCheckParameter1[1].ActiveProcessors.Bitmap[2] )
    return;
  v6 = (void *)BugCheckParameter1[1].AffinityPadding[2];
  Flink = BugCheckParameter1[1].Header.WaitListHead.Flink;
  v28 = v6;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                    (__int64)BugCheckParameter1,
                                    (__int64)&NumberOfBytes[1]);
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_36;
  if ( PsLookupProcessByProcessId(v6, &Process) < 0 )
  {
    v5 = 1845;
  }
  else
  {
    v8 = Process;
    if ( Process[1].ActiveProcessors.Bitmap[2] )
      PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&P);
    else
      v5 = 1844;
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  }
  v9 = PsReferencePrimaryToken(BugCheckParameter1);
  v2 = v9;
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9[27] + 32LL);
    if ( (v10 & 4) != 0 )
      v11 = 1938LL;
    else
      v11 = (v10 & 2 | 0xF20uLL) >> 1;
    v12 = *((unsigned int *)v9 + 52);
    v13 = v2[3];
    v26 = v13;
    if ( (unsigned int)v12 >= *((_DWORD *)v2 + 31) )
      v23 = SeNullSid;
    else
      AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(v2[19] + 16 * v12));
    HalPutDmaAdapter((PADAPTER_OBJECT)v2);
    LOBYTE(v2) = 0;
    if ( AllocatedFullProcessImageName < 0 )
      goto LABEL_36;
    if ( SepRmAuditProcessCommandLine )
    {
      if ( v25 )
      {
        PoolWithTag = v25;
      }
      else
      {
        AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                          (ULONG_PTR)BugCheckParameter1,
                                          0LL,
                                          0,
                                          0,
                                          NumberOfBytes);
        if ( AllocatedFullProcessImageName == -1073741820 )
        {
          PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4C436553u);
          if ( PoolWithTag )
          {
            AllocatedFullProcessImageName = PsQueryProcessCommandLine(
                                              (ULONG_PTR)BugCheckParameter1,
                                              (__int64)PoolWithTag,
                                              NumberOfBytes[0],
                                              0,
                                              NumberOfBytes);
            if ( AllocatedFullProcessImageName >= 0 )
            {
              v19 = 1;
              goto LABEL_29;
            }
            ExFreePoolWithTag(PoolWithTag, 0);
          }
        }
        RtlInitUnicodeString(&DestinationString, &word_1407C1980);
        PoolWithTag = (unsigned __int16 *)&DestinationString;
        if ( (unsigned int)Feature_Servicing_2011c_29270241__private_IsEnabled() )
          AllocatedFullProcessImageName = 0;
      }
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, &word_1407C1980);
      PoolWithTag = (unsigned __int16 *)&DestinationString;
    }
LABEL_29:
    SeCaptureSubjectContext(&SubjectContext);
    memset(Src, 0, 0x418uLL);
    Src[0] = 0x125000000005LL;
    LODWORD(Src[2]) = 524421;
    v14 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
    v15 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(v26), v13);
    v16 = *(unsigned __int8 *)(v14 + 1);
    Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
    Src[16] = Flink;
    Src[6] = v14;
    HIDWORD(Src[3]) = 4 * v16 + 8;
    LODWORD(Src[3]) = 4;
    Src[10] = &SeSubsystemName;
    Src[22] = *(_QWORD *)&NumberOfBytes[1];
    Src[7] = 0x2000000001LL;
    v17 = (unsigned __int16)**(_WORD **)&NumberOfBytes[1] + 16;
    Src[11] = 0x800000005LL;
    HIDWORD(Src[19]) = v17;
    Src[28] = v28;
    v18 = *PoolWithTag + 16;
    Src[15] = 0x80000000BLL;
    LODWORD(Src[19]) = 2;
    Src[23] = 0x400000015LL;
    Src[24] = v11;
    Src[27] = 0x80000000BLL;
    LODWORD(Src[31]) = 34;
    HIDWORD(Src[31]) = v18;
    Src[34] = PoolWithTag;
    if ( v15 )
    {
      Src[35] = 0x800000023LL;
      Src[36] = v13;
    }
    else
    {
      LODWORD(Src[35]) = 6;
    }
    if ( v5 )
    {
      Src[40] = v5;
      Src[39] = 0x400000015LL;
    }
    else
    {
      LODWORD(Src[39]) = 2;
      Src[42] = P;
      HIDWORD(Src[39]) = *(unsigned __int16 *)P + 16;
    }
    Src[46] = v23;
    LODWORD(Src[43]) = 4;
    LODWORD(Src[1]) = 11;
    HIDWORD(Src[43]) = 4 * (unsigned __int8)v23[1] + 8;
    SepAdtLogAuditRecord(Src);
    SeReleaseSubjectContext(&SubjectContext);
    if ( AllocatedFullProcessImageName >= 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  AllocatedFullProcessImageName = -1073741700;
LABEL_36:
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_37:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ExFreePoolWithTag(*(PVOID *)&NumberOfBytes[1], 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v19 != (_BYTE)v2 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
