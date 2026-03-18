/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C0017B98
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetCommandEffectsLog(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  void **v4; // rbx
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 920);
  v7 = 0LL;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 1608);
    if ( (*(_BYTE *)(result + 261) & 2) != 0 )
    {
      v4 = (void **)(a1 + 3760);
      v5 = *(void **)(a1 + 3760);
      if ( v5 )
      {
        result = *(_QWORD *)(a1 + 3968);
        v7 = result;
        if ( !result )
          return result;
      }
      else
      {
        result = NVMeAllocateDmaBuffer(a1, 4096LL, v4, &v7);
        v5 = *v4;
        if ( !*v4 )
          return result;
        *(_QWORD *)(a1 + 3968) = v7;
      }
      memset(v5, 0, 0x1000uLL);
      v6 = *(void **)(a1 + 920);
      *(_BYTE *)(a1 + 835) = 0;
      memset(v6, 0, 0x10A0uLL);
      *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
      *(_QWORD *)(a1 + 888) = *(_QWORD *)(a1 + 920);
      *(_DWORD *)(a1 + 824) = 1;
      *(_BYTE *)(v1 + 4253) |= 3u;
      *(_WORD *)(v1 + 4244) = 0;
      BuildGetLogPageCommand(a1, v1, 5u, 0x1000u, v7, -1, 0LL, 0);
      *(_BYTE *)(v1 + 4253) |= 4u;
      *(_QWORD *)(v1 + 4200) = *v4;
      *(_QWORD *)(v1 + 4208) = v7;
      *(_DWORD *)(v1 + 4240) = 4096;
      ProcessCommand(a1, a1 + 832);
      return WaitForCommandCompleteWithCustomTimeout(a1);
    }
  }
  return result;
}
