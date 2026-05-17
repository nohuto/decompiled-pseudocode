/*
 * XREFs of _RtlZombifyActivationContext@4 @ 0x4B33DAA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlZombifyActivationContext(_DWORD *a1)
{
  int v1; // eax
  int v2; // ebx
  void (__thiscall *v3)(_DWORD, int, _DWORD *, _DWORD, _DWORD, _DWORD, char *); // edi
  char v5; // [esp+Bh] [ebp-1h] BYREF

  if ( !a1 || (((unsigned int)a1 - 1) | 7) == 0xFFFFFFFF )
    return -1073741811;
  v1 = a1[1];
  v2 = 0;
  if ( (v1 & 1) == 0 )
  {
    v3 = (void (__thiscall *)(_DWORD, int, _DWORD *, _DWORD, _DWORD, _DWORD, char *))a1[5];
    if ( v3 )
    {
      v5 = 0;
      v3(v3, 2, a1, a1[4], a1[6], 0, &v5);
      v1 = a1[1];
    }
    a1[1] = v1 | 1;
  }
  return v2;
}
