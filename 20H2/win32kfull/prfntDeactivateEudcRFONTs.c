/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0x1C0020748
 * Callers:
 *     bUnloadEudcFont @ 0x1C001F7B8 (bUnloadEudcFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C0026F28 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C006395C (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00639CC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00639F4 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0064544 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00656B8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00656D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall prfntDeactivateEudcRFONTs(_QWORD *a1)
{
  __int64 v2; // rsi
  struct _FONTHASH **v3; // rdi
  unsigned int v4; // r12d
  struct _FONTHASH *i; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  struct RFONT *v15; // [rsp+88h] [rbp+48h] BYREF
  __int64 v16; // [rsp+90h] [rbp+50h] BYREF
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  v14 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v13 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v3 = gpPFTPublic;
  v4 = 0;
  if ( *((_DWORD *)gpPFTPublic + 6) )
  {
    do
    {
      for ( i = v3[v4 + 5]; i; i = (struct _FONTHASH *)*((_QWORD *)i + 1) )
      {
        if ( (*((_DWORD *)i + 13) & 8) != 0 )
        {
          v7 = *((_QWORD *)i + 9);
          if ( v7 )
          {
            v12 = 0LL;
            do
            {
              v8 = *(_QWORD *)(v7 + 120);
              if ( v8 == *a1 || v8 == a1[1] )
              {
                v9 = *(_QWORD *)(v7 + 104);
                v16 = v9;
                v17 = v7;
                if ( *(_DWORD *)(v7 + 660) )
                {
                  v15 = PDEVOBJ::prfntActive((PDEVOBJ *)&v16);
                  RFONTOBJ::vRemove(&v17, &v15, 1LL);
                  PDEVOBJ::prfntActive((PDEVOBJ *)&v16, v15);
                }
                else
                {
                  v15 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v16);
                  RFONTOBJ::vRemove(&v17, &v15, 1LL);
                  PDEVOBJ::prfntInactive((PDEVOBJ *)&v16, v15);
                  v10 = PDEVOBJ::cInactive((PDEVOBJ *)&v16) - 1;
                  if ( (*(_DWORD *)(v9 + 40) & 0x800000) != 0 )
                    *(_DWORD *)(*(_QWORD *)(v9 + 3520) + 1536LL) = v10;
                  else
                    *(_DWORD *)(v9 + 1536) = v10;
                }
                RFONTOBJ::vInsert(&v17, &v11, 1LL);
                v17 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
              }
              v7 = *(_QWORD *)(v7 + 496);
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
            }
            while ( v7 );
          }
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)v3 + 6) );
    v2 = v11;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  return v2;
}
