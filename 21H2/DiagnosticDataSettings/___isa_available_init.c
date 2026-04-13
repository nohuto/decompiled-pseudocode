/*
 * XREFs of ___isa_available_init @ 0x100049DD
 * Callers:
 *     ___scrt_dllmain_after_initialize_c @ 0x100043DA (___scrt_dllmain_after_initialize_c.c)
 *     ___scrt_initialize_crt @ 0x100044A5 (___scrt_initialize_crt.c)
 * Callees:
 *     <none>
 */

int __cdecl __isa_available_init()
{
  int v5; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v19; // eax
  int v21; // [esp+4h] [ebp-24h]
  int v22; // [esp+Ch] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-Ch]
  int v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]

  __isa_available = 0;
  __isa_enabled |= 1u;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    _EAX = 0;
    __isa_enabled |= 2u;
    __isa_available = 1;
    __asm { cpuid }
    v23 = _EAX;
    v5 = _EBX ^ 0x756E6547;
    v24 = _EDX ^ 0x49656E69;
    v25 = _ECX ^ 0x6C65746E;
    _EAX = 1;
    __asm { cpuid }
    v21 = _EAX;
    v22 = _ECX;
    if ( !(v5 | v24 | v25)
      && ((v11 = _EAX & 0xFFF3FF0, (v21 & 0xFFF3FF0) == 0x106C0)
       || v11 == 132704
       || v11 == 132720
       || v11 == 198224
       || v11 == 198240
       || v11 == 198256) )
    {
      v12 = __favor | 1;
      __favor |= 1u;
    }
    else
    {
      v12 = __favor;
    }
    v13 = _ECX;
    if ( v23 < 7 )
    {
      LOBYTE(_EBX) = 0;
    }
    else
    {
      _EAX = 7;
      __asm { cpuid }
      v13 = v22;
      if ( (_EBX & 0x200) != 0 )
        __favor = v12 | 2;
    }
    if ( (v13 & 0x100000) != 0 )
    {
      __isa_enabled |= 4u;
      __isa_available = 2;
      if ( (v13 & 0x8000000) != 0 && ((unsigned int)&_ImageBase & v13) != 0 )
      {
        __asm { xgetbv }
        if ( (v13 & 6) == 6 )
        {
          v19 = __isa_enabled | 8;
          __isa_available = 3;
          __isa_enabled |= 8u;
          if ( (_EBX & 0x20) != 0 )
          {
            __isa_available = 5;
            __isa_enabled = v19 | 0x20;
          }
        }
      }
    }
  }
  return 0;
}
