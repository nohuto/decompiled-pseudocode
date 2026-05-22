/*
 * XREFs of ?EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18015BC4C
 * Callers:
 *     ?HandleNodePropertiesUpdatedCallbackAdded@SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAAJAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015F550 (-HandleNodePropertiesUpdatedCallbackAdded@SpatialGraphDriverClient@Holographic@Internal@Windows@.c)
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x180162F60 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJP.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002171C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180031394 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180067DE0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::EnsurePropertyThread(
        wil::details **lpParameter,
        void *a2)
{
  void **v2; // rbx
  char *Thread; // rax
  const char *v4; // r9
  char v5; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (void **)(lpParameter + 22);
  if ( (unsigned __int64)lpParameter[22] - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    Thread = (char *)CreateThread(
                       0LL,
                       0LL,
                       Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2Static,
                       lpParameter,
                       0,
                       0LL);
    if ( v2 != (void **)&v5 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v2,
        Thread);
      Thread = 0LL;
    }
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(Thread);
    if ( !*v2 )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x370,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        v4);
      JUMPOUT(0x18015BCE9LL);
    }
  }
  else
  {
    wil::details::SetEvent(lpParameter[21], a2);
  }
}
