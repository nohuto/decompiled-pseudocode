/*
 * XREFs of ?HandleNodePropertiesUpdatedCallbackAdded@SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAAJAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18015C10C (-EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV-$unique_a.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::HandleNodePropertiesUpdatedCallbackAdded(
        __int64 a1,
        void *a2)
{
  if ( *(_BYTE *)(a1 + 133) )
    Windows::Internal::Holographic::SpatialGraphDriverClient::EnsurePropertyThread((wil::details **)(a1 - 32), a2);
  return 0LL;
}
