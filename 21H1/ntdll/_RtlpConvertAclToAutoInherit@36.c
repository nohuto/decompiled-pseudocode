/*
 * XREFs of _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85
 * Callers:
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlpInheritAcl@68 @ 0x4B2D7852 (_RtlpInheritAcl@68.c)
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlMapGenericMask@8 @ 0x4B2D83B0 (_RtlMapGenericMask@8.c)
 *     _RtlpCompareAces@16 @ 0x4B2D8505 (_RtlpCompareAces@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpConvertAclToAutoInherit(
        ACL *a1,
        ACL *a2,
        int a3,
        char a4,
        void *a5,
        void *a6,
        PGENERIC_MAPPING GenericMapping,
        PVOID *a8,
        _DWORD *a9)
{
  ACL *v9; // ebx
  _DWORD *v10; // esi
  NTSTATUS v11; // edi
  PVOID *v12; // eax
  ACL *v13; // edi
  int v14; // eax
  PVOID v15; // edx
  PVOID v16; // edx
  void *v17; // esi
  ACL *v19; // edi
  int AceCount; // ecx
  unsigned __int8 AclRevision; // bl
  unsigned int GenericAll; // ecx
  void *v23; // ecx
  char v24; // dl
  void *v25; // ebx
  _DWORD *v26; // esi
  void *v27; // eax
  void *v28; // eax
  _DWORD *v29; // edx
  unsigned __int16 v30; // ax
  _DWORD *v31; // edi
  unsigned __int8 v32; // bl
  unsigned int v33; // ecx
  ACCESS_MASK v34; // ecx
  int v35; // edx
  ACCESS_MASK v36; // eax
  ACCESS_MASK v37; // edx
  char *v38; // ecx
  ACCESS_MASK v39; // edi
  bool v40; // cf
  _BYTE *v41; // esi
  char v42; // al
  _DWORD *v43; // ecx
  int v44; // eax
  char *v45; // edi
  ACL *v46; // ecx
  _DWORD *v47; // edx
  char v48; // al
  unsigned __int16 v49; // ax
  int AclSize; // edi
  unsigned __int16 *v51; // edi
  ACL *v52; // ecx
  unsigned __int8 v53; // al
  char *v54; // edx
  ACL *v55; // ecx
  ACL *v56; // esi
  _DWORD *v57; // eax
  unsigned __int16 *p_AclRevision; // ecx
  int v59; // edi
  _DWORD *v60; // ebx
  PACL v61; // ecx
  int v62; // eax
  ACCESS_MASK v63; // ebx
  int v64; // edi
  _DWORD *v65; // esi
  ACCESS_MASK v66; // eax
  bool v67; // cc
  _WORD *v68; // ebx
  PVOID *v69; // esi
  PVOID Heap; // ecx
  SIZE_T v71; // [esp-4h] [ebp-DCh]
  size_t v72; // [esp-4h] [ebp-DCh]
  int v73; // [esp+Ch] [ebp-CCh] BYREF
  ACCESS_MASK v74; // [esp+10h] [ebp-C8h]
  PSID v75; // [esp+14h] [ebp-C4h]
  char *v76; // [esp+18h] [ebp-C0h]
  int v77; // [esp+1Ch] [ebp-BCh]
  ACCESS_MASK v78; // [esp+20h] [ebp-B8h]
  signed int v79; // [esp+24h] [ebp-B4h]
  PACL Acl; // [esp+28h] [ebp-B0h]
  PSID Sid2; // [esp+2Ch] [ebp-ACh]
  char *v82; // [esp+30h] [ebp-A8h]
  PVOID v83; // [esp+34h] [ebp-A4h]
  _DWORD *v84; // [esp+38h] [ebp-A0h]
  void *Src; // [esp+3Ch] [ebp-9Ch]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+40h] [ebp-98h] BYREF
  _DWORD *v87; // [esp+48h] [ebp-90h]
  PVOID v88; // [esp+4Ch] [ebp-8Ch] BYREF
  PVOID *v89; // [esp+50h] [ebp-88h]
  ACCESS_MASK v90; // [esp+54h] [ebp-84h] BYREF
  _WORD v91[3]; // [esp+5Ah] [ebp-7Eh] BYREF
  ACL *v92; // [esp+60h] [ebp-78h]
  char v93; // [esp+66h] [ebp-72h]
  char v94; // [esp+67h] [ebp-71h]
  ACCESS_MASK v95; // [esp+68h] [ebp-70h] BYREF
  PVOID BaseAddress; // [esp+6Ch] [ebp-6Ch] BYREF
  ACCESS_MASK AccessMask; // [esp+70h] [ebp-68h] BYREF
  _BYTE Sid[8]; // [esp+74h] [ebp-64h] BYREF
  int v99; // [esp+7Ch] [ebp-5Ch]
  int v100[12]; // [esp+A4h] [ebp-34h] BYREF

  v9 = a2;
  v92 = a2;
  Acl = a1;
  Sid2 = a5;
  v75 = a6;
  v89 = a8;
  BaseAddress = 0;
  v88 = 0;
  v83 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v10 = a9;
  *(_DWORD *)&v91[1] = NtCurrentPeb()->ProcessHeap;
  v84 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v11 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v11 < 0 )
    return v11;
  v99 = 0;
  v11 = RtlInitializeSid(v100, &IdentifierAuthority, 1u);
  if ( v11 < 0 )
    return v11;
  v12 = v89;
  v13 = Acl;
  *v10 = 1024;
  v100[2] = 1;
  *v12 = 0;
  if ( v13 && !RtlValidAcl(v13) || !RtlValidAcl(v9) )
    return -1073741705;
  *(_DWORD *)IdentifierAuthority.Value = a3;
  v14 = RtlpInheritAcl(
          v13,
          0,
          a4,
          1,
          0,
          (int)Sid,
          (int)v100,
          (int)Sid,
          (int)v100,
          GenericMapping,
          2,
          a3 != 0 ? (unsigned int)&a3 : 0,
          a3 != 0,
          &BaseAddress,
          v91,
          &v73);
  v15 = BaseAddress;
  v11 = v14;
  v82 = (char *)BaseAddress;
  if ( v14 == -2147483637 )
  {
LABEL_8:
    *v10 |= 0x1000u;
LABEL_88:
    v11 = 0;
    if ( (*v10 & 0x1000) == 0 )
    {
LABEL_94:
      v17 = *(void **)&v91[1];
      if ( v83 )
        RtlFreeHeap(*(PVOID *)&v91[1], 0, v83);
      v15 = v82;
      goto LABEL_13;
    }
    v69 = v89;
    if ( *v89 )
    {
      RtlFreeHeap(*(PVOID *)&v91[1], 0, *v89);
      *v69 = 0;
    }
    LODWORD(v71) = v9->AclSize;
    Heap = RtlAllocateHeap(*(PVOID *)&v91[1], NtdllBaseTag + 1310720, v71);
    *v69 = Heap;
    if ( Heap )
    {
      LODWORD(v72) = v9->AclSize;
      memcpy(Heap, v9, v72);
      v11 = 0;
      goto LABEL_94;
    }
LABEL_92:
    v11 = -1073741801;
    goto LABEL_94;
  }
  if ( v14 >= 0 )
  {
    LODWORD(v71) = 24 * v9->AceCount;
    v16 = RtlAllocateHeap(*(PVOID *)&v91[1], NtdllBaseTag + 1310720, v71);
    v83 = v16;
    if ( !v16 )
    {
      v15 = v82;
      v11 = -1073741801;
      goto LABEL_12;
    }
    v87 = 0;
    v90 = 0;
    v19 = v9 + 1;
    Src = &v9[1];
    LOWORD(AceCount) = v9->AceCount;
    if ( (_WORD)AceCount )
    {
      v95 = (ACCESS_MASK)v16 + 4;
      while ( 1 )
      {
        AclRevision = v19->AclRevision;
        if ( v19->AclRevision > 8u || AclRevision == 4 )
          break;
        AccessMask = *(_DWORD *)&v19->AceCount;
        RtlMapGenericMask(&AccessMask, GenericMapping);
        if ( AclRevision < 2u || AclRevision == 5 || AclRevision == 6 )
          GenericAll = GenericMapping->GenericAll;
        else
          GenericAll = GenericMapping->GenericAll | 0x1000000;
        v23 = (void *)(AccessMask & GenericAll);
        v24 = v19->Sbz1 & 3 | ~v19->Sbz1 & 8;
        if ( (v19->Sbz1 & 2) != 0 )
        {
          v25 = v23;
          BaseAddress = v23;
        }
        else
        {
          v25 = 0;
          BaseAddress = 0;
        }
        *(_DWORD *)(v95 + 8) = BaseAddress;
        v26 = (_DWORD *)v95;
        *(_DWORD *)(v95 - 4) = v25;
        v9 = v92;
        v27 = (v24 & 1) != 0 ? v23 : 0;
        *v26 = v27;
        v26[3] = v27;
        v28 = (v24 & 8) != 0 ? v23 : 0;
        v29 = (_DWORD *)((char *)v87 + 1);
        v26[1] = v28;
        v26[4] = v28;
        AceCount = v9->AceCount;
        v19 = (ACL *)((char *)v19 + v19->AclSize);
        v95 = (ACCESS_MASK)(v26 + 6);
        v10 = v84;
        v87 = v29;
        if ( (int)v29 >= AceCount )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      v90 = 0;
      v30 = AceCount;
      v31 = v82 + 8;
      BaseAddress = v82 + 8;
      if ( !*((_WORD *)v82 + 2) )
      {
LABEL_52:
        v93 = 0;
        v45 = 0;
        v94 = 0;
        AccessMask = 0;
        v46 = v9 + 1;
        BaseAddress = 0;
        v79 = v30;
        if ( v30 )
        {
          v47 = (char *)v83 + 16;
          do
          {
            v48 = RtlBaseAceType[v46->AclRevision];
            if ( *v47 | v47[1] | *(v47 - 1) )
            {
              AclSize = v46->AclSize;
              AccessMask += AclSize;
              HIBYTE(v91[0]) = v48;
              if ( !v48 && v94 )
                goto LABEL_8;
              v49 = AclSize;
              if ( HIBYTE(v91[0]) == 1 )
              {
                if ( v93 )
                  goto LABEL_8;
              }
              v45 = (char *)BaseAddress;
            }
            else
            {
              if ( !v48 )
                v93 = 1;
              if ( v48 == 1 )
                v94 = 1;
              v49 = v46->AclSize;
            }
            ++v45;
            v47 += 6;
            BaseAddress = v45;
            v46 = (ACL *)((char *)v46 + v49);
          }
          while ( (int)v45 < v79 );
        }
        v11 = RtlpInheritAcl(
                Acl,
                0,
                a4,
                1,
                0,
                (int)Sid2,
                (int)v75,
                (int)Sid2,
                (int)v75,
                GenericMapping,
                2,
                *(_DWORD *)IdentifierAuthority.Value != 0 ? (unsigned int)&a3 : 0,
                *(_DWORD *)IdentifierAuthority.Value != 0,
                &v88,
                v91,
                &v73);
        if ( v11 < 0 )
          goto LABEL_94;
        v51 = (unsigned __int16 *)v88;
        LODWORD(v71) = AccessMask + *((unsigned __int16 *)v88 + 1);
        v52 = (ACL *)RtlAllocateHeap(*(PVOID *)&v91[1], NtdllBaseTag + 1310720, v71);
        *v89 = v52;
        if ( !v52 )
          goto LABEL_92;
        v53 = *(_BYTE *)v51;
        if ( *(_BYTE *)v51 <= v9->AclRevision )
          v53 = v9->AclRevision;
        if ( RtlCreateAcl(v52, AccessMask + v51[1], v53) < 0 )
          goto LABEL_8;
        v54 = 0;
        Sid2 = 0;
        v55 = (ACL *)((char *)*v89 + 8);
        AccessMask = (ACCESS_MASK)v55;
        if ( v9->AceCount )
        {
          v56 = v55;
          v57 = (char *)v83 + 16;
          p_AclRevision = (unsigned __int16 *)&v9[1].AclRevision;
          BaseAddress = (char *)v83 + 16;
          do
          {
            v59 = *v57 | v57[1] | *(v57 - 1);
            if ( v59 )
            {
              v60 = Src;
              LODWORD(v71) = *((unsigned __int16 *)Src + 1);
              memcpy(v56, Src, v71);
              v56->Sbz1 &= ~0x10u;
              v61 = v56;
              v56 = (ACL *)((char *)v56 + *((unsigned __int16 *)v60 + 1));
              Acl = v61;
              AccessMask = (ACCESS_MASK)v56;
              ++*((_WORD *)*v89 + 2);
              *(_DWORD *)&v61->AceCount = v59 & v60[1];
              v62 = v60[1];
              v63 = 0x80000000;
              v64 = ~v62 & v59;
              if ( v64 )
              {
                v65 = Src;
                do
                {
                  if ( v63 < 0x10000000 )
                    break;
                  if ( (v63 & v65[1]) != 0 )
                  {
                    v90 = v63;
                    RtlMapGenericMask(&v90, GenericMapping);
                    v66 = v90;
                    v61 = Acl;
                    if ( (v90 & v64) != 0 )
                    {
                      *(_DWORD *)&Acl->AceCount |= v63;
                      v64 &= ~v66;
                    }
                  }
                  v63 >>= 1;
                }
                while ( v64 );
                v56 = (ACL *)AccessMask;
              }
              *(_DWORD *)&v61->AceCount |= v64;
              v57 = BaseAddress;
              v9 = v92;
              v54 = (char *)Sid2;
              p_AclRevision = (unsigned __int16 *)Src;
            }
            ++v54;
            BaseAddress = v57 + 6;
            p_AclRevision = (unsigned __int16 *)((char *)p_AclRevision + p_AclRevision[1]);
            Sid2 = v54;
            v67 = (int)v54 < v9->AceCount;
            Src = p_AclRevision;
            v57 += 6;
          }
          while ( v67 );
          v10 = v84;
          v55 = (ACL *)AccessMask;
          v51 = (unsigned __int16 *)v88;
        }
        v68 = v88;
        LODWORD(v71) = v51[1] - 8;
        memcpy(v55, (char *)v88 + 8, v71);
        *((_WORD *)*v89 + 2) += v68[2];
LABEL_87:
        v9 = v92;
        goto LABEL_88;
      }
      while ( 1 )
      {
        v32 = *(_BYTE *)v31;
        if ( *(_BYTE *)v31 > 8u || v32 == 4 )
          break;
        v95 = v31[1];
        RtlMapGenericMask(&v95, GenericMapping);
        if ( v32 < 2u || v32 == 5 || v32 == 6 )
          v33 = GenericMapping->GenericAll;
        else
          v33 = GenericMapping->GenericAll | 0x1000000;
        v34 = v95 & v33;
        if ( v34 && (v35 = *((_BYTE *)v31 + 1) & 3 | ~*((_BYTE *)v31 + 1) & 8) != 0 )
        {
          v78 = (*((_BYTE *)v31 + 1) & 2) != 0 ? v34 : 0;
          AccessMask = v78;
          v9 = v92;
          v36 = (v35 & 1) != 0 ? v34 : 0;
          v79 = v36;
          v95 = v36;
          v77 = 0;
          v37 = (v35 & 8) != 0 ? v34 : 0;
          v38 = (char *)Src;
          v39 = v37;
          v40 = v92->AceCount != 0;
          v10 = v84;
          v74 = v37;
          v76 = (char *)Src;
          if ( v40 )
          {
            v95 = v36;
            AccessMask = v78;
            v41 = BaseAddress;
            v87 = (char *)v83 + 20;
            do
            {
              v42 = RtlpCompareAces(v41, v38, Sid2, v75);
              v43 = v87;
              if ( v42 )
              {
                v39 &= ~*(v87 - 3);
                AccessMask &= ~*(v87 - 5);
                v95 &= ~*(v87 - 4);
                *v87 &= ~v74;
                *(v43 - 2) &= ~v78;
                *(v43 - 1) &= ~v79;
              }
              v87 = v43 + 6;
              ++v77;
              v38 = &v76[*((unsigned __int16 *)v76 + 1)];
              v44 = v9->AceCount;
              v76 = v38;
            }
            while ( v77 < v44 );
            v10 = v84;
          }
          if ( AccessMask | v95 | v39 )
            goto LABEL_8;
          v31 = BaseAddress;
        }
        else
        {
          v9 = v92;
        }
        v31 = (_DWORD *)((char *)v31 + *((unsigned __int16 *)v31 + 1));
        ++v90;
        BaseAddress = v31;
        if ( (int)v90 >= *((unsigned __int16 *)v82 + 2) )
        {
          v30 = v9->AceCount;
          goto LABEL_52;
        }
      }
    }
    *v10 |= 0x1000u;
    goto LABEL_87;
  }
LABEL_12:
  v17 = *(void **)&v91[1];
LABEL_13:
  if ( v15 )
    RtlFreeHeap(v17, 0, v15);
  if ( v88 )
    RtlFreeHeap(v17, 0, v88);
  return v11;
}
