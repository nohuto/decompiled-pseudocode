/*
 * XREFs of PfpFileBuildReadSupport @ 0x1406336AC
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140657C04 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408E20A0 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x14023DE78 (PfpFileCheckAttributesForPrefetch.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     PfpFileBuildReadList @ 0x140633508 (PfpFileBuildReadList.c)
 *     PfpFileSetupObjectAttributes @ 0x140633614 (PfpFileSetupObjectAttributes.c)
 *     PfpOpenHandleCreate @ 0x140634688 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140634820 (PfpOpenHandleClose.c)
 *     NtCreateSection @ 0x14067F130 (NtCreateSection.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, _DWORD *a2, unsigned int a3, char a4, __int64 a5)
{
  void *v5; // r15
  __int64 v8; // rdx
  __int64 v10; // r12
  __int64 v11; // r8
  int v12; // edi
  ULONG AllocationAttributes; // r9d
  __int64 v14; // rdx
  __m128i *v15; // rbx
  int v16; // edi
  void *FileHandle; // r12
  __m128i v18; // xmm6
  unsigned __int64 v19; // rbx
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  HANDLE v22; // rax
  __int128 v23; // xmm0
  void *v24; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  void *v28; // [rsp+48h] [rbp-61h] BYREF
  __int128 v29; // [rsp+50h] [rbp-59h] BYREF
  __m256i v30; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  ULONG v32; // [rsp+108h] [rbp+5Fh]
  HANDLE SectionHandle; // [rsp+110h] [rbp+67h] BYREF
  int v34; // [rsp+120h] [rbp+77h] BYREF

  v34 = 0;
  memset(&v30, 0, 24);
  v5 = 0LL;
  SectionHandle = 0LL;
  v8 = *a1;
  v30.m256i_i64[3] = 0x200000000LL;
  v10 = a3;
  v11 = a1[1];
  v28 = 0LL;
  v12 = a4 != 0 ? 32 : 129;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  AllocationAttributes = a4 != 0 ? 285212672 : 0x4000000;
  v32 = AllocationAttributes;
  v29 = 0LL;
  v14 = (unsigned __int128)(((__int64)a2 - *(unsigned int *)(v8 + 40) - v8) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v15 = (__m128i *)(v11 + 32 * (((unsigned __int64)v14 >> 63) + (v14 >> 3)));
  if ( v11 && (v15[1].m128i_i64[1] & 0x400000000LL) != 0 )
  {
    v26 = v15[1];
    v18 = *v15;
    v30.m256i_i64[2] = v15[1].m128i_i64[0];
    v19 = _mm_srli_si128(v26, 8).m128i_u64[0] | 0x1000000000LL;
    *(__m128i *)v30.m256i_i8 = v18;
    FileHandle = (void *)v18.m128i_i64[0];
    v30.m256i_i64[3] = v19;
  }
  else
  {
    PfpFileSetupObjectAttributes((__int64)a1, (__int64)a2, v10, (__int64)&v29, (__int64)&ObjectAttributes, &v34);
    v16 = PfpOpenHandleCreate(
            (unsigned int)&v30,
            a1[5],
            ObjectAttributes.ObjectName,
            ObjectAttributes.RootDirectory,
            v12,
            v34,
            128,
            a1[2] + (v10 << 6));
    if ( v16 < 0 )
    {
      v19 = v30.m256i_u64[3];
      goto LABEL_11;
    }
    FileHandle = (void *)v30.m256i_i64[0];
    v16 = PfpFileCheckAttributesForPrefetch((void *)v30.m256i_i64[0], 21248);
    if ( v16 < 0 )
    {
      v19 = v30.m256i_u64[3];
      goto LABEL_20;
    }
    v18 = *(__m128i *)v30.m256i_i8;
    AllocationAttributes = v32;
    if ( a1[1] )
    {
      v27 = *(__m128i *)&v30.m256i_u64[2];
      *v15 = *(__m128i *)v30.m256i_i8;
      v15[1] = v27;
      v19 = _mm_srli_si128(v27, 8).m128i_u64[0] | 0x1000000000LL;
      v30.m256i_i64[3] = v19;
    }
    else
    {
      v19 = v30.m256i_u64[3];
    }
  }
  if ( (*a2 & 1) != 0 && !a4 && *(_QWORD *)(*(_QWORD *)(_mm_srli_si128(v18, 8).m128i_u64[0] + 40) + 16LL) )
  {
    v16 = -1073741791;
    goto LABEL_11;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v20 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, FileHandle);
  v16 = v20;
  if ( v20 >= 0 )
  {
    v16 = PfpFileBuildReadList((__int64)a1, (__int64)a2, a4, &v28);
    if ( v16 < 0 )
    {
      v5 = v28;
    }
    else
    {
      v21 = a5;
      v22 = SectionHandle;
      v19 = 0x200000000LL;
      v23 = *(_OWORD *)&v30.m256i_u64[2];
      v30.m256i_i64[0] = 0LL;
      SectionHandle = 0LL;
      *(_QWORD *)(a5 + 40) = v22;
      v16 = 0;
      v24 = v28;
      *(__m128i *)(v21 + 8) = v18;
      *(_QWORD *)v21 = v24;
      *(_OWORD *)(v21 + 24) = v23;
      v30.m256i_i64[3] = 0x200000000LL;
      *(_OWORD *)&v30.m256i_u64[1] = 0LL;
      *(_QWORD *)(v21 + 48) = a2;
    }
    goto LABEL_11;
  }
  if ( a4 && v20 == -1073740749 )
  {
LABEL_11:
    if ( (v19 & 0x100000000LL) == 0 )
      goto LABEL_12;
  }
LABEL_20:
  if ( (*a2 & 8) == 0 )
  {
    *a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_12:
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( (v19 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v30, a1[5]);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v16;
}
