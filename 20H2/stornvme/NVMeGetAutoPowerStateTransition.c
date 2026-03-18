/*
 * XREFs of NVMeGetAutoPowerStateTransition @ 0x1C00176E8
 * Callers:
 *     NVMePowerInitialize @ 0x1C000E7EC (NVMePowerInitialize.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransition(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax
  void *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
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
    result = NVMeAllocateDmaBuffer(a1, 256LL, &v5, &v6);
    if ( v5 )
    {
      NVMeZeroMemory(v5, 0x100u);
      *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4200LL) = v5;
      *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4208LL) = v6;
      *(_DWORD *)(*(_QWORD *)(a1 + 920) + 4240LL) = 256;
      v4 = *(_QWORD *)(a1 + 920);
      *(_QWORD *)(v4 + 4120) = v6;
      *(_BYTE *)(v4 + 4096) = 10;
      *(_BYTE *)(v4 + 4136) = 12;
      *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4224LL) = NVMeGetAutoPowerStateTransitionCompletion;
      ProcessCommand(a1, a1 + 832);
      return WaitForCommandCompleteWithCustomTimeout(a1);
    }
  }
  return result;
}
