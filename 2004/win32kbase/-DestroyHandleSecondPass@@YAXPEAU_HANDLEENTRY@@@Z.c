/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0122440
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMDestroyUnlockedObject @ 0x1C00C8490 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1)
{
  __int64 v2; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v3);
  v2 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a1 - qword_1C024AD48) >> 5));
  if ( *(_DWORD *)(v2 + 8) )
    *(_DWORD *)(v2 + 8) = 0;
  HMDestroyUnlockedObject(a1);
}
