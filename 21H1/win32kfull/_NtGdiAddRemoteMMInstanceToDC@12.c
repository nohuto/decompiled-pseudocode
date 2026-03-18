/*
 * XREFs of _NtGdiAddRemoteMMInstanceToDC@12 @ 0x1D9196
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QAE@XZ @ 0xF5D45 (--0PUBLIC_PFTOBJ@@QAE@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNI.c)
 *     ?GreGetBaseUFIBits@@YGHPAU_UNIVERSAL_FONT_ID@@PAU_FONTFILEVIEW@@@Z @ 0x1D785A (-GreGetBaseUFIBits@@YGHPAU_UNIVERSAL_FONT_ID@@PAU_FONTFILEVIEW@@@Z.c)
 */

unsigned int __stdcall NtGdiAddRemoteMMInstanceToDC(HDC a1, char *Src, size_t MaxCount)
{
  unsigned int result; // eax
  struct _FONTFILEVIEW **v4; // eax
  _DWORD v5[18]; // [esp+10h] [ebp-CCh] BYREF
  _DWORD v6[3]; // [esp+58h] [ebp-84h] BYREF
  _BYTE v7[4]; // [esp+64h] [ebp-78h] BYREF
  int v8; // [esp+68h] [ebp-74h] BYREF
  unsigned int v9; // [esp+6Ch] [ebp-70h]
  void *v10[21]; // [esp+70h] [ebp-6Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+C4h] [ebp-18h]

  v9 = 0;
  memset(v5, 0, sizeof(v5));
  v6[1] = 0;
  v6[2] = 0;
  XDCOBJ::vLock((XDCOBJ *)v6, a1);
  result = v6[0];
  if ( v6[0] )
  {
    if ( (*(_DWORD *)(v6[0] + 24) & 1) == 0 && MaxCount <= 0x50 )
    {
      memset(v10, 0, 0x50u);
      ms_exc.registration.TryLevel = 0;
      if ( MaxCount && ((unsigned int)&Src[MaxCount] > _MmUserProbeAddress || &Src[MaxCount] < Src) )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v10, Src, MaxCount);
      ms_exc.registration.TryLevel = -2;
      if ( v10[3] <= (void *)0x10 )
      {
        GreAcquireSemaphore(_ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
        if ( GreGetBaseUFIBits((int)v10, v5) )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v7);
          v4 = (struct _FONTFILEVIEW **)PALLOCMEM2(0x50u, 1986422343, 1);
          if ( v4 )
          {
            v8 = 0;
            *v4 = (struct _FONTFILEVIEW *)(v4 + 2);
            v5[13] = 0;
            v5[15] = 0;
            qmemcpy(v4 + 2, v5, 0x48u);
            v9 = PUBLIC_PFTOBJ::bLoadRemoteFonts((PUBLIC_PFTOBJ *)v7, (struct XDCOBJ *)v6, v4, 1u, &v10[2], 0, &v8);
          }
          else
          {
            v9 = 0;
          }
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
        GreReleaseSemaphoreInternal(_ghsemPublicPFT);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
    return v9;
  }
  return result;
}
