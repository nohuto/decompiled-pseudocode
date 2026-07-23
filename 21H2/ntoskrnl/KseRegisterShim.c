/*
 * XREFs of KseRegisterShim @ 0x1407BDBB0
 * Callers:
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A39BB0 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A39C28 (KseUserCetInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A696BC (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A696E8 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A69758 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A69784 (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A697B0 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A697DC (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A69808 (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407BDBD0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
