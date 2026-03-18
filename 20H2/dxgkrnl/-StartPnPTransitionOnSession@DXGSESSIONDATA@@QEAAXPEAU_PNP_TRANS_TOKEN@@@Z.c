/*
 * XREFs of ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C01775FC
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0168EE8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C01774A4 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     memset @ 0x1C0027400 (memset.c)
 */

void __fastcall DXGSESSIONDATA::StartPnPTransitionOnSession(DXGSESSIONDATA *this, struct _PNP_TRANS_TOKEN *a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  struct _PNP_TRANS_TOKEN *v5; // r14
  unsigned int v6; // esi
  char i; // r15
  char v8; // bl
  __int64 CurrentProcess; // rax
  int v10; // eax
  __int64 v11; // rcx
  struct _PNP_TRANS_TOKEN *v12; // rdx
  struct _PNP_TRANS_TOKEN **v13; // rcx
  struct _KEVENT *v14; // rcx
  SIZE_T v15; // rax
  unsigned __int64 v16; // kr00_8
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // rbp
  __int64 v23; // rax
  unsigned int v24; // r8d
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // r9
  _QWORD *v28; // rax
  __int64 v29; // rcx
  char *v30; // rax
  char **v31; // rdx
  __int64 v32; // rcx
  char *v33; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 4684);
  v4 = 0LL;
  v5 = a2;
  v6 = v2;
  for ( i = 1; (unsigned int)v4 < v2; v4 = (unsigned int)(v4 + 1) )
  {
    a2 = *(struct _PNP_TRANS_TOKEN **)(32LL * (unsigned int)v4 + *((_QWORD *)this + 2343) + 8);
    if ( a2 )
    {
      if ( a2 == v5 )
        return;
      i = 0;
    }
    else
    {
      v6 = v4;
    }
  }
  if ( *((_QWORD *)this + 2314) )
  {
    v8 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(v4, a2);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)this )
    {
      v8 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)this + 2329), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)this + 2314));
    if ( v8 )
      KeUnstackDetachProcess(&ApcState);
  }
  v10 = *((_DWORD *)this + 4684);
  if ( v6 == v10 )
  {
    *((_DWORD *)this + 4684) = 2 * v10;
    v16 = (unsigned int)(2 * v10);
    v15 = 32 * v16;
    if ( !is_mul_ok(v16, 0x20uLL) )
      v15 = -1LL;
    v17 = (char *)operator new[](v15, 0x4B677844u, PagedPool);
    v22 = v17;
    if ( !v17 )
    {
      v23 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
      *(_QWORD *)(v23 + 24) = *(unsigned int *)this;
      *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 4684);
      WdLogEvent5_WdLowResource(v23);
      *((_DWORD *)this + 4684) >>= 1;
      return;
    }
    memmove(v17, *((const void **)this + 2343), 32LL * v6);
    memset(&v22[32 * v6], 0, 32LL * (*((_DWORD *)this + 4684) - v6));
    v24 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v25 = 32LL * v24;
        v26 = (_QWORD *)(v25 + *((_QWORD *)this + 2343) + 16LL);
        v27 = *v26;
        if ( *(_QWORD **)(*v26 + 8LL) != v26 )
          break;
        v28 = (_QWORD *)v26[1];
        if ( (_QWORD *)*v28 != v26 )
          break;
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        v29 = *(_QWORD *)&v22[v25 + 8];
        v30 = &v22[v25 + 16];
        v31 = *(char ***)(v29 + 32);
        v32 = v29 + 24;
        if ( *v31 != (char *)v32 )
          break;
        *(_QWORD *)v30 = v32;
        ++v24;
        *((_QWORD *)v30 + 1) = v31;
        *v31 = v30;
        *(_QWORD *)(v32 + 8) = v30;
        if ( v24 >= v6 )
          goto LABEL_27;
      }
LABEL_30:
      __fastfail(3u);
    }
LABEL_27:
    v33 = (char *)*((_QWORD *)this + 2343);
    if ( v33 != (char *)this + 18752 )
      operator delete[](v33);
    *((_QWORD *)this + 2343) = v22;
  }
  v11 = 32LL * v6;
  *(_QWORD *)(v11 + *((_QWORD *)this + 2343)) = this;
  *(_QWORD *)(v11 + *((_QWORD *)this + 2343) + 8) = v5;
  v12 = (struct _PNP_TRANS_TOKEN *)(v11 + *((_QWORD *)this + 2343) + 16LL);
  v13 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)v5 + 4);
  if ( *v13 != (struct _PNP_TRANS_TOKEN *)((char *)v5 + 24) )
    goto LABEL_30;
  *(_QWORD *)v12 = (char *)v5 + 24;
  *((_QWORD *)v12 + 1) = v13;
  *v13 = v12;
  *((_QWORD *)v5 + 4) = v12;
  ++*((_DWORD *)v5 + 1);
  v14 = (struct _KEVENT *)*((_QWORD *)this + 2341);
  if ( v14 )
  {
    if ( i )
      KeResetEvent(v14);
  }
}
