/*
 * XREFs of ndisGetLogicalProcessorInformation @ 0x1C0145CF4
 * Callers:
 *     ndisGetProcessorInfo @ 0x1C0145B1C (ndisGetProcessorInfo.c)
 * Callees:
 *     memset @ 0x1C00403C0 (memset.c)
 */

__int64 __fastcall ndisGetLogicalProcessorInformation(__int64 a1)
{
  ULONG v1; // r12d
  int v2; // r13d
  ULONG v3; // ebx
  _DWORD *PoolWithTag; // rax
  void *v5; // rsi
  size_t v6; // rbx
  _DWORD *v7; // rax
  void *v8; // rbx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v9; // rax
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v10; // r14
  unsigned int v11; // edi
  ULONG v12; // edx
  __m128i *v13; // rsi
  unsigned int v14; // edi
  __int64 v15; // rax
  ULONG v16; // r15d
  _DWORD *v17; // r8
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v18; // rbx
  __int64 Size; // rax
  unsigned int v20; // ecx
  __m128i v22; // xmm0
  unsigned int v23; // r15d
  ULONG v24; // r12d
  unsigned __int64 v25; // r14
  unsigned __int8 v26; // al
  char v27; // al
  ULONG v28; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v30; // r15d
  unsigned __int16 v31; // r14
  __m128i v32; // xmm0
  unsigned __int64 v33; // rbx
  bool v34; // zf
  unsigned __int8 j; // al
  __m128i v36; // xmm0
  unsigned __int64 v37; // rbx
  unsigned __int8 Number; // al
  ULONG v39; // r12d
  WORD v40; // r14
  __m128i v41; // xmm0
  unsigned __int64 v42; // rsi
  bool v43; // zf
  unsigned __int8 k; // al
  ULONG v45; // eax
  __int64 v46; // rcx
  ULONG v47; // edx
  __int64 v48; // rax
  unsigned __int8 *p_Reserved; // rdx
  char v50; // al
  char v51; // [rsp+20h] [rbp-48h]
  char v52; // [rsp+24h] [rbp-44h]
  unsigned int v53; // [rsp+28h] [rbp-40h]
  ULONG v54; // [rsp+2Ch] [rbp-3Ch]
  NTSTATUS v55; // [rsp+30h] [rbp-38h]
  _DWORD *v56; // [rsp+38h] [rbp-30h]
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v57; // [rsp+40h] [rbp-28h]
  _DWORD *v58; // [rsp+48h] [rbp-20h]
  _DWORD *v59; // [rsp+50h] [rbp-18h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+48h] BYREF
  int v61; // [rsp+B4h] [rbp+4Ch]
  ULONG Length; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int i; // [rsp+C0h] [rbp+58h]
  ULONG v64; // [rsp+C8h] [rbp+60h]

  v61 = HIDWORD(a1);
  v1 = 0;
  v58 = ndisSystemProcessorInfo;
  v2 = 0;
  Length = 0;
  v3 = 0;
  v54 = 0;
  v51 = 1;
  v52 = 1;
  ProcNumber = 0;
  v53 = 0;
  for ( i = 0; v3 < ndisNumberOfActiveProcessorsAtBoot; ++v3 )
    KeGetProcessorNumberFromIndex(v3, &ndisCpuInfo[v3].ProcNum);
  if ( v3 < ndisMaxNumberOfProcessors )
  {
    v48 = ndisMaxNumberOfProcessors - v3;
    p_Reserved = &ndisCpuInfo[v3].ProcNum.Reserved;
    do
    {
      *(_DWORD *)(p_Reserved - 3) = 0xFFFFFF;
      p_Reserved += 20;
      --v48;
    }
    while ( v48 );
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  v56 = PoolWithTag;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = 4LL * ndisMaxNumberOfProcessors;
    memset(PoolWithTag, 0, v6);
    v7 = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x2020444Eu);
    v59 = v7;
    v8 = v7;
    if ( v7
      && (memset(v7, 255, 4LL * ndisMaxNumberOfProcessors),
          KeQueryLogicalProcessorRelationship(0LL, RelationAll, 0LL, &Length),
          v9 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x2020444Eu),
          v57 = v9,
          (v10 = v9) != 0LL) )
    {
      v55 = KeQueryLogicalProcessorRelationship(0LL, RelationAll, v9, &Length);
      v11 = v55;
      if ( v55 >= 0 )
      {
        v12 = 0;
        v13 = (__m128i *)v10;
        v64 = 0;
        if ( Length )
        {
          v14 = 0;
          do
          {
            if ( v13->m128i_i32[0] )
            {
              if ( v13->m128i_i32[0] == 1 )
              {
                v36 = v13[2];
                ProcNumber.Reserved = 0;
                v37 = v36.m128i_i64[0];
                ProcNumber.Group = _mm_extract_epi16(v36, 4);
                Number = 0;
                ProcNumber.Number = 0;
                if ( v36.m128i_i64[0] )
                {
                  do
                  {
                    if ( (v37 & 1) != 0 )
                    {
                      ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].NodeId = v13->m128i_u16[4];
                      Number = ProcNumber.Number;
                    }
                    ++Number;
                    v37 >>= 1;
                    ProcNumber.Number = Number;
                  }
                  while ( v37 );
                  v12 = v64;
                }
              }
              else if ( v13->m128i_i32[0] == 3 )
              {
                v30 = 0;
                v31 = 0;
                if ( v13[1].m128i_i16[7] )
                {
                  do
                  {
                    v32 = v13[v31 + 2];
                    ProcNumber.Reserved = 0;
                    v33 = v32.m128i_i64[0];
                    v34 = v32.m128i_i64[0] == 0;
                    ProcNumber.Group = _mm_extract_epi16(v32, 4);
                    for ( j = 0; ; ++j )
                    {
                      ProcNumber.Number = j;
                      if ( v34 )
                        break;
                      if ( (v33 & 1) != 0 )
                      {
                        ++v30;
                        ndisCpuInfo[KeGetProcessorIndexFromNumber(&ProcNumber)].SocketId = v1;
                        j = ProcNumber.Number;
                      }
                      v33 >>= 1;
                      v34 = v33 == 0;
                    }
                    ++v31;
                  }
                  while ( v31 < (unsigned int)v13[1].m128i_i16[7] );
                  v12 = v64;
                  v14 = i;
                }
                if ( v1 )
                {
                  v50 = v52;
                  if ( v30 != v53 )
                    v50 = 0;
                  v52 = v50;
                }
                else
                {
                  v53 = v30;
                }
                v54 = ++v1;
              }
            }
            else
            {
              v22 = v13[2];
              v23 = 0;
              ProcNumber.Reserved = 0;
              v24 = 0;
              v25 = v22.m128i_i64[0];
              ProcNumber.Group = _mm_extract_epi16(v22, 4);
              v26 = 0;
              ProcNumber.Number = 0;
              if ( v22.m128i_i64[0] )
              {
                do
                {
                  if ( (v25 & 1) != 0 )
                  {
                    ++v23;
                    v28 = v24++;
                    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                    ndisCpuInfo[ProcessorIndexFromNumber].HyperThreadId = v28;
                    v56[ProcessorIndexFromNumber] = v2;
                    v26 = ProcNumber.Number;
                  }
                  ++v26;
                  v25 >>= 1;
                  ProcNumber.Number = v26;
                }
                while ( v25 );
                v12 = v64;
                v14 = i;
              }
              if ( v2 )
              {
                v27 = v51;
                if ( v23 != v14 )
                  v27 = 0;
                v51 = v27;
              }
              else
              {
                v14 = v23;
                i = v23;
              }
              v1 = v54;
              ++v2;
            }
            v15 = v13->m128i_u32[1];
            v12 += v15;
            v13 = (__m128i *)((char *)v13 + v15);
            v64 = v12;
          }
          while ( v12 < Length );
          v11 = v55;
          v10 = v57;
        }
        v16 = 0;
        v17 = v58;
        v18 = v10;
        v64 = 0;
        v58[3] = v1;
        v58[4] = v2;
        if ( Length )
        {
          do
          {
            if ( v18->Relationship == RelationProcessorPackage )
            {
              v39 = 0;
              v40 = 0;
              if ( v18->Processor.GroupCount )
              {
                do
                {
                  v41 = *((__m128i *)&v18->Group.GroupInfo[0].MaximumProcessorCount + v40);
                  ProcNumber.Reserved = 0;
                  v42 = v41.m128i_i64[0];
                  v43 = v41.m128i_i64[0] == 0;
                  ProcNumber.Group = _mm_extract_epi16(v41, 4);
                  for ( k = 0; ; ++k )
                  {
                    ProcNumber.Number = k;
                    if ( v43 )
                      break;
                    if ( (v42 & 1) != 0 )
                    {
                      v45 = KeGetProcessorIndexFromNumber(&ProcNumber);
                      v46 = (unsigned int)v56[v45];
                      v47 = v59[v46];
                      if ( v47 == -1 )
                      {
                        v47 = v39++;
                        v59[v46] = v47;
                      }
                      ndisCpuInfo[v45].CoreId = v47;
                      k = ProcNumber.Number;
                    }
                    v42 >>= 1;
                    v43 = v42 == 0;
                  }
                  ++v40;
                }
                while ( v40 < v18->Processor.GroupCount );
                v16 = v64;
              }
            }
            Size = v18->Size;
            v16 += Size;
            v18 = (_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)((char *)v18 + Size);
            v64 = v16;
          }
          while ( v16 < Length );
          v11 = v55;
          v10 = v57;
          v17 = v58;
        }
        if ( v51 )
        {
          v20 = i;
          v17[6] = i;
          if ( v52 )
          {
            if ( v20 )
              v17[5] = v53 / v20;
          }
        }
        v8 = v59;
        v5 = v56;
      }
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      v11 = -1073741670;
    }
    ExFreePoolWithTag(v5, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
