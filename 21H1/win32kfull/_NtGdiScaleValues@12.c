/*
 * XREFs of _NtGdiScaleValues@12 @ 0x213F65
 * Callers:
 *     <none>
 * Callees:
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreScaleValues@12 @ 0x1FD676 (_GreScaleValues@12.c)
 */

void *__stdcall NtGdiScaleValues(HDC a1, void *Src, struct XDCOBJ *a3)
{
  ULONG *v5; // [esp+0h] [ebp-34h]
  int *v6; // [esp+14h] [ebp-20h]
  void *Srca; // [esp+40h] [ebp+Ch]

  if ( ULongLongToULong(4LL * (unsigned int)a3, v5) < 0 )
    return 0;
  v6 = (int *)AllocFreeTmpBuffer(0);
  if ( !v6 )
    return 0;
  Srca = (void *)GreScaleValues(a1, v6, a3);
  if ( Srca )
    ProbeForWrite(Src, 0, 4u);
  FreeTmpBuffer(v6);
  return Srca;
}
