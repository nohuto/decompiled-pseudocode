/*
 * XREFs of sub_1800F3E7C @ 0x1800F3E7C
 * Callers:
 *     sub_1800B17A0 @ 0x1800B17A0 (sub_1800B17A0.c)
 *     sub_1800B2060 @ 0x1800B2060 (sub_1800B2060.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

void **__fastcall sub_1800F3E7C(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  v2 = a1[15];
  if ( v2 )
  {
    v3 = a1[17] - v2;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800F3EF0LL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    a1[15] = 0LL;
    a1[16] = 0LL;
    a1[17] = 0LL;
  }
  return sub_1800CDD40(a1);
}
