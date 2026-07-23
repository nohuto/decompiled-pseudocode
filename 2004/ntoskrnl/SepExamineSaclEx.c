/*
 * XREFs of SepExamineSaclEx @ 0x14091E900
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x140591A58 (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInToken @ 0x14026D774 (SepSidInToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402C4060 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x1405BC2B0 (AuthzBasepObjectInTypeList.c)
 *     SepSetAuditInfoForObjectType @ 0x14091F084 (SepSetAuditInfoForObjectType.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        __int64 a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r13
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  int *v20; // r12
  char v21; // bp
  _WORD *v22; // rcx
  int v23; // eax
  unsigned int v24; // edx
  char *v25; // r15
  char v26; // r14
  char v27; // al
  int v28; // ecx
  int v29; // edi
  bool v30; // zf
  bool v31; // zf
  unsigned int i; // ebx
  int v33; // r12d
  unsigned int v34; // eax
  char *v35; // rbx
  _DWORD *v36; // rdi
  int v37; // ecx
  unsigned int v38; // ebx
  int v39; // ecx
  _BYTE *v40; // rbp
  int v41; // edi
  _WORD *v42; // rbx
  unsigned int v43; // ebp
  unsigned int v44; // ecx
  _QWORD *v45; // rax
  __int64 v46; // r10
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r9
  unsigned int v51; // ebx
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v54; // [rsp+68h] [rbp-70h] BYREF
  int v55; // [rsp+6Ch] [rbp-6Ch] BYREF
  int v56; // [rsp+70h] [rbp-68h]
  unsigned int v57; // [rsp+74h] [rbp-64h]
  _DWORD *v58; // [rsp+78h] [rbp-60h] BYREF
  char *v59; // [rsp+80h] [rbp-58h]
  unsigned int v60; // [rsp+E0h] [rbp+8h]

  v55 = -1;
  v13 = 0LL;
  v14 = a3;
  v58 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v57 = *(unsigned __int16 *)(a1 + 4);
    if ( v57 )
    {
      v20 = a8;
      v21 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v21 = 0x80;
        if ( *a8 >= 0 )
          v21 = 64;
        Size_4 = v21;
      }
      v22 = **(_WORD ***)(v14 + 152);
      if ( *v22 == *(_WORD *)SeAnonymousLogonSid )
      {
        v23 = memcmp(v22, SeAnonymousLogonSid, 4LL * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v23 )
          Size = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v60 = 0;
      v59 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_91:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) == 0 )
        {
          v27 = *v25;
          v56 = -1;
          v54 = -1;
          switch ( v27 )
          {
            case 2:
              LOBYTE(v16) = 1;
              if ( !(unsigned __int8)SepSidInToken(v14, a10, (__int64)(v25 + 8), (__int64)v16, 0, a11, 0)
                && (!Size || *(_WORD *)SeWorldSid != *((_WORD *)v25 + 4) || memcmp(SeWorldSid, v25 + 8, Size)) )
              {
                goto LABEL_87;
              }
              v29 = *((_DWORD *)v25 + 1);
              if ( !a6 )
              {
                if ( *v20 >= 0 )
                {
                  if ( (v26 & 0x40) != 0 )
                  {
                    if ( (*a9 & v29) == 0 )
                    {
                      v30 = v21 == 64;
                      goto LABEL_75;
                    }
                    goto LABEL_76;
                  }
                  goto LABEL_87;
                }
                if ( v26 >= 0 )
                  goto LABEL_87;
                if ( (v29 & a4) == 0 )
                {
                  v31 = v21 == (char)0x80;
LABEL_80:
                  if ( !v31 )
                    goto LABEL_87;
                }
                goto LABEL_81;
              }
              for ( i = 0; i < a6; ++i )
              {
                LOBYTE(v28) = v26;
                SepSetAuditInfoForObjectType(
                  v28,
                  v29,
                  a4,
                  a5,
                  a6,
                  a7,
                  i,
                  (__int64)a8,
                  (__int64)a9,
                  (__int64)a12,
                  (__int64)a13);
              }
              v25 = v59;
              v19 = a12;
              v13 = v58;
              v16 = a13;
LABEL_31:
              v24 = v60;
              break;
            case 7:
              v33 = *((_DWORD *)v25 + 1);
              v34 = *((_DWORD *)v25 + 2) & 1;
              LOBYTE(v16) = 1;
              v35 = &v25[16 * v34 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)];
              v36 = (_DWORD *)((unsigned __int64)(v25 + 12) & -(__int64)(v34 != 0));
              if ( v36 )
              {
                if ( (unsigned __int8)SepSidInToken(v14, a10, (__int64)v35, (__int64)v16, 0, a11, 0)
                  || Size && *(_WORD *)SeWorldSid == *(_WORD *)v35 && !memcmp(SeWorldSid, v35, Size) )
                {
                  v40 = a12;
                  if ( AuthzBasepObjectInTypeList(v36, a5, a6, &v54) )
                    v41 = v54;
                  else
                    v41 = -1;
LABEL_85:
                  if ( v41 != -1 )
                  {
                    LOBYTE(v39) = v26;
                    SepSetAuditInfoForObjectType(
                      v39,
                      v33,
                      a4,
                      a5,
                      a6,
                      a7,
                      v41,
                      (__int64)a8,
                      (__int64)a9,
                      (__int64)v40,
                      (__int64)a13);
                  }
                }
              }
              else if ( (unsigned __int8)SepSidInToken(v14, a10, (__int64)v35, (__int64)v16, 0, a11, 0)
                     || Size && *(_WORD *)SeWorldSid == *(_WORD *)v35 && !memcmp(SeWorldSid, v35, Size) )
              {
                v38 = 0;
                if ( a6 )
                {
                  do
                  {
                    LOBYTE(v37) = v26;
                    SepSetAuditInfoForObjectType(
                      v37,
                      v33,
                      a4,
                      a5,
                      a6,
                      a7,
                      v38++,
                      (__int64)a8,
                      (__int64)a9,
                      (__int64)a12,
                      (__int64)a13);
                  }
                  while ( v38 < a6 );
                  v25 = v59;
                  v19 = a12;
                  v13 = v58;
                  goto LABEL_88;
                }
              }
              goto LABEL_87;
            case 13:
              v33 = *((_DWORD *)v25 + 1);
              v42 = v25 + 8;
              v43 = 4 * (unsigned __int8)v25[9] + 8;
              if ( v17 && !v13 )
              {
                AuthzBasepInitializeResourceClaimsFromSacl(v17, (__int64 *)&v58);
                v19 = a12;
                v24 = v60;
                v13 = v58;
              }
              v44 = *((unsigned __int16 *)v25 + 1) - v43;
              if ( (int)(v44 - 8) <= 0 )
                goto LABEL_89;
              v45 = *(_QWORD **)(a3 + 1096);
              if ( v45 )
                v46 = v45[75];
              else
                v46 = 0LL;
              if ( v45 )
                v47 = v45[73];
              else
                v47 = 0LL;
              if ( v45 )
                v48 = v45[74];
              else
                v48 = 0LL;
              if ( v45 )
                v49 = v45[72];
              else
                v49 = 0LL;
              AuthzBasepEvaluateAceCondition(
                a3,
                *(_QWORD *)(a3 + 776),
                (__int64)v13,
                v49,
                v48,
                v47,
                v46,
                (_WORD *)((char *)v42 + v43),
                v44 - 8,
                1u,
                0,
                &v55);
              if ( v55 != 1 )
                goto LABEL_87;
              LOBYTE(v50) = 1;
              if ( !(unsigned __int8)SepSidInToken(a3, a10, (__int64)(v25 + 8), v50, 0, a11, 0)
                && (!Size || *(_WORD *)SeWorldSid != *v42 || memcmp(SeWorldSid, v25 + 8, Size)) )
              {
                goto LABEL_87;
              }
              if ( a6 )
              {
                v51 = 0;
                v40 = a12;
                do
                {
                  LOBYTE(v39) = v26;
                  SepSetAuditInfoForObjectType(
                    v39,
                    v33,
                    a4,
                    a5,
                    a6,
                    a7,
                    v51++,
                    (__int64)a8,
                    (__int64)a9,
                    (__int64)a12,
                    (__int64)a13);
                }
                while ( v51 < a6 );
                v41 = v56;
                v25 = v59;
                v13 = v58;
                goto LABEL_85;
              }
              if ( *a8 >= 0 )
              {
                if ( (v26 & 0x40) != 0 )
                {
                  if ( (*a9 & v33) != 0 )
                    goto LABEL_76;
                  v30 = Size_4 == 64;
LABEL_75:
                  if ( v30 )
                  {
LABEL_76:
                    v19 = a12;
                    *a12 = 1;
LABEL_88:
                    v24 = v60;
LABEL_89:
                    v16 = a13;
                    break;
                  }
                }
LABEL_87:
                v19 = a12;
                goto LABEL_88;
              }
              if ( v26 >= 0 )
                goto LABEL_87;
              if ( (v33 & a4) == 0 )
              {
                v31 = Size_4 == (char)0x80;
                goto LABEL_80;
              }
LABEL_81:
              v16 = a13;
              v19 = a12;
              *a13 = 1;
              goto LABEL_31;
          }
        }
        ++v24;
        v21 = Size_4;
        v25 += *((unsigned __int16 *)v25 + 1);
        v20 = a8;
        v14 = a3;
        v17 = a2;
        v60 = v24;
        v59 = v25;
        if ( v24 >= v57 )
          goto LABEL_91;
      }
    }
  }
}
