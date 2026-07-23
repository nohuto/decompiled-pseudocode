/*
 * XREFs of EtwTraceEventInstance @ 0x180110A80
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTraceUmEvent @ 0x180050CE4 (EtwpTraceUmEvent.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1B0 (NtTraceEvent.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall EtwTraceEventInstance(int a1, __m128i *a2, __int64 *a3, __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // edi
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // edx
  NTSTATUS v15; // eax
  __m128i Fields; // [rsp+20h] [rbp-E0h] BYREF
  __m256i v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+50h] [rbp-B0h]
  _BYTE v20[20]; // [rsp+54h] [rbp-ACh] BYREF
  __int8 *v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+74h] [rbp-8Ch]

  v4 = 0;
  if ( !a2 )
    return 87LL;
  if ( !a3 )
    return 87LL;
  v7 = a2->m128i_u16[0];
  if ( v7 < 0x38 )
    return 87LL;
  v8 = a2[1];
  Fields = *a2;
  v9 = a2[2];
  *(__m128i *)v18.m256i_i8 = v8;
  *(__m128i *)&v18.m256i_u64[2] = v9;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v9, 12));
  v18.m256i_i32[7] = v10;
  if ( (v10 & 0x80000) != 0 )
  {
    v10 &= ~0x80000u;
    v18.m256i_i32[7] = v10;
  }
  v11 = *a3;
  if ( !*a3 )
    return 87LL;
  v19 = *((_DWORD *)a3 + 2);
  *(_OWORD *)&v18.m256i_u64[1] = *(_OWORD *)(v11 + 8);
  if ( a4 )
  {
    v12 = *a4;
    if ( !*a4 )
      return 87LL;
    *(_DWORD *)v20 = *((_DWORD *)a4 + 2);
    *(_OWORD *)&v20[4] = *(_OWORD *)(v12 + 8);
  }
  else
  {
    memset(v20, 0, sizeof(v20));
  }
  v13 = v7 - 56;
  if ( (v10 & 0x100000) == 0 )
  {
    v22 = v7 - 56;
    v18.m256i_i32[7] = v10 | 0x100000;
    Fields.m128i_i16[0] = 88;
    v21 = &a2[3].m128i_i8[8];
    v23 = 0;
LABEL_16:
    if ( (a1 & 0x1000000) != 0 )
    {
      return (unsigned int)EtwpTraceUmEvent(a1, (unsigned __int16 *)&Fields, 0x48u, -1072365568);
    }
    else
    {
      v15 = NtTraceEvent((HANDLE)(unsigned __int16)a1, 0x800u, 0x48u, &Fields);
      if ( !v15 )
        return v4;
      return RtlNtStatusToDosError(v15);
    }
  }
  if ( (v13 & 0xF) == 0 && v13 <= 0x100 )
  {
    memmove(&v21, &a2[3].m128i_u64[1], v13);
    Fields.m128i_i16[0] = v7 + 16;
    goto LABEL_16;
  }
  return 87LL;
}
