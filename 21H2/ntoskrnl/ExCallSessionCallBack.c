/*
 * XREFs of ExCallSessionCallBack @ 0x1406A8F48
 * Callers:
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 * Callees:
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402312E0 (MmAttachSession.c)
 *     MmSessionGetWin32Callouts @ 0x140281830 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x140281870 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x140281930 (ExDereferenceCallBackBlock.c)
 *     MmGetNextSession @ 0x1402A1770 (MmGetNextSession.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402DF880 (MmGetSessionById.c)
 *     MmGetSessionId @ 0x140300B40 (MmGetSessionId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallSessionCallBack(unsigned int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int v7; // edi
  ULONG_PTR SessionById; // rax
  void *v9; // rsi
  int v10; // ebx
  union _RTL_RUN_ONCE *v11; // r14
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbp
  void *NextSession; // rbx
  __int64 v16; // r15
  int SessionId; // r12d
  int v18; // esi
  union _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rbp
  _OWORD v23[3]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a4;
  v7 = -1073741811;
  memset(v23, 0, sizeof(v23));
  if ( !a1 )
  {
    NextSession = (void *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      v16 = a3;
      do
      {
        SessionId = MmGetSessionId((__int64)NextSession);
        v18 = MmAttachSession((ULONG_PTR)NextSession);
        if ( v18 >= 0 )
        {
          Win32Callouts = MmSessionGetWin32Callouts();
          v20 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
          v21 = v20;
          if ( v20 )
          {
            v18 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v20[1].Count)(v20[2].Count, a2, v16);
            ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v21);
          }
          MmDetachSession((__int64)NextSession, (__int64)v23);
        }
        if ( SessionId )
          v18 = v7;
        v7 = v18;
        NextSession = (void *)MmGetNextSession(NextSession);
      }
      while ( NextSession );
      v4 = a4;
    }
    v10 = 0;
LABEL_8:
    if ( v4 )
      *v4 = v7;
    return (unsigned int)v10;
  }
  SessionById = MmGetSessionById(*a1);
  v9 = (void *)SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  v10 = MmAttachSession(SessionById);
  if ( v10 < 0 )
  {
    v10 = -1073741811;
  }
  else
  {
    v11 = MmSessionGetWin32Callouts();
    v12 = ExReferenceCallBackBlock((signed __int64 *)v11);
    v13 = v12;
    if ( v12 )
    {
      v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v12[1].Count)(v12[2].Count, a2, a3);
      ExDereferenceCallBackBlock((signed __int64 *)v11, v13);
    }
    else
    {
      v10 = -1073741811;
    }
    MmDetachSession((__int64)v9, (__int64)v23);
  }
  ObfDereferenceObject(v9);
  if ( v10 >= 0 )
    goto LABEL_8;
  return (unsigned int)v10;
}
