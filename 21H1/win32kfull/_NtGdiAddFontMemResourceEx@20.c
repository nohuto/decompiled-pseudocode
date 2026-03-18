/*
 * XREFs of _NtGdiAddFontMemResourceEx@20 @ 0x21201C
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreAddFontMemResourceEx@20 @ 0x1E9227 (_GreAddFontMemResourceEx@20.c)
 *     _GreRemoveFontMemResourceEx@4 @ 0x1EBC87 (_GreRemoveFontMemResourceEx@4.c)
 */

int __stdcall NtGdiAddFontMemResourceEx(unsigned int a1, unsigned int a2, ULONG a3, size_t MaxCount, ULONG a5)
{
  int v5; // esi
  const void *v6; // eax
  _DWORD *v7; // ecx
  void **v9; // [esp+28h] [ebp-74h]
  unsigned int v10; // [esp+30h] [ebp-6Ch] BYREF
  int v11; // [esp+34h] [ebp-68h]
  _DWORD v12[19]; // [esp+38h] [ebp-64h] BYREF
  CPPEH_RECORD ms_exc; // [esp+84h] [ebp-18h]

  v10 = a2;
  v9 = (void **)a3;
  v5 = 1;
  v11 = 0;
  memset(v12, 0, 0x48u);
  if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() < 0 || !v10 || !a1 || !a5 )
    return 0;
  ms_exc.registration.TryLevel = 0;
  if ( MaxCount )
  {
    if ( MaxCount > 0x48 )
      goto LABEL_10;
    v6 = (const void *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v6 = (const void *)_MmUserProbeAddress;
    memcpy(v12, v6, MaxCount);
    v9 = (void **)v12;
    if ( MaxCount != 4 * v12[1] + 8 )
LABEL_10:
      v5 = 0;
  }
  else
  {
    v9 = 0;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v5 )
  {
    v10 = 0;
    v11 = GreAddFontMemResourceEx(a1, a2, v9, MaxCount, &v10);
    if ( v11 )
    {
      ms_exc.registration.TryLevel = 1;
      v7 = (_DWORD *)a5;
      if ( a5 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = v10;
      ms_exc.registration.TryLevel = -2;
    }
  }
  return v11;
}
