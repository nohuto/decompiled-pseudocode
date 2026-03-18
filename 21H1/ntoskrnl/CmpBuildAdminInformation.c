/*
 * XREFs of CmpBuildAdminInformation @ 0x1406BBF30
 * Callers:
 *     CmpCheckAdminAccess @ 0x1406BBE58 (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x140256B40 (RtlSidHashInitialize.c)
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeQueryInformationToken @ 0x1405E9F20 (SeQueryInformationToken.c)
 *     RtlCopySidAndAttributesArray @ 0x140608EE0 (RtlCopySidAndAttributesArray.c)
 *     CmpEffectiveTokenForSubject @ 0x140690D60 (CmpEffectiveTokenForSubject.c)
 *     RtlCopyLuidAndAttributesArray @ 0x1406BC200 (RtlCopyLuidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpBuildAdminInformation(_QWORD *a1, __int64 *a2)
{
  void *v2; // rax
  struct _LOOKASIDE_LIST_EX *v3; // r9
  unsigned int v4; // ebx
  _DWORD **v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int v8; // esi
  unsigned int v9; // r12d
  int v10; // edi
  __int64 v11; // r14
  void *v12; // r13
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // edi
  char *TransientPoolWithTag; // rax
  char *v19; // r14
  unsigned int *v20; // rdi
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v26; // rdx
  __int64 v27; // r12
  int *v28; // r14
  PVOID TokenInformation; // [rsp+40h] [rbp-40h] BYREF
  void *v30; // [rsp+48h] [rbp-38h] BYREF
  PSE_EXPORTS v31; // [rsp+50h] [rbp-30h]
  int v32[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v33[8]; // [rsp+60h] [rbp-20h]
  __int64 v35; // [rsp+D0h] [rbp+50h] BYREF
  NTSTATUS v36; // [rsp+D8h] [rbp+58h]

  v30 = 0LL;
  LODWORD(v35) = 0;
  TokenInformation = 0LL;
  v2 = (void *)CmpEffectiveTokenForSubject(a2, 0LL);
  v36 = SeQueryInformationToken(v2, TokenAccessInformation, &TokenInformation);
  v4 = v36;
  if ( v36 >= 0 )
  {
    v5 = (_DWORD **)TokenInformation;
    v6 = 0;
    v7 = -1;
    v8 = -1;
    v9 = **(_DWORD **)TokenInformation;
    v10 = 16 * v9;
    if ( v9 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v31 = SeExports;
      do
      {
        v12 = *(void **)v11;
        v30 = *(void **)v11;
        v10 += RtlLengthSid(v30);
        if ( v7 == -1 && RtlEqualSid(v31->SeAliasAdminsSid, v12) )
        {
          v7 = v6;
        }
        else if ( v8 == -1 && (*(_BYTE *)(v11 + 8) & 0x60) == 0x60 )
        {
          v8 = v6;
        }
        ++v6;
        v11 += 16LL;
      }
      while ( v6 < v9 );
      v5 = (_DWORD **)TokenInformation;
    }
    v13 = 0;
    if ( v7 == -1 )
    {
      v13 = 1;
      v33[0] = 7;
      *(_QWORD *)v32 = SeExports->SeAliasAdminsSid;
    }
    if ( v8 == -1 )
    {
      v26 = 2LL * v13++;
      *(_QWORD *)&v32[2 * v26] = SeExports->SeHighMandatorySid;
      v33[2 * v26] = 96;
    }
    if ( v13 )
    {
      v27 = v13;
      v28 = v32;
      v10 += 16 * v13;
      do
      {
        v10 += RtlLengthSid(*(PSID *)v28);
        v28 += 4;
        --v27;
      }
      while ( v27 );
    }
    v14 = (v10 + 7) & 0xFFFFFFF8;
    v15 = 12 * *v5[2];
    v16 = v15 + v14 + 920 - 12;
    if ( !v15 )
      v16 = v14 + 920;
    v17 = v16;
    TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(PagedPool, v16, 0x20204D43u, v3);
    v19 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v17);
      v20 = (unsigned int *)(v19 + 88);
      *((_QWORD *)v19 + 3) = *((_QWORD *)TokenInformation + 3);
      *((_DWORD *)v19 + 8) = *((_DWORD *)TokenInformation + 8);
      *((_DWORD *)v19 + 9) = *((_DWORD *)TokenInformation + 9);
      *((_DWORD *)v19 + 10) = *((_DWORD *)TokenInformation + 10);
      *((_DWORD *)v19 + 11) = *((_DWORD *)TokenInformation + 11) & 0xFFFF9FFF | 0x2000;
      v21 = v13 + **(_DWORD **)TokenInformation;
      *((_QWORD *)v19 + 12) = v19 + 360;
      *((_DWORD *)v19 + 22) = v21;
      RtlCopySidAndAttributesArray(
        **(_DWORD **)TokenInformation,
        *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL),
        v14 - 16 * v21,
        (__int64)(v19 + 360),
        &v19[16 * v21 + 360],
        &v30,
        (unsigned int *)&v35);
      if ( v7 != -1 )
        *(_DWORD *)(*((_QWORD *)v19 + 12) + 16LL * v7 + 8) = 7;
      if ( v8 != -1 )
        *(_DWORD *)(*((_QWORD *)v19 + 12) + 16LL * v8 + 8) = 96;
      if ( v13 )
        RtlCopySidAndAttributesArray(
          v13,
          (__int64)v32,
          v35,
          *((_QWORD *)v19 + 12) + 16LL * **(unsigned int **)TokenInformation,
          (char *)v30,
          &v30,
          (unsigned int *)&v35);
      RtlSidHashInitialize(*((__int64 **)v19 + 12), *v20, (_QWORD *)v19 + 11);
      *(_QWORD *)v19 = v20;
      v22 = *((_QWORD *)v19 + 12) + v14;
      *(_DWORD *)v22 = 0;
      *(_QWORD *)(v22 + 8) = 0LL;
      *((_QWORD *)v19 + 1) = v22;
      v22 += 272LL;
      *(_DWORD *)v22 = 0;
      v23 = v22 + 272;
      *(_QWORD *)(v22 + 8) = 0LL;
      *((_QWORD *)v19 + 8) = v22;
      *((_QWORD *)v19 + 7) = 0LL;
      v24 = **((unsigned int **)TokenInformation + 2);
      *(_DWORD *)(v22 + 272) = v24;
      RtlCopyLuidAndAttributesArray(v24, *((_QWORD *)TokenInformation + 2) + 4LL, v22 + 276);
      *((_QWORD *)v19 + 2) = v23;
      v4 = v36;
      *a1 = v19;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v4;
}
