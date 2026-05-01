/*
 * XREFs of ?AddBuffer@CAppLayout@@UEAAJW4APP_LAYOUT_INSERT_LOCATION@@PEAUIAppLayoutItem@@PEAPEAU3@@Z @ 0x180481460
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z @ 0x1804837AC (-_AddItemHelper@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4APP_LAYOUT_INSERT_LOCATION@@0@Z.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1804854A8 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::AddBuffer(RTL_SRWLOCK *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  RTL_SRWLOCK *v8; // rsi
  int v9; // edi
  void *v10; // rax
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  if ( a4 )
    *a4 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v9 = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v12);
  if ( v9 >= 0 )
  {
    v9 = CAppLayout::_AddItemHelper(&a1[-5], v12, a2, a3, -2LL);
    if ( v9 >= 0 )
    {
      if ( a4 )
      {
        v10 = v12;
        v12 = 0LL;
        *a4 = v10;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)v9;
}
