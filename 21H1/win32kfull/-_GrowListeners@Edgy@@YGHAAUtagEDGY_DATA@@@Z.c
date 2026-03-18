/*
 * XREFs of ?_GrowListeners@Edgy@@YGHAAUtagEDGY_DATA@@@Z @ 0x16E975
 * Callers:
 *     ?_AllocListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16E2E5 (-_AllocListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall Edgy::_GrowListeners(unsigned int *ecx0)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // eax
  void *v5; // eax
  const void *v6; // ebx
  size_t v8; // [esp-8h] [ebp-10h]

  v2 = *ecx0;
  if ( ecx0[1] > *ecx0 )
    return 1;
  if ( v2 <= 0x20 )
  {
    v3 = v2 + 4;
    v4 = 2 * v2;
    if ( v3 <= v4 )
      v3 = v4;
    v5 = (void *)Win32AllocPoolZInit(16 * v3, 1684370261);
    if ( v5 )
    {
      v6 = (const void *)ecx0[2];
      v8 = 16 * *ecx0;
      ecx0[2] = (unsigned int)v5;
      ecx0[1] = v3;
      memcpy(v5, v6, v8);
      if ( v6 )
        Win32FreePool(v6);
      return 1;
    }
  }
  return 0;
}
