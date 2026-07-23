/*
 * XREFs of SepMandatorySubProcessToken @ 0x1403395EC
 * Callers:
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 * Callees:
 *     RtlFindAceByType @ 0x140257F00 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x140257FA8 (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x140258190 (RtlSidDominates.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     SeTokenIsAdmin @ 0x14064BC20 (SeTokenIsAdmin.c)
 *     PsReferenceProcessFilePointer @ 0x14064E790 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x1406F7B64 (ObQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  _QWORD *v5; // r14
  int v6; // eax
  NTSTATUS SecurityObject; // ebx
  void *v10; // r12
  _BYTE *v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rax
  ACL *v14; // rcx
  char *AceByType; // rax
  _BYTE *PoolWithTag; // rax
  unsigned __int8 *v18; // r14
  PSID *TokenIntegrity; // rax
  PSID *v20; // r15
  int v21; // eax
  int v22; // ecx
  PSID v23; // rax
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 *v33; // r8
  __int64 v34; // r11
  __int64 v35; // r10
  int v36; // ecx
  unsigned int v37; // r14d
  __int64 v38; // r9
  int v39; // edx
  unsigned int v40; // eax
  int v41; // eax
  _QWORD *v42; // rcx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // eax
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-95h] BYREF
  void *v49; // [rsp+40h] [rbp-89h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  v4 = 0;
  *(_QWORD *)&NumberOfBytes[1] = a4;
  *a4 = 0LL;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 2172);
  v49 = 0LL;
  Dominates[0] = 0;
  SecurityObject = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (v6 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v49);
  if ( SecurityObject < 0
    || (NumberOfBytes[0] = 128,
        v11 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v10 = v49;
    goto LABEL_15;
  }
  v10 = v49;
  SecurityObject = ObQuerySecurityObject((_DWORD)v49, 16, (unsigned int)SecurityDescriptor, 128, (__int64)NumberOfBytes);
  if ( SecurityObject != -1073741789 )
  {
LABEL_6:
    if ( SecurityObject >= 0 && v11 )
    {
      v12 = *((_WORD *)v11 + 1);
      if ( (v12 & 0x10) != 0 )
      {
        if ( v12 >= 0 )
        {
          v14 = (ACL *)*((_QWORD *)v11 + 3);
LABEL_12:
          AceByType = (char *)RtlFindAceByType(v14, 0x11u, 0LL);
          if ( AceByType )
          {
            v18 = (unsigned __int8 *)(AceByType + 8);
            TokenIntegrity = (PSID *)SepLocateTokenIntegrity(a2);
            v20 = TokenIntegrity;
            if ( !TokenIntegrity )
              goto LABEL_42;
            SecurityObject = RtlSidDominates(*TokenIntegrity, v18, Dominates);
            if ( SecurityObject < 0 )
              goto LABEL_15;
            if ( Dominates[0] )
            {
              v21 = v18[1];
              if ( (_BYTE)v21 )
                v22 = *(_DWORD *)&v18[4 * (v21 - 1) + 8];
              else
                v22 = 0;
              *((_DWORD *)*v20 + 2) = v22;
              v23 = *v20;
              v4 = 0;
              **(_QWORD **)&NumberOfBytes[1] = v23;
              v24 = v18[1];
              if ( (_BYTE)v24 )
                v25 = *(_DWORD *)&v18[4 * (v24 - 1) + 8];
              else
                v25 = 0;
              v26 = *(_DWORD *)(a2 + 200);
              v5 = *(_QWORD **)&NumberOfBytes[1];
              if ( v25 >= 0x2000 )
                v27 = v26 | 0x2000;
              else
                v27 = v26 & 0xFFFFDFFF;
              *(_DWORD *)(a2 + 200) = v27;
            }
            else
            {
LABEL_42:
              v5 = *(_QWORD **)&NumberOfBytes[1];
              v4 = 0;
            }
          }
          goto LABEL_13;
        }
        v13 = *((unsigned int *)v11 + 3);
        if ( (_DWORD)v13 )
        {
          v14 = (ACL *)&v11[v13];
          goto LABEL_12;
        }
      }
      v14 = 0LL;
      goto LABEL_12;
    }
    SecurityObject = 0;
LABEL_13:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v28 = SepLocateTokenIntegrity(a2);
        v29 = (_QWORD *)v28;
        if ( v28 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v30 )
          {
            v34 = SepLocateTokenIntegrity(v30);
            if ( v34 )
            {
              v35 = *v33;
              v36 = *(unsigned __int8 *)(*v33 + 1);
              v37 = (_BYTE)v36 ? *(_DWORD *)(v35 + 4LL * (unsigned int)(v36 - 1) + 8) : 0;
              v38 = *(_QWORD *)v34;
              v39 = *(unsigned __int8 *)(*(_QWORD *)v34 + 1LL);
              if ( (_BYTE)v39 )
              {
                v4 = *(unsigned __int8 *)(*(_QWORD *)v34 + 1LL);
                v40 = *(_DWORD *)(v38 + 4LL * (unsigned int)(v39 - 1) + 8);
              }
              else
              {
                v40 = 0;
              }
              if ( v37 > v40 )
              {
                if ( (_BYTE)v39 )
                  v41 = *(_DWORD *)(v38 + 4LL * (unsigned int)(v4 - 1) + 8);
                else
                  v41 = 0;
                v42 = *(_QWORD **)&NumberOfBytes[1];
                *(_DWORD *)(v35 + 8) = v41;
                *v42 = *v33;
                v43 = *(unsigned __int8 *)(*(_QWORD *)v34 + 1LL);
                if ( (_BYTE)v43 )
                  v44 = *(_DWORD *)(*(_QWORD *)v34 + 4LL * (unsigned int)(v43 - 1) + 8);
                else
                  v44 = 0;
                v45 = *(_DWORD *)(a2 + 200);
                if ( v44 >= 0x2000 )
                  v46 = v45 | 0x2000;
                else
                  v46 = v45 & 0xFFFFDFFF;
                *(_DWORD *)(a2 + 200) = v46;
              }
            }
          }
          else
          {
            v31 = *(_QWORD *)v28;
            v32 = *(unsigned __int8 *)(*(_QWORD *)v28 + 1LL);
            if ( (_BYTE)v32 && *(_DWORD *)(v31 + 4LL * (unsigned int)(v32 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v31 + 8) = 0x2000;
              *v5 = *v29;
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SecurityObject = -1073741801;
    goto LABEL_15;
  }
  SecurityObject = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v10, 16, (_DWORD)v11, NumberOfBytes[0], (__int64)NumberOfBytes);
    goto LABEL_6;
  }
LABEL_15:
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 && v11 != SecurityDescriptor )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)SecurityObject;
}
