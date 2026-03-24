/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0266A58
 * Callers:
 *     DxgkEscape @ 0x1C00F9100 (DxgkEscape.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgEscapeEvictByNtHandle(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rbx
  HANDLE hProcess; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD **v16; // rax
  _QWORD *v17; // r14
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v21[144]; // [rsp+40h] [rbp-A8h] BYREF

  LODWORD(v2) = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    HandleInformation = 0LL;
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(
           hProcess,
           0x20000u,
           g_pDxgkSharedAllocationObjectType,
           1,
           &Object,
           &HandleInformation);
    v2 = v4;
    if ( v4 < 0 )
    {
      v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v8 + 24) = a1->EvictByNtHandle.NtHandle;
      *(_QWORD *)(v8 + 32) = v2;
      WdLogEvent5_WdWarning(v8);
      return (unsigned int)v2;
    }
    v9 = Object;
    v10 = *((_QWORD *)Object + 2);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 80);
      if ( v11 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, *(struct DXGADAPTER *const *)(v11 + 16), 0LL);
        LODWORD(v2) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL);
        if ( (int)v2 < 0 )
        {
          ObfDereferenceObject(v9);
LABEL_10:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21, v13);
          return (unsigned int)v2;
        }
        v14 = *(_QWORD *)(*(_QWORD *)(v10 + 80) + 16LL);
        if ( *(int *)(v14 + 2596) >= 2000 )
        {
          v15 = WdLogNewEntry5_WdError(v14, v12);
          *(_QWORD *)(v15 + 24) = 578LL;
          WdLogEvent5_WdError(v15);
          ObfDereferenceObject(v9);
          LODWORD(v2) = -1073741595;
          goto LABEL_10;
        }
        v16 = (_QWORD **)(v9[2] + 136LL);
        v17 = *v16;
        while ( v17 != v16 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 80) + 640LL)
                                                                             + 8LL)
                                                                 + 728LL))(
            *(_QWORD *)(*(_QWORD *)(v10 + 80) + 648LL),
            0LL,
            *(v17 - 5),
            0LL);
          v17 = (_QWORD *)*v17;
          v16 = (_QWORD **)(v9[2] + 136LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21, v12);
      }
    }
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v2;
}
