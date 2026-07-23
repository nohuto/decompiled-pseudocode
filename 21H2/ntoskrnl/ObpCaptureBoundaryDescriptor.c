/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x1406BC5AC
 * Callers:
 *     NtOpenPrivateNamespace @ 0x1406BBF90 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x1406BC160 (NtCreatePrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x14066885C (RtlEnumerateBoundaryDescriptorEntries.c)
 *     ObpCheckDuplicateEntries @ 0x1406BC824 (ObpCheckDuplicateEntries.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(__m128i *Src, char **a2)
{
  __m128i *v4; // rax
  unsigned int v5; // edi
  char *v6; // rcx
  char *PoolWithTag; // rsi
  char v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // r15
  char *v12; // r15
  int v13; // edi
  int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rdi
  char *v17; // rcx
  unsigned int v18; // eax
  ULONG v19; // [rsp+20h] [rbp-88h]
  PVOID P; // [rsp+28h] [rbp-80h] BYREF
  size_t Size; // [rsp+30h] [rbp-78h]
  PVOID v22; // [rsp+38h] [rbp-70h]
  __m128i v23; // [rsp+40h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-58h] BYREF
  PVOID TokenInformation; // [rsp+C8h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a2 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = (__m128i *)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v4 = Src;
    v23 = *v4;
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
    v23.m128i_i32[2] = v5;
    if ( v5 - 16 > 0x7FEF )
      return 3221225485LL;
    if ( v5 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = &Src->m128i_i8[v5];
      if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < (char *)Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v23 = *Src;
    v5 = v23.m128i_u32[2];
  }
  PoolWithTag = 0LL;
  LODWORD(TokenInformation) = 0;
  v9 = 0;
  Size = v5;
  v10 = v5;
  P = 0LL;
  v19 = 0;
  if ( (v23.m128i_i8[12] & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      v13 = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, &P);
      if ( v13 < 0 )
        goto LABEL_20;
      v19 = RtlLengthSid(*(PSID *)P);
      v10 += ((v19 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
    v5 = v23.m128i_u32[2];
  }
  v11 = v10 + 48;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = -1073741675;
    goto LABEL_20;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v11, 0x534E624Fu);
  v22 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v13 = -1073741670;
    goto LABEL_20;
  }
  *((_QWORD *)PoolWithTag + 3) = (unsigned int)v11 - 48LL;
  v12 = PoolWithTag + 48;
  memmove(PoolWithTag + 48, Src, Size);
  if ( P )
  {
    v17 = &v12[Size];
    if ( &v12[Size] != (char *)((unsigned __int64)&v12[Size + 7] & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_38:
      v13 = -1073741811;
      goto LABEL_20;
    }
    *(_DWORD *)v17 = 2;
    v18 = ((v19 + 7) & 0xFFFFFFF8) + 8;
    *((_DWORD *)v17 + 1) = v18;
    v5 += v18;
    ++v23.m128i_i32[1];
    memmove(v17 + 8, *(const void **)P, v19);
  }
  *((_DWORD *)PoolWithTag + 14) = v5;
  *((_DWORD *)PoolWithTag + 13) = v23.m128i_i32[1];
  v13 = RtlEnumerateBoundaryDescriptorEntries((_DWORD *)PoolWithTag + 12, 0LL, 0LL);
  if ( v13 >= 0 && !(unsigned int)ObpCheckDuplicateEntries(PoolWithTag) )
    goto LABEL_38;
  PoolWithTag[40] = 0;
  RtlEnumerateBoundaryDescriptorEntries(
    (_DWORD *)PoolWithTag + 12,
    (unsigned int (__fastcall *)(_DWORD *, __int64))ObpHashBoundaryFunction,
    (__int64)PoolWithTag);
  v14 = (3134165325u * (unsigned __int64)(unsigned __int8)PoolWithTag[40]) >> 32;
  PoolWithTag[40] -= 37 * ((v14 + (((unsigned int)(unsigned __int8)PoolWithTag[40] - v14) >> 1)) >> 5);
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v13 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x534E624Fu);
  }
  else
  {
    *a2 = PoolWithTag;
  }
  return (unsigned int)v13;
}
