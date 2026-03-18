/*
 * XREFs of CmpRemoveSecurityCellList @ 0x1402F2C04
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1403EFD44 (CmpDereferenceSecurityNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405E0E88 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406A192C (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeSecurityDescriptor @ 0x140701EC0 (CmpFreeSecurityDescriptor.c)
 *     CmpCommitSetSecurityUoW @ 0x140778DFC (CmpCommitSetSecurityUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140881BA4 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpRemoveFromSecurityCache @ 0x1406A0F08 (CmpRemoveFromSecurityCache.c)
 */

__int64 __fastcall CmpRemoveSecurityCellList(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r14
  int v8; // [rsp+50h] [rbp+30h] BYREF
  int v9; // [rsp+54h] [rbp+34h]
  int v10; // [rsp+60h] [rbp+40h] BYREF
  int v11; // [rsp+64h] [rbp+44h]
  int v12; // [rsp+68h] [rbp+48h] BYREF
  int v13; // [rsp+6Ch] [rbp+4Ch]

  v11 = 0;
  v13 = 0;
  v10 = -1;
  v3 = a2;
  v12 = -1;
  v4 = 0LL;
  v8 = -1;
  v9 = 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v8);
  v6 = result;
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(result + 4), &v10);
    v7 = result;
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, *(unsigned int *)(v6 + 8), &v12);
      v4 = result;
      if ( result )
      {
        *(_DWORD *)(v7 + 8) = *(_DWORD *)(v6 + 8);
        *(_DWORD *)(result + 4) = *(_DWORD *)(v6 + 4);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
        v7 = 0LL;
        v4 = 0LL;
        v6 = 0LL;
        result = CmpRemoveFromSecurityCache(a1, v3);
      }
    }
    if ( v6 )
      result = (*(__int64 (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
    if ( v7 )
      result = (*(__int64 (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
    if ( v4 )
      return (*(__int64 (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v12);
  }
  return result;
}
