/*
 * XREFs of sub_1800E3360 @ 0x1800E3360
 * Callers:
 *     sub_1800E6350 @ 0x1800E6350 (sub_1800E6350.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 */

__int64 __fastcall sub_1800E3360(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  __int64 result; // rax

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)a1, 0, 0);
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v4 = sub_180008EAC(0x28uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *(_QWORD *)(a1 + 40) = v4;
  result = a1;
  *(_DWORD *)(a1 + 56) = a2;
  return result;
}
