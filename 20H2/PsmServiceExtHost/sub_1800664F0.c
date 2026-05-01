/*
 * XREFs of sub_1800664F0 @ 0x1800664F0
 * Callers:
 *     sub_18003911C @ 0x18003911C (sub_18003911C.c)
 *     sub_18003960C @ 0x18003960C (sub_18003960C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800664F0(__int64 a1, int a2)
{
  __int16 *v2; // r8
  char v3; // al
  rsize_t v4; // r9
  rsize_t v5; // rdx
  __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (__int16 *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 4) != a2 )
  {
    v3 = *(_BYTE *)(a1 + 2);
    *(_DWORD *)v2 = a2;
    if ( v3 == 1 )
    {
      v4 = 2LL;
      v6 = a2;
      v5 = 2LL;
      v2 = &v6;
    }
    else
    {
      if ( v3 != 2 )
        return;
      v5 = 4LL;
      v4 = 4LL;
    }
    memcpy_s(*(void *const *)(a1 + 16), v5, v2, v4);
  }
}
