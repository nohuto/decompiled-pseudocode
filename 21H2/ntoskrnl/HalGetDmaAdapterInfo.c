/*
 * XREFs of HalGetDmaAdapterInfo @ 0x1404C6440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalGetDmaAdapterInfo(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  __int64 v4; // rax

  v2 = 1;
  if ( *a2 > 1u )
    return 3221225659LL;
  a2[3] = *(_DWORD *)(a1 + 440);
  if ( *(_BYTE *)(a1 + 433) )
  {
    if ( !*(_BYTE *)(a1 + 432) )
      a2[4] = 3;
    a2[2] = -1;
    a2[1] = 0;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 360);
    a2[1] = 1;
    a2[2] = 1;
    a2[4] = 0;
    v2 = *(_DWORD *)(v4 + 164);
  }
  a2[5] = v2;
  return 0LL;
}
