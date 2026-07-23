/*
 * XREFs of ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C9404
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1405C71D8 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x1405C75DC (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x14088D930 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_RAW::ReadPartitionTable(SC_RAW *this, struct SC_DISK_LAYOUT **a2)
{
  unsigned int v3; // edi
  const __m128i *v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  char v9; // r8

  v3 = 0;
  v5 = *(const __m128i **)(*(_QWORD *)this + 256LL);
  *a2 = 0LL;
  v6 = SC_ENV::Allocate(0xC0uLL);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0xC0uLL);
    if ( *(_DWORD *)(*(_QWORD *)this + 216LL) == 11 || v5[31].m128i_i16[7] == -21931 )
    {
      v7[1] = 1;
      v7[2] = 1;
      v7[3] = MBR_HEADER::CheckSum(v5);
      *((_QWORD *)v7 + 7) = 0LL;
      v8 = *(_QWORD *)(*(_QWORD *)this + 240LL) << *(_DWORD *)(*(_QWORD *)this + 232LL);
      v7[18] = -1;
      *((_QWORD *)v7 + 8) = v8;
      *((_WORD *)v7 + 40) = 4;
      *((_BYTE *)v7 + 82) = v9;
      v7[21] = 0;
      *((_QWORD *)v7 + 11) = (unsigned int)v7[2];
      *((_QWORD *)v7 + 12) = 0LL;
    }
    else
    {
      v7[3] = MBR_HEADER::CheckSum(v5);
    }
    *a2 = (struct SC_DISK_LAYOUT *)v7;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
