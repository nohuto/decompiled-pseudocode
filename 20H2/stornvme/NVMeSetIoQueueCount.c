/*
 * XREFs of NVMeSetIoQueueCount @ 0x1C001A78C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v4; // si
  unsigned __int16 v5; // bx
  int v6; // eax
  unsigned __int16 v7; // bx
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = a2;
  if ( a2 )
  {
    v4 = *(_WORD *)(a1 + 280);
    v5 = *(_WORD *)(a1 + 282);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 0;
    if ( *(_BYTE *)(a1 + 16) )
    {
      v4 = 1;
      v5 = 1;
    }
    else
    {
      v4 = *(_WORD *)(a1 + 40);
      if ( !v4 )
        v4 = *(_WORD *)(a1 + 210);
      v6 = *(_DWORD *)(a1 + 124);
      if ( v6 )
        v4 += v6;
      v5 = *(_WORD *)(a1 + 42);
      if ( !v5 )
      {
        v7 = *(_WORD *)(a1 + 248);
        if ( v7 <= 1u )
          v5 = 1;
        else
          v5 = v7 - 1;
      }
      if ( v6 )
        v5 += v6;
      if ( v4 <= v5 )
        v4 = v5;
    }
  }
  *(_BYTE *)(a1 + 835) = 0;
  memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v8 = *(_QWORD *)(a1 + 920);
  *(_QWORD *)(a1 + 888) = v8;
  *(_DWORD *)(a1 + 824) = 1;
  *(_BYTE *)(v8 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
  v9 = *(_QWORD *)(a1 + 920);
  *(_WORD *)(v9 + 4142) = v5 - 1;
  *(_BYTE *)(v9 + 4096) = 9;
  *(_BYTE *)(v9 + 4136) = 7;
  *(_WORD *)(v9 + 4140) = v4 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4224LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = v2;
  ProcessCommand(a1, a1 + 832);
  return WaitForCommandCompleteWithCustomTimeout(a1);
}
