/*
 * XREFs of ?bSavePath@@YGHAAVXDCOBJ@@J@Z @ 0x93078
 * Callers:
 *     _GreSaveDCInternal@8 @ 0xF7458 (_GreSaveDCInternal@8.c)
 * Callees:
 *     <none>
 */

int __stdcall bSavePath(struct XDCOBJ *a1, int a2)
{
  if ( *(_DWORD *)(*(_DWORD *)a1 + 136) )
    *(_DWORD *)(*(_DWORD *)a1 + 172) |= 2u;
  return 1;
}
