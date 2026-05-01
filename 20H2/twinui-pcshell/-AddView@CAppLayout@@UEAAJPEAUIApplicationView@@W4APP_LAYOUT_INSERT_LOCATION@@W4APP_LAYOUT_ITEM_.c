/*
 * XREFs of ?AddView@CAppLayout@@UEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@0@Z @ 0x180480C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationView@@@Z @ 0x180482D28 (-_AddItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@PEAUIApplicationVie.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x180484D90 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::AddView(RTL_SRWLOCK *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  RTL_SRWLOCK *v9; // rsi
  int v10; // ebx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v10 = CAppLayoutItem::s_CreateInstance_View(a2, a4, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v12);
  if ( v10 >= 0 )
    v10 = CAppLayout::_AddItem(&a1[-5], v12, a3, a5, -2LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return (unsigned int)v10;
}
