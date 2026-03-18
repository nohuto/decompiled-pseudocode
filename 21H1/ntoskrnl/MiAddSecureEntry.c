/*
 * XREFs of MiAddSecureEntry @ 0x140631F10
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14061606C (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MiAllocateVad @ 0x14064F830 (MiAllocateVad.c)
 *     MiSecureVad @ 0x1406BAAC8 (MiSecureVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406CEA44 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 *     MiCloneNoChange @ 0x1408C3D38 (MiCloneNoChange.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402A1070 (ExAllocatePoolMm.c)
 *     MiSetVadFlags @ 0x1402A1110 (MiSetVadFlags.c)
 *     MiInsertVadEvent @ 0x1402A120C (MiInsertVadEvent.c)
 *     MmGetCurrentProcessorColor @ 0x1402EFAD0 (MmGetCurrentProcessorColor.c)
 *     MiLocateExclusiveSecure @ 0x14030B278 (MiLocateExclusiveSecure.c)
 */

_DWORD *__fastcall MiAddSecureEntry(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  int v9; // eax
  _DWORD *PoolMm; // rax
  _DWORD *v11; // rbx
  _DWORD *v12; // r9

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 && ((a5 & 1) != 0 || MiLocateExclusiveSecure(a1)) )
    return 0LL;
  LOWORD(v9) = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64, 0x48uLL, 0x65536D4Du, v9 | 0x80000000);
  v11 = PoolMm;
  if ( !PoolMm )
    return 0LL;
  PoolMm[16] = 2;
  *((_QWORD *)PoolMm + 1) = a2;
  *((_QWORD *)PoolMm + 2) = a3;
  if ( (a4 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 8;
    goto LABEL_8;
  }
  if ( (a4 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0xA;
    goto LABEL_8;
  }
  if ( (a4 & 2) != 0 )
  {
    LODWORD(a2) = a2 | 9;
LABEL_8:
    PoolMm[2] = a2;
  }
  if ( (a5 & 1) != 0 )
  {
    LODWORD(a2) = a2 | 0x20;
    PoolMm[2] = a2;
  }
  if ( (a5 & 4) != 0 )
  {
    LODWORD(a2) = a2 | 0x40;
    PoolMm[2] = a2;
  }
  if ( (a5 & 8) != 0 )
  {
    LODWORD(a2) = a2 | 0x80;
    PoolMm[2] = a2;
  }
  if ( a4 < 0 )
  {
    LODWORD(a2) = a2 | 4;
    PoolMm[2] = a2;
  }
  if ( (a4 & 0x40000000) != 0 )
  {
    LODWORD(a2) = a2 | 0x10;
    PoolMm[2] = a2;
  }
  if ( (a4 & 0x20000000) != 0 )
    PoolMm[2] = a2 | 0x100;
  MiInsertVadEvent(a1, PoolMm, 1);
  MiSetVadFlags(a1, 1LL, 1LL, v12);
  return v11;
}
