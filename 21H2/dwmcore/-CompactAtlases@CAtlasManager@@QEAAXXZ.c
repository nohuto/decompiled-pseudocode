/*
 * XREFs of ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x1800808F0
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1800E5708 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18028CBFC (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 */

void __fastcall CAtlasManager::CompactAtlases(CAtlasManager *this)
{
  __int64 v1; // rdi
  __int64 *v3; // r8
  unsigned int v4; // r9d
  __int64 *v5; // rdx
  unsigned int v6; // r10d
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rcx
  bool v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64)this + 576;
  if ( !this )
    v1 = 1088LL;
  if ( *(int *)v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, *(_DWORD *)v1, 0x44u);
  }
  else
  {
    v3 = (__int64 *)*((_QWORD *)this + 1);
    v4 = 0;
    v5 = *(__int64 **)this;
    v6 = 0;
    if ( *(__int64 **)this != v3 )
    {
      do
      {
        v7 = *v5++;
        v8 = *(_DWORD *)(v7 + 24);
        v4 += v8;
        v6 += v8 - *(_DWORD *)(v7 + 28);
      }
      while ( v5 != v3 );
      if ( v6 < v4 / 3 )
      {
        v9 = ((unsigned __int64)v3 - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF8uLL;
        v12 = 0;
        if ( v9 == 8 )
        {
          v10 = CAtlasManager::CompactSingleAtlas(this, &v12);
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x54u);
        }
        else
        {
          CAtlasManager::MergeAtlases(this, &v12);
        }
        if ( v12 && *(int *)v1 >= 0 )
          *((_BYTE *)this + 995) = 1;
      }
    }
  }
}
