/*
 * XREFs of ?vSolidFillRectWithCallback@@YGXPAU_RECTL@@KPAEJKK@Z @ 0x247DB9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall vSolidFillRectWithCallback(
        struct _RECTL *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v7; // esi
  unsigned __int8 *v8; // eax
  unsigned __int8 *i; // [esp+18h] [ebp+10h]

  v7 = a2;
  v8 = (unsigned __int8 *)*((_DWORD *)a3 + 1);
  for ( i = v8; v7; --v7 )
  {
    ((void (__stdcall *)(unsigned __int8 *, unsigned int, struct _RECTL *))v8)(a3, a5, a1);
    v8 = i;
    ++a1;
  }
}
