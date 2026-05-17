/*
 * XREFs of _LdrGetDllHandleByMapping@8 @ 0x4B2E5810
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpIncrementModuleLoadCount@4 @ 0x4B2CF5D2 (_LdrpIncrementModuleLoadCount@4.c)
 *     _LdrpFindLoadedDllByMapping@16 @ 0x4B2E5872 (_LdrpFindLoadedDllByMapping@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpFatalExceptionFilter@4 @ 0x4B3348A9 (_LdrpFatalExceptionFilter@4.c)
 */

int __stdcall LdrGetDllHandleByMapping(unsigned int a1, _DWORD *a2)
{
  _DWORD *v3; // esi
  int v4; // [esp+10h] [ebp-28h] BYREF
  int v5; // [esp+14h] [ebp-24h] BYREF
  _DWORD *v6; // [esp+18h] [ebp-20h] BYREF
  int LoadedDllByMapping; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  LoadedDllByMapping = RtlImageNtHeaderEx(1, a1, 0, 0, &v5);
  if ( LoadedDllByMapping >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    LoadedDllByMapping = LdrpFindLoadedDllByMapping(&v6, &v4);
    if ( LoadedDllByMapping >= 0 )
    {
      if ( v4 >= 7 )
      {
        v3 = v6;
        LoadedDllByMapping = LdrpIncrementModuleLoadCount(v6);
        if ( LoadedDllByMapping >= 0 )
          *a2 = v3[6];
      }
      else
      {
        LoadedDllByMapping = -1073741515;
        v3 = v6;
      }
      LdrpDereferenceModule((int)v3);
    }
    ms_exc.registration.TryLevel = -2;
  }
  return LoadedDllByMapping;
}
