/*
 * XREFs of ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0013D94
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0013A10 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0040168 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C0043E14 (VidSchiSuspendResumeHwContext.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C00958B8 (VidSchRegisterCompletionEvent.c)
 *     VidSchUnregisterCompletionEvent @ 0x1C00F5BCC (VidSchUnregisterCompletionEvent.c)
 */

void __fastcall VidSchiSuspendResumeHwContexts(struct _VIDSCH_DEVICE *a1, char a2)
{
  struct _VIDSCH_GLOBAL *v2; // rdi
  unsigned int v5; // eax
  char v6; // r14
  __int64 *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  int v13; // eax
  _QWORD **v14; // [rsp+28h] [rbp-A9h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-A1h]
  _QWORD v16[4]; // [rsp+38h] [rbp-99h] BYREF
  __int16 v17; // [rsp+58h] [rbp-79h]
  _QWORD v18[20]; // [rsp+68h] [rbp-69h] BYREF

  v2 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 4);
  if ( !*((_BYTE *)a1 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)a1 + 50, 0, 0)
    && !*((_DWORD *)v2 + 753) )
  {
    v5 = *((_DWORD *)a1 + 350);
    v6 = 0;
    if ( a2 )
    {
      if ( v5 > 1 )
        return;
    }
    else if ( v5 )
    {
      return;
    }
    v17 = 0;
    v15 = (__int64 *)&v14;
    v14 = &v14;
    v16[0] = (char *)v2 + 1728;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v16);
    v7 = (__int64 *)*((_QWORD *)a1 + 11);
    if ( v7 != (__int64 *)((char *)a1 + 88) )
    {
      v11 = v15;
      do
      {
        if ( !*((_DWORD *)v7 + 13) )
        {
          v12 = v7 - 2;
          if ( (_QWORD ***)*v11 != &v14 )
LABEL_16:
            __fastfail(3u);
          v12[1] = (__int64)v11;
          *v12 = (__int64)&v14;
          *v11 = (__int64)v12;
          v11 = v7 - 2;
          v15 = v7 - 2;
        }
        v7 = (__int64 *)*v7;
      }
      while ( v7 != (__int64 *)((char *)a1 + 88) );
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v16);
    while ( 1 )
    {
      v9 = v14;
      if ( v14[1] != &v14 )
        goto LABEL_16;
      v10 = (__int64)*v14;
      if ( (_QWORD **)(*v14)[1] != v14 )
        goto LABEL_16;
      v14 = (_QWORD **)*v14;
      *(_QWORD *)(v10 + 8) = &v14;
      if ( v9 == &v14 )
        break;
      LOBYTE(v8) = a2;
      v13 = VidSchiSuspendResumeHwContext(v9 - 22, v8);
      *v9 = 0LL;
      if ( v13 == 259 )
        v6 = 1;
      v9[1] = 0LL;
    }
    if ( v6 )
    {
      memset(v18, 0, sizeof(v18));
      LODWORD(v18[2]) = 6;
      v18[3] = a1;
      VidSchRegisterCompletionEvent(v2, v18);
      while ( !VidSchiIsDeviceSuspended(a1) && (int)VidSchWaitForCompletionEvent(v2) >= 0 )
        ;
      VidSchUnregisterCompletionEvent(v2, v18);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v16);
  }
}
