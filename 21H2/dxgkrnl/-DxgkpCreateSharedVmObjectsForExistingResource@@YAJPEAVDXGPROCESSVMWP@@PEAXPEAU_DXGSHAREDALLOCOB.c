/*
 * XREFs of ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1C031BB74
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1C031BDD4 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpCreateSharedVmObjectsForExistingResource(
        struct DXGPROCESSVMWP *a1,
        void *a2,
        struct _DXGSHAREDALLOCOBJECT *a3,
        struct DXGSHAREDVMOBJECT **a4,
        unsigned int *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rax
  DXGSHAREDVMOBJECT *v16; // rbx
  unsigned int *v17; // rax
  int v19; // [rsp+38h] [rbp-60h]
  _BYTE v20[32]; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  Handle = 0LL;
  v9 = 0;
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry1(1LL, 2945LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSharedObject->pSharedResource != nullptr",
      2945LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 76) + 280LL);
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  LOBYTE(v19) = 0;
  v12 = ObDuplicateObject(CurrentProcess, a2, v10, &Handle, 0, 512, 6, v19);
  v14 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL, v12);
    goto LABEL_10;
  }
  v15 = operator new[](0x20uLL, 0x4B677844u, 256LL, v13);
  v16 = (DXGSHAREDVMOBJECT *)v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(6LL, 2967LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
      2967LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741801;
LABEL_10:
    if ( Handle )
      ObCloseHandle(Handle, 0);
    goto LABEL_12;
  }
  *(_DWORD *)(v15 + 24) = 1;
  *(_DWORD *)v15 = 4;
  *(_QWORD *)(v15 + 8) = a3;
  *(_QWORD *)(v15 + 16) = Handle;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v20, a1);
  v9 = HMGRTABLE::AllocHandle((unsigned int *)a1 + 70, (__int64)v16, 13, 0, 0);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, 2988LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate NT shared object handle",
      2988LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v14 = -1073741801;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
    DXGSHAREDVMOBJECT::ReleaseReference(v16);
LABEL_12:
    v16 = 0LL;
    goto LABEL_13;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
LABEL_13:
  v17 = a5;
  *a4 = v16;
  *v17 = v9;
  return v14;
}
