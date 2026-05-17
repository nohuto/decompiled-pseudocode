/*
 * XREFs of _RtlInsertEntryHashTable@16 @ 0x4B35B270
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

char __stdcall RtlInsertEntryHashTable(int a1, _DWORD *a2, int a3, char *a4)
{
  char *v4; // esi
  int *v5; // eax
  int v6; // ecx
  char v8; // [esp+Ch] [ebp-Ch] BYREF

  v4 = a4;
  a2[2] = a3;
  ++*(_DWORD *)(a1 + 20);
  if ( a4 )
  {
    if ( !*(_DWORD *)a4 )
      RtlpPopulateContext(a3);
  }
  else
  {
    RtlpPopulateContext(a3);
    v4 = &v8;
  }
  if ( **(_DWORD **)v4 == *(_DWORD *)v4 )
    ++*(_DWORD *)(a1 + 24);
  v5 = (int *)*((_DWORD *)v4 + 1);
  v6 = *v5;
  if ( *(int **)(*v5 + 4) != v5 )
    __fastfail(3u);
  a2[1] = v5;
  *a2 = v6;
  *(_DWORD *)(v6 + 4) = a2;
  *v5 = (int)a2;
  return 1;
}
