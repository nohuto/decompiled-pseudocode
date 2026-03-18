/*
 * XREFs of ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1800F8FDC
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x180040104 (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1800E5708 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1800F906C (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800FEAD4 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CAtlasTexture::Create(struct CD3DDevice *a1, unsigned int a2, struct CAtlasTexture **a3)
{
  CAtlasTexture *v6; // rax
  __int64 v7; // rcx
  CAtlasTexture *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi

  v6 = (CAtlasTexture *)DefaultHeap::Alloc(0x28uLL);
  v8 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 9) = 0;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 8) = 0;
    *(_QWORD *)v6 = &CAtlasTexture::`vftable';
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    v9 = CAtlasTexture::Initialize(v6, a1, a2);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x19u);
      CAtlasTexture::~CAtlasTexture(v8);
      operator delete(v8, 0x28uLL);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x17u);
  }
  return v11;
}
