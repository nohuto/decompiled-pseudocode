/*
 * XREFs of MiHandleCollidedFault @ 0x140201AA8
 * Callers:
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 * Callees:
 *     MiIssueFlowThroughFault @ 0x140201C48 (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
  char v16; // al
  int v17; // [rsp+50h] [rbp+8h] BYREF

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
    v17 = 0;
    LOBYTE(v14) = 2;
    v9 = MiWaitForCollidedFaultComplete(v8, a4, a3, v14, (__int64)&v17);
    if ( v17 != 1 )
    {
      if ( a3 )
      {
        MiLockNestedPageAtDpcInline(a3);
        MiRemoveLockedPageChargeAndDecRef(a3);
        _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( !v9 )
      {
        MiAddLockedPageCharge(a4, 3LL);
        v16 = *(_BYTE *)(a4 + 34);
        *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(a4 + 34) = v16 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(a4);
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
