/*
 * XREFs of _RtlpHpSegMgrRelease@12 @ 0x4B37C3E1
 * Callers:
 *     _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B (_RtlpHpSegMgrAllocate@12.c)
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 * Callees:
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 *     _RtlpHpQueryVA@20 @ 0x4B37951B (_RtlpHpQueryVA@20.c)
 *     _RtlpHpSegMgrCommit@28 @ 0x4B37BF36 (_RtlpHpSegMgrCommit@28.c)
 *     _RtlpHpSegMgrVaCtxFree@12 @ 0x4B37C6A4 (_RtlpHpSegMgrVaCtxFree@12.c)
 */

char __fastcall RtlpHpSegMgrRelease(int a1, void *a2, int a3)
{
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _WORD *v8; // esi
  PVOID BaseAddress; // [esp+Ch] [ebp-Ch] BYREF
  ULONG_PTR RegionSize; // [esp+10h] [ebp-8h] BYREF

  v4 = (int)a2;
  BaseAddress = a2;
  v5 = -*(_DWORD *)a1;
  LOBYTE(v6) = *(_BYTE *)(a1 + 9) & 7;
  LODWORD(RegionSize) = v5;
  if ( !(_BYTE)v6 )
  {
LABEL_11:
    if ( v4 )
      LOBYTE(v6) = RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    return v6;
  }
  v7 = 0;
  if ( v5 >= 0x200000 )
    goto LABEL_6;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, (int)a2, 0, v5 >> 12, -a3, 0x4000, 0);
  v6 = RtlpHpSegMgrVaCtxFree(&RegionSize);
  v4 = v6;
  BaseAddress = (PVOID)v6;
  if ( v6 )
  {
LABEL_6:
    RtlpHpQueryVA(v4, (_DWORD *)&RegionSize + 1, 0, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32));
    v8 = (_WORD *)HIDWORD(RegionSize);
    v6 = HIDWORD(RegionSize) + 2 * ((unsigned int)RegionSize >> 21);
    for ( HIDWORD(RegionSize) = v6; (unsigned int)v8 < HIDWORD(RegionSize); v7 += 512 )
    {
      LOWORD(v6) = *v8;
      if ( (*v8 & 0x7FF) != 0 )
        LOBYTE(v6) = RtlpHpSegMgrCommit(a1, (int)BaseAddress, v7, 512, -(v6 & 0x7FF), 0x4000, 0);
      ++v8;
    }
    v4 = (int)BaseAddress;
    goto LABEL_11;
  }
  return v6;
}
