/*
 * XREFs of _NtGdiHfontCreate@20 @ 0x89D3A
 * Callers:
 *     <none>
 * Callees:
 *     _hfontCreate@20 @ 0x89DF2 (_hfontCreate@20.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtGdiHfontCreate(char *Src, size_t MaxCount, int a3, int a4, int a5)
{
  _DWORD v7[106]; // [esp+10h] [ebp-1C0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+1B8h] [ebp-18h]

  if ( !Src || !MaxCount || MaxCount > 0x1A4 )
    return 0;
  memset(v7, 0, 0x1A4u);
  ms_exc.registration.TryLevel = 0;
  if ( &Src[MaxCount] < Src || (unsigned int)&Src[MaxCount] > _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  memcpy(v7, Src, MaxCount);
  ms_exc.registration.TryLevel = -2;
  v7[88] = 0;
  return hfontCreate(v7, a3, 0, a5, 0);
}
