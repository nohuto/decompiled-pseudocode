/*
 * XREFs of _GreGetTextCharsetInfo@12 @ 0x83EE0
 * Callers:
 *     _NtGdiGetTextCharsetInfo@12 @ 0x83E66 (_NtGdiGetTextCharsetInfo@12.c)
 *     ?DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z @ 0x1B7EEA (-DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     _GreGetCharSet@4 @ 0x496EA (_GreGetCharSet@4.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

unsigned int __fastcall GreGetTextCharsetInfo(HDC a1, _DWORD *a2, int a3)
{
  unsigned int v5; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  _DWORD v10[3]; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+18h] [ebp-4h] BYREF

  v5 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( !a2 )
    return v5;
  memset(v10, 0, sizeof(v10));
  XDCOBJ::vLock((XDCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v11 = 0;
    if ( RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v10, 0, 2u) )
      GreAcquireSemaphore(*(_DWORD *)(v11 + 548));
    if ( v11 )
    {
      v7 = *(_DWORD *)(v11 + 80);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 20);
        if ( *(_DWORD *)(v8 + 4) > 4u && (v9 = *(_DWORD *)(v8 + 188)) != 0 )
        {
          qmemcpy(a2, (const void *)(v8 + v9), 0x18u);
        }
        else
        {
          *a2 = 0;
          a2[1] = 0;
          a2[2] = 0;
          a2[3] = 0;
          a2[4] = 0;
          a2[5] = 0;
        }
        goto LABEL_11;
      }
      EngSetLastError(6u);
    }
    v5 = 1;
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
    goto LABEL_12;
  }
  EngSetLastError(6u);
  v5 = 1;
LABEL_12:
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return v5;
}
