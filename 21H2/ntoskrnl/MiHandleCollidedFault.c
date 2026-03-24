/*
 * XREFs of MiHandleCollidedFault @ 0x14028BEFC
 * Callers:
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiIssueFlowThroughFault @ 0x14028C09C (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiHandleCollidedFault(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 result; // rax
  _DWORD *v13; // rbx
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  int v19; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v9 = -1073741663;
LABEL_9:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    *a6 = 0;
    return v9;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( (v10 & 1) != 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v11 == 5 && (*(_DWORD *)(v11 + 56) & 4) != 0 )
    {
      v9 = -1073741801;
      goto LABEL_9;
    }
  }
  if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
  {
    v9 = -1073740748;
    goto LABEL_9;
  }
  v13 = a6;
  result = MiIssueFlowThroughFault(a1, a2, a3, (unsigned int)*(_QWORD *)a4 - 32, a4, a5, (__int64)a6);
  if ( *v13 != 1 )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(a4) )
      MiObtainProtoReference(a3, 1LL);
    v19 = 0;
    LOBYTE(v14) = 2;
    v9 = MiWaitForCollidedFaultComplete(v8, a4, a3, v14, (__int64)&v19);
    if ( v19 != 1 )
    {
      if ( a3 )
      {
        MiLockNestedPageAtDpcInline(a3, v15, v16, v17);
        MiRemoveLockedPageChargeAndDecRef(a3);
        _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v9 )
      {
        MiAddLockedPageCharge(a4, 3LL);
        v18 = *(_BYTE *)(a4 + 34);
        *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(a4 + 34) = v18 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(a4);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
        MiUnlockProtoPoolPage(a3, 0x11u);
    }
    return v9;
  }
  return result;
}
