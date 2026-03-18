/*
 * XREFs of KeStartProfile @ 0x1405160CC
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140786D80 (EtwpEnableKernelTrace.c)
 *     EtwpCoverageSamplerStart @ 0x140942988 (EtwpCoverageSamplerStart.c)
 *     NtStartProfile @ 0x1409560C0 (NtStartProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x140A8FF7C (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140327170 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403A1600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiStartProfileTarget @ 0x1405165A0 (KiStartProfileTarget.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

char __fastcall KeStartProfile(ULONG_PTR a1)
{
  SIZE_T v1; // rbx
  PVOID PoolWithTag; // rax
  ULONG_PTR Context; // [rsp+20h] [rbp-89h] BYREF
  int v5; // [rsp+28h] [rbp-81h]
  int v6; // [rsp+2Ch] [rbp-7Dh]
  int v7; // [rsp+30h] [rbp-79h]
  _DWORD v8[45]; // [rsp+34h] [rbp-75h] BYREF

  v6 = KeNumberProcessors_0;
  v5 = KeNumberProcessors_0;
  v7 = 1310721;
  Context = a1;
  memset(v8, 0, sizeof(v8));
  v1 = 4 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 196;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x666F7250u);
  *(_QWORD *)&v8[41] = PoolWithTag;
  if ( !PoolWithTag )
    return 1;
  memset(PoolWithTag, 0, v1);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStartProfileTarget((ULONG_PTR)&Context);
  else
    KeIpiGenericCall(KiStartProfileTarget, (ULONG_PTR)&Context);
  if ( *(_QWORD *)&v8[41] )
    ExFreePoolWithTag(*(PVOID *)&v8[41], 0x666F7250u);
  return v8[43];
}
