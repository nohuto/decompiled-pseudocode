/*
 * XREFs of _NtGdiCreatePaletteInternal@8 @ 0xAA9AA
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiCreatePaletteInternal(unsigned __int16 *a1, unsigned int a2)
{
  int v2; // esi
  int v3; // eax
  int *v5; // [esp+10h] [ebp-28h] BYREF
  int v6; // [esp+14h] [ebp-24h]
  const unsigned int *v7; // [esp+18h] [ebp-20h]
  int v8; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v2 = 1;
  if ( a2 > 0x10000 )
    return 0;
  v3 = 4 * a2 + 4;
  v8 = 0;
  v7 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( 4 * a2 != -4 && ((unsigned int)a1 + v3 > _MmUserProbeAddress || (unsigned __int16 *)((char *)a1 + v3) < a1) )
    *(_BYTE *)_MmUserProbeAddress = 0;
  v8 = *a1;
  v7 = (const unsigned int *)(a1 + 2);
  ms_exc.registration.TryLevel = -2;
  if ( (_WORD)v8 != 768 || !a2 )
    v2 = 0;
  if ( v2 )
  {
    v6 = 0;
    v5 = 0;
    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v5, 1u, a2, v7, 0, 0, 0, 0x500u, 0) )
    {
      v6 = 1;
      v2 = *v5;
    }
    else
    {
      v2 = 0;
    }
    PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v5);
  }
  return v2;
}
