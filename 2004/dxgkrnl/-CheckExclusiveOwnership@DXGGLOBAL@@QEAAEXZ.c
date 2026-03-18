/*
 * XREFs of ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C016C270
 * Callers:
 *     DxgkCheckExclusiveOwnership @ 0x1C016C200 (DxgkCheckExclusiveOwnership.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CheckExclusiveOwnership(DXGGLOBAL *this, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v4; // rdx
  struct DXGADAPTER *v5; // rcx
  char *v6; // r14
  char *v7; // rdi
  char *v8; // rbx
  char *v9; // rsi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  char v12; // al
  int v13; // eax
  struct DXGADAPTER *v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r10
  __int64 v22; // rcx
  unsigned __int8 v23; // di
  DXGFASTMUTEX *v24; // rbx
  __int64 v25; // rdx
  int v26; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  DXGFASTMUTEX *v34; // [rsp+20h] [rbp-89h] BYREF
  char v35; // [rsp+28h] [rbp-81h]
  _QWORD v36[2]; // [rsp+38h] [rbp-71h] BYREF
  char v37; // [rsp+48h] [rbp-61h]
  char v38; // [rsp+50h] [rbp-59h] BYREF
  char v39; // [rsp+51h] [rbp-58h]
  _BYTE v40[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v41; // [rsp+60h] [rbp-49h]
  struct DXGADAPTER *v42; // [rsp+68h] [rbp-41h]
  char v43; // [rsp+70h] [rbp-39h]
  __int64 v44; // [rsp+78h] [rbp-31h]
  _BYTE v45[8]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-9h]
  struct DXGADAPTER *v47; // [rsp+A8h] [rbp-1h]
  char v48; // [rsp+B0h] [rbp+7h]
  __int64 v49; // [rsp+B8h] [rbp+Fh]

  v34 = (DXGGLOBAL *)((char *)this + 584);
  v35 = 0;
  if ( this == (DXGGLOBAL *)-584LL )
  {
    v28 = WdLogNewEntry5_WdAssertion(-584LL, a2);
    *(_QWORD *)(v28 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v28);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v34 + 2) == CurrentThread )
  {
    v29 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v29 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( v35 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v30[5] = &v34;
    v30[3] = 275LL;
    v30[4] = 4LL;
    v30[6] = 0LL;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  DXGFASTMUTEX::Acquire(v34);
  v6 = (char *)this + 664;
  v35 = 1;
  v7 = (char *)*((_QWORD *)this + 83);
  while ( 1 )
  {
    do
    {
      if ( v7 == v6 || !v7 )
      {
        v23 = 0;
        goto LABEL_44;
      }
      v8 = v7;
      v9 = v7;
      v7 = *(char **)v7;
      _m_prefetchw(v8 + 24);
      v10 = *((_QWORD *)v8 + 3);
      if ( v10 )
      {
        while ( 1 )
        {
          v5 = (struct DXGADAPTER *)(v10 + 1);
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v10 + 1, v10);
          if ( v11 == v10 )
            break;
          if ( !v10 )
            goto LABEL_54;
        }
        v12 = 1;
      }
      else
      {
LABEL_54:
        v12 = 0;
      }
    }
    while ( !v12 );
    v39 = 0;
    v42 = (struct DXGADAPTER *)v8;
    v43 = 0;
    v44 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    v41 = -1LL;
    v47 = (struct DXGADAPTER *)v8;
    v48 = 0;
    v49 = 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
    v46 = -1LL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), (struct DXGADAPTER *)v8);
    if ( *((_QWORD *)v8 + 337) )
      break;
LABEL_20:
    if ( v39 )
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v38);
    v14 = v47;
    if ( v47 )
    {
      if ( v48 )
      {
        COREACCESS::Release((COREACCESS *)v45);
        v14 = v47;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v14 + 2), v14);
    }
    v5 = v42;
    if ( v42 )
    {
      if ( v43 )
      {
        COREACCESS::Release((COREACCESS *)v40);
        v5 = v42;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v5 + 2), v5);
    }
  }
  v36[1] = v8;
  _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
  v36[0] = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v9 + 136, 0LL);
  v13 = *((_DWORD *)v8 + 50);
  v37 = 1;
  if ( v13 != 1 )
  {
LABEL_18:
    ExReleasePushLockSharedEx(v8 + 136, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v8 + 2), (struct DXGADAPTER *)v8);
    goto LABEL_20;
  }
  v15 = *((_QWORD *)v8 + 337);
  v16 = 0;
  v17 = *(_DWORD *)(v15 + 80);
  if ( !v17 )
  {
LABEL_37:
    v20 = 0;
    if ( v17 )
    {
      v21 = *(_QWORD *)(v15 + 112);
      while ( 1 )
      {
        v22 = 3968LL * v20;
        if ( *(_QWORD *)(v22 + v21 + 688) )
        {
          if ( *(_DWORD *)(v22 + v21 + 696) == 3 )
            goto LABEL_55;
        }
        if ( ++v20 >= v17 )
          goto LABEL_18;
      }
    }
    goto LABEL_18;
  }
  v18 = *(_QWORD *)(v15 + 112);
  while ( 1 )
  {
    v19 = 3968LL * v16;
    if ( *(_QWORD *)(v19 + v18 + 688) )
    {
      if ( *(_DWORD *)(v19 + v18 + 696) == 2 )
        break;
    }
    if ( ++v16 >= v17 )
      goto LABEL_37;
  }
LABEL_55:
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v36);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v38, v31);
  v23 = 1;
LABEL_44:
  if ( v35 )
  {
    v24 = v34;
    v35 = 0;
    if ( *((struct _KTHREAD **)v34 + 2) != KeGetCurrentThread() )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
      v32[3] = 275LL;
      v32[4] = 4LL;
      v32[5] = v24;
      v32[6] = 0LL;
      v32[7] = 0LL;
      WdLogEvent5_WdCriticalError(v32);
    }
    v25 = *((unsigned int *)v24 + 6);
    if ( (int)v25 <= 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v5, v25);
      *(_QWORD *)(v33 + 24) = 705LL;
      WdLogEvent5_WdAssertion(v33);
      LODWORD(v25) = *((_DWORD *)v24 + 6);
    }
    v26 = v25 - 1;
    *((_DWORD *)v24 + 6) = v26;
    if ( !v26 )
    {
      *((_QWORD *)v24 + 2) = 0LL;
      ExReleasePushLockExclusiveEx(v24, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  return v23;
}
