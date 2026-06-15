/*
 * XREFs of sub_1800053AC @ 0x1800053AC
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_180019EA0 @ 0x180019EA0 (sub_180019EA0.c)
 *     sub_18002B430 @ 0x18002B430 (sub_18002B430.c)
 *     sub_1800CF4A4 @ 0x1800CF4A4 (sub_1800CF4A4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800053AC(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax

  if ( (unsigned int)o__wcsicmp(*(_QWORD *)a1, *(_QWORD *)a2) )
    return 0;
  v4 = *(_DWORD *)(a1 + 64);
  if ( v4 != *(_DWORD *)(a2 + 64) || !v4 && *(_DWORD *)(a1 + 56) != *(_DWORD *)(a2 + 56) )
    return 0;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 != *(_DWORD *)(a2 + 48) || !v5 && (unsigned int)o__wcsicmp(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8)) )
    return 0;
  v6 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a2 + 24);
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 32) - *(_QWORD *)(a2 + 32);
  return !v6;
}
