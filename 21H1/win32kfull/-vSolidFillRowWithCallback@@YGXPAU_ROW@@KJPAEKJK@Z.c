/*
 * XREFs of ?vSolidFillRowWithCallback@@YGXPAU_ROW@@KJPAEKJK@Z @ 0x247F4D
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vSolidFillRowWithCallback(
        struct _ROW *a1,
        unsigned int a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  unsigned int v7; // esi
  void (__stdcall *v8)(_DWORD, _DWORD, _DWORD); // edx
  void (__stdcall *i)(_DWORD, _DWORD, _DWORD); // [esp+Ch] [ebp-18h]
  _DWORD v11[4]; // [esp+10h] [ebp-14h] BYREF

  v7 = a2;
  v8 = (void (__stdcall *)(_DWORD, _DWORD, _DWORD))*((_DWORD *)a4 + 1);
  for ( i = v8; v7; --v7 )
  {
    v11[0] = *(_DWORD *)a1;
    v11[2] = *((_DWORD *)a1 + 1);
    v11[1] = a3++;
    v11[3] = a3;
    v8(a4, a5, v11);
    v8 = i;
    a1 = (struct _ROW *)((char *)a1 + 8);
  }
}
