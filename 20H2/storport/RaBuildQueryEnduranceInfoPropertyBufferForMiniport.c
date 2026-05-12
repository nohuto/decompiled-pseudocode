/*
 * XREFs of RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0043C44
 * Callers:
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00490D0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 */

__int64 __fastcall RaBuildQueryEnduranceInfoPropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, int *a4)
{
  __int64 v4; // rdi
  int v5; // esi
  unsigned int v8; // r14d
  __int64 v9; // rbp
  char *Pool; // rax
  char *v11; // rbx
  int v12; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v8 = 0;
  if ( *(_DWORD *)v4 == 1 )
    v9 = *(_QWORD *)(v4 + 24);
  else
    v9 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1 )
    v4 = 0LL;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x54uLL, 0x72536152u, a1);
  v11 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x54uLL);
    *(_DWORD *)v11 = 28;
    *(_QWORD *)(v11 + 4) = 0x464E495255444E45LL;
    *((_DWORD *)v11 + 4) = 2954240;
    if ( v4 )
      v12 = *(_DWORD *)(v4 + 1264);
    else
      v12 = *(_DWORD *)(v9 + 4268);
    *((_DWORD *)v11 + 3) = v12;
    *((_DWORD *)v11 + 6) = 56;
    *((_DWORD *)v11 + 7) = 56;
    *((_DWORD *)v11 + 8) = 56;
    v5 = 84;
  }
  else
  {
    v8 = -1073741670;
  }
  result = v8;
  *a3 = v11;
  *a4 = v5;
  return result;
}
