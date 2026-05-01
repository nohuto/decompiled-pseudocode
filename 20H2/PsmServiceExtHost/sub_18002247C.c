/*
 * XREFs of sub_18002247C @ 0x18002247C
 * Callers:
 *     sub_1800038AC @ 0x1800038AC (sub_1800038AC.c)
 *     sub_180004618 @ 0x180004618 (sub_180004618.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_18001F370 @ 0x18001F370 (sub_18001F370.c)
 *     sub_180029ED0 @ 0x180029ED0 (sub_180029ED0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18002247C(__int64 a1)
{
  int v1; // eax

  ++*(_QWORD *)(a1 + 112);
  if ( !*(_DWORD *)(a1 + 128) )
  {
    v1 = *(_DWORD *)(a1 + 132);
    if ( (v1 & 1) == 0 )
    {
      *(_DWORD *)(a1 + 132) = v1 | 1;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 96)) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*(_QWORD *)(a1 + 120));
    }
  }
}
