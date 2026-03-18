/*
 * XREFs of _NtUserfnPOINTERINPUT@28 @ 0x16D2EA
 * Callers:
 *     _NtUserfnPARENTNOTIFY@28 @ 0x16D29F (_NtUserfnPARENTNOTIFY@28.c)
 * Callees:
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _IsPointerParentNotify@8 @ 0x46012 (_IsPointerParentNotify@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSendPointerMessage@28 @ 0x15AB89 (_xxxSendPointerMessage@28.c)
 */

int __stdcall NtUserfnPOINTERINPUT(int a1, int a2, __int16 a3, int a4, int a5, unsigned int a6, int a7)
{
  int v7; // esi
  int v8; // edx

  v7 = 0;
  if ( !a1 || a1 == -1 )
  {
    UserSetLastError((struct _NT_TIB *)0x578);
    return v7;
  }
  if ( a6 != 689 && a6 != 691 && (a6 <= 0x2B6 || a6 > 0x2B8) )
    return v7;
  if ( a2 == 528 )
  {
    if ( !IsPointerParentNotify(528, a3) )
      return v7;
    return xxxSendPointerMessage(_gptiCurrent, a1, a2, v7, a5, a6);
  }
  if ( a2 == 587 )
  {
    v7 = a4;
    return xxxSendPointerMessage(_gptiCurrent, a1, a2, v7, a5, a6);
  }
  if ( (a2 != 592 || (*(_DWORD *)(_gptiCurrent + 688) & 0x2000) != 0)
    && IsPointerInputMessage(a2)
    && *(_DWORD *)(*(_DWORD *)(a1 + 8) + 232) == *(_DWORD *)(v8 + 232) )
  {
    return xxxSendPointerMessage(_gptiCurrent, a1, a2, v7, a5, a6);
  }
  return v7;
}
