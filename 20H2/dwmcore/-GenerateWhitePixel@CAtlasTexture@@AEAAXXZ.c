/*
 * XREFs of ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1802499E4
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x180249A60 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 * Callees:
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x180248CB0 (--1CAtlasEntry@@QEAA@XZ.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180249CD0 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 */

void __fastcall CAtlasTexture::GenerateWhitePixel(CAtlasTexture *this)
{
  _QWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+40h] [rbp-18h]

  v2[1] = 0LL;
  v2[0] = this;
  v3 = 0;
  v1[1] = &unk_180303F3C;
  v1[0] = 4LL;
  CAtlasTexture::UpdateGradientStrip(this, v2, v1);
  v2[0] = 0LL;
  CAtlasEntry::~CAtlasEntry((CAtlasEntry *)v2);
}
