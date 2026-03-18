/*
 * XREFs of ?_SetTargetForCursorApiBrokering@@YGXPAUtagTHREADINFO@@0@Z @ 0x1431EB
 * Callers:
 *     _NtUserSetTargetForResourceBrokering@8 @ 0x169D60 (_NtUserSetTargetForResourceBrokering@8.c)
 * Callees:
 *     <none>
 */

void __fastcall _SetTargetForCursorApiBrokering(int a1, int a2)
{
  int v2; // eax

  if ( a2 )
  {
    *(_DWORD *)(a1 + 688) |= 0x8000000u;
    *(_DWORD *)(a1 + 848) = a2;
    *(_DWORD *)(a2 + 688) &= ~0x8000000u;
    *(_DWORD *)(a2 + 848) = a1;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 848);
    if ( v2 )
    {
      *(_DWORD *)(v2 + 848) = 0;
      *(_DWORD *)(a1 + 848) = 0;
    }
    *(_DWORD *)(a1 + 688) &= ~0x8000000u;
  }
}
