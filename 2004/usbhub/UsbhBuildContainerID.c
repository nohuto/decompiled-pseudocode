/*
 * XREFs of UsbhBuildContainerID @ 0x1C004F72C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memmove @ 0x1C001D080 (memmove.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     RtlStringCbCatW @ 0x1C004E934 (RtlStringCbCatW.c)
 *     RtlStringCopyWorkerW @ 0x1C004E9B4 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C004EA10 (RtlStringLengthWorkerW.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  UCHAR *v3; // r12
  wchar_t *v4; // rdi
  __int64 v6; // r9
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  _WORD *PoolWithTag; // rax
  __int64 *v10; // r13
  POOL_TYPE v11; // ecx
  _OWORD *v12; // rax
  _OWORD *v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rax
  SIZE_T v16; // r13
  int v17; // r8d
  char *v18; // rax
  char *v19; // rbx
  size_t v20; // rdx
  unsigned __int16 v21; // cx
  SIZE_T v22; // r13
  NTSTATUS Property; // ebx
  UCHAR *v24; // r14
  wchar_t *v25; // rax
  size_t *v26; // r8
  UCHAR *v27; // r11
  size_t v28; // r14
  NTSTATUS v29; // eax
  const wchar_t *v30; // r8
  NTSTATUS v31; // r8d
  ULONG v32; // r15d
  UCHAR *v33; // rax
  UCHAR *v34; // rax
  __int128 v35; // xmm0
  size_t cchToCopy; // [rsp+20h] [rbp-60h]
  ULONG pcbResult[4]; // [rsp+40h] [rbp-40h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-30h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-28h] BYREF
  size_t Size; // [rsp+60h] [rbp-20h]
  void *Src; // [rsp+68h] [rbp-18h]
  PVOID P; // [rsp+70h] [rbp-10h]
  size_t pcchLength; // [rsp+D0h] [rbp+50h] BYREF
  ULONG pbOutput; // [rsp+D8h] [rbp+58h] BYREF

  phHash = 0LL;
  pbOutput = 0;
  pcbResult[0] = 0;
  v3 = 0LL;
  phAlgorithm = 0LL;
  v4 = 0LL;
  Log(a1, 4096, 1111705924, a2, 0LL);
  v7 = PdoExt(v6);
  v8 = *((unsigned __int16 *)v7 + 704);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 8uLL, 0x42554855u);
  P = PoolWithTag;
  v10 = (__int64 *)PoolWithTag;
  if ( !PoolWithTag )
  {
    v17 = 1111699745;
    goto LABEL_59;
  }
  *(_QWORD *)PoolWithTag = 0x6E006E006E006ELL;
  *PoolWithTag = (unsigned __int8)Nibble[(unsigned __int64)v8 >> 12];
  PoolWithTag[1] = (unsigned __int8)Nibble[((unsigned __int64)v8 >> 8) & 0xF];
  PoolWithTag[2] = (unsigned __int8)Nibble[((unsigned __int64)v8 >> 4) & 0xF];
  v11 = ExDefaultNonPagedPoolType;
  PoolWithTag[3] = (unsigned __int8)Nibble[v8 & 0xF];
  LOWORD(pcchLength) = *((_WORD *)v7 + 705);
  v12 = ExAllocatePoolWithTag(v11, 0x10uLL, 0x42554855u);
  Src = v12;
  v13 = v12;
  if ( v12 )
  {
    v14 = (unsigned __int16)pcchLength;
    Size = 16LL;
    *v12 = 0LL;
    v15 = *v10;
    v16 = 26LL;
    *(_QWORD *)v13 = v15;
    *((_QWORD *)v13 + 1) = 0x6E006E006E006ELL;
    *((_WORD *)v13 + 4) = (unsigned __int8)Nibble[(unsigned __int64)v14 >> 12];
    *((_WORD *)v13 + 5) = (unsigned __int8)Nibble[((unsigned __int64)v14 >> 8) & 0xF];
    *((_WORD *)v13 + 6) = (unsigned __int8)Nibble[((unsigned __int64)v14 >> 4) & 0xF];
    *((_WORD *)v13 + 7) = (unsigned __int8)Nibble[v14 & 0xF];
  }
  else
  {
    Size = 0LL;
    v16 = 10LL;
  }
  ExFreePoolWithTag(P, 0);
  if ( !v13 )
  {
    v17 = 1111700001;
LABEL_59:
    Property = -1073741670;
    Log(a1, 4096, v17, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  LOWORD(pcchLength) = *((_WORD *)v7 + 706);
  v18 = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v16, 0x42554855u);
  P = v18;
  v19 = v18;
  if ( v18 )
  {
    memset(v18, 0, v16);
    memmove(v19, Src, Size);
    v20 = Size;
    v21 = pcchLength;
    *(_QWORD *)&v19[Size] = 0x6E006E006E006ELL;
    *(_WORD *)&v19[v20] = (v21 >> 12) + 48;
    *(_WORD *)&v19[v20 + 2] = (HIBYTE(v21) & 0xF) + 48;
    *(_WORD *)&v19[v20 + 4] = ((unsigned __int8)v21 >> 4) + 48;
    *(_WORD *)&v19[v20 + 6] = (v21 & 0xF) + 48;
  }
  else
  {
    LODWORD(v16) = 0;
  }
  ExFreePoolWithTag(Src, 0);
  if ( !v19 )
  {
    v17 = 1111700257;
    goto LABEL_59;
  }
  v22 = (unsigned int)(v7[533] + v16);
  if ( v22 >= 2 )
  {
    v25 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v22, 0x42554855u);
    v4 = v25;
    if ( v25 )
    {
      memset(v25, 0, v22);
      v27 = 0LL;
      v28 = v22 >> 1;
      v29 = 0;
      if ( !(v22 >> 1) )
        v29 = -1073741811;
      if ( v29 < 0 )
      {
        if ( v28 )
          *v4 = 0;
      }
      else
      {
        v29 = RtlStringCopyWorkerW(v4, v22 >> 1, v26, (STRSAFE_PCNZWCH)v19, cchToCopy);
      }
      Property = v29;
      if ( v29 < 0 )
      {
        v24 = v27;
        goto LABEL_48;
      }
      v30 = (const wchar_t *)*((_QWORD *)v7 + 267);
      if ( !v30 || (Property = RtlStringCbCatW(v4, v22, v30), Property >= 0) )
      {
        pcchLength = 0LL;
        v31 = RtlStringLengthWorkerW(v4, v28, &pcchLength);
        v32 = v31 < 0 ? 0 : 2 * pcchLength;
        Property = v31;
        if ( v31 >= 0 )
        {
          Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
          if ( Property >= 0 )
          {
            Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
            if ( Property >= 0 )
            {
              if ( pcbResult[0] == 4 )
              {
                v33 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
                v24 = v33;
                if ( v33 )
                {
                  memset(v33, 0, pbOutput);
                  Property = BCryptCreateHash(phAlgorithm, &phHash, v24, pbOutput, 0LL, 0, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  Property = BCryptHashData(phHash, (PUCHAR)v4, v32, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
                  if ( Property < 0 )
                    goto LABEL_48;
                  if ( pcbResult[0] != 4 || pbOutput < 0x10 )
                  {
                    Property = -1073741811;
                    goto LABEL_48;
                  }
                  v34 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
                  v3 = v34;
                  if ( v34 )
                  {
                    memset(v34, 0, pbOutput);
                    Property = BCryptFinishHash(phHash, v3, pbOutput, 0);
                    if ( Property >= 0 )
                    {
                      v35 = *(_OWORD *)v3;
                      *((_BYTE *)v7 + 2732) = 1;
                      *(_OWORD *)(v7 + 679) = v35;
                      *((_WORD *)v7 + 1361) = *((_WORD *)v7 + 1361) & 0xFFF | 0x5000;
                      *((_BYTE *)v7 + 2724) = v7[681] & 0x3F | 0x80;
                    }
                    goto LABEL_48;
                  }
                }
                Property = -1073741670;
                goto LABEL_48;
              }
              Property = -1073741306;
            }
          }
          else
          {
            phAlgorithm = 0LL;
          }
        }
      }
    }
    else
    {
      Property = -1073741670;
      Log(a1, 4096, 1111700513, a2, -1073741670LL);
    }
    v24 = 0LL;
  }
  else
  {
    Property = -1073741670;
    Log(a1, 4096, 1111700769, a2, -1073741670LL);
    v24 = 0LL;
  }
LABEL_48:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v24 )
    ExFreePoolWithTag(v24, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
