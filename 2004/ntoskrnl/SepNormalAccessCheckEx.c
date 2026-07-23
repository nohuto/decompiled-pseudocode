/*
 * XREFs of SepNormalAccessCheckEx @ 0x140371A2C
 * Callers:
 *     SepAccessCheckEx @ 0x140371500 (SepAccessCheckEx.c)
 * Callees:
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInToken @ 0x14026D774 (SepSidInToken.c)
 *     SepIsCapabilitySid @ 0x140298600 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x14029865C (SepIsPackageSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x140332A68 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x140332B60 (AuthzBasepSetAccessReasons.c)
 *     SepMatchPackage @ 0x140332BB4 (SepMatchPackage.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchCapability @ 0x140344BFC (SepMatchCapability.c)
 *     AuthzBasepObjectInTypeList @ 0x1405BC2B0 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _DWORD *a14,
        char a15)
{
  __int64 result; // rax
  int v17; // edx
  int v18; // r14d
  int v19; // edx
  unsigned int v20; // ebp
  __int64 v22; // rsi
  __int64 v23; // rcx
  _DWORD *v24; // r13
  char v25; // bl
  unsigned int v26; // r12d
  __int64 v27; // rdi
  bool v28; // zf
  int v29; // ecx
  char v30; // al
  bool v31; // zf
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdi
  _DWORD *v36; // rbx
  int v37; // eax
  int v38; // edx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rcx
  bool v42; // zf
  unsigned int v43; // ebx
  _QWORD *v44; // rax
  __int64 v45; // r11
  __int64 v46; // r10
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // edx
  __int64 v50; // rcx
  unsigned int v51; // ebx
  _QWORD *v52; // rax
  __int64 v53; // r11
  __int64 v54; // r10
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // edx
  __int64 v58; // rcx
  unsigned int v59; // [rsp+60h] [rbp-48h]
  int v60; // [rsp+64h] [rbp-44h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  unsigned int v62; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v63; // [rsp+C0h] [rbp+18h]
  int v64; // [rsp+C8h] [rbp+20h]

  result = (__int64)&retaddr;
  v63 = a3;
  v62 = 0;
  v17 = *(_DWORD *)(a2 + 200);
  v18 = 0;
  a7 = 0;
  v19 = v17 & 0x2000;
  v20 = a8;
  v22 = a9;
  v60 = v19;
  v59 = *(unsigned __int16 *)(a4 + 4);
  if ( a8 )
  {
    result = a9 + 24;
    v23 = a8;
    do
    {
      *(_DWORD *)result = a1;
      result += 48LL;
      --v23;
    }
    while ( v23 );
  }
  v24 = a14;
  v25 = a11;
  if ( !v19 && !a11 )
    v18 = a1 | *a14;
  v26 = 0;
  v64 = v18;
  v27 = a4 + 8;
  v28 = v59 == 0;
  if ( v59 )
  {
    while ( 1 )
    {
      v29 = *(_DWORD *)(v22 + 24);
      if ( !v29 && !v18 )
      {
LABEL_27:
        v28 = v26 == v59;
        break;
      }
      if ( (*(_BYTE *)(v27 + 1) & 8) == 0 )
      {
        if ( !v29 )
        {
          if ( !*(_BYTE *)v27 )
          {
LABEL_12:
            v31 = v19 == 0;
LABEL_13:
            if ( v31 && !v25 && v18 )
            {
              if ( SepIsPackageSid(v27 + 8) )
              {
                v36 = v24 + 1;
                SepMatchPackage(
                  a2,
                  v64,
                  v27 + 8,
                  *(_DWORD *)(v27 + 4),
                  (_BYTE *)v24 + 21,
                  v24 + 1,
                  (_BYTE *)v24 + 20,
                  v24 + 4,
                  (_BYTE *)v24 + 24);
LABEL_41:
                v37 = ~*v36;
                v18 &= v37;
                *v24 &= v37;
LABEL_42:
                v25 = a11;
                goto LABEL_24;
              }
              if ( SepIsCapabilitySid(v27 + 8) )
              {
                v36 = v24 + 2;
                SepMatchCapability(a2, v64, (void *)(v27 + 8), *(_DWORD *)(v27 + 4), (_BYTE *)v24 + 22, v24 + 2);
                goto LABEL_41;
              }
              v20 = a8;
            }
            if ( !*(_DWORD *)(v22 + 24) )
              goto LABEL_24;
            v32 = v27 + 8;
LABEL_21:
            v33 = a2;
LABEL_22:
            if ( (unsigned __int8)SepSidInToken(v33, 0LL, v32, 0LL, v25, a12, a15) )
              AuthzBasepAddAccessTypeList(v22, v20, 0, v26, *(_DWORD *)(v27 + 4), 0);
            goto LABEL_24;
          }
          if ( *(_BYTE *)v27 != 9 )
            goto LABEL_24;
        }
        v30 = *(_BYTE *)v27;
        if ( !*(_BYTE *)v27 )
          goto LABEL_12;
        switch ( v30 )
        {
          case 5:
            v38 = *(_DWORD *)(v27 + 8);
            v39 = v38 & 1;
            v40 = (v27 + 12) & -(__int64)((v38 & 1) != 0);
            if ( v40 )
            {
              if ( a10
                && (unsigned __int8)SepSidInToken(
                                      a2,
                                      0LL,
                                      v27 + ((8LL * (v38 & 2)) | 0xC) + 16 * v39,
                                      0LL,
                                      a11,
                                      a12,
                                      a15)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v40, v22, v20, &v62) )
              {
                AuthzBasepAddAccessTypeList(v22, v20, v62, v26, *(_DWORD *)(v27 + 4), 0);
              }
              goto LABEL_42;
            }
            v25 = a11;
            v32 = v27 + ((8LL * (v38 & 2)) | 0xC) + 16 * v39;
            goto LABEL_21;
          case 4:
            if ( !(unsigned __int8)SepSidInToken(
                                     a2,
                                     0LL,
                                     v27 + 4 * (*(unsigned __int8 *)(v27 + 13) + 5LL),
                                     0LL,
                                     v25,
                                     a12,
                                     a15) )
              break;
            v33 = v63;
            v32 = v27 + 12;
            goto LABEL_22;
          case 1:
LABEL_60:
            LOBYTE(a4) = 1;
            if ( (unsigned __int8)SepSidInToken(a2, 0LL, v27 + 8, a4, v25, a12, 0)
              && (*(_DWORD *)(v22 + 24) & *(_DWORD *)(v27 + 4)) != 0 )
            {
              result = AuthzBasepSetAccessReasons(
                         *(_DWORD *)(v22 + 24) & *(_DWORD *)(v27 + 4),
                         0x20000,
                         v26,
                         *(_QWORD *)(v22 + 40),
                         0);
              goto LABEL_27;
            }
            break;
          case 6:
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(
                                     a2,
                                     0LL,
                                     v27
                                   + ((8LL * (*(_DWORD *)(v27 + 8) & 2)) | 0xC)
                                   + 16LL * (*(_DWORD *)(v27 + 8) & 1),
                                     a4,
                                     v25,
                                     a12,
                                     0) )
              break;
            v41 = (v27 + 12) & -(__int64)((*(_DWORD *)(v27 + 8) & 1) != 0);
            if ( v41 && a10 )
            {
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v41, v22, v20, &v62) )
                break;
              result = *(unsigned int *)(v22 + 48LL * v62 + 24);
              v42 = ((unsigned int)result & *(_DWORD *)(v27 + 4)) == 0;
            }
            else
            {
              result = *(unsigned int *)(v27 + 4);
              v42 = ((unsigned int)result & *(_DWORD *)(v22 + 24)) == 0;
            }
            if ( !v42 )
              goto LABEL_27;
            break;
          case 9:
            v43 = 4 * *(unsigned __int8 *)(v27 + 9) + 8;
            if ( *(unsigned __int16 *)(v27 + 2) - v43 == 8 )
              goto LABEL_42;
            if ( a5 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
            v44 = *(_QWORD **)(a2 + 1096);
            if ( v44 )
              v45 = v44[75];
            else
              v45 = 0LL;
            if ( v44 )
              v46 = v44[73];
            else
              v46 = 0LL;
            if ( v44 )
              v47 = v44[74];
            else
              v47 = 0LL;
            if ( v44 )
              v48 = v44[72];
            else
              v48 = 0LL;
            v49 = *(unsigned __int16 *)(v27 + 2) - v43 - 8;
            v50 = v43;
            v25 = a11;
            AuthzBasepEvaluateAceCondition(
              a2,
              *(_QWORD *)(a2 + 776),
              *a6,
              v48,
              v47,
              v46,
              v45,
              (_DWORD *)(v27 + v50 + 8),
              v49,
              0,
              a11,
              &a7);
            if ( a7 == 1 )
            {
              v31 = v60 == 0;
              goto LABEL_13;
            }
            break;
          default:
            if ( a13 && v30 == 10 && KeGetCurrentIrql() < 2u )
            {
              v51 = 4 * *(unsigned __int8 *)(v27 + 9) + 8;
              if ( *(unsigned __int16 *)(v27 + 2) - v51 == 8 )
                goto LABEL_42;
              if ( a5 && !*a6 )
                AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
              v52 = *(_QWORD **)(a2 + 1096);
              v53 = v52 ? v52[75] : 0LL;
              v54 = v52 ? v52[73] : 0LL;
              v55 = v52 ? v52[74] : 0LL;
              v56 = v52 ? v52[72] : 0LL;
              v57 = *(unsigned __int16 *)(v27 + 2) - v51 - 8;
              v58 = v51;
              v25 = a11;
              AuthzBasepEvaluateAceCondition(
                a2,
                *(_QWORD *)(a2 + 776),
                *a6,
                v56,
                v55,
                v54,
                v53,
                (_DWORD *)(v27 + v58 + 8),
                v57,
                1u,
                a11,
                &a7);
              if ( ((a7 + 1) & 0xFFFFFFFD) == 0 )
                goto LABEL_60;
            }
            break;
        }
      }
LABEL_24:
      result = *(unsigned __int16 *)(v27 + 2);
      ++v26;
      v20 = a8;
      v27 += result;
      v28 = v26 == v59;
      if ( v26 >= v59 )
        break;
      v19 = v60;
    }
  }
  if ( v28 )
  {
    v34 = v22 + 24;
    if ( *(_DWORD *)(v22 + 24) )
    {
      if ( v20 )
      {
        v35 = v20;
        do
        {
          result = AuthzBasepSetAccessReasons(*(_DWORD *)v34, 0x800000, 0, *(_QWORD *)(v34 + 16), 0);
          v34 += 48LL;
          --v35;
        }
        while ( v35 );
      }
    }
  }
  return result;
}
