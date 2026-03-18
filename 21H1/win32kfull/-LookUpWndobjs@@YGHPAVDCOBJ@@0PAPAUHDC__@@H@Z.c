/*
 * XREFs of ?LookUpWndobjs@@YGHPAVDCOBJ@@0PAPAUHDC__@@H@Z @ 0x1D7B4D
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     _UserGetHwnd@16 @ 0x1542EC (_UserGetHwnd@16.c)
 */

int __userpurge LookUpWndobjs@<eax>(XDCOBJ *a1@<edx>, int a2@<ecx>, HDC *a3, struct DCOBJ *a4, HDC *a5, int a6)
{
  int v6; // ebx
  HDC *v8; // esi
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v6 = 0;
  v12 = 0;
  v11 = *(_DWORD *)(*(_DWORD *)a2 + 36);
  if ( (int)a4 <= 0 )
    return v6;
  v8 = a3;
  while ( 1 )
  {
    XDCOBJ::vLock(a1, *v8);
    if ( !*(_DWORD *)a1 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)a1 + 36) == v11 )
    {
      a3 = 0;
      if ( !UserGetHwnd(*v8, &a3, (int *)v8, v11) )
        return -1;
      v9 = v12;
      v6 |= 1 << v12;
    }
    else
    {
      XDCOBJ::vUnlockFast(a1);
      *(_DWORD *)a1 = 0;
      *v8 = 0;
      v9 = v12;
    }
    ++v8;
    a1 = (XDCOBJ *)((char *)a1 + 12);
    v12 = v9 + 1;
    if ( v9 + 1 >= (int)a4 )
      return v6;
  }
  return -1;
}
