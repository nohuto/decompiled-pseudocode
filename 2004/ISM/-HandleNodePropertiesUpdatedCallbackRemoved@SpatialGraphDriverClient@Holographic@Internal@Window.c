/*
 * XREFs of ?HandleNodePropertiesUpdatedCallbackRemoved@SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAAJAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015F580
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002171C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::HandleNodePropertiesUpdatedCallbackRemoved(
        __int64 a1,
        void *a2)
{
  wil::details::SetEvent(*(wil::details **)(a1 + 136), a2);
  return 0LL;
}
