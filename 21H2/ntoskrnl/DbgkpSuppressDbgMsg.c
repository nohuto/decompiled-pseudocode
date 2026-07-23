/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x140887DA8
 * Callers:
 *     DbgkUnMapViewOfSection @ 0x140606948 (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1406C0FF4 (DbgkMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int16 v3; // ax
  unsigned int v5; // [rsp+0h] [rbp-18h]

  v5 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10] )
    {
      v2 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      if ( v2 )
      {
        v3 = *(_WORD *)(v2 + 8);
        if ( v3 == 332 || v3 == 452 )
          return *(char *)(a1 + 12234) < 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
