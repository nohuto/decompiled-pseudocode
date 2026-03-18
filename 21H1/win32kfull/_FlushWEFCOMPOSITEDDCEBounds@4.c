/*
 * XREFs of _FlushWEFCOMPOSITEDDCEBounds@4 @ 0x15375C
 * Callers:
 *     _InvalidateWEFCOMPOSITEDDCEs@0 @ 0x153838 (_InvalidateWEFCOMPOSITEDDCEs@0.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UnionRect@12 @ 0x982E2 (_UnionRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YGHPAUtagWND@@PBUtagRECT@@@Z @ 0x1533B5 (-InvalidateWEFCOMPOSITEDWindow@@YGHPAUtagWND@@PBUtagRECT@@@Z.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YGHQAUtagWND@@PBUtagRECT@@@Z @ 0x153481 (-PostCOMPOSITEDInvalidateAPC@@YGHQAUtagWND@@PBUtagRECT@@@Z.c)
 */

int __stdcall FlushWEFCOMPOSITEDDCEBounds(int a1)
{
  int result; // eax
  int Prop; // eax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  _DWORD *v4; // ecx
  int v5[4]; // [esp+Ch] [ebp-14h] BYREF

  memset(v5, 0, sizeof(v5));
  result = GreGetBounds(*(_DWORD *)(a1 + 4), v5, 4);
  if ( result )
  {
    Prop = _GetProp(*(_DWORD *)(a1 + 16), (unsigned __int16)atomLayer, 1);
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 20) + 19) & 0x10) != 0 )
    {
      return UnionRect((int *)(Prop + 8), (int *)(Prop + 8), v5);
    }
    else
    {
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(_gpresUser);
      v4 = *(_DWORD **)(a1 + 16);
      if ( IsResourceAcquiredExclusiveLite )
        return InvalidateWEFCOMPOSITEDWindow((int)v4, v5);
      else
        return PostCOMPOSITEDInvalidateAPC(v4, v5);
    }
  }
  return result;
}
