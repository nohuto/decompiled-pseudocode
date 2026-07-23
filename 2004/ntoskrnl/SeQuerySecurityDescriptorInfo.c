/*
 * XREFs of SeQuerySecurityDescriptorInfo @ 0x1405E4BD0
 * Callers:
 *     CmpQueryKeySecurity @ 0x1405E4A10 (CmpQueryKeySecurity.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1406266C4 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140667C7C (ObQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     RtlpFilterSacl @ 0x1405E5094 (RtlpFilterSacl.c)
 */

NTSTATUS __stdcall SeQuerySecurityDescriptorInfo(
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PULONG Length,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor)
{
  PULONG v4; // r10
  _DWORD *v5; // r8
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // ecx
  unsigned int *v10; // rax
  __int16 v11; // cx
  __int64 v12; // rdx
  unsigned __int8 *v13; // rsi
  __int64 v14; // rdx
  unsigned __int8 *v15; // r14
  __int64 v16; // rdx
  unsigned __int16 *v17; // rdi
  char *v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned int v20; // ebx
  DWORD v21; // r9d
  DWORD v22; // eax
  DWORD v23; // edx
  int v24; // eax
  __int16 v25; // dx
  char *v26; // rbx
  DWORD v27; // eax
  PSECURITY_INFORMATION v28; // r15
  int v29; // esi
  char v30; // si
  __int64 v31; // rcx
  int v33; // [rsp+24h] [rbp-94h] BYREF
  size_t Size; // [rsp+28h] [rbp-90h]
  char *v35; // [rsp+30h] [rbp-88h]
  unsigned __int64 v36; // [rsp+38h] [rbp-80h]
  char *v37; // [rsp+40h] [rbp-78h]
  ULONG v38; // [rsp+48h] [rbp-70h]
  __int128 v39; // [rsp+50h] [rbp-68h]
  unsigned __int8 *v40; // [rsp+60h] [rbp-58h]
  char *v41; // [rsp+68h] [rbp-50h]
  unsigned __int16 *v42; // [rsp+70h] [rbp-48h]

  v4 = Length;
  v5 = SecurityDescriptor;
  v7 = 0;
  LODWORD(Size) = 0;
  v8 = 0;
  v33 = 0;
  v9 = *v4;
  v38 = *v4;
  v10 = (unsigned int *)*ObjectsSecurityDescriptor;
  if ( *ObjectsSecurityDescriptor )
  {
    v39 = *(_OWORD *)v10;
    LODWORD(v40) = v10[4];
    v11 = *((_WORD *)v10 + 1);
    if ( v11 >= 0 )
    {
      v13 = (unsigned __int8 *)*((_QWORD *)v10 + 1);
    }
    else
    {
      v12 = v10[1];
      if ( (_DWORD)v12 )
        v13 = (unsigned __int8 *)v10 + v12;
      else
        v13 = 0LL;
    }
    *((_QWORD *)&v39 + 1) = v13;
    if ( v11 >= 0 )
    {
      v15 = (unsigned __int8 *)*((_QWORD *)v10 + 2);
    }
    else
    {
      v14 = v10[2];
      if ( (_DWORD)v14 )
        v15 = (unsigned __int8 *)v10 + v14;
      else
        v15 = 0LL;
    }
    v40 = v15;
    if ( (v11 & 4) != 0 )
    {
      if ( v11 >= 0 )
      {
        v17 = (unsigned __int16 *)*((_QWORD *)v10 + 4);
      }
      else
      {
        v16 = v10[4];
        if ( (_DWORD)v16 )
          v17 = (unsigned __int16 *)((char *)v10 + v16);
        else
          v17 = 0LL;
      }
    }
    else
    {
      v17 = 0LL;
    }
    v42 = v17;
    if ( (v11 & 0x10) != 0 )
    {
      if ( v11 >= 0 )
      {
        v18 = (char *)*((_QWORD *)v10 + 3);
      }
      else
      {
        v31 = v10[3];
        if ( (_DWORD)v31 )
          v18 = (char *)v10 + v31;
        else
          v18 = 0LL;
      }
    }
    else
    {
      v18 = 0LL;
    }
    v35 = v18;
    v41 = v18;
    v19 = (unsigned __int64)v39 >> 16;
    LOWORD(v19) = WORD1(v39) & 0x7FFF;
    v36 = v19;
    WORD1(v39) &= ~0x8000u;
    v20 = 20;
    v21 = *SecurityInformation;
    v22 = *SecurityInformation & 0x80;
    v23 = *SecurityInformation & 0x100;
    if ( (*SecurityInformation & 0x10000) != 0 )
    {
      v21 |= 0x1FFu;
      *SecurityInformation = v21;
      if ( !v22 )
      {
        v21 &= ~0x80u;
        *SecurityInformation = v21;
      }
      if ( !v23 )
      {
        v21 &= ~0x100u;
        *SecurityInformation = v21;
      }
    }
    if ( (v21 & 1) != 0 && v13 )
    {
      v24 = v13[1];
      v7 = 4 * v24 + 8;
      v20 = ((4 * v24 + 11) & 0xFFFFFFFC) + 20;
    }
    if ( (v21 & 2) != 0 && v15 )
    {
      LODWORD(Size) = 4 * v15[1] + 8;
      v20 += (Size + 3) & 0xFFFFFFFC;
    }
    if ( (v21 & 4) != 0 && (BYTE2(v39) & 4) != 0 && v17 )
    {
      v8 = (v17[1] + 3) & 0xFFFFFFFC;
      v20 += v8;
    }
    if ( (v21 & 0x1F8) != 0 && (BYTE2(v39) & 0x10) != 0 && v35 )
    {
      RtlpFilterSacl(v35, 0LL, &v33);
      v20 += v33;
      LOWORD(v19) = v36;
      v5 = SecurityDescriptor;
      v4 = Length;
    }
    *v4 = v20;
    if ( v20 > v38 )
    {
      return -1073741789;
    }
    else
    {
      *(_OWORD *)v5 = 0LL;
      v5[4] = 0;
      *(_BYTE *)v5 = 1;
      v25 = *((_WORD *)v5 + 1) | 0x8000;
      *((_WORD *)v5 + 1) = v25;
      v26 = (char *)(((unsigned __int64)v5 + 23) & 0xFFFFFFFFFFFFFFFCuLL);
      v37 = v26;
      v27 = *SecurityInformation;
      if ( (*SecurityInformation & 1) != 0 && v13 )
      {
        memmove(v26, v13, v7);
        v5 = SecurityDescriptor;
        *((_DWORD *)SecurityDescriptor + 1) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
        LOWORD(v19) = v36;
        *((_WORD *)SecurityDescriptor + 1) |= v36 & 1;
        v25 = *((_WORD *)SecurityDescriptor + 1);
        v26 += (v7 + 3) & 0xFFFFFFFC;
        v37 = v26;
        v28 = SecurityInformation;
        v27 = *SecurityInformation;
      }
      else
      {
        v28 = SecurityInformation;
      }
      if ( (v27 & 2) != 0 && v15 )
      {
        v29 = Size;
        memmove(v26, v15, (unsigned int)Size);
        v5 = SecurityDescriptor;
        *((_DWORD *)SecurityDescriptor + 2) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
        LOWORD(v19) = v36;
        *((_WORD *)SecurityDescriptor + 1) |= v36 & 2;
        v25 = *((_WORD *)SecurityDescriptor + 1);
        v26 += (v29 + 3) & 0xFFFFFFFC;
        v37 = v26;
        v27 = *v28;
      }
      if ( (v27 & 4) != 0 )
      {
        *((_WORD *)v5 + 1) = v25 | v19 & 0x140C;
        v30 = BYTE2(v39);
        if ( (BYTE2(v39) & 4) != 0 && v17 )
        {
          memmove(v26, v17, v17[1]);
          v5 = SecurityDescriptor;
          *((_DWORD *)SecurityDescriptor + 4) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
          v26 += v8;
          v37 = v26;
        }
      }
      else
      {
        v30 = BYTE2(v39);
      }
      if ( (*v28 & 0x1F8) != 0 )
      {
        *((_WORD *)v5 + 1) |= v36 & 0x2830;
        if ( (v30 & 0x10) != 0 )
        {
          if ( v35 )
          {
            RtlpFilterSacl(v35, v26, &v33);
            *((_DWORD *)SecurityDescriptor + 3) = (_DWORD)v26 - (_DWORD)SecurityDescriptor;
            v37 = &v26[v33];
          }
        }
      }
      return 0;
    }
  }
  else
  {
    *v4 = 20;
    if ( v9 < 0x14 )
    {
      return -1073741789;
    }
    else
    {
      *(_OWORD *)SecurityDescriptor = 0LL;
      *((_DWORD *)SecurityDescriptor + 4) = 0;
      *(_BYTE *)SecurityDescriptor = 1;
      *((_WORD *)SecurityDescriptor + 1) |= 0x8000u;
      return 0;
    }
  }
}
