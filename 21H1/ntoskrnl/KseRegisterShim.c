/*
 * XREFs of KseRegisterShim @ 0x1407A81F0
 * Callers:
 *     KseKernelPadSectionsOverrideInitialize @ 0x140A35BE4 (KseKernelPadSectionsOverrideInitialize.c)
 *     KseUserCetInitialize @ 0x140A35C5C (KseUserCetInitialize.c)
 *     KseZeroPoolInitialize @ 0x140A645D4 (KseZeroPoolInitialize.c)
 *     KseDriverScopeInitialize @ 0x140A64600 (KseDriverScopeInitialize.c)
 *     KseClearPCIDBitsInitialize @ 0x140A64670 (KseClearPCIDBitsInitialize.c)
 *     KseMemcpyInitialize @ 0x140A6469C (KseMemcpyInitialize.c)
 *     KseKasperskyInitialize @ 0x140A646C8 (KseKasperskyInitialize.c)
 *     KseSkipDriverUnloadInitialize @ 0x140A646F4 (KseSkipDriverUnloadInitialize.c)
 *     KseVersionLieInitialize @ 0x140A64720 (KseVersionLieInitialize.c)
 * Callees:
 *     KseRegisterShimEx @ 0x1407A8210 (KseRegisterShimEx.c)
 */

__int64 __fastcall KseRegisterShim(__int64 a1, __int64 a2, __int64 a3)
{
  return KseRegisterShimEx(a1, a2, a3, 0LL);
}
