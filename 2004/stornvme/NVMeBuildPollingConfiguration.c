/*
 * XREFs of NVMeBuildPollingConfiguration @ 0x1C0016818
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeBuildPollingConfiguration(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 835) = 0;
    memset(*(void **)(a1 + 920), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
    v2 = *(_QWORD *)(a1 + 920);
    *(_QWORD *)(a1 + 888) = v2;
    *(_DWORD *)(a1 + 824) = 1;
    *(_BYTE *)(v2 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 920) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 920);
    v4 = *(_QWORD *)(a1 + 1712);
    *(_BYTE *)(v3 + 4096) = 10;
    *(_QWORD *)(v3 + 4120) = v4;
    *(_BYTE *)(v3 + 4136) = -48;
    *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4224LL) = NVMeBuildDevicePollingConfiguration;
    ProcessCommand(a1, a1 + 832);
    WaitForCommandCompleteWithCustomTimeout(a1);
    if ( !*(_BYTE *)(a1 + 3800) )
    {
      if ( !*(_DWORD *)(a1 + 64) )
        return;
      *(_BYTE *)(a1 + 3800) = 1;
    }
    v5 = *(_DWORD *)(a1 + 3820);
    if ( v5 )
    {
      if ( v5 > 0x64 )
        v5 = 100;
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 64);
    }
    *(_DWORD *)(a1 + 3804) = v5;
    v6 = *(_DWORD *)(a1 + 3824);
    if ( !v6 )
      v6 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 3808) = v6;
    v7 = *(_DWORD *)(a1 + 3828);
    if ( (v7 & 1) != 0 )
      *(_DWORD *)(a1 + 3812) = v7;
    else
      *(_DWORD *)(a1 + 3812) ^= (*(_DWORD *)(a1 + 3812) ^ (*(_DWORD *)(a1 + 108) >> 1)) & 0xFE;
  }
}
