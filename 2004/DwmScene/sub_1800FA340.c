/*
 * XREFs of sub_1800FA340 @ 0x1800FA340
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

bool __fastcall sub_1800FA340(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool result; // al

  result = 0;
  if ( sub_1800A9910(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::ShadowMapCamera `RTTI Type Descriptor',
           1);
    if ( *(_QWORD *)(v4 + 1896) == *(_QWORD *)(a1 + 1896)
      && *(_DWORD *)(v4 + 1940) == *(_DWORD *)(a1 + 1940)
      && *(float *)(v4 + 1948) == *(float *)(a1 + 1948)
      && *(_BYTE *)(v4 + 1952) == *(_BYTE *)(a1 + 1952)
      && *(float *)(v4 + 1956) == *(float *)(a1 + 1956)
      && *(_QWORD *)(v4 + 1960) == *(_QWORD *)(a1 + 1960)
      && *(float *)(v4 + 1968) == *(float *)(a1 + 1968)
      && *(_DWORD *)(v4 + 1944) == *(_DWORD *)(a1 + 1944) )
    {
      return 1;
    }
  }
  return result;
}
