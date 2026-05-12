/*
 * XREFs of RaBuildSetBootLunBufferForMiniport @ 0x1C0042A10
 * Callers:
 *     RaidAdapterSetBootLunIoctl @ 0x1C002E228 (RaidAdapterSetBootLunIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007C88 (RaidAllocatePool.c)
 *     RaidAdapterFindUnitByIdentifier @ 0x1C002B3C0 (RaidAdapterFindUnitByIdentifier.c)
 */

__int64 __fastcall RaBuildSetBootLunBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // r15
  unsigned int v8; // edi
  _OWORD *Pool; // rax
  _OWORD *v10; // rbx
  _BYTE *UnitByIdentifier; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v8 = 0;
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x2CuLL, 0x72536152u, *(_QWORD *)(a1 + 8));
  v10 = Pool;
  if ( Pool )
  {
    *Pool = 0LL;
    Pool[1] = 0LL;
    *((_QWORD *)Pool + 4) = 0LL;
    *((_DWORD *)Pool + 10) = 0;
    *((_DWORD *)Pool + 4) = 3004036;
    *(_DWORD *)Pool = 28;
    *((_DWORD *)Pool + 3) = *(_DWORD *)(a1 + 4268);
    *((_DWORD *)Pool + 6) = 16;
    *((_DWORD *)Pool + 8) = 16;
    *((_DWORD *)Pool + 7) = 1;
    v13 = *(_OWORD *)(v4 + 8);
    UnitByIdentifier = RaidAdapterFindUnitByIdentifier(a1, &v13);
    if ( UnitByIdentifier )
    {
      *((_DWORD *)v10 + 9) = 8;
      *((_BYTE *)v10 + 43) = UnitByIdentifier[98];
      *((_BYTE *)v10 + 41) = UnitByIdentifier[96];
      *((_BYTE *)v10 + 40) = 0;
      *((_BYTE *)v10 + 42) = UnitByIdentifier[97];
    }
    else
    {
      v8 = -1073741632;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  result = v8;
  *a3 = v10;
  *a4 = 44;
  return result;
}
