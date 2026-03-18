/*
 * XREFs of MiHandleCollidedFault @ 0x140312448
 * Callers:
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 * Callees:
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIssueFlowThroughFault @ 0x1403125E8 (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiHandleCollidedFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v9 = -1073741663;
LABEL_9:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a3, a2);
    }
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
    v23 = 0;
    LOBYTE(v14) = 2;
    v9 = MiWaitForCollidedFaultComplete(v8, a4, a3, v14, (__int64)&v23);
    if ( v23 != 1 )
    {
      if ( a3 )
      {
        MiLockNestedPageAtDpcInline(a3);
        MiRemoveLockedPageChargeAndDecRef(a3, v17, v18, v19);
        _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v9 )
      {
        MiAddLockedPageCharge(a4, 3LL, v16);
        v20 = *(_BYTE *)(a4 + 34);
        *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(a4 + 34) = v20 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(a4, 0x3FFFFFFFFFFFFFFFLL, v21, v22);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(v15) = 17;
        MiUnlockProtoPoolPage(a3, v15);
      }
    }
    return v9;
  }
  return result;
}
