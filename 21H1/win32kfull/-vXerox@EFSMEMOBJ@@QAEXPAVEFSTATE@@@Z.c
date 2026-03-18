/*
 * XREFs of ?vXerox@EFSMEMOBJ@@QAEXPAVEFSTATE@@@Z @ 0x229505
 * Callers:
 *     ?bGrow@EFSOBJ@@QAEHXZ @ 0x2293A6 (-bGrow@EFSOBJ@@QAEHXZ.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall EFSMEMOBJ::vXerox(EFSMEMOBJ *this, struct EFSTATE *a2)
{
  size_t v3; // esi

  v3 = (*((_DWORD *)a2 + 6) - (_DWORD)a2 - 40) & 0xFFFFFFF8;
  memcpy((void *)(*(_DWORD *)this + 40), (char *)a2 + 40, v3);
  *(_DWORD *)(*(_DWORD *)this + 24) = v3 + *(_DWORD *)this + 40;
  *(_DWORD *)(*(_DWORD *)this + 36) = *((_DWORD *)a2 + 9);
  *(_DWORD *)(*(_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
}
