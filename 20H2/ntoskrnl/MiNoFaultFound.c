/*
 * XREFs of MiNoFaultFound @ 0x1402997A8
 * Callers:
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x140306278 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x140546FB4 (MiLargePageFault.c)
 * Callees:
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 */

__int64 __fastcall MiNoFaultFound(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        signed __int64 a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // edi
  int v9; // esi
  signed __int64 v10; // r10
  __int64 v12; // rcx

  v6 = 0;
  v8 = 0;
  v9 = 0;
  v10 = a6;
  if ( (a6 & 0x20) != 0 )
  {
    if ( ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 5)
      && (MiFlags & 0x100) == 0
      && (MiFlags & 0x200) == 0 )
    {
      v8 = 1;
    }
  }
  else
  {
    v10 = a6 | 0x20;
    v9 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) != 0 && (v10 & 2) == 0 )
  {
    v9 = 1;
    if ( (v10 & 0x42) == 0x40 )
      v8 = 1;
    v10 |= 0x62uLL;
  }
  if ( v9 && a6 != _InterlockedCompareExchange64(a2, v10, a6) )
    return 0LL;
  if ( v8 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
      v6 = MiTbFlushType(v12);
    KeFlushSingleTb(a3, v6);
  }
  return v8;
}
