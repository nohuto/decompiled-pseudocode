/*
 * XREFs of ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C001A5DC
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C0019E78 (_ChangeWindowMessageFilterEx.c)
 *     _PostTransformableMessageIL @ 0x1C001A1A0 (_PostTransformableMessageIL.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C004B480 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     NtUserPostMessage @ 0x1C004F200 (NtUserPostMessage.c)
 *     xxxInterSendMsgEx @ 0x1C0054500 (xxxInterSendMsgEx.c)
 *     NtUserPostThreadMessage @ 0x1C00BE490 (NtUserPostThreadMessage.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C01206E8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01E2048 (_PostMessageCheckIL.c)
 * Callees:
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021E958 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall IsMessageAlwaysAllowedAcrossIL(unsigned int a1)
{
  unsigned int v1; // r10d

  v1 = 0;
  if ( a1 > 0x308 )
  {
    if ( a1 > 0x30C )
    {
      if ( a1 == 781 )
        return 1;
      if ( a1 != 782 )
      {
        if ( a1 != 787 && (a1 <= 0x319 || a1 != 799 && a1 > 0x31B) )
          return v1;
        return 1;
      }
    }
    LOBYTE(v1) = (unsigned int)IsFmtBlocked(0x80u) == 0;
    return v1;
  }
  if ( a1 == 776 || !a1 || a1 == 3 || a1 == 5 || a1 > 0xC && (a1 <= 0xE || a1 == 51 || a1 == 127 || a1 == 773) )
    return 1;
  return v1;
}
