/*
 * XREFs of sub_1800D22CC @ 0x1800D22CC
 * Callers:
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800D22CC(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *v4; // rax

  v2 = *(__int64 **)(a1 + 144);
  v3 = v2;
  v4 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *((_DWORD *)v4 + 8) >= a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( v3 == v2 || a2 < *((_DWORD *)v3 + 8) )
    v3 = v2;
  return v3 != v2;
}
