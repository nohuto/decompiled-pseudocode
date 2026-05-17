/*
 * XREFs of _RtlpApplyLengthFunction@16 @ 0x4B2E3E80
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlpApplyLengthFunction(
        int a1,
        int a2,
        int a3,
        int (__thiscall *a4)(_DWORD, _DWORD, int, unsigned int *))
{
  int v4; // ebx
  int result; // eax
  unsigned __int16 v6; // ax
  unsigned int v7; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  v7 = 0;
  if ( !a3 || !a4 || a1 )
    return -1073741811;
  if ( a2 == 8 )
    goto LABEL_7;
  if ( a2 != 28 )
    return -1073741811;
  v4 = a3;
LABEL_7:
  result = a4(a4, 0, a3, &v7);
  if ( result >= 0 )
  {
    if ( v7 > 0x7FFF )
    {
      return -1073741562;
    }
    else
    {
      v6 = 2 * v7;
      *(_WORD *)a3 = 2 * v7;
      if ( v4 )
        *(_WORD *)(*(_DWORD *)(a3 + 4) + 2 * (v6 >> 1)) = 0;
      return 0;
    }
  }
  return result;
}
