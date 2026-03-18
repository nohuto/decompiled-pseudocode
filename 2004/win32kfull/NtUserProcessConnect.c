/*
 * XREFs of NtUserProcessConnect @ 0x1C00B1050
 * Callers:
 *     <none>
 * Callees:
 *     ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00B1574 (-InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  int v23; // ecx
  signed __int64 v24; // rdi
  char *v25; // rax
  __int64 v26; // rcx
  _OWORD *v27; // rdi
  signed __int32 v28[8]; // [rsp+0h] [rbp-358h] BYREF
  char v29; // [rsp+30h] [rbp-328h]
  PVOID Object; // [rsp+38h] [rbp-320h] BYREF
  _OWORD *v31; // [rsp+40h] [rbp-318h]
  __int64 v32; // [rsp+48h] [rbp-310h]
  volatile void *Address; // [rsp+50h] [rbp-308h]
  volatile void *v34; // [rsp+68h] [rbp-2F0h]
  volatile void *v35[2]; // [rsp+70h] [rbp-2E8h]
  int Src; // [rsp+B0h] [rbp-2A8h] BYREF
  char v37; // [rsp+B8h] [rbp-2A0h] BYREF
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
  v11 = (int)qword_1C033C948;
  if ( qword_1C033C948 )
    v11 = qword_1C033C948();
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
      v29 = 0;
    }
    else
    {
      v31 = 0LL;
      *(_OWORD *)v35 = 0LL;
      inited = PsAcquireProcessExitSynchronization(v17);
      if ( inited < 0 )
      {
LABEL_21:
        ObfDereferenceObject(Object);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 4;
          WPP_RECORDER_SF_(v23, v22, 3, 17, (__int64)&WPP_5beb818f3182338190d7890059714f79_Traceguids);
        }
        return inited;
      }
      v29 = 1;
      ProcessPeb = PsGetProcessPeb(v17);
      v32 = ProcessPeb;
      KeStackAttachProcess(v17, &ApcState);
      _m_prefetchw((const void *)(ProcessPeb + 88));
      v24 = _InterlockedAnd64((volatile signed __int64 *)(ProcessPeb + 88), 0xFFFFFFFFFFFFFFFEuLL);
      v31 = (_OWORD *)v24;
      if ( (v24 & 1) == 0
        || (v27 = (_OWORD *)(v24 & 0xFFFFFFFFFFFFFFFEuLL),
            v31 = v27,
            ProbeForRead(v27, 0x10uLL, 4u),
            *(_OWORD *)v35 = *v27,
            LODWORD(v35[0]) != 568) )
      {
        inited = -1073741823;
LABEL_19:
        if ( v29 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(Object);
        }
        goto LABEL_21;
      }
      v4 = v35[1];
      v34 = v35[1];
      ProbeForWrite(v35[1], 0x238uLL, 4u);
    }
    EnterCrit(0LL, 1LL);
    inited = InitMapSharedSection((struct _EPROCESS *)Object, (struct _USERCONNECT *)&Src);
    UserSessionSwitchLeaveCrit(v20, v19, v21);
    if ( inited >= 0 )
    {
      if ( v29 )
      {
        v25 = &v37;
        v26 = 4LL;
        do
        {
          *v4 = *(_OWORD *)v25;
          v4[1] = *((_OWORD *)v25 + 1);
          v4[2] = *((_OWORD *)v25 + 2);
          v4[3] = *((_OWORD *)v25 + 3);
          v4[4] = *((_OWORD *)v25 + 4);
          v4[5] = *((_OWORD *)v25 + 5);
          v4[6] = *((_OWORD *)v25 + 6);
          v4 += 8;
          *(v4 - 1) = *((_OWORD *)v25 + 7);
          v25 += 128;
          --v26;
        }
        while ( v26 );
        *v4 = *(_OWORD *)v25;
        v4[1] = *((_OWORD *)v25 + 1);
        v4[2] = *((_OWORD *)v25 + 2);
        *((_QWORD *)v4 + 6) = *((_QWORD *)v25 + 6);
        _InterlockedOr(v28, 0);
        *(_QWORD *)(ProcessPeb + 88) = 0LL;
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(Object);
        v29 = 0;
        v7 = 8LL;
      }
      memmove((void *)Address, &Src, v7);
    }
    goto LABEL_19;
  }
  return result;
}
