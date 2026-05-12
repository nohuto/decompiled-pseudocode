/*
 * XREFs of RaBuildQueryBootLunsBufferForMiniport @ 0x1C0042658
 * Callers:
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002C3A0 (RaidAdapterQueryBootLunsIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

__int64 __fastcall RaBuildQueryBootLunsBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v7; // edi
  _DWORD *Pool; // rax
  _DWORD *v9; // rbx
  int v10; // ecx
  __int64 result; // rax

  v7 = 0;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x72536152u, *(_QWORD *)(a1 + 8));
  v9 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x6CuLL);
    v9[4] = 2954880;
    *v9 = 28;
    v10 = *(_DWORD *)(a1 + 4268);
    v9[6] = 80;
    v9[8] = 80;
    v9[3] = v10;
    v9[7] = 1;
  }
  else
  {
    v7 = -1073741670;
  }
  result = v7;
  *a3 = v9;
  *a4 = 108;
  return result;
}
