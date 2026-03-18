/*
 * XREFs of ?ulTime@XEPALOBJ@@QAEKXZ @ 0xF8393
 * Callers:
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall XEPALOBJ::ulTime(XEPALOBJ *this)
{
  int v1; // eax
  int v2; // ecx

  v1 = *(_DWORD *)this;
  v2 = *(_DWORD *)(*(_DWORD *)this + 80);
  if ( v2 == v1 )
    return *(_DWORD *)(v1 + 24);
  else
    return *(_DWORD *)(v2 + 24);
}
