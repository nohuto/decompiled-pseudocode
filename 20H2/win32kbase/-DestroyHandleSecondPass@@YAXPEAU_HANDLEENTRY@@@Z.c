/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C01200F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMDestroyUnlockedObject @ 0x1C00C7700 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v9,
    a2,
    a3,
    a4);
  v7 = 3LL * (unsigned int)((a1 - qword_1C0248D48) >> 5);
  v8 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a1 - qword_1C0248D48) >> 5));
  if ( *(_DWORD *)(v8 + 8) )
    *(_DWORD *)(v8 + 8) = 0;
  HMDestroyUnlockedObject(a1, v7, v5, v6);
}
