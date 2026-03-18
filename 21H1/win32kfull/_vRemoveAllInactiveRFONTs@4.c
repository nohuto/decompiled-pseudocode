/*
 * XREFs of _vRemoveAllInactiveRFONTs@4 @ 0x209F01
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954 (-vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A (-cInactive@PDEVOBJ@@QAEII@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62 (-prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall vRemoveAllInactiveRFONTs(_DWORD *this)
{
  bool v2; // zf
  int v3; // edi
  struct _FONTOBJ *v4; // eax
  int v5; // esi
  struct RFONT *v6; // eax
  int v7; // esi
  struct RFONT *v8; // eax
  struct _FONTOBJ *v9; // ebx
  struct _FONTOBJ **v10; // esi
  _BYTE v11[16]; // [esp+10h] [ebp-238h] BYREF
  int v12; // [esp+20h] [ebp-228h] BYREF
  int v13; // [esp+24h] [ebp-224h] BYREF
  _DWORD *v14; // [esp+28h] [ebp-220h] BYREF
  int v15; // [esp+2Ch] [ebp-21Ch] BYREF
  struct RFONT *v16; // [esp+30h] [ebp-218h] BYREF
  struct _FONTOBJ *v17; // [esp+34h] [ebp-214h] BYREF
  _DWORD v18[131]; // [esp+38h] [ebp-210h] BYREF

  memset(v18, 0, 0x204u);
  v17 = 0;
  v12 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v13 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v2 = (this[6] & 0x800000) == 0;
  v14 = this;
  if ( v2 )
    v3 = this[236];
  else
    v3 = *(_DWORD *)(this[579] + 944);
  while ( v3 )
  {
    v4 = v17;
    v5 = v3;
    v15 = v3;
    v18[(_DWORD)v17] = v3;
    v2 = (this[6] & 0x800000) == 0;
    v3 = *(_DWORD *)(v3 + 668);
    v17 = (struct _FONTOBJ *)((char *)&v4->iUniq + 1);
    if ( v2 )
      v6 = (struct RFONT *)this[236];
    else
      v6 = *(struct RFONT **)(this[579] + 944);
    v16 = v6;
    RFONTOBJ::vRemove(&v15, &v16, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v14, v16);
    v7 = *(_DWORD *)(v5 + 84);
    v16 = *(struct RFONT **)(v7 + 52);
    RFONTOBJ::vRemove(&v15, &v16, 0);
    v8 = v16;
    --*(_DWORD *)(v7 + 48);
    v15 = 0;
    *(_DWORD *)(v7 + 52) = v8;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
  }
  PDEVOBJ::cInactive((PDEVOBJ *)&v14, 0);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  v9 = v17;
  v18[(_DWORD)v17] = 0;
  if ( v9 )
  {
    v10 = (struct _FONTOBJ **)v18;
    do
    {
      v17 = *v10;
      memset(v11, 0, sizeof(v11));
      PushThreadGuardedObject(v11, v10, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v17, 0, 0, (struct RFONT *)1);
      PopThreadGuardedObject(v11);
      v17 = 0;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
      ++v10;
      v9 = (struct _FONTOBJ *)((char *)v9 - 1);
    }
    while ( v9 );
  }
}
