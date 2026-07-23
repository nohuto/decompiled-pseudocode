/*
 * XREFs of RtlpSubSegmentInitialize @ 0x18000A090
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     memset @ 0x1800A4180 (memset.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x18010A9C0 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18010BCAC (RtlpSubSegmentDebugInitialize.c)
 */

struct _PEB *__fastcall RtlpSubSegmentInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed __int32 v6; // ebx
  __int64 v8; // rax
  __int64 v12; // r8
  __int64 v13; // r13
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  unsigned int v16; // edi
  int v17; // r15d
  unsigned __int64 i; // rax
  int v19; // ecx
  int v20; // edx
  __int64 v21; // r8
  __int64 v22; // r12
  __int16 v23; // cx
  signed __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  struct _TEB *v27; // r15
  unsigned __int16 HeapData_high; // ax
  __int64 v29; // rcx
  unsigned __int16 v30; // si
  __int16 v31; // ax
  __int64 v32; // rdx
  __int16 v33; // bx
  unsigned __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _PEB *result; // rax
  _DWORD *SharedData; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned int v43; // eax
  int v44; // eax
  __int16 RandomValue32; // ax
  signed __int32 v46[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-38h]
  unsigned __int64 v48; // [rsp+48h] [rbp-30h]
  int v50; // [rsp+88h] [rbp+10h]
  signed __int64 v51; // [rsp+88h] [rbp+10h]
  unsigned __int32 v52; // [rsp+88h] [rbp+10h]

  v6 = *(_DWORD *)(a2 + 32);
  v8 = *(unsigned __int8 *)(a2 + 43);
  v12 = *(unsigned __int8 *)(a6 + 2);
  if ( (_BYTE)v8 )
    v13 = *(_QWORD *)(a1 + 8 * v12 + 2224) - 192LL + 192 * v8;
  else
    v13 = *(_QWORD *)(a1 + 8 * v12 + 1192);
  v14 = (*(_BYTE *)(a6 + 3) >> 1) & 3;
  if ( v14 )
  {
    result = (struct _PEB *)RtlpSubSegmentDebugInitialize(a1, a2, a3, v14, a4, a5, a6);
    if ( (_DWORD)result )
      return result;
  }
  v15 = a4 + 16;
  *(_QWORD *)a3 = a2;
  v47 = v15 >> 4;
  v16 = 0;
  v17 = RtlpLFHKey;
  v48 = ((((unsigned __int64)(unsigned int)((a5 - 64) / v15) + 31) >> 3) + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  for ( i = a3 + v48; i + v15 + 8 <= a3 + a5; i += v15 )
  {
    v19 = (unsigned __int16)v16 << 8;
    v20 = *(_DWORD *)(a1 + 24) ^ v17 ^ (i >> 4) ^ (((_DWORD)i - (_DWORD)a3) << 12);
    ++v16;
    *(_DWORD *)(i + 12) &= 0xFF0000FF;
    *(_DWORD *)(i + 12) |= v19;
    *(_BYTE *)(i + 15) = 0x80;
    *(_DWORD *)(i + 8) = v20;
  }
  *(_QWORD *)(a3 + 32) = v16;
  *(_QWORD *)(a3 + 40) = a3 + 48;
  memset((void *)(a3 + 48), 0, ((unsigned __int64)v16 + 7) >> 3);
  if ( (v16 & 0x3F) != 0 )
    *(_QWORD *)(a3 + 48 + 8 * ((unsigned __int64)v16 >> 6)) |= ~((1LL << (v16 & 0x3F)) - 1);
  v22 = a2;
  v23 = v47;
  *(_WORD *)(a2 + 36) = v47;
  *(_WORD *)(a2 + 40) = v16;
  *(_QWORD *)a2 = v13;
  *(_BYTE *)(a2 + 42) = *(_BYTE *)(a6 + 2);
  *(_WORD *)(a2 + 38) = 0;
  *(_QWORD *)(a2 + 8) = a3;
  if ( (((_BYTE)a2 + 16) & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_OWORD *)(a2 + 16) = 0LL;
  LOWORD(v50) = v48;
  HIWORD(v50) = 16 * v23;
  *(_DWORD *)(a3 + 24) = v50 ^ v17 ^ a3 ^ a1;
  if ( !*(_DWORD *)(v13 + 164) )
  {
    v41 = *(_QWORD *)v13;
    v42 = *(_DWORD *)(*(_QWORD *)v13 + 36LL);
    if ( v42 >= 0x20 )
    {
LABEL_24:
      *(_WORD *)(v13 + 176) = 0;
      goto LABEL_11;
    }
    v43 = v42 + 4;
LABEL_26:
    *(_DWORD *)(v41 + 36) = v43;
    goto LABEL_24;
  }
  if ( ++*(_WORD *)(v13 + 176) > 0x1Cu )
  {
    v41 = *(_QWORD *)v13;
    v44 = *(_DWORD *)(*(_QWORD *)v13 + 36LL);
    if ( !v44 )
      goto LABEL_24;
    v43 = v44 - 4;
    goto LABEL_26;
  }
  do
  {
LABEL_11:
    v24 = *(_QWORD *)(v13 + 160);
    if ( (int)v16 <= 0 )
      v25 = HIDWORD(v24) - 1;
    else
      v25 = HIDWORD(v24) + 1;
    HIDWORD(v51) = v25;
    LODWORD(v51) = v24 + v16;
  }
  while ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 160), v51, v24) );
  v26 = *(_QWORD *)v13;
  *(_DWORD *)(v13 + 168) = ++*(_DWORD *)(v26 + 32);
  v27 = NtCurrentTeb();
  HeapData_high = HIWORD(v27->HeapData);
  v29 = HeapData_high;
  v30 = (unsigned __int8)HeapData_high;
  if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
  {
    LOWORD(v29) = HIBYTE(HeapData_high);
    RandomValue32 = RtlpHeapGenerateRandomValue32(v29, 0LL, v21);
    v31 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
  }
  else
  {
    v31 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
  }
  HIWORD(v27->HeapData) = v31;
  v32 = (*((unsigned __int8 *)RtlpLowFragHeapRandomData + v30) % v16) << 16;
  HIWORD(v52) = *((unsigned __int8 *)RtlpLowFragHeapRandomData + v30) % v16;
  LOWORD(v52) = v16;
  _InterlockedOr(v46, 0);
  *(_DWORD *)(a3 + 20) = -253701952;
  *(_DWORD *)(v22 + 44) = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 32), v52, v6);
  if ( (RtlpLowFragHeapGlobalFlags & 2) == 0 )
  {
    v33 = HIWORD(NtCurrentTeb()->HeapData);
    v34 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(v52, v32, v21) << 32;
    RtlpLowFragHeapRandomData[(unsigned __int8)v33 >> 3] = (v34 | (unsigned int)RtlpHeapGenerateRandomValue32(
                                                                                  v36,
                                                                                  v35,
                                                                                  v37)) & 0x7F7F7F7F7F7F7F7FLL;
  }
  result = NtCurrentPeb();
  SharedData = result->SharedData;
  if ( SharedData && *SharedData )
  {
    result = NtCurrentPeb();
    v40 = (__int64)result->SharedData + 550;
  }
  else
  {
    v40 = 2147353472LL;
  }
  if ( *(_BYTE *)v40 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 1) != 0 )
      return (struct _PEB *)RtlpLogHeapSubSegmentInitialize(
                              *(_QWORD *)(a1 + 24),
                              *(_QWORD *)(v22 + 8),
                              *(unsigned __int16 *)(v22 + 36),
                              *(unsigned __int16 *)(v22 + 40),
                              *(unsigned __int8 *)(v22 + 43));
  }
  return result;
}
