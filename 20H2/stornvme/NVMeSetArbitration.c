/*
 * XREFs of NVMeSetArbitration @ 0x1C001A2B8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetArbitration(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 1608);
  v3 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v4 = *(_BYTE *)(a1 + 46);
    if ( v4 == 0xFF )
    {
      v3 = *(_BYTE *)(v2 + 72);
    }
    else
    {
      if ( v4 <= 1u )
      {
LABEL_9:
        v5 = *(void **)(a1 + 920);
        *(_BYTE *)(a1 + 835) = 0;
        memset(v5, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
        v6 = *(_QWORD *)(a1 + 920);
        *(_QWORD *)(a1 + 888) = v6;
        *(_DWORD *)(a1 + 824) = 1;
        *(_BYTE *)(v6 + 4253) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
        v7 = *(_QWORD *)(a1 + 920);
        LODWORD(v6) = (*(_DWORD *)(v7 + 4140) ^ v3) & 7;
        *(_BYTE *)(v7 + 4096) = 9;
        *(_DWORD *)(v7 + 4140) ^= v6;
        *(_BYTE *)(v7 + 4136) = 1;
        ProcessCommand(a1, a1 + 832);
        WaitForCommandCompleteWithCustomTimeout(a1);
        return;
      }
      do
      {
        v4 >>= 1;
        ++v3;
      }
      while ( v4 > 1u );
    }
    if ( v3 >= 7u )
      v3 = 7;
    goto LABEL_9;
  }
}
