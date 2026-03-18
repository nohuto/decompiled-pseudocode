/*
 * XREFs of ?PresentCancel@CFlipManager@@QEAAJAEA_K@Z @ 0x1C006ABA0
 * Callers:
 *     ?PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z @ 0x1C0067AD8 (-PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::PresentCancel(CFlipManager *this, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v6; // r10
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // r8
  CFlipManager *v10; // r10
  CFlipManager **v11; // rcx

  v2 = 0;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x28uLL, 0x63704346u);
  v6 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v7 = *a2;
    v8 = PoolWithQuotaTag + 1;
    v9 = *((_QWORD *)this + 22);
    v8[1] = v8;
    *v8 = v8;
    *v6 = &CFlipPresentCancel::`vftable';
    v6[3] = v9;
    v6[4] = v7;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v10 = (CFlipManager *)(v6 + 1);
    v11 = (CFlipManager **)*((_QWORD *)this + 20);
    if ( *v11 != (CFlipManager *)((char *)this + 152) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)this + 152;
    *((_QWORD *)v10 + 1) = v11;
    *v11 = v10;
    *((_QWORD *)this + 20) = v10;
    *((_QWORD *)this + 28) = *a2;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
