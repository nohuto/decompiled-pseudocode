/*
 * XREFs of _NtUserfnPARENTNOTIFY@28 @ 0x16D29F
 * Callers:
 *     <none>
 * Callees:
 *     _IsPointerParentNotify@8 @ 0x46012 (_IsPointerParentNotify@8.c)
 *     _NtUserfnPOINTERINPUT@28 @ 0x16D2EA (_NtUserfnPOINTERINPUT@28.c)
 */

int __stdcall NtUserfnPARENTNOTIFY(int a1, int a2, __int16 a3, int a4, int a5, int a6, int a7)
{
  int v7; // edx
  int v8; // ecx

  if ( IsPointerParentNotify(a2, a3) )
    return NtUserfnPOINTERINPUT(a1, v8, v7, a4, a5, a6, a7);
  else
    return ((int (__stdcall *)(int, int, int, int, int))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(a1, v8, v7, a4, a5);
}
