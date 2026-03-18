/*
 * XREFs of ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027C2FC
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0016F7C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C00CEB50 (-pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C00E0F20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall DoFontManagement(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6)
{
  unsigned int *v6; // r15
  size_t v7; // r14
  unsigned int v8; // esi
  unsigned int *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(struct _SURFOBJ *, __int64, _QWORD, _QWORD, unsigned int *, unsigned int, void *); // r10
  struct _SURFOBJ *v13; // rcx
  unsigned __int64 v15; // rsi
  unsigned int *v16; // rax
  unsigned int *v17; // rbx
  __int64 v18; // rbx
  struct _SURFOBJ *v19; // r10
  unsigned int v20; // ebx
  __int64 v21; // [rsp+40h] [rbp-338h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-330h]
  unsigned int *v23; // [rsp+50h] [rbp-328h]
  void *v24; // [rsp+58h] [rbp-320h]
  __int64 (__fastcall *v25)(struct _SURFOBJ *, __int64, _QWORD, _QWORD, unsigned int *, unsigned int, void *); // [rsp+60h] [rbp-318h]
  _BYTE v26[704]; // [rsp+70h] [rbp-308h] BYREF

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v22 = a2;
  v24 = a6;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v12 = *(__int64 (__fastcall **)(struct _SURFOBJ *, __int64, _QWORD, _QWORD, unsigned int *, unsigned int, void *))(v11 + 3064);
  v25 = v12;
  if ( !v12 )
    return 0LL;
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 0x8000) != 0 )
      v13 = *(struct _SURFOBJ **)(v11 + 1800);
    else
      v13 = 0LL;
    return v12(v13, 0LL, 8LL, a3, a4, 0, 0LL);
  }
  v21 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v21, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v21 + 504));
  if ( !v21 )
    goto LABEL_22;
  if ( v8 != 514 )
    goto LABEL_29;
  v15 = (unsigned __int64)(int)v7 >> 1;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8000) == 0 )
  {
    v17 = v6;
    goto LABEL_16;
  }
  if ( (unsigned int)v7 > 0x2710000
    || (v16 = (unsigned int *)PALLOCMEM2((unsigned int)v7, 1886221383LL, 0), v17 = v16, (v23 = v16) == 0LL) )
  {
LABEL_22:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
    return 0LL;
  }
  memmove(v16, v6, v7);
LABEL_16:
  if ( (unsigned int)v15 > 0x9C4000 )
    v10 = 0LL;
  else
    v10 = (unsigned int *)PALLOCMEM2((unsigned int)(4 * v15), 1835426887LL, 1);
  if ( !v10 )
  {
    if ( v17 != v6 )
      Win32FreePool(v17);
    goto LABEL_22;
  }
  if ( (int)v15 > 1 )
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v21, (WCHAR *)v17 + 1, v15 - 1, v10 + 1, 0, 0);
  *v10 = *(unsigned __int16 *)v17;
  if ( v17 != v6 )
    Win32FreePool(v17);
  v6 = v10;
  LODWORD(v7) = 4 * v15;
  v8 = v22;
LABEL_29:
  v18 = *(_QWORD *)a1;
  v19 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
  if ( !v19 )
  {
    memset(v26, 0, 0x2B8uLL);
    v19 = SURFACE::pSurfobj((SURFACE *)v26);
    v19->dhpdev = *(DHPDEV *)(v18 + 24);
    v19->hdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
    v19->iType = 1;
  }
  v20 = v25(v19, v21, v8, (unsigned int)v7, v6, a5, v24);
  if ( v10 )
    Win32FreePool(v10);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
  return v20;
}
