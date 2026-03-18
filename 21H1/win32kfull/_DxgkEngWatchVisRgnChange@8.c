/*
 * XREFs of _DxgkEngWatchVisRgnChange@8 @ 0xB9C66
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 */

DC *__stdcall DxgkEngWatchVisRgnChange(HDC a1, int a2)
{
  DC *result; // eax
  DC *v3; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v5; // esi
  DC *v6; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v6, a1);
  result = v6;
  if ( v6 )
  {
    if ( a2 )
      *((_DWORD *)v6 + 6) |= (unsigned int)&loc_20000;
    else
      *((_DWORD *)v6 + 6) &= ~0x20000u;
    v3 = v6;
    if ( v6 )
    {
      if ( v7 && (*((_BYTE *)v6 + 32) & 2) != 0 )
      {
        if ( !v8 )
        {
          UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v6);
          v3 = v6;
          if ( UserAttr )
          {
            DC::RestoreAttributes(v6, UserAttr);
            v3 = v6;
          }
        }
        *((_DWORD *)v3 + 8) &= ~2u;
        v3 = v6;
        v7 = 0;
      }
      a1 = 0;
      v5 = *(_DWORD *)v3;
      result = (DC *)HmgDecrementExclusiveReferenceCountEx(v3, v8, &a1);
      if ( a1 )
        return (DC *)bDeleteDCInternalEx(v5, 0);
    }
  }
  return result;
}
