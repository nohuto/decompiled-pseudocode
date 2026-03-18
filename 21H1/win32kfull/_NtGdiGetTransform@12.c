/*
 * XREFs of _NtGdiGetTransform@12 @ 0x2133EA
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _GreGetTransform@12 @ 0x21D5A2 (_GreGetTransform@12.c)
 */

int __stdcall NtGdiGetTransform(HDC a1, int a2, ULONG a3)
{
  int *v3; // ebx
  int Transform; // edx
  int v6[7]; // [esp+10h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v3 = (int *)a3;
  memset(v6, 0, 0x18u);
  Transform = GreGetTransform(a1, (int)v6);
  if ( Transform )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a3 >= _MmUserProbeAddress )
      v3 = (int *)_MmUserProbeAddress;
    qmemcpy(v3, v6, 0x18u);
    ms_exc.registration.TryLevel = -2;
  }
  return Transform;
}
