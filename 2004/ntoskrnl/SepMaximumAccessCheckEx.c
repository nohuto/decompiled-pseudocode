/*
 * XREFs of SepMaximumAccessCheckEx @ 0x140371904
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

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        char a13,
        __int64 a14,
        char a15)
{
  int v16; // ecx
  int v18; // ecx
  char v19; // si
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 result; // rax
  unsigned int v23; // r12d
  char *v24; // rdi
  __int64 v25; // r13
  char v26; // al
  char v27; // al
  unsigned int v28; // r8d
  __int64 v29; // rbx
  __int64 v30; // rsi
  int v31; // edx
  int v32; // r8d
  void *v33; // rsi
  _DWORD *v34; // rbx
  int v35; // edx
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // r8
  char v39; // bl
  __int64 v40; // r9
  int v41; // ecx
  unsigned int v42; // ebx
  _QWORD *v43; // rax
  __int64 v44; // r11
  __int64 v45; // r10
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // ebx
  _QWORD *v49; // rax
  __int64 v50; // r11
  __int64 v51; // r10
  __int64 v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // rcx
  int v55; // edx
  __int64 v56; // r8
  int v57; // [rsp+28h] [rbp-90h]
  unsigned int v58; // [rsp+60h] [rbp-58h]
  unsigned int v59; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v60; // [rsp+C8h] [rbp+10h]
  int v61; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v62; // [rsp+D8h] [rbp+20h]

  v62 = a4;
  v60 = a2;
  v59 = 0;
  v16 = *(_DWORD *)(a1 + 200);
  v61 = 0;
  v18 = v16 & 0x2000;
  v19 = a11;
  v20 = a8;
  v21 = a7;
  a6 = v18;
  if ( a11 && a7 )
  {
    v29 = a8 + 28;
    v30 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*(_DWORD *)v29, 0x800000, 0, *(_QWORD *)(v29 + 12), 1);
      v31 = *(_DWORD *)v29;
      *(_DWORD *)v29 &= v32;
      *(_DWORD *)(v29 - 4) = v31;
      v29 += 48LL;
      --v30;
    }
    while ( v30 );
    v19 = a11;
    v18 = a6;
    a4 = v62;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v23 = 0;
  v24 = (char *)(a3 + 8);
  v58 = result;
  if ( (_DWORD)result )
  {
    v25 = a14;
    do
    {
      if ( (v24[1] & 8) != 0 )
        goto LABEL_12;
      v26 = *v24;
      if ( *v24 )
      {
        if ( v26 == 5 )
        {
          v35 = *((_DWORD *)v24 + 2);
          v36 = v35 & 1;
          v37 = (unsigned __int64)(v24 + 12) & -(__int64)((v35 & 1) != 0);
          if ( v37 )
          {
            if ( !a9
              || !(unsigned __int8)SepSidInToken(
                                     a1,
                                     0LL,
                                     (__int64)&v24[16 * v36 + ((8LL * (v35 & 2)) | 0xC)],
                                     0LL,
                                     v19,
                                     a12,
                                     a15)
              || !(unsigned __int8)AuthzBasepObjectInTypeList(v37, v20, (unsigned int)v21, &v59) )
            {
              goto LABEL_12;
            }
            v57 = 1;
            goto LABEL_35;
          }
          v38 = (__int64)&v24[16 * v36 + ((8LL * (v35 & 2)) | 0xC)];
LABEL_30:
          v27 = SepSidInToken(a1, 0LL, v38, 0LL, v19, a12, a15);
          goto LABEL_8;
        }
        if ( v26 != 4 )
        {
          if ( v26 == 1 )
            goto LABEL_90;
          if ( v26 == 6 )
          {
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(
                                     a1,
                                     0LL,
                                     (__int64)&v24[16 * (*((_DWORD *)v24 + 2) & 1)
                                                 + ((8LL * (*((_DWORD *)v24 + 2) & 2)) | 0xC)],
                                     a4,
                                     v19,
                                     a12,
                                     0) )
              goto LABEL_12;
            if ( ((unsigned __int64)(v24 + 12) & -(__int64)((*((_DWORD *)v24 + 2) & 1) != 0)) != 0 )
            {
              if ( !a9 )
              {
                v40 = *(_QWORD *)(v20 + 40);
                v41 = *((_DWORD *)v24 + 1) & ~*(_DWORD *)(v20 + 28);
                *(_DWORD *)(v20 + 32) |= v41;
                AuthzBasepSetAccessReasons(v41, 0x20000, v23, v40, 0);
                goto LABEL_12;
              }
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(
                                       (unsigned __int64)(v24 + 12) & -(__int64)((*((_DWORD *)v24 + 2) & 1) != 0),
                                       v20,
                                       (unsigned int)v21,
                                       &v59) )
                goto LABEL_12;
              v57 = 2;
LABEL_35:
              v28 = v59;
LABEL_11:
              AuthzBasepAddAccessTypeList(v20, (unsigned int)v21, v28, v23, *((_DWORD *)v24 + 1), v57);
              goto LABEL_12;
            }
LABEL_91:
            v57 = 2;
LABEL_10:
            v28 = 0;
            goto LABEL_11;
          }
          if ( v26 != 9 )
          {
            if ( !a13 )
              goto LABEL_12;
            if ( v26 != 10 )
              goto LABEL_12;
            if ( KeGetCurrentIrql() >= 2u )
              goto LABEL_12;
            v48 = 4 * (unsigned __int8)v24[9] + 8;
            if ( *((unsigned __int16 *)v24 + 1) - v48 == 8 )
              goto LABEL_12;
            if ( a4 && !*a5 )
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
            v49 = *(_QWORD **)(a1 + 1096);
            v50 = v49 ? v49[75] : 0LL;
            v51 = v49 ? v49[73] : 0LL;
            v52 = v49 ? v49[74] : 0LL;
            v53 = v49 ? v49[72] : 0LL;
            AuthzBasepEvaluateAceCondition(
              a1,
              *(_QWORD *)(a1 + 776),
              *a5,
              v53,
              v52,
              v51,
              v50,
              &v24[v48 + 8],
              *((unsigned __int16 *)v24 + 1) - v48 - 8,
              1u,
              v19,
              &v61);
            if ( ((v61 + 1) & 0xFFFFFFFD) != 0 )
              goto LABEL_12;
LABEL_90:
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)(v24 + 8), a4, v19, a12, 0) )
              goto LABEL_12;
            goto LABEL_91;
          }
          v42 = 4 * (unsigned __int8)v24[9] + 8;
          if ( *((unsigned __int16 *)v24 + 1) - v42 == 8 )
            goto LABEL_12;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v43 = *(_QWORD **)(a1 + 1096);
          v44 = v43 ? v43[75] : 0LL;
          v45 = v43 ? v43[73] : 0LL;
          v46 = v43 ? v43[74] : 0LL;
          v47 = v43 ? v43[72] : 0LL;
          AuthzBasepEvaluateAceCondition(
            a1,
            *(_QWORD *)(a1 + 776),
            *a5,
            v47,
            v46,
            v45,
            v44,
            &v24[v42 + 8],
            *((unsigned __int16 *)v24 + 1) - v42 - 8,
            0,
            v19,
            &v61);
          if ( v61 != 1 )
            goto LABEL_12;
          if ( !a6 && !v19 )
          {
            v33 = v24 + 8;
            if ( SepIsPackageSid((__int64)(v24 + 8)) )
            {
LABEL_23:
              v34 = (_DWORD *)(v25 + 4);
              SepMatchPackage(
                a1,
                -1,
                (__int64)v33,
                *((_DWORD *)v24 + 1),
                (_BYTE *)(v25 + 21),
                (_DWORD *)(v25 + 4),
                (_BYTE *)(v25 + 20),
                (_DWORD *)(v25 + 16),
                (_BYTE *)(v25 + 24));
LABEL_25:
              v19 = a11;
              *(_DWORD *)v25 &= ~*v34;
              goto LABEL_12;
            }
            if ( SepIsCapabilitySid((__int64)(v24 + 8)) )
              goto LABEL_24;
            v19 = a11;
          }
          v38 = (__int64)(v24 + 8);
          goto LABEL_30;
        }
        v39 = a12;
        if ( !(unsigned __int8)SepSidInToken(
                                 a1,
                                 0LL,
                                 (__int64)&v24[4 * (unsigned __int8)v24[13] + 20],
                                 0LL,
                                 v19,
                                 a12,
                                 a15) )
          goto LABEL_12;
        v27 = SepSidInToken(v60, 0LL, (__int64)(v24 + 12), 0LL, 0, v39, a15);
      }
      else
      {
        if ( !v18 && !v19 )
        {
          v33 = v24 + 8;
          if ( SepIsPackageSid((__int64)(v24 + 8)) )
            goto LABEL_23;
          if ( SepIsCapabilitySid((__int64)(v24 + 8)) )
          {
LABEL_24:
            v34 = (_DWORD *)(v25 + 8);
            SepMatchCapability(a1, -1, v33, *((_DWORD *)v24 + 1), (_BYTE *)(v25 + 22), (_DWORD *)(v25 + 8));
            goto LABEL_25;
          }
          v19 = a11;
        }
        v27 = SepSidInToken(a1, 0LL, (__int64)(v24 + 8), 0LL, v19, a12, a15);
      }
LABEL_8:
      if ( v27 )
      {
        v57 = 1;
        goto LABEL_10;
      }
LABEL_12:
      result = *((unsigned __int16 *)v24 + 1);
      ++v23;
      v18 = a6;
      v24 += result;
      a4 = v62;
    }
    while ( v23 < v58 );
  }
  if ( v19 && (_DWORD)v21 )
  {
    v54 = (_DWORD *)(v20 + 28);
    v55 = ~a10;
    v56 = v21;
    do
    {
      result = *(v54 - 1) & ((unsigned int)v55 | *v54);
      *v54 = result;
      v54 += 12;
      --v56;
    }
    while ( v56 );
  }
  return result;
}
