/*
 * XREFs of ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C01FD2F0
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0160D94 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C01FD198 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

void __fastcall DXGSESSIONDATA::StartPnPTransitionOnSession(
        DXGSESSIONDATA *this,
        struct _PNP_TRANS_TOKEN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  struct _PNP_TRANS_TOKEN *v7; // rbp
  unsigned int v8; // edi
  char v9; // r14
  char v10; // si
  __int64 CurrentProcess; // rax
  int v12; // eax
  __int64 v13; // rcx
  struct _PNP_TRANS_TOKEN *v14; // rdx
  struct _PNP_TRANS_TOKEN **v15; // rcx
  struct _KEVENT *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // kr00_8
  char *v19; // rax
  char *v20; // rsi
  unsigned int v21; // ecx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rdx
  char *v27; // rax
  char **v28; // r8
  __int64 v29; // rdx
  char *v30; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v4 = *((unsigned int *)this + 4690);
  v6 = 0LL;
  v7 = a2;
  v8 = v4;
  v9 = 1;
  if ( (_DWORD)v4 )
  {
    a4 = *((_QWORD *)this + 2346);
    do
    {
      a2 = *(struct _PNP_TRANS_TOKEN **)(32LL * (unsigned int)v6 + a4 + 8);
      if ( a2 )
      {
        if ( a2 == v7 )
          return;
        v9 = 0;
      }
      else
      {
        v8 = v6;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < (unsigned int)v4 );
  }
  if ( *((_QWORD *)this + 2316) )
  {
    v10 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(v6, a2, v4, a4);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)this )
    {
      v10 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)this + 2331), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)this + 2316));
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
  }
  v12 = *((_DWORD *)this + 4690);
  if ( v8 == v12 )
  {
    *((_DWORD *)this + 4690) = 2 * v12;
    v18 = (unsigned int)(2 * v12);
    v17 = 32 * v18;
    if ( !is_mul_ok(v18, 0x20uLL) )
      v17 = -1LL;
    v19 = (char *)operator new[](v17, 0x4B677844u, 256LL, a4);
    v20 = v19;
    if ( !v19 )
    {
      WdLogSingleEntry2(6LL, *(unsigned int *)this, *((unsigned int *)this + 4690));
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expend PnP transition record array for session 0x%I64x (new NumRecords = 0x%I64x).",
        *(unsigned int *)this,
        *((unsigned int *)this + 4690),
        0LL,
        0LL,
        0LL);
      *((_DWORD *)this + 4690) >>= 1;
      return;
    }
    memmove(v19, *((const void **)this + 2346), 32LL * v8);
    v21 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v22 = 32LL * v21;
        v23 = (_QWORD *)(v22 + *((_QWORD *)this + 2346) + 16LL);
        v24 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          break;
        v25 = (_QWORD *)v23[1];
        if ( (_QWORD *)*v25 != v23 )
          break;
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        v26 = *(_QWORD *)&v20[v22 + 8];
        v27 = &v20[v22 + 16];
        v28 = *(char ***)(v26 + 32);
        v29 = v26 + 24;
        if ( *v28 != (char *)v29 )
          break;
        *(_QWORD *)v27 = v29;
        ++v21;
        *((_QWORD *)v27 + 1) = v28;
        *v28 = v27;
        *(_QWORD *)(v29 + 8) = v27;
        if ( v21 >= v8 )
          goto LABEL_28;
      }
LABEL_31:
      __fastfail(3u);
    }
LABEL_28:
    v30 = (char *)*((_QWORD *)this + 2346);
    if ( v30 != (char *)this + 18776 )
      operator delete[](v30);
    *((_QWORD *)this + 2346) = v20;
  }
  v13 = 32LL * v8;
  *(_QWORD *)(v13 + *((_QWORD *)this + 2346)) = this;
  *(_QWORD *)(v13 + *((_QWORD *)this + 2346) + 8) = v7;
  v14 = (struct _PNP_TRANS_TOKEN *)(v13 + *((_QWORD *)this + 2346) + 16LL);
  v15 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)v7 + 4);
  if ( *v15 != (struct _PNP_TRANS_TOKEN *)((char *)v7 + 24) )
    goto LABEL_31;
  *(_QWORD *)v14 = (char *)v7 + 24;
  *((_QWORD *)v14 + 1) = v15;
  *v15 = v14;
  *((_QWORD *)v7 + 4) = v14;
  ++*((_DWORD *)v7 + 1);
  v16 = (struct _KEVENT *)*((_QWORD *)this + 2344);
  if ( v16 )
  {
    if ( v9 )
      KeResetEvent(v16);
  }
}
