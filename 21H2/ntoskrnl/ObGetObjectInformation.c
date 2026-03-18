/*
 * XREFs of ObGetObjectInformation @ 0x140984994
 * Callers:
 *     ExpGetObjectInformation @ 0x1409F67F0 (ExpGetObjectInformation.c)
 * Callees:
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x14025A640 (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x1402A488C (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 *     ObpCreateTypeArray @ 0x14098501C (ObpCreateTypeArray.c)
 *     ObpDestroyTypeArray @ 0x140985120 (ObpDestroyTypeArray.c)
 *     ObQueryTypeName @ 0x1409853FC (ObQueryTypeName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ObGetObjectInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // r15
  __int64 Pool2; // rax
  unsigned __int16 *v6; // r12
  unsigned __int16 *v8; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  unsigned int *TypeArray; // rdi
  unsigned int v12; // edx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  unsigned int *v15; // r13
  __int64 v16; // r11
  char v17; // dl
  unsigned int i; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // rcx
  _DWORD *v23; // r8
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // r8d
  int *v28; // rax
  int v29; // ecx
  int v30; // edx
  __int64 *v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rax
  int v36; // edi
  int v37; // eax
  unsigned int v38; // eax
  void *v39; // rbx
  unsigned __int16 *v40; // rcx
  unsigned __int16 *v41; // rdi
  __int16 v42; // ax
  __int16 v43; // di
  unsigned int v44; // [rsp+30h] [rbp-B8h] BYREF
  int v45; // [rsp+34h] [rbp-B4h]
  char v46; // [rsp+38h] [rbp-B0h]
  unsigned int v47; // [rsp+3Ch] [rbp-ACh]
  int v48; // [rsp+40h] [rbp-A8h]
  unsigned int v49; // [rsp+44h] [rbp-A4h]
  const void **v50; // [rsp+48h] [rbp-A0h]
  unsigned int v51; // [rsp+50h] [rbp-98h]
  __int64 v52; // [rsp+58h] [rbp-90h]
  unsigned __int64 v53; // [rsp+60h] [rbp-88h]
  unsigned int *v54; // [rsp+68h] [rbp-80h]
  unsigned __int16 *v55; // [rsp+70h] [rbp-78h]
  _DWORD *v56; // [rsp+78h] [rbp-70h]
  unsigned int *v57; // [rsp+80h] [rbp-68h]
  __int64 v58; // [rsp+88h] [rbp-60h]
  char *v59; // [rsp+90h] [rbp-58h]
  __int64 v60; // [rsp+98h] [rbp-50h]
  __int64 v61; // [rsp+A0h] [rbp-48h]
  unsigned __int16 *v62; // [rsp+A8h] [rbp-40h]

  v44 = 0;
  v4 = 0LL;
  v54 = 0LL;
  v53 = 536LL;
  Pool2 = ExAllocatePool2(256LL, 536LL, 1916887631LL);
  v6 = (unsigned __int16 *)Pool2;
  v55 = (unsigned __int16 *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v8 = (unsigned __int16 *)Pool2;
  v50 = (const void **)Pool2;
  v9 = 0;
  v10 = 0;
  v52 = 0LL;
  TypeArray = (unsigned int *)ObpCreateTypeArray(ObpTypeObjectType);
  v57 = TypeArray;
  if ( !TypeArray )
  {
    ExFreePoolWithTag(v6, 0x7241624Fu);
    return 3221225473LL;
  }
  v12 = 0;
LABEL_6:
  v49 = v12;
  if ( v12 < *TypeArray )
  {
    v13 = *(_QWORD *)&TypeArray[2 * v12 + 2];
    if ( !v13 )
      goto LABEL_22;
    v14 = (_DWORD *)(v13 + 80);
    v56 = v14;
    if ( v14 == ObpTypeObjectType )
      goto LABEL_22;
    v15 = (unsigned int *)ObpCreateTypeArray(v14);
    v54 = v15;
    LODWORD(v16) = 0;
    if ( !v15 )
      goto LABEL_21;
    v17 = 1;
    v46 = 1;
    for ( i = 0; ; ++i )
    {
      v51 = i;
      if ( i >= *v15 )
      {
LABEL_20:
        ObpDestroyTypeArray(v15);
        v54 = 0LL;
        TypeArray = v57;
LABEL_21:
        v12 = v49;
LABEL_22:
        ++v12;
        goto LABEL_6;
      }
      v19 = *(_QWORD *)&v15[2 * i + 2];
      v58 = v19;
      if ( v19 )
        break;
LABEL_71:
      ;
    }
    v20 = v19 + 32;
    v21 = v19 + 80;
    v59 = (char *)(v19 + 80);
    if ( v17 )
    {
      v46 = v16;
      if ( v52 && v10 < a3 )
        *(_DWORD *)v52 = v10;
      v22 = a2 + v10;
      v52 = v22;
      v60 = v22;
      v10 += 48;
      v47 = v10;
      if ( v10 < 0x30 )
        goto LABEL_18;
      if ( v10 >= a3 )
        goto LABEL_24;
      *(_DWORD *)v22 = v16;
      v23 = v56;
      *(_DWORD *)(v22 + 4) = v56[11];
      *(_DWORD *)(v22 + 8) = v23[12];
      *(_DWORD *)(v22 + 12) = *((unsigned __int8 *)v23 + 40);
      *(_DWORD *)(v22 + 16) = v23[18];
      *(_OWORD *)(v22 + 20) = *(_OWORD *)(v23 + 19);
      *(_DWORD *)(v22 + 36) = v23[23];
      *(_DWORD *)(v22 + 40) = v23[25];
      *(_BYTE *)(v22 + 44) = (*((_BYTE *)v23 + 66) & 8) != 0;
      v44 = v16;
      v24 = ObQueryTypeName(v21, v22 + 48, a3 - v10, &v44);
      v48 = v24;
      v25 = (v44 + 7) & 0xFFFFFFF8;
      v44 = v25;
      LODWORD(v16) = 0;
      if ( v24 < 0 )
      {
        v9 = v24;
        v45 = v24;
      }
      else
      {
        v26 = v52;
        *(_WORD *)(v52 + 50) = v25 - 16;
        *(_QWORD *)(v26 + 56) += a1 - a2;
        v25 = v44;
      }
      v10 += v25;
      v47 = v10;
      if ( v10 < v25 )
      {
LABEL_18:
        v9 = -1073741675;
LABEL_19:
        v45 = v9;
        goto LABEL_20;
      }
      v19 = v58;
      v21 = v20 + 48;
      v27 = a3;
    }
    else
    {
      v27 = a3;
      if ( v10 < a3 )
        *(_DWORD *)v4 = v10;
    }
    v4 = a2 + v10;
    v61 = v4;
    v10 += 64;
    v47 = v10;
    if ( v10 < 0x40 )
      goto LABEL_18;
    if ( v10 >= v27 )
    {
LABEL_24:
      v9 = -1073741820;
      goto LABEL_19;
    }
    *(_DWORD *)v4 = v16;
    *(_QWORD *)(v4 + 8) = v21;
    *(_QWORD *)(v4 + 16) = *(_QWORD *)(v19 + 16);
    *(_WORD *)(v4 + 24) = *(_WORD *)(v19 + 24);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)v20;
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v20 + 8);
    *(_WORD *)(v4 + 26) = *(unsigned __int8 *)(v20 + 27);
    *(_QWORD *)(v4 + 56) = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
    v28 = (int *)OBJECT_HEADER_TO_QUOTA_INFO(v20);
    v29 = v56[26];
    v30 = v56[27];
    if ( v28 )
    {
      v29 = *v28;
      v30 = v28[1];
    }
    *(_DWORD *)(v4 + 36) = v29;
    *(_DWORD *)(v4 + 40) = v30;
    v31 = (__int64 *)OBJECT_HEADER_TO_PROCESS_INFO(v20);
    if ( v31 )
    {
      v35 = *v31;
      if ( v35 )
        *(_QWORD *)(v4 + 48) = *(_QWORD *)(v35 + 1088);
    }
    v44 = v16;
    v36 = v16;
    v48 = v16;
    if ( *(_QWORD *)(v33 + 160) != v16 && (POBJECT_TYPE *)v33 == IoFileObjectType )
    {
      *(_OWORD *)v8 = *(_OWORD *)(v34 + 88);
      v37 = *v8;
      if ( (_WORD)v37 && *((_QWORD *)v8 + 1) != v16 )
      {
        v38 = v37 + 2;
        v44 = v38;
        if ( v38 > 0x208 )
        {
          v44 = 520;
          *v8 = 518;
          v38 = v44;
        }
        v39 = v8 + 8;
        memmove(v39, v50[1], v38 - 2LL);
        v40 = (unsigned __int16 *)v50;
        v50[1] = v39;
        v40[1] = v44;
        LODWORD(v16) = 0;
        *((_WORD *)v39 + (*v40 >> 1)) = 0;
        v44 += 16;
        v8 = (unsigned __int16 *)v50;
        v32 = a3;
      }
LABEL_53:
      if ( v44 )
      {
        v44 = (v44 + 7) & 0xFFFFFFF8;
        v10 += v44;
        v47 = v10;
        if ( v10 < v44 )
          goto LABEL_18;
        if ( v36 < 0 )
        {
          v10 += 16;
          v47 = v10;
          if ( v10 < 0x10 )
            goto LABEL_18;
          if ( v10 < v32 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
            v9 = v36;
            v45 = v36;
            goto LABEL_69;
          }
        }
        else
        {
          v42 = *v8;
          if ( *v8 && v10 < v32 )
          {
            v43 = v42 + 2;
            *(_WORD *)(v4 + 64) = v42;
            memmove((void *)(v4 + 80), v50[1], (unsigned __int16)(v42 + 2));
            *(_QWORD *)(v4 + 72) = a1 + v4 + 80 - a2;
            *(_WORD *)(v4 + 66) = v43;
LABEL_69:
            LODWORD(v16) = 0;
            goto LABEL_70;
          }
          if ( *v8 == (_WORD)v16 )
            goto LABEL_66;
        }
LABEL_67:
        v9 = -1073741820;
        v45 = -1073741820;
LABEL_70:
        v8 = (unsigned __int16 *)v50;
        i = v51;
        v17 = v46;
        goto LABEL_71;
      }
      v10 += 16;
      v47 = v10;
      if ( v10 < 0x10 )
        goto LABEL_18;
LABEL_66:
      if ( v10 < v32 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v4 + 64), 0LL);
        goto LABEL_69;
      }
      goto LABEL_67;
    }
    v36 = ObQueryNameStringMode((char *)v34, (__int64)v8, v53, &v44, v16);
    v48 = v36;
    if ( v36 == -1073741820 )
    {
      v32 = a3;
      if ( v44 <= v53 || v10 + v44 >= a3 )
        goto LABEL_52;
      v41 = v6;
      v6 = (unsigned __int16 *)ExAllocatePool2(256LL, v44, 1916887631LL);
      v55 = v6;
      LODWORD(v16) = 0;
      if ( !v6 )
      {
        v6 = v41;
        v55 = v41;
        v36 = -1073741670;
        v48 = -1073741670;
        v32 = a3;
        goto LABEL_53;
      }
      ExFreePoolWithTag(v41, 0x7241624Fu);
      v53 = v44;
      v58 = v44;
      v8 = v6;
      v50 = (const void **)v6;
      v62 = v6;
      v36 = ObQueryNameStringMode(v59, (__int64)v6, v44, &v44, 0);
      v48 = v36;
    }
    v32 = a3;
LABEL_52:
    LODWORD(v16) = 0;
    goto LABEL_53;
  }
  if ( a4 )
    *a4 = v10;
  ObpDestroyTypeArray(TypeArray);
  ExFreePoolWithTag(v6, 0x7241624Fu);
  if ( !v52 )
    return (unsigned int)-1073741823;
  return v9;
}
