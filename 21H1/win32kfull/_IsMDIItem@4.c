/*
 * XREFs of _IsMDIItem@4 @ 0x1AB7B3
 * Callers:
 *     ?MBC_RightJustifyMenu@@YGXABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0xB6AC2 (-MBC_RightJustifyMenu@@YGXABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMDIItem(void *this)
{
  unsigned int v1; // eax
  BOOL result; // eax

  result = 0;
  if ( (*(_DWORD *)(*(_DWORD *)this + 4) & 0x20000000) != 0 )
  {
    v1 = *(_DWORD *)(*(_DWORD *)this + 64);
    if ( v1 )
    {
      if ( v1 <= 7 )
        return 1;
    }
  }
  return result;
}
