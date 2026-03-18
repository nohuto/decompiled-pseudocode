/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QAEXXZ @ 0x8D42A
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     _RFONTOBJ_vConstructPRFONTWrap@8 @ 0x8D406 (_RFONTOBJ_vConstructPRFONTWrap@8.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8 (-bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // edi
  struct RFONT **v5; // esi
  int InactiveHelper; // eax
  struct RFONT *v7; // ecx
  int v8; // ebx
  struct RFONT *v9; // [esp+Ch] [ebp-44h] BYREF
  int v10; // [esp+10h] [ebp-40h]
  struct RFONT *v11[14]; // [esp+14h] [ebp-3Ch] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this && *(_DWORD *)(v2 + 660) )
  {
    v3 = *(_DWORD *)(v2 + 780);
    v4 = 0;
    if ( v3 > 0xA )
    {
      v4 = 1;
      v5 = (struct RFONT **)PALLOCMEM2(4 * v3 + 16, 1718382187, 1);
      if ( !v5 )
        return;
    }
    else
    {
      v5 = v11;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v5);
    v7 = *v5;
    v8 = 0;
    v10 = InactiveHelper;
    while ( v7 )
    {
      v9 = v7;
      RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v9, 0);
      v9 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
      v7 = v5[++v8];
    }
    if ( v4 )
      Win32FreePool(v5);
    if ( v10 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}
