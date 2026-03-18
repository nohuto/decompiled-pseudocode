/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C01451A0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01452C4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, int a3)
{
  __int64 v3; // r15
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // r14
  bool v8; // zf
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+34h] [rbp-24h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  LinkedFontUFIs = 0;
  v7 = 0LL;
  v8 = a3 == 0;
  if ( a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 )
        v7 = (struct _UNIVERSAL_FONT_ID *)PALLOCMEM2((unsigned int)(8 * a3), 1684629063LL, 0);
      LinkedFontUFIs = (v7 != 0LL) - 1;
      goto LABEL_4;
    }
    v8 = a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    LinkedFontUFIs = -1;
    goto LABEL_12;
  }
  if ( a3 < 0 && a2 )
    LinkedFontUFIs = -1;
LABEL_4:
  if ( LinkedFontUFIs != -1 )
  {
    v11 = 0;
    v12 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v10, a1);
    if ( v10 )
    {
      v13 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v13, (struct XDCOBJ *)&v10, 0, 2u) )
        GreAcquireSemaphore(*(_QWORD *)(v13 + 504));
      if ( v13 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v13, (struct XDCOBJ *)&v10, v7, v3);
      else
        LinkedFontUFIs = -1;
      XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
    if ( LinkedFontUFIs > 0 && a2 )
    {
      ProbeForWrite(a2, 8 * v3, 4u);
      if ( LinkedFontUFIs < (int)v3 )
        LODWORD(v3) = LinkedFontUFIs;
      memmove(a2, v7, 8LL * (int)v3);
    }
  }
LABEL_12:
  if ( v7 )
    Win32FreePool(v7);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return (unsigned int)LinkedFontUFIs;
}
