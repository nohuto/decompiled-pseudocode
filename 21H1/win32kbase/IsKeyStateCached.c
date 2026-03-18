/*
 * XREFs of IsKeyStateCached @ 0x1C0074490
 * Callers:
 *     NtUserGetKeyboardState @ 0x1C0073CE0 (NtUserGetKeyboardState.c)
 *     AllocQueue @ 0x1C00742A0 (AllocQueue.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BF984 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsKeyStateCached(unsigned __int8 a1)
{
  int v1; // edx
  unsigned __int8 *i; // rax

  if ( a1 >= 0x20u )
  {
    v1 = 0;
    for ( i = byte_1C0213258; *i != a1; ++i )
    {
      if ( (unsigned int)++v1 >= 0xE )
        return a1 <= 0xA5u
            && (a1 < 0x5Du || a1 >= 0xA0u)
            && a1 >= 0x5Bu
            && (a1 <= 0x5Cu || (unsigned __int8)(a1 + 96) <= 5u);
    }
  }
  return 1;
}
