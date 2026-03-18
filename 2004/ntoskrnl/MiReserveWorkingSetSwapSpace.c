/*
 * XREFs of MiReserveWorkingSetSwapSpace @ 0x1406D28EC
 * Callers:
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     MiFreeReservationRuns @ 0x1406D056C (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x1406D2818 (MiReserveWorkingSetSwapSpaceRuns.c)
 */

unsigned __int64 __fastcall MiReserveWorkingSetSwapSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v6; // edi
  unsigned int *i; // r8
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned __int64 result; // rax

  v6 = a4;
  for ( i = *(unsigned int **)(a1 + 8LL * a4 + 6944); ; i = *(unsigned int **)(a1 + 8LL * a5 + 6944) )
  {
    if ( v6 == a5 || a5 == 16 )
    {
      v11 = 1;
    }
    else
    {
      v10 = *i;
      v11 = (i[51] & 0x20) != 0 ? v10 >> 1 : v10 - (v10 >> 6);
    }
    result = MiReserveWorkingSetSwapSpaceRuns(a1, a6, v6, v11, (unsigned __int64)a2);
    if ( !result )
      break;
    MiFreeReservationRuns(a1, (unsigned __int64)a2);
    memset(a2, 0, 0x50uLL);
    if ( v6 == a5 || a5 >= 0x10 )
      return 3221226021LL;
    v6 = a5;
  }
  return result;
}
