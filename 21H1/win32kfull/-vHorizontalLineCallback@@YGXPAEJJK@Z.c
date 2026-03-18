/*
 * XREFs of ?vHorizontalLineCallback@@YGXPAEJJK@Z @ 0x24035F
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __stdcall vHorizontalLineCallback(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  int v4; // [esp+0h] [ebp-14h] BYREF
  int v5; // [esp+4h] [ebp-10h]
  int v6; // [esp+8h] [ebp-Ch]
  int v7; // [esp+Ch] [ebp-8h]

  if ( a3 != a2 )
  {
    v4 = a2;
    v5 = *(_DWORD *)a1;
    v6 = a3;
    v7 = v5 + 1;
    (*(void (__stdcall **)(_DWORD, unsigned int, int *))(*((_DWORD *)a1 + 1) + 4))(*((_DWORD *)a1 + 1), a4, &v4);
  }
}
