/*
 * XREFs of WPP_SF_SSddSS @ 0x1800F614C
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800F403C (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSddSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rdx
  const wchar_t *v10; // r11
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf

  v9 = -1LL;
  v10 = a4;
  if ( a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(a9 + 2 * v11) );
  }
  if ( a8 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(a8 + 2 * v12) );
  }
  if ( a5 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a5 + 2 * v13) );
  }
  v14 = a4 == 0LL;
  if ( a4 )
  {
    do
      ++v9;
    while ( a4[v9] );
    v14 = a4 == 0LL;
  }
  if ( v14 )
    v10 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_4eb83dabec2331805ae9d1ae37e3a182_Traceguids, 26LL, v10);
}
