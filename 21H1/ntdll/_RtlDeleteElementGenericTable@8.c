/*
 * XREFs of _RtlDeleteElementGenericTable@8 @ 0x4B2A7E60
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x4B2A7F4E (FindNodeOrParent.c)
 *     _RtlDelete@4 @ 0x4B2A7FC0 (_RtlDelete@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

char __stdcall RtlDeleteElementGenericTable(int a1, int a2)
{
  int v3; // edi
  int v4; // edx
  _DWORD *v5; // ecx
  int v6; // [esp+4h] [ebp-4h] BYREF

  if ( FindNodeOrParent(&v6) != 1 )
    return 0;
  v3 = v6;
  *(_DWORD *)a1 = RtlDelete(v6);
  v4 = *(_DWORD *)(v3 + 12);
  if ( *(_DWORD *)(v4 + 4) != v3 + 12 || (v5 = *(_DWORD **)(v3 + 16), *v5 != v3 + 12) )
    __fastfail(3u);
  *v5 = v4;
  *(_DWORD *)(v4 + 4) = v5;
  --*(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 12) = a1 + 4;
  (*(void (__thiscall **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 32), a1, v3);
  return 1;
}
