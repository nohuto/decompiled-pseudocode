/*
 * XREFs of RtlpValidateHeapEntry @ 0x18005F850
 * Callers:
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F93AC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F96A0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9990 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9F14 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA0E0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA274 (RtlDebugSizeHeap.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F6A48 (RtlpCheckBusyBlockTail.c)
 *     RtlpBreakPointHeap @ 0x1800FA5AC (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpValidateHeapEntry(unsigned __int64 a1, unsigned __int64 a2, const char *a3)
{
  unsigned __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  _QWORD *i; // rax
  int v13; // [rsp+28h] [rbp-10h]

  v5 = a1;
  if ( a2 )
  {
    if ( (a2 & 0xF) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 15);
      if ( (v6 & 0x3F) != 0 )
      {
        if ( v6 >= 0 )
        {
          if ( !*(_DWORD *)(a1 + 124)
            || (v13 = *(_DWORD *)(a2 + 8) ^ *(_DWORD *)(a1 + 136),
                HIBYTE(v13) == ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13)))) )
          {
            if ( *(_BYTE *)(a2 + 15) == 4 )
            {
              if ( (a2 & 0xFFF) != 0x30 )
                goto LABEL_34;
            }
            else
            {
              v9 = *(unsigned __int8 *)(a2 + 14);
              if ( (_BYTE)v9 )
                a1 = (a2 & 0xFFFFFFFFFFFF0000uLL) - (v9 << 16) + 0x10000;
              if ( !a1 || *(_QWORD *)(a1 + 40) != v5 || a2 < *(_QWORD *)(a1 + 64) || a2 >= *(_QWORD *)(a1 + 72) )
                goto LABEL_34;
            }
            if ( *(_DWORD *)(v5 + 124) )
            {
              v10 = *(_DWORD *)(a2 + 8);
              if ( (v10 & *(_DWORD *)(v5 + 124)) != 0 )
                v10 ^= *(_DWORD *)(v5 + 136);
              v11 = HIWORD(v10);
            }
            else
            {
              LOBYTE(v11) = *(_BYTE *)(a2 + 10);
            }
            if ( (v11 & 4) == 0 || (unsigned __int8)RtlpCheckBusyBlockTail(v5, a2) )
            {
              if ( *(_BYTE *)(a2 + 15) == 4 )
                return 1;
              for ( i = *(_QWORD **)(v5 + 288); i != (_QWORD *)(v5 + 288); i = (_QWORD *)*i )
              {
                if ( a2 >= i[5] && a2 < i[6] )
                  return 1;
              }
            }
          }
        }
        else
        {
          if ( *(_BYTE *)(a1 + 418) == 2 )
            v7 = *(_QWORD *)(a1 + 408);
          else
            v7 = 0LL;
          if ( v7 )
            return 1;
        }
      }
    }
  }
LABEL_34:
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid address specified to %s( %p, %p )\n", a3, (const void *)v5, (const void *)(a2 + 16));
  RtlpBreakPointHeap();
  return 0;
}
