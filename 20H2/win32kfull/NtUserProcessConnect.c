/*
 * XREFs of NtUserProcessConnect @ 0x1C003FAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C003FFD4 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

NTSTATUS __fastcall NtUserProcessConnect(HANDLE Handle, volatile void *a2, __int64 a3)
{
  _OWORD *v4; // rdi
  __int64 ProcessPeb; // r14
  int v6; // eax
  size_t v7; // r12
  _OWORD *v8; // rbx
  int *p_Src; // rax
  __int64 v10; // rcx
  int v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PVOID CurrentProcess; // rax
  struct _KPROCESS *v17; // rsi
  int inited; // ebx
  __int64 v19; // rcx
  int v20; // edx
  int v21; // ecx
  signed __int64 v22; // rdi
  char *v23; // rax
  __int64 v24; // rcx
  _OWORD *v25; // rdi
  signed __int32 v26[8]; // [rsp+0h] [rbp-358h] BYREF
  char v27; // [rsp+30h] [rbp-328h]
  PVOID Object; // [rsp+38h] [rbp-320h] BYREF
  _OWORD *v29; // [rsp+40h] [rbp-318h]
  __int64 v30; // [rsp+48h] [rbp-310h]
  volatile void *Address; // [rsp+50h] [rbp-308h]
  volatile void *v32; // [rsp+68h] [rbp-2F0h]
  volatile void *v33[2]; // [rsp+70h] [rbp-2E8h]
  int Src; // [rsp+B0h] [rbp-2A8h] BYREF
  char v35; // [rsp+B8h] [rbp-2A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2F0h] [rbp-68h] BYREF

  Address = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  v4 = 0LL;
  ProcessPeb = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)Handle, (_DWORD)a2, 3, 16, (__int64)&WPP_5beb818f3182338190d7890059714f79_Traceguids);
  }
  if ( gpepCSRSS != PsGetCurrentProcess(Handle, a2, a3) )
    return -1073741823;
  if ( ext_ms_win_moderncore_win32k_base_sysentry_l1 )
    v6 = ext_ms_win_moderncore_win32k_base_sysentry_l1();
  else
    v6 = -1073741637;
  if ( v6 < 0 )
    return -1073741637;
  v7 = 576LL;
  v8 = Address;
  ProbeForWrite(Address, 0x240uLL, 4u);
  p_Src = &Src;
  v10 = 4LL;
  do
  {
    *(_OWORD *)p_Src = *v8;
    *((_OWORD *)p_Src + 1) = v8[1];
    *((_OWORD *)p_Src + 2) = v8[2];
    *((_OWORD *)p_Src + 3) = v8[3];
    *((_OWORD *)p_Src + 4) = v8[4];
    *((_OWORD *)p_Src + 5) = v8[5];
    *((_OWORD *)p_Src + 6) = v8[6];
    p_Src += 32;
    *((_OWORD *)p_Src - 1) = v8[7];
    v8 += 8;
    --v10;
  }
  while ( v10 );
  *(_OWORD *)p_Src = *v8;
  *((_OWORD *)p_Src + 1) = v8[1];
  *((_OWORD *)p_Src + 2) = v8[2];
  *((_OWORD *)p_Src + 3) = v8[3];
  v11 = (int)qword_1C033B948;
  if ( qword_1C033B948 )
    v11 = qword_1C033B948();
  if ( Src != v11 )
    return -1073741811;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  if ( result >= 0 )
  {
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13, v15);
    v17 = (struct _KPROCESS *)Object;
    if ( Object == CurrentProcess
      || !(unsigned int)PsIsProtectedProcess(Object)
      || (unsigned int)PsIsProtectedProcessLight(v17) )
    {
      v27 = 0;
    }
    else
    {
      v29 = 0LL;
      *(_OWORD *)v33 = 0LL;
      inited = PsAcquireProcessExitSynchronization(v17);
      if ( inited < 0 )
      {
LABEL_21:
        ObfDereferenceObject(Object);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_(v21, v20, 3, 17, (__int64)&WPP_5beb818f3182338190d7890059714f79_Traceguids);
        }
        return inited;
      }
      v27 = 1;
      ProcessPeb = PsGetProcessPeb(v17);
      v30 = ProcessPeb;
      KeStackAttachProcess(v17, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v22 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v29 = (_OWORD *)v22;
      if ( (v22 & 1) == 0
        || (v25 = (_OWORD *)(v22 & 0xFFFFFFFFFFFFFFFEuLL),
            v29 = v25,
            ProbeForRead(v25, 0x10uLL, 4u),
            *(_OWORD *)v33 = *v25,
            LODWORD(v33[0]) != 568) )
      {
        inited = -1073741823;
LABEL_19:
        if ( v27 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(Object);
        }
        goto LABEL_21;
      }
      v4 = v33[1];
      v32 = v33[1];
      ProbeForWrite(v33[1], 0x238uLL, 4u);
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)Object, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v19);
    if ( inited >= 0 )
    {
      if ( v27 )
      {
        v23 = &v35;
        v24 = 4LL;
        do
        {
          *v4 = *(_OWORD *)v23;
          v4[1] = *((_OWORD *)v23 + 1);
          v4[2] = *((_OWORD *)v23 + 2);
          v4[3] = *((_OWORD *)v23 + 3);
          v4[4] = *((_OWORD *)v23 + 4);
          v4[5] = *((_OWORD *)v23 + 5);
          v4[6] = *((_OWORD *)v23 + 6);
          v4 += 8;
          *(v4 - 1) = *((_OWORD *)v23 + 7);
          v23 += 128;
          --v24;
        }
        while ( v24 );
        *v4 = *(_OWORD *)v23;
        v4[1] = *((_OWORD *)v23 + 1);
        v4[2] = *((_OWORD *)v23 + 2);
        *((_QWORD *)v4 + 6) = *((_QWORD *)v23 + 6);
        _InterlockedOr(v26, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(Object);
        v27 = 0;
        v7 = 8LL;
      }
      memmove((void *)Address, &Src, v7);
    }
    goto LABEL_19;
  }
  return result;
}
