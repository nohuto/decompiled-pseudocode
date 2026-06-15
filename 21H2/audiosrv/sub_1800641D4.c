/*
 * XREFs of sub_1800641D4 @ 0x1800641D4
 * Callers:
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     sub_1800384DC @ 0x1800384DC (sub_1800384DC.c)
 */

__int64 __fastcall sub_1800641D4(__int64 a1, int a2, __int64 a3)
{
  char *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = &off_180148F40;
  v6 = sub_1800384DC(1);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 8) = v6;
  if ( v6 )
  {
    *(_DWORD *)(a1 + 20) = *((_DWORD *)v6 + 4);
    v7 = **((_DWORD **)v6 + 1);
    v8 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 16) = v7;
    *(_DWORD *)(v8 + 16) = v7;
  }
  *(_DWORD *)(a1 + 32) = a2;
  result = a1;
  *(_QWORD *)(a1 + 24) = a3;
  return result;
}
