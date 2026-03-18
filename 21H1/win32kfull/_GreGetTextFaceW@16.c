/*
 * XREFs of _GreGetTextFaceW@16 @ 0x49888
 * Callers:
 *     _NtGdiGetTextFaceW@16 @ 0x497CA (_NtGdiGetTextFaceW@16.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ @ 0x49A66 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SGJXZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z @ 0x49B40 (-ppfeMapFont@LFONTOBJ@@QAEPAVPFE@@AAVXDCOBJ@@PAKPAU_POINTL@@1H@Z.c)
 *     ??0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z @ 0x4B328 (--0LFONTOBJ@@QAE@PAUHLFONT__@@PAVPDEVOBJ@@@Z.c)
 *     ?pwszFamilyNameAlias@PFEOBJ@@QAEPAGPAH@Z @ 0x4BF60 (-pwszFamilyNameAlias@PFEOBJ@@QAEPAGPAH@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QAEHXZ @ 0xEC81A (-bGetDeviceFonts@PDEVOBJ@@QAEHXZ.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall GreGetTextFaceW(HDC a1, int a2, _WORD *a3, int a4)
{
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  unsigned __int16 *v7; // edi
  void *v8; // ecx
  int v9; // edx
  wchar_t *v12; // ecx
  const wchar_t *v13; // eax
  int v14; // esi
  int v15; // eax
  unsigned __int16 *v16; // ecx
  const wchar_t *v19; // ecx
  const wchar_t *v20; // eax
  int v21; // esi
  int v22; // eax
  _DWORD v24[3]; // [esp+8h] [ebp-38h] BYREF
  struct _POINTL v25; // [esp+14h] [ebp-2Ch] BYREF
  struct PFE *v26; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v27; // [esp+20h] [ebp-20h] BYREF
  int v28; // [esp+24h] [ebp-1Ch] BYREF
  int v29; // [esp+28h] [ebp-18h]
  int v30; // [esp+2Ch] [ebp-14h] BYREF
  unsigned int v31; // [esp+30h] [ebp-10h] BYREF
  int v32; // [esp+34h] [ebp-Ch] BYREF
  void *Src; // [esp+38h] [ebp-8h]
  int v34; // [esp+3Ch] [ebp-4h] BYREF
  const wchar_t *v35; // [esp+48h] [ebp+8h]
  int v36; // [esp+4Ch] [ebp+Ch]
  int v37; // [esp+4Ch] [ebp+Ch]
  int v38; // [esp+4Ch] [ebp+Ch]

  v4 = 0;
  v29 = a2;
  memset(v24, 0, sizeof(v24));
  XDCOBJ::vLock((XDCOBJ *)v24, a1);
  if ( v24[0] )
  {
    v32 = *(_DWORD *)(v24[0] + 36);
    if ( (*(_BYTE *)(v32 + 24) & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v32);
    LFONTOBJ::LFONTOBJ(
      (LFONTOBJ *)&v34,
      *(struct HLFONT__ **)(*(_DWORD *)(v24[0] + 1020) + 300),
      (struct PDEVOBJ *)&v32);
    v5 = v34;
    if ( v34 )
    {
      if ( UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization() >= 0 )
      {
        v28 = _ghsemPublicPFT;
        GreAcquireSemaphore(_ghsemPublicPFT);
        v27 = 0;
        v31 = 0;
        v25.x = 0;
        v25.y = 0;
        v26 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v34, (struct XDCOBJ *)v24, &v27, &v25, &v31, 0);
        if ( v26 )
        {
          v6 = 0;
          v30 = 0;
          if ( (v31 & 2) == 0 || (v7 = (unsigned __int16 *)(v5 + 308), Src = (void *)(v5 + 308), !*(_WORD *)(v5 + 308)) )
          {
            v7 = PFEOBJ::pwszFamilyNameAlias((PFEOBJ *)&v26, &v30);
            v6 = v30;
            Src = v7;
          }
          v8 = a3;
          if ( a3 )
          {
            v9 = v29;
            if ( v29 >= 1 )
            {
              if ( a4 && v6 )
              {
                v12 = v7;
                v37 = (int)v7;
                if ( *v7 )
                {
                  v13 = (const wchar_t *)(v5 + 308);
                  v14 = 0;
                  v26 = (struct PFE *)v13;
                  do
                  {
                    v15 = __wcsicmp(v13, v12);
                    v12 = (wchar_t *)v37;
                    if ( !v15 )
                      break;
                    while ( *v12++ )
                      ;
                    v13 = (const wchar_t *)v26;
                    v14 += (((int)v12 - v37 - 2) >> 1) + 1;
                    v12 = &v7[v14];
                    v37 = (int)v12;
                  }
                  while ( *v12 );
                  v5 = v34;
                  v9 = v29;
                }
                if ( *v12 )
                {
                  v7 = v12;
                  Src = v12;
                }
                v8 = a3;
              }
              v36 = (int)(v7 + 1);
              while ( *v7++ )
                ;
              v4 = (((int)v7 - v36) >> 1) + 1;
              if ( v9 < v4 )
                v4 = v9;
              memcpy(v8, Src, 2 * v4);
              a3[v4 - 1] = 0;
            }
          }
          else
          {
            if ( a4 && v6 )
            {
              v19 = v7;
              v35 = v7;
              if ( *v7 )
              {
                v20 = (const wchar_t *)(v5 + 308);
                v21 = 0;
                v38 = (int)v20;
                do
                {
                  v22 = __wcsicmp(v20, v19);
                  v19 = v35;
                  if ( !v22 )
                    break;
                  while ( *v19++ )
                    ;
                  v20 = (const wchar_t *)v38;
                  v21 += v19 - (v35 + 1) + 1;
                  v19 = &v7[v21];
                  v35 = v19;
                }
                while ( *v19 );
                v5 = v34;
              }
              if ( *v19 )
                v7 = (unsigned __int16 *)v19;
            }
            v16 = v7 + 1;
            while ( *v7++ )
              ;
            v4 = v7 - v16 + 1;
          }
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v28);
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v5);
    }
  }
  if ( v24[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v24);
  return v4;
}
