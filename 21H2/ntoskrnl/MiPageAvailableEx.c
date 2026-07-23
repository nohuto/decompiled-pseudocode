/*
 * XREFs of MiPageAvailableEx @ 0x1403241B4
 * Callers:
 *     MiDecreaseAvailablePages @ 0x1403240D0 (MiDecreaseAvailablePages.c)
 *     MiPageAvailable @ 0x14055C1F4 (MiPageAvailable.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageAvailableEx(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  _BOOL8 result; // rax
  int v4; // r9d

  result = a2 >= 0x9F
        || (a3 & 0x2000) != 0
        || (v4 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3), (v4 & 0xC) == 8)
        || (a2 >= 0x20 || (ULONG_PTR *)a1 != &MiSystemPartition)
        && ((a3 & 4) != 0 || (v4 & 2) != 0 && a2 >= 0x21 || (*(_DWORD *)(a1 + 4) & 0x20) != 0);
  return result;
}
