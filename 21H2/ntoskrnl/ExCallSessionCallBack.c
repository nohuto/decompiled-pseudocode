/*
 * XREFs of ExCallSessionCallBack @ 0x1405E44F8
 * Callers:
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 * Callees:
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmSessionGetWin32Callouts @ 0x14027BE80 (MmSessionGetWin32Callouts.c)
 *     ExReferenceCallBackBlock @ 0x14027BEC0 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14027BF80 (ExDereferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallSessionCallBack(unsigned int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int v7; // edi
  ULONG_PTR SessionById; // rax
  struct _DMA_ADAPTER *v9; // rsi
  int v10; // ebx
  _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbp
  struct _DMA_ADAPTER *NextSession; // rbx
  __int64 v16; // r15
  int SessionId; // r12d
  int v18; // esi
  _RTL_RUN_ONCE *v19; // r14
  struct _EX_RUNDOWN_REF *v20; // rax
  struct _EX_RUNDOWN_REF *v21; // rbp
  _OWORD v23[3]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a4;
  v7 = -1073741811;
  memset(v23, 0, sizeof(v23));
  if ( a1 )
  {
    SessionById = MmGetSessionById(*a1, a2);
    v9 = (struct _DMA_ADAPTER *)SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741811;
    v10 = MmAttachSession(SessionById);
    if ( v10 < 0 )
    {
      v10 = -1073741811;
    }
    else
    {
      Win32Callouts = MmSessionGetWin32Callouts();
      v12 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
      v13 = v12;
      if ( v12 )
      {
        v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v12[1].Count)(v12[2].Count, a2, a3);
        ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v13);
      }
      else
      {
        v10 = -1073741811;
      }
      MmDetachSession((__int64)v9, (__int64)v23);
    }
    HalPutDmaAdapter(v9);
  }
  else
  {
    NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      v16 = a3;
      do
      {
        SessionId = MmGetSessionId((__int64)NextSession);
        v18 = MmAttachSession((ULONG_PTR)NextSession);
        if ( v18 >= 0 )
        {
          v19 = MmSessionGetWin32Callouts();
          v20 = ExReferenceCallBackBlock((signed __int64 *)v19);
          v21 = v20;
          if ( v20 )
          {
            v18 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v20[1].Count)(v20[2].Count, a2, v16);
            ExDereferenceCallBackBlock((signed __int64 *)v19, v21);
          }
          MmDetachSession((__int64)NextSession, (__int64)v23);
        }
        if ( SessionId )
          v18 = v7;
        v7 = v18;
        NextSession = (struct _DMA_ADAPTER *)MmGetNextSession(NextSession);
      }
      while ( NextSession );
      v4 = a4;
    }
    v10 = 0;
  }
  if ( v10 >= 0 && v4 )
    *v4 = v7;
  return (unsigned int)v10;
}
