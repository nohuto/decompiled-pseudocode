/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00DBE1C
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C00DBDF0 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E344C (GreGetGlyphOutlineInternal.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00FDA34 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A8018 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00DBF50 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  __int64 v2; // rax
  unsigned int v3; // ecx
  struct RFONT **v4; // rbx
  int v5; // edi
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rsi
  _QWORD v10[2]; // [rsp+20h] [rbp-98h] BYREF
  struct RFONT *v11[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v2 + 660) )
  {
    v3 = *(_DWORD *)(v2 + 840);
    if ( v3 > 0xA )
    {
      v4 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32, 1718382187LL, 1);
      if ( !v4 )
        return;
      v5 = 1;
    }
    else
    {
      v4 = v11;
      v5 = 0;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v7 = *v4;
    v8 = InactiveHelper;
    if ( *v4 )
    {
      v9 = 0LL;
      do
      {
        v10[0] = v7;
        RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)v10, 0LL);
        v10[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
        v7 = v4[++v9];
      }
      while ( v7 );
    }
    if ( v5 )
      Win32FreePool(v4);
    if ( v8 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}
