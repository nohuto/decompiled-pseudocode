/*
 * XREFs of _NtGdiGetLinkedUFIs@12 @ 0x1D9578
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0x207544 (-GetLinkedFontUFIs@RFONTOBJ@@QAEHAAVXDCOBJ@@PAU_UNIVERSAL_FONT_ID@@H@Z.c)
 */

int __stdcall NtGdiGetLinkedUFIs(HDC a1, volatile void *Address, int a3)
{
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v4; // edi
  int v5; // esi
  bool v6; // zf
  bool v7; // sf
  _DWORD v9[3]; // [esp+10h] [ebp-28h] BYREF
  struct _UNIVERSAL_FONT_ID *v10; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  LinkedFontUFIs = 0;
  v4 = 0;
  v10 = 0;
  v5 = a3;
  v6 = a3 == 0;
  v7 = a3 < 0;
  if ( a3 > 0 )
  {
    if ( Address )
    {
      if ( (unsigned int)a3 <= 0x4E2000 )
      {
        v4 = (struct _UNIVERSAL_FONT_ID *)PALLOCMEM2(8 * a3, 1684629063, 0);
        v10 = v4;
      }
      LinkedFontUFIs = (v4 != 0) - 1;
      goto LABEL_14;
    }
    v6 = a3 == 0;
    v7 = a3 < 0;
  }
  if ( !v6 )
  {
    if ( !Address )
    {
      LinkedFontUFIs = -1;
      goto LABEL_29;
    }
    v7 = a3 < 0;
  }
  if ( v7 && Address )
    LinkedFontUFIs = -1;
LABEL_14:
  if ( LinkedFontUFIs != -1 )
  {
    v9[1] = 0;
    v9[2] = 0;
    XDCOBJ::vLock((XDCOBJ *)v9, a1);
    if ( v9[0] )
    {
      a3 = 0;
      if ( RFONTOBJ::bInit((RFONTOBJ *)&a3, (struct XDCOBJ *)v9, 0, 2u) )
        GreAcquireSemaphore(*(_DWORD *)(a3 + 548));
      if ( a3 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&a3, (struct XDCOBJ *)v9, v4, v5);
      else
        LinkedFontUFIs = -1;
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a3);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
    if ( LinkedFontUFIs > 0 )
    {
      ms_exc.registration.TryLevel = 0;
      if ( Address )
      {
        ProbeForWrite(Address, 8 * v5, 4u);
        if ( LinkedFontUFIs < v5 )
          v5 = LinkedFontUFIs;
        memcpy((void *)Address, v4, 8 * v5);
      }
      ms_exc.registration.TryLevel = -2;
    }
  }
LABEL_29:
  if ( v4 )
    Win32FreePool(v4);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return LinkedFontUFIs;
}
