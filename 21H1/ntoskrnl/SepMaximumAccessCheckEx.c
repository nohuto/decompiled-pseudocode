/*
 * XREFs of SepMaximumAccessCheckEx @ 0x140370CD4
 * Callers:
 *     SepAccessCheckEx @ 0x1403708D0 (SepAccessCheckEx.c)
 * Callees:
 *     SepSidInToken @ 0x140204C10 (SepSidInToken.c)
 *     SepMatchPackage @ 0x14020521C (SepMatchPackage.c)
 *     SepIsCapabilitySid @ 0x140205C40 (SepIsCapabilitySid.c)
 *     SepIsPackageSid @ 0x140205C9C (SepIsPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x1402F5D38 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x1402F5E30 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140303DA8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchCapability @ 0x140306DFC (SepMatchCapability.c)
 *     AuthzBasepObjectInTypeList @ 0x1405BBB90 (AuthzBasepObjectInTypeList.c)
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
        __int64 a14)
{
  int v15; // ecx
  int v17; // ecx
  char v18; // si
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 result; // rax
  unsigned int v22; // r12d
  char *v23; // rdi
  __int64 v24; // r13
  char v25; // al
  __int64 v26; // r8
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
  __int64 v38; // r9
  int v39; // ecx
  unsigned int v40; // ebx
  _QWORD *v41; // rax
  __int64 v42; // r11
  __int64 v43; // r10
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  __int64 v48; // r11
  __int64 v49; // r10
  __int64 v50; // r8
  __int64 v51; // r9
  _DWORD *v52; // rcx
  int v53; // edx
  __int64 v54; // r8
  int v55; // [rsp+28h] [rbp-90h]
  unsigned int v56; // [rsp+60h] [rbp-58h]
  unsigned int v57; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v58; // [rsp+C8h] [rbp+10h]
  int v59; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v60; // [rsp+D8h] [rbp+20h]

  v60 = a4;
  v58 = a2;
  v57 = 0;
  v15 = *(_DWORD *)(a1 + 200);
  v59 = 0;
  v17 = v15 & 0x2000;
  v18 = a11;
  v19 = a8;
  v20 = a7;
  a6 = v17;
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
    v18 = a11;
    v17 = a6;
    a4 = v60;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v22 = 0;
  v23 = (char *)(a3 + 8);
  v56 = result;
  if ( (_DWORD)result )
  {
    v24 = a14;
    while ( 1 )
    {
      if ( (v23[1] & 8) != 0 )
        goto LABEL_13;
      v25 = *v23;
      if ( !*v23 )
        break;
      if ( v25 == 5 )
      {
        v35 = *((_DWORD *)v23 + 2);
        v36 = v35 & 1;
        v37 = (unsigned __int64)(v23 + 12) & -(__int64)((v35 & 1) != 0);
        if ( v37 )
        {
          if ( !a9
            || !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)&v23[16 * v36 + ((8LL * (v35 & 2)) | 0xC)], 0LL, v18)
            || !(unsigned __int8)AuthzBasepObjectInTypeList(v37, v19, (unsigned int)v20, &v57) )
          {
            goto LABEL_13;
          }
          v55 = 1;
          goto LABEL_35;
        }
        v26 = (__int64)&v23[16 * v36 + ((8LL * (v35 & 2)) | 0xC)];
        goto LABEL_8;
      }
      if ( v25 != 4 )
      {
        if ( v25 == 1 )
          goto LABEL_90;
        if ( v25 == 6 )
        {
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   a1,
                                   0LL,
                                   (__int64)&v23[16 * (*((_DWORD *)v23 + 2) & 1)
                                               + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                                   a4,
                                   v18) )
            goto LABEL_13;
          if ( ((unsigned __int64)(v23 + 12) & -(__int64)((*((_DWORD *)v23 + 2) & 1) != 0)) != 0 )
          {
            if ( !a9 )
            {
              v38 = *(_QWORD *)(v19 + 40);
              v39 = *((_DWORD *)v23 + 1) & ~*(_DWORD *)(v19 + 28);
              *(_DWORD *)(v19 + 32) |= v39;
              AuthzBasepSetAccessReasons(v39, 0x20000, v22, v38, 0);
              goto LABEL_13;
            }
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(
                                     (unsigned __int64)(v23 + 12) & -(__int64)((*((_DWORD *)v23 + 2) & 1) != 0),
                                     v19,
                                     (unsigned int)v20,
                                     &v57) )
              goto LABEL_13;
            v55 = 2;
LABEL_35:
            v28 = v57;
LABEL_12:
            AuthzBasepAddAccessTypeList(v19, (unsigned int)v20, v28, v22, *((_DWORD *)v23 + 1), v55);
            goto LABEL_13;
          }
LABEL_91:
          v55 = 2;
LABEL_11:
          v28 = 0;
          goto LABEL_12;
        }
        if ( v25 != 9 )
        {
          if ( !a13 )
            goto LABEL_13;
          if ( v25 != 10 )
            goto LABEL_13;
          if ( KeGetCurrentIrql() >= 2u )
            goto LABEL_13;
          v46 = 4 * (unsigned __int8)v23[9] + 8;
          if ( *((unsigned __int16 *)v23 + 1) - v46 == 8 )
            goto LABEL_13;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v47 = *(_QWORD **)(a1 + 1096);
          v48 = v47 ? v47[75] : 0LL;
          v49 = v47 ? v47[73] : 0LL;
          v50 = v47 ? v47[74] : 0LL;
          v51 = v47 ? v47[72] : 0LL;
          AuthzBasepEvaluateAceCondition(
            a1,
            *(_QWORD *)(a1 + 776),
            *a5,
            v51,
            v50,
            v49,
            v48,
            &v23[v46 + 8],
            *((unsigned __int16 *)v23 + 1) - v46 - 8,
            1u,
            v18,
            &v59);
          if ( ((v59 + 1) & 0xFFFFFFFD) != 0 )
            goto LABEL_13;
LABEL_90:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)(v23 + 8), a4, v18) )
            goto LABEL_13;
          goto LABEL_91;
        }
        v40 = 4 * (unsigned __int8)v23[9] + 8;
        if ( *((unsigned __int16 *)v23 + 1) - v40 == 8 )
          goto LABEL_13;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
        v41 = *(_QWORD **)(a1 + 1096);
        v42 = v41 ? v41[75] : 0LL;
        v43 = v41 ? v41[73] : 0LL;
        v44 = v41 ? v41[74] : 0LL;
        v45 = v41 ? v41[72] : 0LL;
        AuthzBasepEvaluateAceCondition(
          a1,
          *(_QWORD *)(a1 + 776),
          *a5,
          v45,
          v44,
          v43,
          v42,
          &v23[v40 + 8],
          *((unsigned __int16 *)v23 + 1) - v40 - 8,
          0,
          v18,
          &v59);
        if ( v59 != 1 )
          goto LABEL_13;
        if ( !a6 && !v18 )
        {
          v33 = v23 + 8;
          if ( SepIsPackageSid((__int64)(v23 + 8)) )
          {
LABEL_24:
            v34 = (_DWORD *)(v24 + 4);
            SepMatchPackage(
              a1,
              -1,
              (__int64)v33,
              *((_DWORD *)v23 + 1),
              (_BYTE *)(v24 + 21),
              (_DWORD *)(v24 + 4),
              (_BYTE *)(v24 + 20),
              (_DWORD *)(v24 + 16),
              (_BYTE *)(v24 + 24));
LABEL_26:
            v18 = a11;
            *(_DWORD *)v24 &= ~*v34;
            goto LABEL_13;
          }
          if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
            goto LABEL_25;
          v18 = a11;
        }
        v26 = (__int64)(v23 + 8);
        goto LABEL_8;
      }
      if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)&v23[4 * (unsigned __int8)v23[13] + 20], 0LL, v18) )
        goto LABEL_13;
      v27 = SepSidInToken(v58, 0LL, (__int64)(v23 + 12), 0LL, 0);
LABEL_9:
      if ( v27 )
      {
        v55 = 1;
        goto LABEL_11;
      }
LABEL_13:
      result = *((unsigned __int16 *)v23 + 1);
      ++v22;
      v17 = a6;
      v23 += result;
      a4 = v60;
      if ( v22 >= v56 )
        goto LABEL_14;
    }
    if ( !v17 && !v18 )
    {
      v33 = v23 + 8;
      if ( SepIsPackageSid((__int64)(v23 + 8)) )
        goto LABEL_24;
      if ( SepIsCapabilitySid((__int64)(v23 + 8)) )
      {
LABEL_25:
        v34 = (_DWORD *)(v24 + 8);
        SepMatchCapability(a1, -1, v33, *((_DWORD *)v23 + 1), (_BYTE *)(v24 + 22), (_DWORD *)(v24 + 8));
        goto LABEL_26;
      }
      v18 = a11;
    }
    v26 = (__int64)(v23 + 8);
LABEL_8:
    v27 = SepSidInToken(a1, 0LL, v26, 0LL, v18);
    goto LABEL_9;
  }
LABEL_14:
  if ( v18 && (_DWORD)v20 )
  {
    v52 = (_DWORD *)(v19 + 28);
    v53 = ~a10;
    v54 = v20;
    do
    {
      result = *(v52 - 1) & ((unsigned int)v53 | *v52);
      *v52 = result;
      v52 += 12;
      --v54;
    }
    while ( v54 );
  }
  return result;
}
