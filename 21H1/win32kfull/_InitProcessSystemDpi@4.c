/*
 * XREFs of _InitProcessSystemDpi@4 @ 0x91A54
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_PerProcessSystemDpi__private_IsEnabledPreCheck@@YGHXZ @ 0x91B54 (-Feature_PerProcessSystemDpi__private_IsEnabledPreCheck@@YGHXZ.c)
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

__int16 __stdcall InitProcessSystemDpi(_WORD *a1)
{
  BOOL v1; // ebx
  int v2; // eax
  __int16 result; // ax
  int v4; // [esp+14h] [ebp-2Ch]
  int v5; // [esp+1Ch] [ebp-24h] BYREF
  int v6; // [esp+20h] [ebp-20h] BYREF
  bool v7; // [esp+26h] [ebp-1Ah]
  bool v8; // [esp+27h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v1 = 0;
  ms_exc.registration.TryLevel = 0;
  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 380) + 484);
  ms_exc.registration.TryLevel = -2;
  v8 = (v4 & 0x400000) != 0;
  v7 = (((unsigned int)&loc_1FFFFC + 4) & v4) != 0;
  Feature_PerProcessSystemDpi__private_IsEnabledPreCheck();
  v5 = 0;
  v6 = 0;
  FastGetProfileDwordEx(0, 4, L"EnablePerProcessSystemDPI", 0, 0, &v5, &v6);
  if ( !v8 )
    v1 = v7 || v6 || v5 != 0;
  if ( v1 )
  {
    v2 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(GetDispInfo() + 52) + 20) + 56);
    a1[80] = v2;
    return GetDPIServerInfoForDpi(v2);
  }
  else
  {
    result = *(_WORD *)(_gpsi + 6242);
    a1[80] = result;
  }
  return result;
}
