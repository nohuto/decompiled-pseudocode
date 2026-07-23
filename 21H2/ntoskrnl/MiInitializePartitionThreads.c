/*
 * XREFs of MiInitializePartitionThreads @ 0x1408C7DB4
 * Callers:
 *     MmCreatePartition @ 0x1403CAB14 (MmCreatePartition.c)
 * Callees:
 *     MiCreateZeroThreadContext @ 0x1403B0DF8 (MiCreateZeroThreadContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiDeleteZeroThreadContext @ 0x14054FE54 (MiDeleteZeroThreadContext.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiInitializePartitionThreads(__int64 a1)
{
  __int64 *v1; // r15
  unsigned int *v2; // rsi
  unsigned int v4; // ebp
  ULONG_PTR v5; // r12
  __int64 v6; // rdi
  PVOID ZeroThreadContext; // rax
  int SystemThread; // r14d
  int v10[2]; // [rsp+50h] [rbp-68h] BYREF
  _DWORD v11[4]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v12[3]; // [rsp+68h] [rbp-50h] BYREF

  *(_QWORD *)v10 = 0LL;
  v11[0] = 0;
  v1 = v12;
  v12[0] = MiZeroPageThread;
  v2 = v11;
  v11[1] = 1;
  v12[1] = MiRebuildLargePagesThread;
  v11[2] = 2;
  v12[2] = MiPartitionWorkingSetManager;
  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 112LL);
  while ( 1 )
  {
    v6 = *v2;
    if ( !(_DWORD)v6 )
    {
      ZeroThreadContext = MiCreateZeroThreadContext(0LL, 0);
      *(_QWORD *)(a1 + 6440) = ZeroThreadContext;
      if ( !ZeroThreadContext )
        return 3221225626LL;
    }
    SystemThread = PsCreateSystemThreadEx((__int64)v10, 0x1FFFFF, 0LL, v5, 0LL, *v1, a1, 0LL, 0LL);
    if ( SystemThread < 0 )
      break;
    ++v4;
    ++v2;
    *(_QWORD *)(a1 + 8 * v6 + 128) = *(_QWORD *)v10;
    ++v1;
    if ( v4 >= 3 )
      return 0LL;
  }
  if ( !(_DWORD)v6 )
  {
    MiDeleteZeroThreadContext(*(_QWORD **)(a1 + 6440));
    *(_QWORD *)(a1 + 6440) = 0LL;
  }
  return (unsigned int)SystemThread;
}
