/*
 * XREFs of ?_InitializeData@Edgy@@YGPAUtagEDGY_DATA@@PAUtagDESKTOP@@@Z @ 0x16EB64
 * Callers:
 *     ?_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z @ 0x16E23D (-_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z.c)
 * Callees:
 *     ?_InitializeParameters@Edgy@@YGXAAUtagEDGY_DATA@@@Z @ 0x16EB9C (-_InitializeParameters@Edgy@@YGXAAUtagEDGY_DATA@@@Z.c)
 */

struct tagEDGY_DATA *__usercall Edgy::_InitializeData@<eax>(int a1@<ecx>, Edgy *a2@<esi>)
{
  struct tagEDGY_DATA *result; // eax
  int v4; // esi
  struct tagEDGY_DATA *v6; // [esp+0h] [ebp-4h]

  result = *(struct tagEDGY_DATA **)(a1 + 140);
  if ( !result )
  {
    v4 = Win32AllocPoolZInit(256, 1684370261);
    if ( v4 )
    {
      Edgy::_InitializeParameters(a2, v6);
      *(_DWORD *)(a1 + 140) = v4;
    }
    return (struct tagEDGY_DATA *)v4;
  }
  return result;
}
