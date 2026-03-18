/*
 * XREFs of _NtGdiAddEmbFontToDC@8 @ 0x1D9099
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ??0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z @ 0xAB9A0 (--0PUBLIC_PFTOBJ@@QAE@PAVPFT@@@Z.c)
 *     ?GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z @ 0xACE02 (-GetPFFFromId@@YGPAVPFF@@PAVPFT@@IPAPAPAV1@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QAEHPAVPFF@@@Z @ 0x1D0635 (-VerifyPFF@PUBLIC_PFTOBJ@@QAEHPAVPFF@@@Z.c)
 *     ?bAddRemoteFont@XDCOBJ@@QAEHPAVPFF@@@Z @ 0x2111EC (-bAddRemoteFont@XDCOBJ@@QAEHPAVPFF@@@Z.c)
 */

int __stdcall NtGdiAddEmbFontToDC(HDC a1, unsigned int *a2)
{
  int v2; // esi
  struct PFF *PFFFromId; // edi
  unsigned int v5; // [esp+0h] [ebp-38h]
  struct PFF ***v6; // [esp+4h] [ebp-34h]
  _DWORD v7[3]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v8; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v8 = 0;
  ms_exc.registration.TryLevel = 0;
  v8 = *a2;
  ms_exc.registration.TryLevel = -2;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    GreAcquireSemaphore(_ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", _ghsemPublicPFT, 15);
    PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&a2, gpPFTPrivate);
    if ( a2 )
    {
      PFFFromId = GetPFFFromId(v8, (int)gpPFTPrivate, 0, v5, v6);
      if ( PUBLIC_PFTOBJ::VerifyPFF((struct PFT **)&a2, PFFFromId) )
        v2 = XDCOBJ::bAddRemoteFont((XDCOBJ *)v7, PFFFromId);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", _ghsemPublicPFT);
    GreReleaseSemaphoreInternal(_ghsemPublicPFT);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v2;
}
