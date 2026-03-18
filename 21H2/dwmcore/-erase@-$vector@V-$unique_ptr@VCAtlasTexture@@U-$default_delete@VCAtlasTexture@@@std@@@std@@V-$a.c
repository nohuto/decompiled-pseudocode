/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18028CCF4
 * Callers:
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x18028CBFC (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800FEAD4 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CAtlasTexture ***__fastcall std::vector<std::unique_ptr<CAtlasTexture>>::erase(
        __int64 a1,
        CAtlasTexture ***a2,
        CAtlasTexture **a3)
{
  CAtlasTexture **v3; // rbp
  CAtlasTexture **v4; // rdi
  CAtlasTexture **v8; // rax
  CAtlasTexture **v9; // rsi
  CAtlasTexture *v10; // rax
  CAtlasTexture *v11; // r15
  void *v12; // rdi
  CAtlasTexture ***result; // rax

  v3 = *(CAtlasTexture ***)(a1 + 8);
  v4 = a3 + 1;
  v8 = v3;
  if ( a3 + 1 != v3 )
  {
    v9 = a3;
    do
    {
      if ( v9 != v4 )
      {
        v10 = *v4;
        *v4 = 0LL;
        v11 = *v9;
        *v9 = v10;
        if ( v11 )
        {
          CAtlasTexture::~CAtlasTexture(v11);
          operator delete(v11);
        }
      }
      ++v4;
      ++v9;
    }
    while ( v4 != v3 );
    v3 = *(CAtlasTexture ***)(a1 + 8);
    v8 = v3;
  }
  v12 = *(v3 - 1);
  if ( v12 )
  {
    CAtlasTexture::~CAtlasTexture(*(v3 - 1));
    operator delete(v12);
    v8 = *(CAtlasTexture ***)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 1;
  result = a2;
  *a2 = a3;
  return result;
}
