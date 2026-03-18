/*
 * XREFs of ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C027C5C4
 * Callers:
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C014EE00 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019634 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,40>::PagedPoolArray<DXGALLOCATIONREFERENCE,40>(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  `vector constructor iterator'(
    (char *)(a1 + 8),
    8LL,
    40LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  *(_DWORD *)(a1 + 328) = 0;
  return a1;
}
