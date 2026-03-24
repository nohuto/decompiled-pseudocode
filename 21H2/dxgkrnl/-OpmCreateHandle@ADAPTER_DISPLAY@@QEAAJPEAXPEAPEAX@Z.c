/*
 * XREFs of ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0173E88
 * Callers:
 *     DxgkOpmCreateHandle @ 0x1C0173DE0 (DxgkOpmCreateHandle.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z @ 0x1C00D6190 (-FindOpmAdapterMapping@ADAPTER_DISPLAY@@AEAAPEAU_OPM_HANDLE_MAPPING@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmCreateHandle(DXGADAPTER **this, void *a2, void **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v13; // rsi
  char *v14; // rdi
  __int64 v15; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 6336LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( this[43] != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 6337LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = operator new[](0x28uLL, 0x4B677844u, PagedPool);
  v11 = v10;
  if ( !v10 )
    return 3221225495LL;
  *((_BYTE *)v10 + 32) = 0;
  v10[2] = a2;
  do
  {
    do
    {
      v13 = (__int64)this[40];
      this[40] = (DXGADAPTER *)(v13 + 1);
    }
    while ( !v13 );
  }
  while ( ADAPTER_DISPLAY::FindOpmAdapterMapping((ADAPTER_DISPLAY *)this, v13) );
  v14 = (char *)(this + 38);
  v11[3] = v13;
  v15 = *(_QWORD *)v14;
  if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
    __fastfail(3u);
  *v11 = v15;
  v11[1] = v14;
  *(_QWORD *)(v15 + 8) = v11;
  *(_QWORD *)v14 = v11;
  *a3 = (void *)v11[3];
  return 0LL;
}
