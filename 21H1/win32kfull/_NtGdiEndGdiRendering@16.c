/*
 * XREFs of _NtGdiEndGdiRendering@16 @ 0xA6DB8
 * Callers:
 *     <none>
 * Callees:
 *     _GreEndGdiRenderingToDxSurface@16 @ 0xA6DFC (_GreEndGdiRenderingToDxSurface@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiEndGdiRendering(int a1, int a2, ULONG a3, int a4)
{
  int v4; // edx
  _DWORD *v5; // ecx
  int v7; // [esp+10h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h]

  v7 = 0;
  v4 = GreEndGdiRenderingToDxSurface(a4, &v7);
  v5 = (_DWORD *)a3;
  if ( a3 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a3 >= _MmUserProbeAddress )
      v5 = (_DWORD *)_MmUserProbeAddress;
    *v5 = v7;
    ms_exc.registration.TryLevel = -2;
  }
  return v4;
}
