/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E7620
 * Callers:
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E7740 (InvalidateWEFCOMPOSITEDDCEs.c)
 * Callees:
 *     UnionRect @ 0x1C003F064 (UnionRect.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E6F98 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E70D4 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 Prop; // rax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  struct tagWND *v6; // rcx
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v7 = 0LL;
  result = GreGetBounds(v2, &v7, 4LL);
  if ( (_DWORD)result )
  {
    Prop = GetProp(*(_QWORD *)(a1 + 32), (unsigned __int16)atomLayer, 1LL);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 27LL) & 0x10) != 0 )
    {
      return UnionRect((_DWORD *)(Prop + 16), (int *)(Prop + 16), &v7.left);
    }
    else
    {
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
      v6 = *(struct tagWND **)(a1 + 32);
      if ( IsResourceAcquiredExclusiveLite )
        return InvalidateWEFCOMPOSITEDWindow(v6, (__m128i *)&v7);
      else
        return PostCOMPOSITEDInvalidateAPC(v6, &v7);
    }
  }
  return result;
}
