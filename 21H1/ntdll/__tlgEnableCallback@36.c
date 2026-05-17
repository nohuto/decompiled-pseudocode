/*
 * XREFs of __tlgEnableCallback@36 @ 0x4B2AE160
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall _tlgEnableCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9)
{
  int result; // eax
  int v10; // ecx
  int v11; // ecx
  int (__thiscall *v12)(_DWORD, int, int, int, int, int, int, int, int, int); // esi

  result = (int)a9;
  if ( a9 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (_BYTE)a3 )
          v10 = (unsigned __int8)a3 + 1;
        else
          v10 = 256;
        *a9 = v10;
        a9[2] = a4;
        v11 = a5;
        a9[3] = a5;
        a9[4] = a6;
        a9[5] = a7;
        goto LABEL_7;
      }
    }
    else
    {
      *a9 = 0;
    }
    v11 = a5;
LABEL_7:
    v12 = (int (__thiscall *)(_DWORD, int, int, int, int, int, int, int, int, int))a9[8];
    if ( v12 )
      return v12(v12, a1, a2, a3, a4, v11, a6, a7, a8, a9[9]);
  }
  return result;
}
