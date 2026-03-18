/*
 * XREFs of _xxxRemoveShadow@4 @ 0x71BB2
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 */

int __thiscall xxxRemoveShadow(void *this)
{
  struct tagSHADOW *v1; // edi
  int result; // eax
  struct tagSHADOW **v3; // edx
  struct tagVWPL **v4; // ebx

  v1 = gpshadowFirst;
  result = 0;
  v3 = &gpshadowFirst;
  while ( v1 )
  {
    if ( *(void **)v1 == this )
    {
      *v3 = (struct tagSHADOW *)*((_DWORD *)v1 + 2);
      v4 = (struct tagVWPL **)HMAssignmentUnlock((char *)v1 + 4);
      HMAssignmentUnlock(v1);
      Win32FreePool(v1);
      if ( v4 )
        return xxxDestroyWindow(v4);
      else
        return 1;
    }
    v3 = (struct tagSHADOW **)((char *)v1 + 8);
    v1 = (struct tagSHADOW *)*((_DWORD *)v1 + 2);
  }
  return result;
}
