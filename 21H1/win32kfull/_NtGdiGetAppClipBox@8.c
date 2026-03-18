/*
 * XREFs of _NtGdiGetAppClipBox@8 @ 0x79688
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtGdiGetAppClipBox(HDC a1, ULONG a2)
{
  _DWORD *v2; // ebx
  int AppClipBox; // ecx

  v2 = (_DWORD *)a2;
  AppClipBox = GreGetAppClipBox(a1);
  if ( AppClipBox )
  {
    if ( a2 >= _MmUserProbeAddress )
      v2 = (_DWORD *)_MmUserProbeAddress;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
  }
  return AppClipBox;
}
