/*
 * XREFs of ?SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E1560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800DF844 (-GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IE.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::SendInputInfo(
        __int64 a1,
        int a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int128 *v8; // rdi
  __int128 *v9; // r14
  int v10; // eax
  unsigned int v11; // esi
  __int128 v12; // [rsp+50h] [rbp-598h] BYREF
  __int128 v13; // [rsp+60h] [rbp-588h]
  __int128 v14; // [rsp+70h] [rbp-578h]
  __int128 v15; // [rsp+80h] [rbp-568h]
  _OWORD v16[4]; // [rsp+90h] [rbp-558h] BYREF
  int v17[316]; // [rsp+D0h] [rbp-518h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+0h]

  if ( a2 >= 0 )
  {
    if ( a2 <= 1 )
    {
      v8 = *(__int128 **)(a1 + 360);
      v9 = *(__int128 **)(a1 + 368);
      while ( v8 != v9 )
      {
        v12 = *v8;
        v13 = v8[1];
        v14 = v8[2];
        v15 = v8[3];
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int128 *, __int128 *))(*(_QWORD *)a3 + 16LL))(
                a3,
                0LL,
                *((unsigned int *)v8 + 330),
                *(unsigned int *)(a1 + 8),
                v8 + 4,
                &v12);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x297,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
            (const char *)(unsigned int)v10);
          return v11;
        }
        v8 += 83;
      }
      *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 360);
      return 0LL;
    }
    if ( a2 == 5 )
    {
      if ( *(_BYTE *)(a1 + 272) )
      {
        memset_0(v16, 0, 0x530uLL);
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::GenerateHandLostInputInfo(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *)a1,
          (struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo *)v16);
        v12 = v16[0];
        v13 = v16[1];
        v14 = v16[2];
        v15 = v16[3];
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *, __int128 *))(*(_QWORD *)a3 + 16LL))(
               a3,
               0LL,
               (unsigned int)v17[314],
               *(unsigned int *)(a1 + 8),
               v17,
               &v12);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x287,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
            (const char *)(unsigned int)v5);
          return v6;
        }
      }
      return 0LL;
    }
  }
  return 2147942487LL;
}
