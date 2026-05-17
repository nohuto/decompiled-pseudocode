/*
 * XREFs of RtlDebugFreeHeap @ 0x1800F904C
 * Callers:
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x1800024B0 (RtlpGetExtraStuffPointer.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     RtlpValidateHeapEntry @ 0x18005E250 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpGetTagName @ 0x1800F3CD8 (RtlpGetTagName.c)
 *     RtlpBreakPointHeap @ 0x1800FA24C (RtlpBreakPointHeap.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FA854 (RtlpValidateHeapHeaders.c)
 *     RtlpAnalyzeHeapFailure @ 0x180107AF4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapExceptionFilter @ 0x18010DCF4 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_DWORD *Src, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // esi
  unsigned __int64 v11; // rdx
  struct _PEB *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int16 v15; // dx
  unsigned __int16 v16; // cx
  wchar_t *TagName; // rax
  char v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned int v20; // [rsp+68h] [rbp+10h]
  unsigned __int16 v21; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v18 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_1801649E0)();
  if ( RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v10 = Src[29] | 0x10000000 | a2;
    v20 = v10;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v18 = 1;
      v20 = v10 | 1;
    }
    RtlpValidateHeap(Src, 0LL);
    v11 = a3 - 16;
    _m_prefetchw((const void *)(a3 - 16));
    if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
      v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
    v19 = v11;
    if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v11, "RtlFreeHeap") )
      goto LABEL_34;
    v12 = NtCurrentPeb();
    if ( a3 == qword_180168C80 )
    {
      if ( v12->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to free block at %p\n", (const void *)qword_180168C80);
    }
    else
    {
      if ( (v12->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_33;
      v15 = unk_180168C88;
      if ( !unk_180168C88 )
        goto LABEL_33;
      if ( Src[31] )
      {
        *(_DWORD *)(v19 + 8) ^= Src[34];
        if ( *(_BYTE *)(v19 + 11) != (*(_BYTE *)(v19 + 8) ^ (unsigned __int8)(*(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10))) )
        {
          RtlpAnalyzeHeapFailure(Src, v19);
          v15 = unk_180168C88;
        }
      }
      if ( (*(_BYTE *)(v19 + 10) & 2) != 0 )
        v16 = *(_WORD *)(RtlpGetExtraStuffPointer(v19) + 2);
      else
        v16 = *(unsigned __int8 *)(v19 + 11);
      v21 = v16;
      if ( Src[31] )
      {
        *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
        *(_DWORD *)(v19 + 8) ^= Src[34];
      }
      if ( !v16 || v16 != v15 || *((_WORD *)Src + 104) != word_180168C8A )
        goto LABEL_33;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName((__int64)Src, v21);
      DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
    }
    RtlpBreakPointHeap(v14, v13);
LABEL_33:
    v6 = RtlFreeHeap((__int64)Src, v20, a3);
    RtlpValidateHeapHeaders(Src);
    RtlpValidateHeap(Src, 0LL);
    goto LABEL_34;
  }
  v6 = 0;
LABEL_34:
  if ( v18 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44), v8, v9);
  return v6;
}
