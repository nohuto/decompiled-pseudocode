/*
 * XREFs of ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YGKPAPAU_FONTFILEVIEW@@I@Z @ 0xECF16
 * Callers:
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 * Callees:
 *     _ComputeFileviewCheckSum@8 @ 0xDFA40 (_ComputeFileviewCheckSum@8.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ @ 0xECFA2 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE_N_K@Z @ 0xECFE0 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QAE_N_K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall ComputeFileviewCheckSumInFontDriverAddressSpace(int a1, unsigned int a2)
{
  int v4; // ebx
  unsigned int v5; // esi
  _DWORD v8[7]; // [esp+10h] [ebp-28h] BYREF
  char v9; // [esp+2Ch] [ebp-Ch]
  int v10; // [esp+30h] [ebp-8h]

  v8[0] = &UmfdHostLifeTimeManager::s_ReadyLock;
  v4 = 0;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v9 = 0;
  v10 = 0;
  if ( a2
    && UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
         (UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v8,
         *(_QWORD *)(*(_DWORD *)a1 + 40)) )
  {
    v5 = 0;
    do
    {
      v4 += ComputeFileviewCheckSum(
              *(_DWORD **)(*(_DWORD *)(a1 + 4 * v5) + 12),
              *(_DWORD *)(*(_DWORD *)(a1 + 4 * v5) + 16));
      ++v5;
    }
    while ( v5 < a2 );
  }
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v8);
  return v4;
}
