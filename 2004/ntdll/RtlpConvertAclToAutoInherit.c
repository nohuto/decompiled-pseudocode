/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800E75EC
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E7E10 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlMapGenericMask @ 0x180037EA0 (RtlMapGenericMask.c)
 *     RtlpCompareAces @ 0x180038208 (RtlpCompareAces.c)
 *     RtlpInheritAcl @ 0x180039EA0 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x180040060 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
        ACL *a1,
        ACL *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        GENERIC_MAPPING *a7,
        PVOID *a8,
        _DWORD *a9)
{
  PGENERIC_MAPPING v10; // rsi
  PVOID *v11; // r13
  _DWORD *v12; // rdi
  _DWORD *v13; // r15
  void *ProcessHeap; // r14
  int v15; // ebx
  ACL *v16; // rbx
  int v17; // eax
  PVOID v18; // rcx
  signed int AceCount; // eax
  unsigned __int16 *v20; // r13
  ACL *v21; // rbx
  ACCESS_MASK *v22; // rsi
  unsigned int GenericAll; // edx
  ACCESS_MASK v24; // edx
  char v25; // r8
  ACCESS_MASK v26; // ecx
  ACCESS_MASK v27; // r9d
  ACCESS_MASK v28; // ecx
  ACCESS_MASK v29; // eax
  char *v30; // rbx
  int v31; // ecx
  ACCESS_MASK v32; // ecx
  int v33; // eax
  char v34; // dl
  unsigned __int16 *v35; // r15
  ACCESS_MASK v36; // r8d
  ACCESS_MASK v37; // eax
  ACCESS_MASK v38; // r9d
  ACCESS_MASK v39; // edx
  ACCESS_MASK v40; // ecx
  ACCESS_MASK v41; // esi
  ACCESS_MASK v42; // r13d
  _DWORD *v43; // r14
  ACCESS_MASK v44; // edi
  signed int v45; // eax
  __int64 v46; // rbx
  char v47; // r9
  char v48; // r10
  int v49; // esi
  unsigned __int8 *v50; // rdx
  __int64 v51; // r11
  _DWORD *v52; // r8
  __int64 v53; // rax
  int v54; // ecx
  char v55; // al
  unsigned __int16 *v56; // rbx
  ACL *v57; // rax
  PVOID *v58; // r14
  unsigned __int8 AclRevision; // cl
  _BYTE *v61; // r14
  int v62; // ecx
  PVOID *v63; // rdi
  _DWORD *v64; // r15
  int v65; // ebx
  _BYTE *v66; // r13
  unsigned __int16 *v67; // rcx
  ACCESS_MASK v68; // esi
  int v69; // ebx
  GENERIC_MAPPING *v70; // rdi
  ACCESS_MASK v71; // eax
  int v72; // eax
  _WORD *v73; // rsi
  PVOID v74; // rax
  ACCESS_MASK v76; // [rsp+94h] [rbp-7Ch] BYREF
  _BYTE v77[4]; // [rsp+98h] [rbp-78h] BYREF
  ACCESS_MASK AccessMask; // [rsp+9Ch] [rbp-74h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp-70h] BYREF
  ACCESS_MASK v80; // [rsp+A8h] [rbp-68h]
  ACCESS_MASK v81; // [rsp+ACh] [rbp-64h] BYREF
  PVOID *v82; // [rsp+B0h] [rbp-60h]
  PVOID BaseAddress; // [rsp+B8h] [rbp-58h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+C0h] [rbp-50h]
  PVOID HeapHandle; // [rsp+C8h] [rbp-48h]
  PVOID v86; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int16 *v87; // [rsp+D8h] [rbp-38h]
  _DWORD *Heap; // [rsp+E0h] [rbp-30h]
  __int64 v89; // [rsp+E8h] [rbp-28h] BYREF
  ACCESS_MASK v90; // [rsp+F0h] [rbp-20h]
  ACCESS_MASK v91; // [rsp+F4h] [rbp-1Ch]
  int v92; // [rsp+F8h] [rbp-18h] BYREF
  _DWORD *v93; // [rsp+100h] [rbp-10h]
  __int64 v94; // [rsp+108h] [rbp-8h]
  __int64 v95; // [rsp+110h] [rbp+0h]
  PACL Acl; // [rsp+118h] [rbp+8h]
  char v97[8]; // [rsp+120h] [rbp+10h] BYREF
  int v98; // [rsp+128h] [rbp+18h]
  char Sid[8]; // [rsp+150h] [rbp+40h] BYREF
  int v100; // [rsp+158h] [rbp+48h]

  v10 = a7;
  v11 = a8;
  v12 = a9;
  v95 = a5;
  v89 = a3;
  v94 = a6;
  v13 = 0LL;
  BaseAddress = 0LL;
  v86 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Acl = a1;
  GenericMapping = a7;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v82 = a8;
  v93 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v100 = 0;
  v15 = RtlInitializeSid(v97, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = Acl;
  *a9 = 1024;
  v98 = 1;
  *a8 = 0LL;
  if ( v16 && !RtlValidAcl(v16) || !RtlValidAcl(a2) )
    return (unsigned int)-1073741705;
  v17 = RtlpInheritAcl(
          (__int64)v16,
          0LL,
          0,
          a4,
          1,
          0,
          (__int64)Sid,
          (__int64)v97,
          (__int64)Sid,
          (__int64)v97,
          (__int64)a7,
          2,
          (unsigned __int64)&v89 & -(__int64)(v89 != 0),
          v89 != 0,
          &BaseAddress,
          v77,
          &v92);
  v18 = BaseAddress;
  v15 = v17;
  if ( v17 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_91;
  }
  if ( v17 >= 0 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 24LL * a2->AceCount);
    v13 = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
LABEL_65:
      v18 = BaseAddress;
      goto LABEL_66;
    }
    LOWORD(AceCount) = a2->AceCount;
    v76 = 0;
    v20 = (unsigned __int16 *)&a2[1];
    v87 = (unsigned __int16 *)&a2[1];
    v21 = a2 + 1;
    if ( (_WORD)AceCount )
    {
      v22 = Heap + 1;
      while ( v21->AclRevision <= 8u && v21->AclRevision != 4 )
      {
        AccessMask = *(_DWORD *)&v21->AceCount;
        RtlMapGenericMask(&AccessMask, GenericMapping);
        if ( (unsigned __int8)(v21->AclRevision - 2) <= 2u || v21->AclRevision >= 7u )
          GenericAll = GenericMapping->GenericAll | 0x1000000;
        else
          GenericAll = GenericMapping->GenericAll;
        v24 = AccessMask & GenericAll;
        v25 = v21->Sbz1 & 3 | ~v21->Sbz1 & 8;
        if ( (v21->Sbz1 & 2) != 0 )
        {
          v26 = v24;
          v27 = v24;
        }
        else
        {
          v27 = 0;
          v26 = 0;
        }
        v22[2] = v27;
        *(v22 - 1) = v26;
        v28 = (v25 & 1) != 0 ? v24 : 0;
        *v22 = v28;
        v22[3] = v28;
        v29 = (v25 & 8) != 0 ? v24 : 0;
        v22[1] = v29;
        v22[4] = v29;
        v22 += 6;
        v21 = (ACL *)((char *)v21 + v21->AclSize);
        AceCount = a2->AceCount;
        if ( (int)++v76 >= AceCount )
        {
          v10 = GenericMapping;
          goto LABEL_25;
        }
      }
LABEL_31:
      *v12 |= 0x1000u;
      v11 = v82;
    }
    else
    {
LABEL_25:
      v81 = 0;
      v30 = (char *)BaseAddress + 8;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        while ( (unsigned __int8)*v30 <= 8u && *v30 != 4 )
        {
          v76 = *((_DWORD *)v30 + 1);
          RtlMapGenericMask(&v76, v10);
          if ( (unsigned __int8)(*v30 - 2) <= 2u || (unsigned __int8)*v30 >= 7u )
            v31 = v10->GenericAll | 0x1000000;
          else
            v31 = v10->GenericAll;
          v32 = v76 & v31;
          if ( v32 )
          {
            v33 = v30[1] & 3;
            v34 = v33 | ~v30[1] & 8;
            if ( v33 | ~v30[1] & 8 )
            {
              v76 = 0;
              v35 = v20;
              v36 = (v34 & 2) != 0 ? v32 : 0;
              v91 = v36;
              v37 = v36;
              v38 = (v34 & 1) != 0 ? v32 : 0;
              *(_DWORD *)IdentifierAuthority.Value = v38;
              v39 = (v34 & 8) != 0 ? v32 : 0;
              v40 = v38;
              v41 = v39;
              v90 = v39;
              if ( a2->AceCount )
              {
                v42 = v36;
                v43 = Heap + 5;
                v44 = v38;
                do
                {
                  if ( RtlpCompareAces(v30, (char *)v35) )
                  {
                    v41 &= ~*(v43 - 3);
                    v42 &= ~*(v43 - 5);
                    v44 &= ~*(v43 - 4);
                    *v43 &= ~v90;
                    *(v43 - 2) &= ~v91;
                    *(v43 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
                  }
                  v43 += 6;
                  v35 = (unsigned __int16 *)((char *)v35 + v35[1]);
                  v45 = a2->AceCount;
                  ++v76;
                }
                while ( (int)v76 < v45 );
                v80 = v44;
                v40 = v44;
                v12 = v93;
                AccessMask = v42;
                v20 = (unsigned __int16 *)&a2[1];
                v37 = AccessMask;
              }
              if ( v37 | v40 | v41 )
                break;
              v10 = GenericMapping;
            }
          }
          v30 += *((unsigned __int16 *)v30 + 1);
          if ( (int)++v81 >= *((unsigned __int16 *)BaseAddress + 2) )
          {
            LOWORD(AceCount) = a2->AceCount;
            ProcessHeap = HeapHandle;
            v13 = Heap;
            goto LABEL_45;
          }
        }
        *v12 |= 0x1000u;
        v11 = v82;
      }
      else
      {
LABEL_45:
        v46 = (unsigned __int16)AceCount;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        v50 = (unsigned __int8 *)v20;
        if ( (_WORD)AceCount )
        {
          v51 = 0LL;
          v52 = v13 + 4;
          do
          {
            v53 = *v50;
            if ( *v52 | v52[1] | *(v52 - 1) )
            {
              v54 = *((unsigned __int16 *)v50 + 1);
              v55 = RtlBaseAceType[v53];
              v49 += v54;
              ProcessHeap = HeapHandle;
              if ( !v55 && v48 || v55 == 1 && v47 )
                goto LABEL_31;
            }
            else
            {
              if ( !RtlBaseAceType[v53] )
                v47 = 1;
              v12 = v93;
              if ( RtlBaseAceType[v53] == 1 )
                v48 = 1;
              LOWORD(v54) = *((_WORD *)v50 + 1);
            }
            ++v51;
            v50 += (unsigned __int16)v54;
            v52 += 6;
          }
          while ( v51 < v46 );
        }
        v15 = RtlpInheritAcl(
                (__int64)Acl,
                0LL,
                0,
                a4,
                1,
                0,
                v95,
                v94,
                v95,
                v94,
                (__int64)GenericMapping,
                2,
                (unsigned __int64)&v89 & -(__int64)(v89 != 0),
                v89 != 0,
                &v86,
                v77,
                &v92);
        if ( v15 < 0 )
          goto LABEL_63;
        v56 = (unsigned __int16 *)v86;
        v57 = (ACL *)RtlAllocateHeap(
                       ProcessHeap,
                       NtdllBaseTag + 1310720,
                       v49 + (unsigned int)*((unsigned __int16 *)v86 + 1));
        v58 = v82;
        *v82 = v57;
        if ( !v57 )
        {
          v15 = -1073741801;
          goto LABEL_62;
        }
        AclRevision = *(_BYTE *)v86;
        if ( *(_BYTE *)v86 <= a2->AclRevision )
          AclRevision = a2->AclRevision;
        if ( RtlCreateAcl(v57, v49 + v56[1], AclRevision) < 0 )
        {
          *v12 |= 0x1000u;
          v11 = v58;
          goto LABEL_91;
        }
        v61 = (char *)*v58 + 8;
        v80 = 0;
        v62 = 0;
        if ( a2->AceCount )
        {
          v63 = v82;
          v64 = v13 + 4;
          do
          {
            v65 = *v64 | v64[1] | *(v64 - 1);
            if ( v65 )
            {
              memmove(v61, v20, v20[1]);
              v61[1] &= ~0x10u;
              v66 = v61;
              v67 = v87;
              v68 = 0x80000000;
              v61 += v87[1];
              ++*((_WORD *)*v63 + 2);
              *((_DWORD *)v66 + 1) = v65 & *((_DWORD *)v67 + 1);
              v69 = ~*((_DWORD *)v67 + 1) & v65;
              if ( v69 )
              {
                v70 = GenericMapping;
                do
                {
                  if ( v68 < 0x10000000 )
                    break;
                  if ( (v68 & *((_DWORD *)v67 + 1)) != 0 )
                  {
                    v81 = v68;
                    RtlMapGenericMask(&v81, v70);
                    v71 = v81;
                    v67 = v87;
                    if ( (v81 & v69) != 0 )
                    {
                      *((_DWORD *)v66 + 1) |= v68;
                      v69 &= ~v71;
                    }
                  }
                  v68 >>= 1;
                }
                while ( v69 );
                v63 = v82;
              }
              *((_DWORD *)v66 + 1) |= v69;
              v20 = v87;
              v62 = v80;
            }
            ++v62;
            v20 = (unsigned __int16 *)((char *)v20 + v20[1]);
            v80 = v62;
            v72 = a2->AceCount;
            v64 += 6;
            v87 = v20;
          }
          while ( v62 < v72 );
          v12 = v93;
          v56 = (unsigned __int16 *)v86;
        }
        v73 = v86;
        memmove(v61, (char *)v86 + 8, (unsigned int)v56[1] - 8);
        v11 = v82;
        *((_WORD *)*v82 + 2) += v73[2];
      }
      v13 = Heap;
    }
LABEL_91:
    v15 = 0;
    if ( (*v12 & 0x1000) != 0 )
    {
      ProcessHeap = HeapHandle;
      if ( *v11 )
      {
        RtlFreeHeap(HeapHandle, 0, *v11);
        *v11 = 0LL;
      }
      v74 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, a2->AclSize);
      *v11 = v74;
      if ( v74 )
        memmove(v74, a2, a2->AclSize);
      else
        v15 = -1073741801;
      goto LABEL_63;
    }
LABEL_62:
    ProcessHeap = HeapHandle;
LABEL_63:
    if ( v13 )
      RtlFreeHeap(ProcessHeap, 0, v13);
    goto LABEL_65;
  }
LABEL_66:
  if ( v18 )
    RtlFreeHeap(ProcessHeap, 0, v18);
  if ( v86 )
    RtlFreeHeap(ProcessHeap, 0, v86);
  return (unsigned int)v15;
}
