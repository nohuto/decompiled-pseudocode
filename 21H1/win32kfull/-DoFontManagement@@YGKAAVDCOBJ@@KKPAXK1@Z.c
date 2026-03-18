/*
 * XREFs of ?DoFontManagement@@YGKAAVDCOBJ@@KKPAXK1@Z @ 0x1D700B
 * Callers:
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge DoFontManagement@<eax>(
        int a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        size_t MaxCount,
        unsigned int *Src,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        void *a8)
{
  unsigned int *v9; // edi
  _DWORD *v10; // eax
  int (__stdcall *v11)(_DWORD *, int, int, size_t, unsigned int *, unsigned int, void *); // ecx
  _DWORD *v12; // eax
  int v14; // esi
  size_t v15; // edi
  size_t v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned __int16 *v18; // esi
  unsigned __int16 *v19; // ebx
  int v20; // edx
  _DWORD *v21; // ecx
  int v22; // esi
  _DWORD v23[13]; // [esp+10h] [ebp-60h] BYREF
  int (__stdcall *v24)(_DWORD *, int, int, size_t, unsigned int *, unsigned int, void *); // [esp+44h] [ebp-2Ch]
  struct XDCOBJ *v25; // [esp+48h] [ebp-28h]
  unsigned __int16 *v26; // [esp+4Ch] [ebp-24h]
  int v27; // [esp+50h] [ebp-20h]
  int v28; // [esp+54h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]
  size_t MaxCounta; // [esp+78h] [ebp+8h]

  v27 = a1;
  v25 = a2;
  v9 = 0;
  v10 = *(_DWORD **)(*(_DWORD *)a2 + 36);
  v11 = (int (__stdcall *)(_DWORD *, int, int, size_t, unsigned int *, unsigned int, void *))v10[522];
  v24 = v11;
  if ( !v11 )
    return 0;
  if ( a1 == 8 )
  {
    if ( (v10[6] & 0x8000) != 0 )
      v12 = (_DWORD *)v10[277];
    else
      v12 = 0;
    return v11(v12, 0, 8, MaxCount, Src, 0, 0);
  }
  v28 = 0;
  if ( RFONTOBJ::bInit((RFONTOBJ *)&v28, a2, 0, 2u) )
    GreAcquireSemaphore(*(_DWORD *)(v28 + 548));
  v14 = v28;
  if ( !v28 )
    goto LABEL_22;
  if ( v27 != 514 )
    goto LABEL_30;
  v15 = MaxCount;
  v16 = MaxCount >> 1;
  MaxCounta = MaxCount >> 1;
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 36) + 24) & 0x8000) == 0 )
  {
    v19 = (unsigned __int16 *)Src;
    v18 = (unsigned __int16 *)Src;
    goto LABEL_16;
  }
  if ( v15 > 0x2710000 || (v17 = (unsigned __int16 *)PALLOCMEM2(v15, 1886221383, 0), v18 = v17, (v26 = v17) == 0) )
  {
LABEL_22:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
    return 0;
  }
  ms_exc.registration.TryLevel = 0;
  v19 = (unsigned __int16 *)Src;
  memcpy(v17, Src, v15);
  ms_exc.registration.TryLevel = -2;
  v16 = MaxCounta;
LABEL_16:
  if ( v16 > 0x9C4000 )
  {
    v9 = 0;
  }
  else
  {
    v9 = (unsigned int *)PALLOCMEM2(4 * v16, 1835426887, 1);
    v16 = MaxCounta;
  }
  if ( !v9 )
  {
    if ( v18 != v19 )
      Win32FreePool(v18);
    goto LABEL_22;
  }
  if ( v16 > 1 )
    RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v28, v18 + 1, v16 - 1, v9 + 1, 0, 0);
  *v9 = *v18;
  if ( v18 != v19 )
    Win32FreePool(v18);
  Src = v9;
  MaxCount = 4 * MaxCounta;
  v14 = v28;
LABEL_30:
  memset(v23, 0, sizeof(v23));
  v20 = *(_DWORD *)v25;
  v21 = *(_DWORD *)(*(_DWORD *)v25 + 504) != 0 ? (_DWORD *)(*(_DWORD *)(*(_DWORD *)v25 + 504) + 16) : 0;
  if ( !v21 )
  {
    v23[2] = *(_DWORD *)(v20 + 16);
    v23[3] = *(_DWORD *)(v20 + 36);
    LOWORD(v23[12]) = 1;
    v21 = v23;
  }
  v22 = v24(v21, v14, v27, MaxCount, Src, a5, a6);
  if ( v9 )
    Win32FreePool(v9);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
  return v22;
}
