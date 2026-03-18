/*
 * XREFs of _NtGdiResizePalette@8 @ 0x21E909
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AAEXXZ @ 0x5E6E4 (-RestoreAttributes@XDCOBJ@@AAEXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0MDCOBJA@@QAE@PAUHDC__@@H@Z @ 0x7C2B6 (--0MDCOBJA@@QAE@PAUHDC__@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??1EPALOBJ@@QAE@XZ @ 0xAAD84 (--1EPALOBJ@@QAE@XZ.c)
 *     ?vCopyEntriesFrom@XEPALOBJ@@QAEXV1@@Z @ 0x21E207 (-vCopyEntriesFrom@XEPALOBJ@@QAEXV1@@Z.c)
 *     ?bSwap@XEPALOBJ@@QAEHPAPAVPALETTE@@KK@Z @ 0x222F10 (-bSwap@XEPALOBJ@@QAEHPAPAVPALETTE@@KK@Z.c)
 */

int __stdcall NtGdiResizePalette(int a1, unsigned int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  HDC v5; // edi
  signed __int32 v6; // ebx
  unsigned int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int *v10; // ecx
  HDC v11; // ebx
  struct PALETTE *v13; // [esp+20h] [ebp-20h] BYREF
  int v14; // [esp+24h] [ebp-1Ch]
  int v15; // [esp+28h] [ebp-18h] BYREF
  int v16[2]; // [esp+2Ch] [ebp-14h] BYREF
  int *v17; // [esp+34h] [ebp-Ch] BYREF
  int v18; // [esp+38h] [ebp-8h]
  int v19; // [esp+3Ch] [ebp-4h]

  if ( a2 <= 0x400 && a2 )
  {
    v2 = 0;
    v14 = 0;
    v3 = HmgShareLockCheck(a1, 8);
    v13 = (struct PALETTE *)v3;
    if ( v3 )
    {
      if ( (struct PALETTE *)v3 != ppalDefault )
      {
        v4 = *(_DWORD *)(v3 + 16);
        if ( (v4 & 0x100) != 0 )
        {
          if ( (v4 & 0x800) != 0 && a2 != 256 )
            goto LABEL_28;
          v16[1] = 0;
          v16[0] = 0;
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v16, 1u, a2, 0, 0, 0, 0, 0x500u, 1) )
          {
            v15 = _ghsemPalette;
            GreAcquireSemaphore(_ghsemPalette);
            XEPALOBJ::vCopyEntriesFrom(v16, (int)v13);
            *(_DWORD *)(v16[0] + 16) = *((_DWORD *)v13 + 4);
            *(_DWORD *)(v16[0] + 32) = *((_DWORD *)v13 + 8);
            *(_DWORD *)(v16[0] + 36) = *((_DWORD *)v13 + 9);
            *(_DWORD *)(v16[0] + 40) = *((_DWORD *)v13 + 10);
            XEPALOBJ::vComputeCallTables((XEPALOBJ *)v16);
            GreAcquireHmgrSemaphore();
            v5 = *(HDC *)(v16[0] + 32);
            while ( v5 )
            {
              v17 = 0;
              v18 = 0;
              v19 = 0;
              XDCOBJ::vLock((XDCOBJ *)&v17, v5);
              if ( !v17 )
                goto LABEL_21;
              v5 = (HDC)v17[256];
              XDCOBJ::RestoreAttributes((XDCOBJ *)&v17);
              v17 = 0;
            }
            XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v13);
            v6 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
            *((_DWORD *)v13 + 6) = v6;
            v7 = *((_DWORD *)v13 + 20);
            if ( (struct PALETTE *)v7 != v13 )
              *(_DWORD *)(v7 + 24) = v6;
            v14 = XEPALOBJ::bSwap((XEPALOBJ *)v16, &v13, v7, v7);
            if ( v14 )
            {
              v9 = v16[0];
              v5 = *(HDC *)(v16[0] + 32);
              if ( !v5 )
                goto LABEL_22;
              do
              {
                MDCOBJA::MDCOBJA((MDCOBJA *)&v17, v5, v8);
                v10 = v17;
                if ( !v17 )
                  break;
                v17[15] = (int)v13;
                v10[59] |= 0xFu;
                v5 = (HDC)v10[256];
                XDCOBJ::vAltUnlockFast(&v17);
              }
              while ( v5 );
            }
LABEL_21:
            v9 = v16[0];
LABEL_22:
            v11 = *(HDC *)(v9 + 32);
            while ( v11 != v5 )
            {
              v17 = 0;
              v18 = 0;
              v19 = 0;
              XDCOBJ::vLock((XDCOBJ *)&v17, v11);
              _InterlockedDecrement(v17 + 2);
              v11 = (HDC)v17[256];
              XDCOBJ::vUnlockFast((XDCOBJ *)&v17);
            }
            GreReleaseHmgrSemaphore();
            SEMOBJ::vUnlock((SEMOBJ *)&v15);
          }
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v16);
        }
      }
    }
    v2 = v14;
LABEL_28:
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v13);
    return v2;
  }
  return 0;
}
