/*
 * XREFs of _NtGdiGetRasterizerCaps@8 @ 0x2131F9
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreGetRasterizerCaps@4 @ 0x221153 (_GreGetRasterizerCaps@4.c)
 */

int __stdcall NtGdiGetRasterizerCaps(char *a1, size_t MaxCount)
{
  size_t v2; // esi
  int Src; // [esp+10h] [ebp-24h] BYREF
  __int16 v5; // [esp+14h] [ebp-20h]
  int v6; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v6 = 0;
  Src = 0;
  v5 = 0;
  if ( a1 )
  {
    v2 = MaxCount;
    if ( MaxCount )
    {
      if ( MaxCount >= 6 )
        v2 = 6;
      if ( GreGetRasterizerCaps(&Src) )
      {
        ms_exc.registration.TryLevel = 0;
        if ( (unsigned int)&a1[v2] > _MmUserProbeAddress || &a1[v2] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a1, &Src, v2);
        v6 = 1;
        ms_exc.registration.TryLevel = -2;
      }
    }
  }
  return v6;
}
