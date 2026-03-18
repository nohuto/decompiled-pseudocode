/*
 * XREFs of _CleanUpDHI @ 0xAD654
 * Callers:
 *     ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990 (-pDevHTInfo@PDEVOBJ@@QAEPAXXZ.c)
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     _HT_DestroyDeviceHalftoneInfoWrap@4 @ 0xAD636 (_HT_DestroyDeviceHalftoneInfoWrap@4.c)
 *     ?bDisableHalftone@PDEVOBJ@@QAEHXZ @ 0xD3540 (-bDisableHalftone@PDEVOBJ@@QAEHXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall CleanUpDHI(char *pv)
{
  int v2; // ebx
  PVOID *v3; // eax
  HSEMAPHORE hsem; // [esp+Ch] [ebp-8h]
  PVOID *v6; // [esp+10h] [ebp-4h]

  EngAcquireSemaphore(*((HSEMAPHORE *)pv + 9));
  hsem = (HSEMAPHORE)*((_DWORD *)pv + 9);
  if ( *((_DWORD *)pv + 48) && (pv[176] & 1) == 0 )
    EngFreeMem(*((PVOID *)pv + 48));
  if ( *((_DWORD *)pv + 1762) )
    EngFreeMem(*((PVOID *)pv + 1762));
  v2 = 2;
  v3 = (PVOID *)(pv + 848);
  do
  {
    v3 -= 3;
    --v2;
    v6 = v3;
    if ( *v3 )
    {
      EngFreeMem(*v3);
      v3 = v6;
    }
  }
  while ( v2 );
  EngFreeMem(pv);
  EngReleaseSemaphore(hsem);
  EngDeleteSemaphore(hsem);
  return 1;
}
