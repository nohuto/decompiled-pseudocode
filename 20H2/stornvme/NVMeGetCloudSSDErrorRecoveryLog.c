/*
 * XREFs of NVMeGetCloudSSDErrorRecoveryLog @ 0x1C00178C8
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BB0C (WaitForCommandCompleteWithCustomTimeout.c)
 */

_UNKNOWN **__fastcall NVMeGetCloudSSDErrorRecoveryLog(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rsi
  void **v4; // rbx
  void *v5; // rcx
  void *v6; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  _UNKNOWN **v8; // [rsp+60h] [rbp+8h] BYREF

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 920);
  v8 = 0LL;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v4 = (void **)(a1 + 3960);
    v5 = *(void **)(a1 + 3960);
    if ( v5 )
    {
      result = *(_UNKNOWN ***)(a1 + 3976);
      v8 = result;
      if ( !result )
        return result;
    }
    else
    {
      result = (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 512LL, v4, &v8);
      v5 = *v4;
      if ( !*v4 )
        return result;
      *(_QWORD *)(a1 + 3976) = v8;
    }
    memset(v5, 0, 0x200uLL);
    v6 = *(void **)(a1 + 920);
    *(_BYTE *)(a1 + 835) = 0;
    memset(v6, 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
    *(_QWORD *)(a1 + 888) = *(_QWORD *)(a1 + 920);
    *(_DWORD *)(a1 + 824) = 1;
    *(_BYTE *)(v2 + 4253) |= 3u;
    *(_WORD *)(v2 + 4244) = 0;
    BuildGetLogPageCommand(a1, v2, 0xC1u, 0x200u, (__int64)v8, -1, 0LL, 0);
    *(_BYTE *)(v2 + 4253) |= 4u;
    *(_QWORD *)(v2 + 4200) = *v4;
    *(_QWORD *)(v2 + 4208) = v8;
    *(_QWORD *)(v2 + 4224) = NVMeGetCloudSSDErrorRecoveryLogPageCompletion;
    *(_DWORD *)(v2 + 4240) = 512;
    ProcessCommand(a1, a1 + 832);
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
