/*
 * XREFs of KseRegisterShim @ 0x1407AB350
 * Callers:
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A35BE4 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A35C5C (KseUserCetInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A63FB4 (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A63FE0 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A64050 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A6407C (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A640A8 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A640D4 (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A64100 (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407AB370 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
