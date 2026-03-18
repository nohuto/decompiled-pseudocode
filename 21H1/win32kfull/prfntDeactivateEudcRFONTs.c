/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0xCDC5E
 * Callers:
 *     bUnloadEudcFont @ 0xCD8F6 (bUnloadEudcFont.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0x846A8 (-prfntActive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0x851B6 (-vInsert@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954 (-vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A (-cInactive@PDEVOBJ@@QAEII@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62 (-prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 */

int __thiscall prfntDeactivateEudcRFONTs(_DWORD *this)
{
  int v1; // ebx
  struct _FONTHASH **v2; // edi
  unsigned int v3; // ecx
  struct _FONTHASH **v4; // eax
  struct _FONTHASH *v5; // eax
  _DWORD *v7; // ebx
  int v8; // eax
  _DWORD *v9; // esi
  struct RFONT *v10; // eax
  struct RFONT *v11; // eax
  int v12; // eax
  int v13; // [esp+Ch] [ebp-30h] BYREF
  int v14; // [esp+10h] [ebp-2Ch] BYREF
  struct _FONTHASH **v15; // [esp+14h] [ebp-28h]
  int v16; // [esp+18h] [ebp-24h] BYREF
  _DWORD *v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch] BYREF
  struct _FONTHASH **v19; // [esp+24h] [ebp-18h]
  unsigned int v20; // [esp+28h] [ebp-14h]
  struct _FONTHASH *v21; // [esp+2Ch] [ebp-10h]
  _DWORD *v22; // [esp+30h] [ebp-Ch] BYREF
  _DWORD *v23; // [esp+34h] [ebp-8h] BYREF
  struct RFONT *v24; // [esp+38h] [ebp-4h] BYREF

  v17 = this;
  v1 = 0;
  v18 = 0;
  v13 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  v14 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v2 = gpPFTPublic;
  v3 = 0;
  v15 = gpPFTPublic;
  v20 = 0;
  if ( gpPFTPublic[3] )
  {
    v4 = gpPFTPublic + 6;
    v19 = gpPFTPublic + 6;
    do
    {
      v5 = *v4;
      v21 = v5;
      if ( v5 )
      {
        do
        {
          if ( (*((_BYTE *)v5 + 32) & 8) != 0 )
          {
            v7 = (_DWORD *)*((_DWORD *)v5 + 13);
            if ( v7 )
            {
              v16 = 0;
              do
              {
                v8 = v7[20];
                if ( v8 == *v17 || v8 == v17[1] )
                {
                  v9 = (_DWORD *)v7[18];
                  v23 = v7;
                  v22 = v9;
                  if ( v7[165] )
                  {
                    if ( (v9[6] & 0x800000) != 0 )
                      v10 = *(struct RFONT **)(v9[579] + 940);
                    else
                      v10 = (struct RFONT *)v9[235];
                    v24 = v10;
                    RFONTOBJ::vRemove(&v23, &v24, 1);
                    PDEVOBJ::prfntActive((PDEVOBJ *)&v22, v24);
                  }
                  else
                  {
                    if ( (v9[6] & 0x800000) != 0 )
                      v11 = *(struct RFONT **)(v9[579] + 944);
                    else
                      v11 = (struct RFONT *)v9[236];
                    v24 = v11;
                    RFONTOBJ::vRemove(&v23, &v24, 1);
                    PDEVOBJ::prfntInactive((PDEVOBJ *)&v22, v24);
                    if ( (v9[6] & 0x800000) != 0 )
                      v12 = *(_DWORD *)(v9[579] + 948);
                    else
                      v12 = v9[237];
                    PDEVOBJ::cInactive((PDEVOBJ *)&v22, v12 - 1);
                  }
                  RFONTOBJ::vInsert((int *)&v23, &v18, 1);
                  v23 = 0;
                  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
                }
                v7 = (_DWORD *)v7[136];
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
              }
              while ( v7 );
              v5 = v21;
            }
          }
          v5 = (struct _FONTHASH *)*((_DWORD *)v5 + 1);
          v21 = v5;
        }
        while ( v5 );
        v2 = v15;
        v3 = v20;
      }
      ++v3;
      v4 = v19 + 1;
      v20 = v3;
      ++v19;
    }
    while ( v3 < (unsigned int)v2[3] );
    v1 = v18;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v1;
}
