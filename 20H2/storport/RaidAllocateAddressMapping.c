/*
 * XREFs of RaidAllocateAddressMapping @ 0x1C0044A14
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C0039270 (StorPortGetDeviceBase.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAllocateAddressMapping(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  _OWORD *Pool; // rax
  _OWORD *v11; // rdx
  __int64 result; // rax

  Pool = RaidAllocatePool(NonPagedPoolNx, 0x28uLL, 0x4D416152u, a6);
  v11 = Pool;
  if ( !Pool )
    return 3221225495LL;
  *Pool = 0LL;
  Pool[1] = 0LL;
  *((_QWORD *)Pool + 4) = 0LL;
  *(_QWORD *)Pool = *a1;
  *a1 = Pool;
  *((_DWORD *)Pool + 8) = a5;
  result = 0LL;
  *((_QWORD *)v11 + 3) = a2;
  *((_QWORD *)v11 + 1) = a3;
  *((_DWORD *)v11 + 4) = a4;
  return result;
}
