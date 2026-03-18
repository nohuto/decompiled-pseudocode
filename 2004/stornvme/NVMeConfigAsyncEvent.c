/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C0016994
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  _BYTE *v4; // rax
  int v5; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1608);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 835) = 0;
    memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
    v3 = *(_QWORD *)(a1 + 920);
    *(_QWORD *)(a1 + 888) = v3;
    *(_DWORD *)(a1 + 824) = 1;
    *(_BYTE *)(v3 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
    v4 = *(_BYTE **)(a1 + 920);
    v5 = *(_DWORD *)(a1 + 60) & (*(_DWORD *)(v1 + 92) & 0x300 | ((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 3984) = v5;
    v4[4140] = v5;
    v4[4096] = 9;
    v4[4136] = 11;
    ProcessCommand(a1, a1 + 832);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
