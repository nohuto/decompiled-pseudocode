/*
 * XREFs of ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1800F91D8
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1800F906C (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 * Callees:
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x18003EE0C (--1CAtlasEntry@@QEAA@XZ.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18003F7A8 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

void __fastcall CAtlasTexture::GenerateWhitePixel(CAtlasTexture *this)
{
  _QWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+40h] [rbp-18h]

  v2[1] = 0LL;
  v2[0] = this;
  v3 = 0;
  v1[1] = &unk_1803435BC;
  v1[0] = 4LL;
  CAtlasTexture::UpdateGradientStrip(this, (__int64)v2, (__int64)v1);
  v2[0] = 0LL;
  CAtlasEntry::~CAtlasEntry((CAtlasEntry *)v2);
}
