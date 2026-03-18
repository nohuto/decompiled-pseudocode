/*
 * XREFs of _xxxSendEraseBkgnd@12 @ 0x73B52
 * Callers:
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

int __fastcall xxxSendEraseBkgnd(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int DCEx; // edi
  int v6; // eax
  int v8; // [esp+1Ch] [ebp+8h]

  if ( !a3 || (*(_BYTE *)(a1[5] + 23) & 0x20) != 0 )
    return 0;
  if ( a2 )
    DCEx = a2;
  else
    DCEx = _GetDCEx(a1, a3, &loc_50080);
  if ( *(_DWORD *)(a1[2] + 232) != *(_DWORD *)(_gptiCurrent + 232) )
    GreSetDCOwnerEx(DCEx, 0, 0, 1);
  v6 = xxxSendMessage(a1, DCEx, 0);
  v8 = v6;
  if ( *(_DWORD *)(a1[2] + 232) != *(_DWORD *)(_gptiCurrent + 232) )
  {
    GreSetDCOwnerEx(DCEx, -2147483646, 0, 1);
    v6 = v8;
  }
  if ( !v6 )
  {
    SetOrClrWF(1, (int)a1, 0x104u, 1);
    if ( (*(_BYTE *)(a1[5] + 13) & 1) == 0 )
      SetOrClrWF(1, (int)a1, 0x102u, 1);
  }
  if ( !a2 )
    ReleaseCacheDC(DCEx, 1);
  return v8;
}
