/*
 * XREFs of MiMapParametersInitialize @ 0x140703390
 * Callers:
 *     MmMapSecureViewOfSection @ 0x140655C70 (MmMapSecureViewOfSection.c)
 *     MmMapViewOfSection @ 0x1406A1F20 (MmMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x1406C0BF8 (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x1407020E0 (NtMapViewOfSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiGetUserReservationHighestAddress @ 0x14070349C (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiMapParametersInitialize(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v15; // r10d

  v11 = MiSectionControlArea(a2);
  memset(a1, 0, 0x80uLL);
  *((_QWORD *)a1 + 12) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)a1 + 11) = a3;
  v12 = (unsigned __int16)KeNumberNodes;
  v13 = a6 & 0x7F;
  *((_BYTE *)a1 + 104) = KeGetCurrentThread()->PreviousMode;
  *((_DWORD *)a1 + 13) = v13;
  if ( v13 > v12 )
    return 3221225485LL;
  *((_DWORD *)a1 + 10) = a6 & 0xFFFFFF80;
  *((_DWORD *)a1 + 11) = a7;
  if ( a4 )
    *((_DWORD *)a1 + 18) |= 1u;
  *((_QWORD *)a1 + 3) = a5;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) == 0 && (*((_DWORD *)a1 + 18) & 1) != 0 )
    a8 = 0LL;
  *((_QWORD *)a1 + 1) = MiGetUserReservationHighestAddress(a3, a8);
  *((_QWORD *)a1 + 2) = 0x10000LL;
  if ( (*(_DWORD *)(v11 + 56) & 0x420) == 0 )
  {
    if ( (v15 & 0x20000000) != 0 )
    {
      *((_QWORD *)a1 + 2) = 0x200000LL;
    }
    else if ( (v15 & 0x40000000) != 0 )
    {
      *((_QWORD *)a1 + 2) = 4096LL;
    }
  }
  return 0LL;
}
