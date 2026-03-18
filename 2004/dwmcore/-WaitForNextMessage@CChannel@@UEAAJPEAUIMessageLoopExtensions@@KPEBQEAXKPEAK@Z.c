/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJPEAUIMessageLoopExtensions@@KPEBQEAXKPEAK@Z @ 0x180027E20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        struct IMessageLoopExtensions *a2,
        unsigned int a3,
        void *const *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v6; // r12
  void *const *v7; // r13
  __int64 v8; // r15
  struct _RTL_CRITICAL_SECTION *v10; // r14
  __int64 v11; // rcx
  int v12; // edi
  unsigned int v13; // r12d
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r13
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  unsigned int v24; // [rsp+20h] [rbp-E0h]
  _DWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  int v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+6Ch] [rbp-94h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  _QWORD v33[64]; // [rsp+80h] [rbp-80h] BYREF

  v6 = a6;
  v7 = a4;
  v8 = a3;
  if ( a3 && !a4 || a3 > 0x3F )
  {
    v12 = -2147024809;
    v24 = 615;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v12, v24, 0LL);
    return (unsigned int)v12;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11 = *((_QWORD *)this + 20);
  v12 = 0;
  if ( !v11 )
    goto LABEL_5;
  v29 = *((_DWORD *)this + 14);
  v17 = *((_QWORD *)this + 6);
  v31 = v11;
  v28 = 0LL;
  v30 = 0;
  v18 = *(_QWORD *)(v17 + 40);
  v32 = 0LL;
  v27[1] = 40;
  v27[0] = 8;
  v19 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v18 + 8LL))(v18, v27, 0LL);
  v12 = v19;
  if ( v19 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x122u, 0LL);
  else
    *((_QWORD *)this + 20) = 0LL;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v12, 0x137u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v12, 0x1FFu, 0LL);
  }
  else
  {
LABEL_5:
    v13 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v13 )
    {
      v21 = *((_QWORD *)this + 5);
      do
      {
        v22 = *(_DWORD *)(v21 + 12LL * v13 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v13 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v13 = v22;
      }
      while ( v22 );
      v7 = a4;
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    v6 = a6;
    *((_DWORD *)this + 3) = 0;
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v12 < 0 )
  {
    v24 = 618;
    goto LABEL_25;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((CChannel **)this + 8) == (CChannel *)((char *)this + 64) )
  {
    ResetEvent(*((HANDLE *)this + 10));
    memcpy_0(v33, v7, 8 * v8);
    v33[v8] = *((_QWORD *)this + 10);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    v14 = (*(__int64 (__fastcall **)(struct IMessageLoopExtensions *, _QWORD, _QWORD *, _QWORD, _DWORD, unsigned int *))(*(_QWORD *)a2 + 32LL))(
            a2,
            (unsigned int)(v8 + 1),
            v33,
            a5,
            0,
            v6);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x286u, 0LL);
  }
  else
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    *v6 = v8;
  }
  return (unsigned int)v12;
}
