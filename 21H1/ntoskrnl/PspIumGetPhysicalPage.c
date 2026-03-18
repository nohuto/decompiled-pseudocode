/*
 * XREFs of PspIumGetPhysicalPage @ 0x1409084BC
 * Callers:
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PspIumReplenishPartitionPages @ 0x14057E4F8 (PspIumReplenishPartitionPages.c)
 *     MmVirtualAccessFault @ 0x1408CD414 (MmVirtualAccessFault.c)
 */

__int64 __fastcall PspIumGetPhysicalPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // r15d
  unsigned __int64 v5; // rdi
  _KPROCESS *v7; // rsi
  __int64 v8; // rcx
  _KPROCESS *Process; // r14
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  signed __int64 v16[2]; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v17[3]; // [rsp+38h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v7 = *(_KPROCESS **)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 32);
  v15 = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( v8 && *(_DWORD *)(v8 + 4) < 8u )
    PspIumReplenishPartitionPages(v8, 3u);
  if ( v5 >= 0x7FFFFFFF0000LL )
  {
    v11 = -1073741819;
  }
  else
  {
    v16[1] = 4096LL;
    v16[0] = v5 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v7 )
      KiStackAttachProcess(v7, 0LL, (__int64)v17, a4);
    v10 = v15;
    while ( 1 )
    {
      v15 = v10 & 0xFFFFFFFFFFFFFLL;
      v11 = MmVirtualAccessFault(v16, (__int64)&v15, v4);
      if ( v11 < 0 )
        break;
      v10 = v15;
      if ( (v15 & 0x10000000000000LL) != 0 )
      {
        *(_QWORD *)(a1 + 16) = v15 & 0xFFFFFFFFFFFFFLL;
        break;
      }
    }
    if ( Process != v7 )
      KiUnstackDetachProcess((__int64)v17, 0LL, v12, v13);
  }
  result = v11;
  *(_QWORD *)(a1 + 8) = v11;
  return result;
}
