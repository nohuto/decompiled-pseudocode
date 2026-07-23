/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1800E6530
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1800A1770 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlIsZeroMemory @ 0x1800FF080 (RtlIsZeroMemory.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rsi
  unsigned int v7; // ecx
  _DWORD *v8; // rdi
  char v9; // r13
  _DWORD *Heap; // rax
  ULONG v11; // ebx
  unsigned int v12; // r12d
  unsigned int v13; // r11d
  __int64 v14; // r8
  ULONG v15; // r15d
  unsigned __int16 v16; // dx
  __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  _WORD *v20; // r14
  _WORD *v21; // r12
  unsigned __int16 v22; // ax
  SIZE_T v23; // rax
  int v24; // eax
  unsigned int v25; // r14d
  unsigned int v26; // ecx
  char *v27; // r10
  _WORD *v28; // r12
  unsigned __int16 v29; // ax
  SIZE_T v30; // rax
  BOOLEAN IsZeroMemory; // al
  unsigned int v32; // eax
  unsigned __int8 *v33; // rdx
  unsigned int v34; // r14d
  unsigned int v35; // eax
  unsigned __int8 *v36; // rdx
  unsigned int v37; // r14d
  PSECURITY_DESCRIPTOR *v38; // rax
  unsigned int v40; // [rsp+20h] [rbp-68h]
  unsigned __int16 j; // [rsp+24h] [rbp-64h]
  unsigned int v42; // [rsp+24h] [rbp-64h]
  unsigned int v43; // [rsp+28h] [rbp-60h]
  unsigned __int16 i; // [rsp+28h] [rbp-60h]
  unsigned int v45; // [rsp+2Ch] [rbp-5Ch]
  int v46; // [rsp+30h] [rbp-58h]
  char *v47; // [rsp+38h] [rbp-50h]
  char v49; // [rsp+98h] [rbp+10h]
  unsigned int CheckOnlya; // [rsp+B0h] [rbp+28h]

  v5 = *SecurityDescriptor;
  v7 = 0;
  v8 = 0LL;
  v47 = 0LL;
  v9 = 0;
  v49 = 0;
  if ( CheckOnly )
    goto LABEL_7;
  if ( NewSecurityDescriptor )
  {
    v8 = *NewSecurityDescriptor;
    if ( *NewSecurityDescriptor )
    {
LABEL_6:
      *(_OWORD *)v8 = *(_OWORD *)v5;
      v8[4] = v5[4];
LABEL_7:
      v11 = 20;
      v12 = 1;
      v46 = 1;
      do
      {
        if ( v12 == 1 )
          v13 = v5[3];
        else
          v13 = v5[4];
        v45 = v13;
        if ( v13 )
        {
          v14 = v13;
          if ( v12 != 1 || (v15 = 0, *(_WORD *)((char *)v5 + v13 + 4)) )
            v15 = v11;
          if ( v15 != v13 )
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_88;
            if ( v12 == 1 )
              v8[3] = v15;
            else
              v8[4] = v15;
          }
          if ( v15 )
          {
            if ( !CheckOnly )
            {
              v47 = (char *)v8 + v15;
              *(_QWORD *)v47 = *(_QWORD *)((char *)v5 + v13);
              v7 = 0;
            }
            v16 = *(_WORD *)((char *)v5 + v13 + 4);
            v17 = (__int64)v5 + v13 + 8;
            CheckOnlya = 0;
            v11 += 8;
            v40 = 0;
            v18 = 0;
            v19 = 0;
            v20 = (_WORD *)v17;
            if ( v16 )
            {
              while ( 1 )
              {
                if ( *(_BYTE *)v20 )
                  goto LABEL_36;
                if ( CheckOnly )
                  break;
                v42 = 0;
                v28 = v47 + 8;
                if ( !v18 )
                  goto LABEL_37;
                v29 = v20[1];
                for ( i = v29; ; v29 = i )
                {
                  if ( v28[1] == v29 )
                  {
                    i = v20[1];
                    v30 = RtlCompareMemory(v20, v28, v29);
                    v18 = CheckOnlya;
                    v7 = v42;
                    if ( v30 == i )
                      break;
                  }
                  ++v7;
                  v28 = (_WORD *)((char *)v28 + (unsigned __int16)v28[1]);
                  v42 = v7;
                  if ( v7 >= v18 )
                    goto LABEL_36;
                }
                v9 = 1;
                if ( v42 >= CheckOnlya )
                  goto LABEL_36;
                LOWORD(v24) = v20[1];
LABEL_39:
                v13 = v45;
                v14 = v45;
                v19 = v40 + 1;
                v20 = (_WORD *)((char *)v20 + (unsigned __int16)v24);
                v40 = v19;
                v16 = *(_WORD *)((char *)v5 + v45 + 4);
                v17 = (__int64)v5 + v45 + 8;
                if ( v19 >= v16 )
                {
                  v12 = v46;
                  goto LABEL_41;
                }
                v7 = 0;
              }
              v43 = 0;
              v21 = (_WORD *)v17;
              if ( v19 )
              {
                v22 = v20[1];
                for ( j = v22; ; v22 = j )
                {
                  if ( v21[1] == v22 )
                  {
                    j = v20[1];
                    v23 = RtlCompareMemory(v20, v21, v22);
                    v19 = v40;
                    v7 = v43;
                    if ( v23 == j )
                      break;
                  }
                  ++v7;
                  v21 = (_WORD *)((char *)v21 + (unsigned __int16)v21[1]);
                  v43 = v7;
                  if ( v7 >= v19 )
                    goto LABEL_35;
                }
                v9 = 1;
                if ( v43 < v40 )
                  goto LABEL_79;
LABEL_35:
                v18 = CheckOnlya;
              }
LABEL_36:
              if ( !CheckOnly )
              {
LABEL_37:
                memmove((char *)v8 + v11, v20, (unsigned __int16)v20[1]);
                v18 = CheckOnlya;
              }
              v24 = (unsigned __int16)v20[1];
              v11 += v24;
              CheckOnlya = ++v18;
              goto LABEL_39;
            }
LABEL_41:
            v25 = (v11 + 3) & 0xFFFFFFFC;
            v26 = v25 - v15;
            if ( v25 - v15 == *(unsigned __int16 *)((char *)v5 + v14 + 2) )
            {
              v27 = v47;
            }
            else
            {
              v9 = 1;
              if ( CheckOnly )
                goto LABEL_88;
              v27 = v47;
              *((_WORD *)v47 + 1) = v26;
              v16 = *(_WORD *)((char *)v5 + v14 + 4);
            }
            if ( v18 != v16 )
              *((_WORD *)v27 + 2) = v18;
            if ( v11 == v25 )
            {
              v7 = 0;
            }
            else
            {
              if ( v15 == v13 && v26 == *(unsigned __int16 *)((char *)v5 + v14 + 2) )
              {
                IsZeroMemory = RtlIsZeroMemory((char *)v5 + v11, v25 - v11);
                v7 = 0;
                if ( !IsZeroMemory )
                {
                  v9 = 1;
                  if ( CheckOnly )
                    goto LABEL_88;
                }
              }
              else
              {
                v7 = 0;
              }
              if ( !CheckOnly )
              {
                memset((char *)v8 + v11, 0, v25 - v11);
                v7 = 0;
              }
              v11 = (v11 + 3) & 0xFFFFFFFC;
            }
          }
        }
        v46 = ++v12;
      }
      while ( v12 <= 2 );
      v32 = v5[1];
      if ( v11 != v32 )
      {
        v9 = 1;
        if ( CheckOnly )
          goto LABEL_88;
        v8[1] = v11;
        v32 = v5[1];
      }
      v33 = (unsigned __int8 *)v5 + v32;
      v34 = 4 * v33[1] + 8;
      if ( !CheckOnly )
        memmove((char *)v8 + (unsigned int)v8[1], v33, v34);
      v35 = v5[2];
      v11 += v34;
      if ( v35 )
      {
        if ( v11 != v35 )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_88;
          v8[2] = v11;
          v35 = v5[2];
        }
        v36 = (unsigned __int8 *)v5 + v35;
        v37 = 4 * v36[1] + 8;
        if ( !CheckOnly )
          memmove((char *)v8 + (unsigned int)v8[2], v36, v37);
        v11 += v37;
      }
LABEL_79:
      if ( v9 && !CheckOnly )
      {
        v38 = NewSecurityDescriptor;
        if ( NewSecurityDescriptor )
        {
          if ( !v49 )
            goto LABEL_86;
        }
        else
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
          v38 = SecurityDescriptor;
        }
        *v38 = v8;
LABEL_86:
        if ( NewSecurityDescriptorLength )
          *NewSecurityDescriptorLength = v11;
LABEL_90:
        LOBYTE(Heap) = v9;
        return (unsigned __int8)Heap;
      }
LABEL_88:
      if ( v49 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      goto LABEL_90;
    }
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, SecurityDescriptorLength);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    v49 = 1;
    goto LABEL_6;
  }
  return (unsigned __int8)Heap;
}
