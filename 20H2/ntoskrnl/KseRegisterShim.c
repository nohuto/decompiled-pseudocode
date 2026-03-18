/*
 * XREFs of KseRegisterShim @ 0x1407B9290
 * Callers:
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A3BBE4 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A3BC5C (KseUserCetInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A6B284 (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A6B2B0 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A6B320 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A6B34C (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A6B378 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A6B3A4 (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A6B3D0 (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407B92B0 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
