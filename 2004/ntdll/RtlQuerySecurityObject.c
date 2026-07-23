/*
 * XREFs of RtlQuerySecurityObject @ 0x1800D6F80
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlpFilterSacl @ 0x1800E859C (RtlpFilterSacl.c)
 */

NTSTATUS __cdecl RtlQuerySecurityObject(
        PSECURITY_DESCRIPTOR ObjectDescriptor,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ResultantDescriptor,
        ULONG DescriptorLength,
        PULONG ReturnLength)
{
  unsigned int v6; // ecx
  unsigned int v8; // esi
  unsigned int v9; // r12d
  unsigned int v10; // r10d
  unsigned __int16 *v11; // rbp
  char *v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned __int8 *v14; // r13
  SECURITY_INFORMATION v15; // r8d
  ULONG v16; // ecx
  char *v17; // rsi
  __int16 v18; // dx
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-58h]
  SECURITY_INFORMATION v28; // [rsp+24h] [rbp-54h]
  SECURITY_INFORMATION v29; // [rsp+28h] [rbp-50h]
  SECURITY_INFORMATION v30; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v31; // [rsp+80h] [rbp+8h] BYREF
  SECURITY_INFORMATION v32; // [rsp+88h] [rbp+10h]
  size_t Size; // [rsp+90h] [rbp+18h]
  ULONG v34; // [rsp+98h] [rbp+20h]

  v34 = DescriptorLength;
  v32 = SecurityInformation;
  v31 = 0;
  v6 = 0;
  v27 = 0;
  LODWORD(Size) = 0;
  v30 = SecurityInformation & 2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (SecurityInformation & 2) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v13 = (unsigned __int8 *)*((_QWORD *)ObjectDescriptor + 2);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 2) )
        goto LABEL_8;
      v13 = (unsigned __int8 *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 2);
    }
    if ( v13 )
    {
      v8 = (4 * v13[1] + 11) & 0xFFFFFFFC;
      v27 = v8;
    }
  }
LABEL_8:
  v29 = SecurityInformation & 4;
  if ( (SecurityInformation & 4) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 4) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v11 = (unsigned __int16 *)*((_QWORD *)ObjectDescriptor + 4);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 4) )
        goto LABEL_16;
      v11 = (unsigned __int16 *)((char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 4));
    }
    if ( v11 )
      v9 = (v11[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v15 = SecurityInformation & 0x1F8;
  v28 = v15;
  if ( (SecurityInformation & 0x1F8) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 0x10) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v12 = (char *)*((_QWORD *)ObjectDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 3) )
        goto LABEL_24;
      v12 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 3);
    }
    if ( v12 )
    {
      RtlpFilterSacl(v12, 0LL, &v31, SecurityInformation & 0x1F8);
      v10 = v31;
      v6 = 0;
      v15 = v28;
      LOBYTE(SecurityInformation) = v32;
      DescriptorLength = v34;
    }
  }
LABEL_24:
  v32 = SecurityInformation & 1;
  if ( (SecurityInformation & 1) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v14 = (unsigned __int8 *)*((_QWORD *)ObjectDescriptor + 1);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 1) )
      {
        v14 = 0LL;
        goto LABEL_32;
      }
      v14 = (unsigned __int8 *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 1);
    }
    if ( v14 )
    {
      v6 = (4 * v14[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v6;
    }
  }
LABEL_32:
  v16 = v8 + v9 + v10 + v6 + 20;
  *ReturnLength = v16;
  if ( v16 > DescriptorLength || !ResultantDescriptor )
    return -1073741789;
  v17 = (char *)ResultantDescriptor + 20;
  *(_OWORD *)ResultantDescriptor = 0LL;
  *((_DWORD *)ResultantDescriptor + 4) = 0;
  v18 = *((_WORD *)ResultantDescriptor + 1);
  *(_BYTE *)ResultantDescriptor = 1;
  v19 = v18 | 0x8000;
  *((_WORD *)ResultantDescriptor + 1) = v19;
  if ( v15 )
  {
    v20 = v19;
    if ( v10 )
    {
      RtlpFilterSacl(v12, (char *)ResultantDescriptor + 20, &v31, v15);
      *((_DWORD *)ResultantDescriptor + 3) = 20;
      v17 += v31;
      v20 = *((_WORD *)ResultantDescriptor + 1);
    }
    v19 = v20 | *((_WORD *)ObjectDescriptor + 1) & 0x2830;
    *((_WORD *)ResultantDescriptor + 1) = v19;
  }
  if ( v29 )
  {
    v21 = v19;
    if ( v9 )
    {
      memmove(v17, v11, v9);
      v22 = (int)v17;
      v17 += v9;
      *((_DWORD *)ResultantDescriptor + 4) = v22 - (_DWORD)ResultantDescriptor;
      v21 = *((_WORD *)ResultantDescriptor + 1);
    }
    v19 = v21 | *((_WORD *)ObjectDescriptor + 1) & 0x140C;
    *((_WORD *)ResultantDescriptor + 1) = v19;
  }
  if ( v32 )
  {
    v23 = v19;
    if ( (_DWORD)Size )
    {
      v24 = (unsigned int)Size;
      memmove(v17, v14, (unsigned int)Size);
      v25 = (int)v17;
      v17 += v24;
      *((_DWORD *)ResultantDescriptor + 1) = v25 - (_DWORD)ResultantDescriptor;
      v23 = *((_WORD *)ResultantDescriptor + 1);
    }
    v19 = v23 | *((_WORD *)ObjectDescriptor + 1) & 1;
    *((_WORD *)ResultantDescriptor + 1) = v19;
  }
  if ( v30 )
  {
    if ( v27 )
    {
      memmove(v17, v13, v27);
      v19 = *((_WORD *)ResultantDescriptor + 1);
      *((_DWORD *)ResultantDescriptor + 2) = (_DWORD)v17 - (_DWORD)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) = v19 | *((_WORD *)ObjectDescriptor + 1) & 2;
  }
  return 0;
}
