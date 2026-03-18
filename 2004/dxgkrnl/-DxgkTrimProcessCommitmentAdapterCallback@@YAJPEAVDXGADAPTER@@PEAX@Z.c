/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0284750
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkTrimProcessCommitmentAdapterCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  char v23[8]; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v24; // [rsp+70h] [rbp-90h]
  char v25; // [rsp+78h] [rbp-88h]
  _BYTE v26[144]; // [rsp+80h] [rbp-80h] BYREF

  if ( a2[3] < a2[2] )
  {
    v24 = a1;
    v25 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    if ( *((_DWORD *)a1 + 50) == 1 && !*((_BYTE *)a1 + 209) )
    {
      v4 = *a2;
      v19 = 0LL;
      v4 += 384LL;
      v22 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
      v5 = *a2 + 408LL;
      v6 = *(__int64 ***)(*a2 + 416LL);
      if ( *v6 != (__int64 *)v5 )
        goto LABEL_17;
      v21 = *(__int64 **)(*a2 + 416LL);
      v20 = v5;
      *v6 = &v20;
      *(_QWORD *)(v5 + 8) = &v20;
      v7 = *a2 + 384LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 338) + 640LL)
                                                                                         + 8LL)
                                                                             + 1136LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 338) + 648LL),
             *a2,
             &v19,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL) >= 0 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 338) + 640LL) + 8LL)
                                                                                       + 1128LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 338) + 648LL),
            *a2,
            &v19,
            *((unsigned int *)a2 + 2),
            a2[2] - a2[3],
            &v18);
          a2[3] += v18;
        }
        else
        {
          v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
          *(_QWORD *)(v11 + 24) = a1;
          WdLogEvent5_WdWarning(v11);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26, v12);
      }
      v13 = *a2 + 384LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
      v14 = v20;
      v15 = v21;
      if ( *(__int64 **)(v20 + 8) != &v20 || (__int64 *)*v21 != &v20 )
LABEL_17:
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = *a2 + 384LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v25 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
  }
  return 0LL;
}
