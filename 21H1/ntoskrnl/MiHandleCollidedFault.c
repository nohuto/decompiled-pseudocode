/*
 * XREFs of MiHandleCollidedFault @ 0x140341780
 * Callers:
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 * Callees:
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiIssueFlowThroughFault @ 0x140341920 (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiHandleCollidedFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 result; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v9 = -1073741663;
LABEL_9:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a3, a2, a3, a4);
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
    if ( (unsigned int)MI_PFN_IS_PROTO(a4, v14, v15) )
      MiObtainProtoReference(a3, 1LL, v16, v17);
    v22 = 0;
    LOBYTE(v17) = 2;
    v9 = MiWaitForCollidedFaultComplete(v8, a4, a3, v17, (__int64)&v22);
    if ( v22 != 1 )
    {
      if ( a3 )
      {
        MiLockNestedPageAtDpcInline(a3, v18, v19, v20);
        MiRemoveLockedPageChargeAndDecRef(a3);
        _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v9 )
      {
        MiAddLockedPageCharge(a4, 3);
        v21 = *(_BYTE *)(a4 + 34);
        *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(a4 + 34) = v21 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(a4);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
      {
        LOBYTE(v18) = 17;
        MiUnlockProtoPoolPage(a3, v18, v19, v20);
      }
    }
    return v9;
  }
  return result;
}
