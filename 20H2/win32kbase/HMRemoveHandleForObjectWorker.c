/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C0021988
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C00218C0 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(__int64 a1)
{
  __int16 v2; // r8
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int16 v5; // ax
  __int64 v6; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v8);
  --giheCount;
  v2 = *(_WORD *)(a1 + 26) + 1;
  v3 = 3LL * (unsigned int)((a1 - (__int64)qword_1C0248D48) >> 5);
  v4 = gpKernelHandleTable;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)&v4[v3] = 0LL;
  v4[v3 + 2] = 0LL;
  v5 = 1;
  if ( v2 != -1 )
    v5 = v2;
  *(_WORD *)(a1 + 26) = v5;
  v6 = (a1 - (__int64)qword_1C0248D48) >> 5;
  if ( (v6 & 1) != 0 )
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v6) = qword_1C0248CD0;
    qword_1C0248CD0 = v6;
  }
  else
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v6) = qword_1C0248CC8;
    qword_1C0248CC8 = v6;
  }
  return 1LL;
}
