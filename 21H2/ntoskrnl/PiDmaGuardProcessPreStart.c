/*
 * XREFs of PiDmaGuardProcessPreStart @ 0x14073E4A4
 * Callers:
 *     PipProcessStartPhase1 @ 0x14073E02C (PipProcessStartPhase1.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall PiDmaGuardProcessPreStart(ULONG_PTR MaxDataSize)
{
  __int64 v2; // rbx
  int v3; // eax
  ULONG_PTR v4; // rsi
  __int64 v5; // rax

  if ( PipHalIommuSecurityEnabled )
  {
    v2 = *(_QWORD *)(MaxDataSize + 720);
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 16) & 1) == 0 || (*(_BYTE *)(*(_QWORD *)v2 + 4LL) & 1) != 0 )
      {
        v3 = ((__int64 (__fastcall *)(_QWORD, __int64))off_140C009C8[0])(*(_QWORD *)v2, v2 + 8);
        v4 = v3;
        if ( v3 < 0 )
        {
          IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x310);
          if ( *(_WORD *)(MaxDataSize + 40) )
          {
            IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
          }
          if ( *(_WORD *)(MaxDataSize + 56) )
          {
            IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
            IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
          }
          v5 = *(_QWORD *)(MaxDataSize + 16);
          if ( v5 )
          {
            if ( *(_WORD *)(v5 + 56) )
            {
              IoAddTriageDumpDataBlock(v5 + 56, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
            }
          }
          KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v4, MaxDataSize);
        }
        *(_BYTE *)(v2 + 16) |= 2u;
      }
    }
  }
}
