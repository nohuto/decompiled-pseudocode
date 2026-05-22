/*
 * XREFs of ?SetCallbackOnInputThreadEvent@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAX@Z @ 0x18003AA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800675D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SetCallbackOnInputThreadEvent(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        void *a2)
{
  HANDLE *v3; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (HANDLE *)((char *)this + 672);
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( DuplicateHandle(v5, a2, CurrentProcess, v3, 0, 0, 2u) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x439,
             (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevi"
                           "cecollection.cpp",
             v6);
}
