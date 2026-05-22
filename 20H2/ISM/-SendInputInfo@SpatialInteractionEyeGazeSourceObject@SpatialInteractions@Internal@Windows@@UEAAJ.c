/*
 * XREFs of ?SendInputInfo@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800DC340
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::SendInputInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  while ( *(_QWORD *)(a1 + 1304) )
  {
    v5 = *(__int64 **)(a1 + 1272);
    if ( v5 )
      v6 = *v5;
    else
      v6 = 0LL;
    v7 = (*(_QWORD *)(v6 + 16) - 1LL) & (*(_QWORD *)(a1 + 1296) >> 2);
    v8 = *(_QWORD *)(v6 + 8);
    v9 = *(unsigned int *)(a1 + 8);
    *(_DWORD *)(a1 + 1040) = *(_DWORD *)(*(_QWORD *)(v8 + 8 * v7) + 4 * (*(_QWORD *)(a1 + 1296) & 3LL));
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 48LL))(a3, v9, a1 + 152);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        272LL,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)(unsigned int)v10);
    if ( (*(_QWORD *)(a1 + 1304))-- == 1LL )
      *(_QWORD *)(a1 + 1296) = 0LL;
    else
      ++*(_QWORD *)(a1 + 1296);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a3 + 40LL))(
           a3,
           *(unsigned int *)(a1 + 8),
           a1 + 1216);
}
