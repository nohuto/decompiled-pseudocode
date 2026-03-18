/*
 * XREFs of GreMakeFontDir @ 0x1C02BAFCC
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C02AFF90 (NtGdiMakeFontDir.c)
 * Callees:
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00118EC (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C0013378 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0014E9C (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C001541C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0016CE4 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001ED40 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001ED74 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0110678 (EngMapFontFileFDInternal.c)
 *     EngUnmapFontFileFD @ 0x1C0113EA0 (EngUnmapFontFileFD.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0114770 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     GreFillFontDir @ 0x1C02BABEC (GreFillFontDir.c)
 */

__int64 __fastcall GreMakeFontDir(int a1, __int64 a2, ULONG_PTR a3)
{
  struct PDEV *v3; // r14
  unsigned int v4; // ebx
  unsigned int v8; // esi
  __int64 v9; // rdi
  struct _IFIMETRICS *v10; // rax
  struct _IFIMETRICS *v11; // r15
  void (__fastcall *v12)(struct _IFIMETRICS *, unsigned __int64); // rax
  __int64 v13; // rcx
  struct PDEV *v15; // [rsp+48h] [rbp-79h] BYREF
  void *v16; // [rsp+50h] [rbp-71h] BYREF
  struct _FONTFILEVIEW *v17; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = qword_1C0341A00;
  v4 = 0;
  v18 = 0LL;
  v8 = 0;
  if ( !qword_1C0341A00 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0LL;
  v15 = v3;
  memset(iFile, 0, 0x78uLL);
  iFile[10] = a3;
  v17 = (struct _FONTFILEVIEW *)iFile;
  v16 = 0LL;
  v21 = 0;
  if ( (unsigned int)EngMapFontFileFDInternal((__int64)iFile, &v16, &v21, 0) )
  {
    if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v17, 1u) )
    {
      v9 = PDEVOBJ::LoadFontFile((PDEVOBJ *)&v15, 1u, (unsigned __int64 *)&v17, &v16, &v21, 0LL, gusLanguageID, 0);
      if ( v9 )
      {
        if ( v9 != 0xFFFFFFFFLL )
        {
          v10 = PDEVOBJ::QueryFont((PDEVOBJ *)&v15, 0LL, v9, 1u, &v18);
          v11 = v10;
          if ( v10 )
          {
            v8 = GreFillFontDir((__int64)v10, a1, a2);
            v12 = (void (__fastcall *)(struct _IFIMETRICS *, unsigned __int64))*((_QWORD *)v3 + 378);
            if ( v12 )
              v12(v11, v18);
          }
          v8 &= -((*((unsigned int (__fastcall **)(__int64))v3 + 382))(v9) != 0);
        }
      }
    }
    if ( LODWORD(iFile[8]) )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
      if ( UmfdFileviewLookup )
      {
        LODWORD(v15) = iFile[8];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v13, &v15);
        LODWORD(iFile[8]) = 0;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
    }
    EngUnmapFontFileFD((ULONG_PTR)iFile);
    vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
    return v8;
  }
  return v4;
}
