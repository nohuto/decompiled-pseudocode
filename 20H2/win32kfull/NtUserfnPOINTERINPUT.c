/*
 * XREFs of NtUserfnPOINTERINPUT @ 0x1C0206520
 * Callers:
 *     NtUserfnPARENTNOTIFY @ 0x1C0128300 (NtUserfnPARENTNOTIFY.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C004CFC4 (IsPointerInputMessage.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     IsPointerParentNotify @ 0x1C00D7118 (IsPointerParentNotify.c)
 *     xxxSendPointerMessage @ 0x1C01F069C (xxxSendPointerMessage.c)
 */

__int64 __fastcall NtUserfnPOINTERINPUT(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // r10
  int v9; // r9d
  __int64 v11; // r11
  int v12; // r8d
  unsigned __int64 v13; // r10

  v6 = 0LL;
  LOWORD(v8) = a3;
  v9 = a2;
  v11 = gptiCurrent;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    UserSetLastError(1400LL, a2, a3);
    return v6;
  }
  v12 = a6;
  if ( a6 != 689 && a6 != 691 && (a6 <= 0x2B6 || a6 > 0x2B8) )
    return v6;
  if ( (_DWORD)a2 == 528 )
  {
    if ( !IsPointerParentNotify(528, v8) )
      return v6;
    v8 = v13 >> 16;
    return xxxSendPointerMessage(v11, (unsigned __int16)v8, a1, v9, v6, a5, v12);
  }
  if ( (_DWORD)a2 == 587 )
  {
    v6 = a4;
    return xxxSendPointerMessage(v11, (unsigned __int16)v8, a1, v9, v6, a5, v12);
  }
  if ( ((_DWORD)a2 != 592 || (*(_DWORD *)(gptiCurrent + 1232LL) & 0x2000) != 0)
    && IsPointerInputMessage(a2)
    && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *(_QWORD *)(v11 + 424) )
  {
    return xxxSendPointerMessage(v11, (unsigned __int16)v8, a1, v9, v6, a5, v12);
  }
  return v6;
}
