/*
 * XREFs of NVMeSyncHostTime @ 0x1C001B0A8
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C000202C (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001BBDC (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSyncHostTime(__int64 a1)
{
  unsigned __int64 v2; // rbx
  void *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  int i; // edx
  unsigned __int64 *v9; // [rsp+48h] [rbp+28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+38h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  StorPortQuerySystemTime(&v11);
  v2 = (v11 / 0x2710 - 11644754400000LL) & 0xFFFFFFFFFFFFLL;
  NVMeAllocateDmaBuffer(a1, 8LL, &v9, &v10);
  if ( !v9 )
    return 3238002691LL;
  NVMeZeroMemory(v9, 8u);
  *v9 = v2;
  v4 = *(void **)(a1 + 920);
  *(_BYTE *)(a1 + 835) = 0;
  memset(v4, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 920) + 4232LL) = 0LL;
  v5 = *(_QWORD **)(a1 + 920);
  v6 = v10;
  *(_QWORD *)(a1 + 888) = v5;
  *(_DWORD *)(a1 + 824) = 1;
  if ( (unsigned int)SetPrpFromBuffer(a1, v5, v6, 8u) )
  {
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) |= i )
      ++i;
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4253LL) |= 4u;
    SrbAssignQueueId(a1, a1 + 832);
    *(_DWORD *)(*(_QWORD *)(a1 + 920) + 4100LL) = -1;
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4096LL) = 9;
    *(_BYTE *)(*(_QWORD *)(a1 + 920) + 4136LL) = 14;
    ProcessCommand(a1, a1 + 832);
    WaitForCommandCompleteWithCustomTimeout(a1);
    v7 = *(_BYTE *)(a1 + 835) != 1 ? 0xC1000001 : 0;
  }
  else
  {
    v7 = -1056964607;
  }
  if ( v9 )
    NVMeFreeDmaBuffer(a1, 8LL, &v9, v10);
  return v7;
}
