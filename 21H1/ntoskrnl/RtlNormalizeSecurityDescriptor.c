/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1402D91B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlIsZeroMemory @ 0x140587E50 (RtlIsZeroMemory.c)
 *     RtlLengthRequiredSid @ 0x140673F70 (RtlLengthRequiredSid.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  char v8; // r13
  ULONG v9; // ebx
  unsigned int v10; // r12d
  unsigned int v11; // r11d
  __int64 v12; // r8
  ULONG v13; // r15d
  unsigned __int16 v14; // dx
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int v17; // r10d
  _WORD *v18; // r14
  unsigned int v19; // ecx
  _WORD *v20; // r12
  unsigned __int16 v21; // ax
  int v22; // eax
  unsigned int v23; // r14d
  unsigned int v24; // ecx
  char *v25; // r10
  unsigned int v26; // eax
  unsigned __int8 *v27; // r14
  ULONG v28; // eax
  ULONG v29; // r15d
  unsigned int v30; // eax
  unsigned __int8 *v31; // r14
  ULONG v32; // eax
  ULONG v33; // r15d
  PSECURITY_DESCRIPTOR *v34; // rax
  _DWORD *PoolWithTag; // rax
  SIZE_T v36; // rax
  _WORD *v37; // r12
  unsigned __int16 v38; // ax
  SIZE_T v39; // rax
  unsigned int v41; // [rsp+20h] [rbp-68h]
  unsigned int v42; // [rsp+24h] [rbp-64h]
  unsigned __int16 i; // [rsp+24h] [rbp-64h]
  unsigned __int16 j; // [rsp+28h] [rbp-60h]
  unsigned int v45; // [rsp+28h] [rbp-60h]
  unsigned int v46; // [rsp+2Ch] [rbp-5Ch]
  int v47; // [rsp+30h] [rbp-58h]
  char *v48; // [rsp+38h] [rbp-50h]
  char v50; // [rsp+98h] [rbp+10h]
  unsigned int CheckOnlya; // [rsp+B0h] [rbp+28h]

  v6 = *SecurityDescriptor;
  v48 = 0LL;
  v7 = 0LL;
  v50 = 0;
  v8 = 0;
  if ( !CheckOnly )
  {
    if ( !NewSecurityDescriptor || (v7 = *NewSecurityDescriptor) == 0LL )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, SecurityDescriptorLength, 0x64536553u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned __int8)PoolWithTag;
      v50 = 1;
    }
    *(_OWORD *)v7 = *(_OWORD *)v6;
    v7[4] = v6[4];
  }
  v9 = 20;
  v10 = 1;
  v47 = 1;
  do
  {
    if ( v10 == 1 )
      v11 = v6[3];
    else
      v11 = v6[4];
    v46 = v11;
    if ( v11 )
    {
      v12 = v11;
      if ( v10 != 1 || (v13 = 0, *(_WORD *)((char *)v6 + v11 + 4)) )
        v13 = v9;
      if ( v13 != v11 )
      {
        v8 = 1;
        if ( CheckOnly )
          goto LABEL_60;
        if ( v10 == 1 )
          v7[3] = v13;
        else
          v7[4] = v13;
      }
      if ( v13 )
      {
        if ( !CheckOnly )
        {
          v48 = (char *)v7 + v13;
          *(_QWORD *)v48 = *(_QWORD *)((char *)v6 + v11);
        }
        v14 = *(_WORD *)((char *)v6 + v11 + 4);
        v15 = (__int64)v6 + v11 + 8;
        CheckOnlya = 0;
        v9 += 8;
        v41 = 0;
        v16 = 0;
        v17 = 0;
        v18 = (_WORD *)v15;
        if ( v14 )
        {
          while ( 1 )
          {
            if ( !*(_BYTE *)v18 )
            {
              v19 = 0;
              if ( CheckOnly )
              {
                v45 = 0;
                v37 = (_WORD *)v15;
                if ( v17 )
                {
                  v38 = v18[1];
                  for ( i = v38; ; v38 = i )
                  {
                    if ( v37[1] == v38 )
                    {
                      i = v18[1];
                      v39 = RtlCompareMemory(v18, v37, v38);
                      v17 = v41;
                      v19 = v45;
                      if ( v39 == i )
                        break;
                    }
                    ++v19;
                    v37 = (_WORD *)((char *)v37 + (unsigned __int16)v37[1]);
                    v45 = v19;
                    if ( v19 >= v17 )
                      goto LABEL_76;
                  }
                  v8 = 1;
                  if ( v45 < v41 )
                    goto LABEL_47;
LABEL_76:
                  v16 = CheckOnlya;
                }
              }
              else
              {
                v42 = 0;
                v20 = v48 + 8;
                if ( !v16 )
                  goto LABEL_24;
                v21 = v18[1];
                for ( j = v21; ; v21 = j )
                {
                  if ( v20[1] == v21 )
                  {
                    j = v18[1];
                    v36 = RtlCompareMemory(v18, v20, v21);
                    v16 = CheckOnlya;
                    v19 = v42;
                    if ( v36 == j )
                      break;
                  }
                  ++v19;
                  v20 = (_WORD *)((char *)v20 + (unsigned __int16)v20[1]);
                  v42 = v19;
                  if ( v19 >= v16 )
                    goto LABEL_23;
                }
                v8 = 1;
                if ( v42 < CheckOnlya )
                {
                  LOWORD(v22) = v18[1];
                  goto LABEL_26;
                }
              }
            }
LABEL_23:
            if ( !CheckOnly )
            {
LABEL_24:
              memmove((char *)v7 + v9, v18, (unsigned __int16)v18[1]);
              v16 = CheckOnlya;
            }
            v22 = (unsigned __int16)v18[1];
            v9 += v22;
            CheckOnlya = ++v16;
LABEL_26:
            v11 = v46;
            v12 = v46;
            v17 = v41 + 1;
            v18 = (_WORD *)((char *)v18 + (unsigned __int16)v22);
            v41 = v17;
            v14 = *(_WORD *)((char *)v6 + v46 + 4);
            v15 = (__int64)v6 + v46 + 8;
            if ( v17 >= v14 )
            {
              v10 = v47;
              break;
            }
          }
        }
        v23 = (v9 + 3) & 0xFFFFFFFC;
        v24 = v23 - v13;
        if ( v23 - v13 == *(unsigned __int16 *)((char *)v6 + v12 + 2) )
        {
          v25 = v48;
        }
        else
        {
          v8 = 1;
          if ( CheckOnly )
            goto LABEL_60;
          v25 = v48;
          *((_WORD *)v48 + 1) = v24;
          v14 = *(_WORD *)((char *)v6 + v12 + 4);
        }
        if ( v16 != v14 )
          *((_WORD *)v25 + 2) = v16;
        if ( v9 != v23 )
        {
          if ( v13 == v11
            && v24 == *(unsigned __int16 *)((char *)v6 + v12 + 2)
            && !RtlIsZeroMemory((char *)v6 + v9, v23 - v9) )
          {
            v8 = 1;
            if ( CheckOnly )
              goto LABEL_60;
          }
          if ( !CheckOnly )
            memset((char *)v7 + v9, 0, v23 - v9);
          v9 = (v9 + 3) & 0xFFFFFFFC;
        }
      }
    }
    v47 = ++v10;
  }
  while ( v10 <= 2 );
  v26 = v6[1];
  if ( v9 != v26 )
  {
    v8 = 1;
    if ( CheckOnly )
      goto LABEL_60;
    v7[1] = v9;
    v26 = v6[1];
  }
  v27 = (unsigned __int8 *)v6 + v26;
  v28 = RtlLengthRequiredSid(v27[1]);
  v29 = v28;
  if ( !CheckOnly )
    memmove((char *)v7 + (unsigned int)v7[1], v27, v28);
  v30 = v6[2];
  v9 += v29;
  if ( v30 )
  {
    if ( v9 != v30 )
    {
      v8 = 1;
      if ( CheckOnly )
        goto LABEL_60;
      v7[2] = v9;
      v30 = v6[2];
    }
    v31 = (unsigned __int8 *)v6 + v30;
    v32 = RtlLengthRequiredSid(v31[1]);
    v33 = v32;
    if ( !CheckOnly )
      memmove((char *)v7 + (unsigned int)v7[2], v31, v32);
    v9 += v33;
  }
LABEL_47:
  if ( !v8 || CheckOnly )
  {
LABEL_60:
    if ( v50 )
      ExFreePoolWithTag(v7, 0);
    goto LABEL_53;
  }
  v34 = NewSecurityDescriptor;
  if ( NewSecurityDescriptor )
  {
    if ( !v50 )
      goto LABEL_51;
  }
  else
  {
    ExFreePoolWithTag(v6, 0);
    v34 = SecurityDescriptor;
  }
  *v34 = v7;
LABEL_51:
  if ( NewSecurityDescriptorLength )
    *NewSecurityDescriptorLength = v9;
LABEL_53:
  LOBYTE(PoolWithTag) = v8;
  return (unsigned __int8)PoolWithTag;
}
