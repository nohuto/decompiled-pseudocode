/*
 * XREFs of RtlpFcMapBuffers @ 0x18005DF30
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD5C (RtlpFcUpdateLocalConfiguration.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18009DB00 (ZwMapViewOfSection.c)
 *     RtlpFcSectionTypeToBufferType @ 0x18011B15C (RtlpFcSectionTypeToBufferType.c)
 */

NTSTATUS __fastcall RtlpFcMapBuffers(__int64 a1, __int64 a2)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // eax
  void *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  NTSTATUS result; // eax
  PVOID BaseAddress; // [rsp+80h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+20h] BYREF

  v3 = (__int64 *)(a1 + 8);
  v4 = 0;
  while ( 1 )
  {
    v5 = RtlpFcSectionTypeToBufferType(v4, a2);
    v6 = (void *)v3[1];
    v7 = 3LL * v5;
    if ( v6 )
      break;
    *(_QWORD *)(a2 + 24LL * v5) = 0LL;
    *(_QWORD *)(a2 + 24LL * v5 + 8) = 0LL;
    v8 = 0LL;
LABEL_4:
    *(_QWORD *)(a2 + 8 * v7 + 16) = v8;
    ++v4;
    v9 = *v3;
    v3 += 3;
    *(_QWORD *)(a2 + 8 * v7) = v9;
    result = 0;
    if ( v4 >= 3 )
      return result;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  result = ZwMapViewOfSection(
             v6,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0,
             2u);
  if ( result >= 0 )
  {
    *(_QWORD *)(a2 + 8 * v7) = 0LL;
    *(_QWORD *)(a2 + 8 * v7 + 16) = 0LL;
    *(_QWORD *)(a2 + 8 * v7 + 8) = BaseAddress;
    v8 = v3[2];
    goto LABEL_4;
  }
  return result;
}
