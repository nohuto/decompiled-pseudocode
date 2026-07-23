/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x14087FC50
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpGetSecurityDescriptorNode @ 0x140662970 (CmpGetSecurityDescriptorNode.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x14087EC78 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  _DWORD *v2; // r14
  __int64 v3; // rax
  __int64 v4; // r15
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // rsi
  int SecurityDescriptorNode; // ebx
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // ebx
  _DWORD v15[2]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+50h]
  unsigned int v19; // [rsp+A0h] [rbp+58h]
  int v20; // [rsp+A8h] [rbp+60h] BYREF
  int v21; // [rsp+ACh] [rbp+64h]

  v15[1] = 0;
  v21 = 0;
  v2 = 0LL;
  v16[1] = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  v15[0] = -1;
  v20 = -1;
  v16[0] = -1;
  v5 = *(_QWORD *)(v3 + 32);
  v6 = *(_DWORD *)(v3 + 40);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  PoolWithTag[1] = 0;
  *((_QWORD *)PoolWithTag + 1) = v5;
  *PoolWithTag = -1;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v6, v15);
  if ( !v10 )
    goto LABEL_4;
  if ( !HvMarkCellDirty(v5, v6, 1) )
    goto LABEL_13;
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(a1 + 96), &v20);
  if ( !v2
    || (v11 = *(_DWORD *)(v10 + 44),
        v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v11, v16),
        (v4 = v12) == 0) )
  {
LABEL_4:
    SecurityDescriptorNode = -1073741670;
LABEL_14:
    CmpLightWeightCleanupSetSecDescUoW(v8);
    goto LABEL_15;
  }
  v18 = *(_DWORD *)(v12 + 8);
  v19 = *(_DWORD *)(v12 + 4);
  if ( !HvMarkCellDirty(v5, v11, 1) || !HvMarkCellDirty(v5, v18, 1) || !HvMarkCellDirty(v5, v19, 1) )
  {
LABEL_13:
    SecurityDescriptorNode = -1073741443;
    goto LABEL_14;
  }
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(v5, v6, v10, v2 + 5, 1, v8);
  if ( SecurityDescriptorNode < 0 )
    goto LABEL_14;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v20);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *v8, &v20);
  v13 = v2[1];
  HvMarkCellDirty(v5, (unsigned int)v2[2], 1);
  HvMarkCellDirty(v5, v13, 1);
  SecurityDescriptorNode = 0;
  *(_QWORD *)(a1 + 104) = v8;
LABEL_15:
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v15);
  if ( v2 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v20);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v16);
  return (unsigned int)SecurityDescriptorNode;
}
