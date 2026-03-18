/*
 * XREFs of NVMeGetCloudSSDErrorRecoveryLog @ 0x1C0017948
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

_UNKNOWN **__fastcall NVMeGetCloudSSDErrorRecoveryLog(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rbx
  void *v4; // rcx
  void *v5; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  _UNKNOWN **v7; // [rsp+60h] [rbp+8h] BYREF
  void *v8; // [rsp+70h] [rbp+18h] BYREF

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 920);
  v4 = *(void **)(a1 + 3960);
  v7 = 0LL;
  v8 = v4;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 3960) = 0LL;
    if ( v4 )
    {
      result = *(_UNKNOWN ***)(a1 + 3976);
      v7 = result;
      if ( !result )
        return result;
    }
    else
    {
      result = (_UNKNOWN **)NVMeAllocateDmaBuffer(a1, 512LL, &v8, &v7);
      v4 = v8;
      if ( !v8 )
        return result;
      *(_QWORD *)(a1 + 3976) = v7;
    }
    memset(v4, 0, 0x200uLL);
    v5 = *(void **)(a1 + 920);
    *(_BYTE *)(a1 + 835) = 0;
    memset(v5, 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
    *(_QWORD *)(a1 + 888) = *(_QWORD *)(a1 + 920);
    *(_DWORD *)(a1 + 824) = 1;
    *(_BYTE *)(v2 + 4253) |= 3u;
    *(_WORD *)(v2 + 4244) = 0;
    BuildGetLogPageCommand(a1, v2, 0xC1u, 0x200u, (__int64)v7, -1, 0LL, 0);
    *(_BYTE *)(v2 + 4253) |= 4u;
    *(_QWORD *)(v2 + 4200) = v8;
    *(_QWORD *)(v2 + 4208) = v7;
    *(_QWORD *)(v2 + 4224) = NVMeGetCloudSSDErrorRecoveryLogPageCompletion;
    *(_DWORD *)(v2 + 4240) = 512;
    ProcessCommand(a1, a1 + 832);
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
