/*
 * XREFs of ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18028CBFC
 * Callers:
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x1800808F0 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 * Callees:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800FEAD4 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18028CCF4 (-erase@-$vector@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@V-$a.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x18028CDC4 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x18028D0D4 (-PurgeAndNotify@CAtlasTexture@@QEAAXXZ.c)
 */

void __fastcall CAtlasManager::MergeAtlases(CAtlasManager *this, bool *a2)
{
  __int64 v2; // r8
  bool v5; // bp
  unsigned int v6; // r10d
  __int64 i; // rax
  unsigned int v8; // r9d
  const struct CAtlasTexture *v9; // rbx
  int v10; // ecx
  CAtlasTexture **v11; // rdi
  int v12; // r14d
  CAtlasTexture **v13; // rsi
  unsigned int v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v5 = 0;
  v6 = *(_DWORD *)(**(_QWORD **)this + 24LL);
  for ( i = *(_QWORD *)this + 8LL; i != *((_QWORD *)this + 1); i += 8LL )
  {
    v8 = *(_DWORD *)(*(_QWORD *)i + 24LL);
    if ( v8 >= v6 )
    {
      if ( v8 == v6
        && v8 - *(_DWORD *)(*(_QWORD *)i + 28LL) < *(_DWORD *)(*(_QWORD *)v2 + 24LL) - *(_DWORD *)(*(_QWORD *)v2 + 28LL) )
      {
        v2 = i;
      }
    }
    else
    {
      v6 = *(_DWORD *)(*(_QWORD *)i + 24LL);
      v2 = i;
    }
  }
  v9 = *(const struct CAtlasTexture **)v2;
  *(_QWORD *)v2 = 0LL;
  std::vector<std::unique_ptr<CAtlasTexture>>::erase(this, &v14);
  v10 = *((_DWORD *)v9 + 6);
  if ( v10 != *((_DWORD *)v9 + 7) )
  {
    v11 = *(CAtlasTexture ***)this;
    v12 = v10 + 1;
    v13 = (CAtlasTexture **)*((_QWORD *)this + 1);
    v14 = 1;
    if ( v11 != v13 )
    {
      v5 = 1;
      do
      {
        CAtlasTexture::CopyFrom(*v11, v9, &v14);
        if ( v14 == v12 )
          break;
        ++v11;
      }
      while ( v11 != v13 );
    }
    CAtlasTexture::PurgeAndNotify(v9);
  }
  *a2 = v5;
  CAtlasTexture::~CAtlasTexture(v9);
  operator delete(v9);
}
