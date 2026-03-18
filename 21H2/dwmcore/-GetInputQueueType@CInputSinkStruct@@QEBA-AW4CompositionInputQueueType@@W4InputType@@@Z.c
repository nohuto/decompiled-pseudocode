/*
 * XREFs of ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180017E10
 * Callers:
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180017DD8 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800DFF00 (-SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CInputSinkStruct::GetInputQueueType(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+24h] [rbp-24h]
  unsigned int v7; // [rsp+34h] [rbp-14h]

  if ( a2 <= 1 )
    return 0;
  if ( a2 <= 3 )
    return *(unsigned int *)(a1 + 84);
  if ( a2 == 4 )
    return *(unsigned int *)(a1 + 88);
  if ( a2 <= 6 )
    return *(unsigned int *)(a1 + 76);
  if ( a2 != 7 )
    return 0;
  v4 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( v4 )
  {
    v5 = 24;
    v6 = 0LL;
    v7 = 0;
    if ( (int)NtQueryCompositionInputSink(v4, &v5) >= 0 )
      return v7;
  }
  return v2;
}
