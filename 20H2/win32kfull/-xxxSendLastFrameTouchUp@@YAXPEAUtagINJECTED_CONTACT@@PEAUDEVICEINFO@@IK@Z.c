/*
 * XREFs of ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DBBBC
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DBA4C (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DBD24 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 */

void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  _DWORD *v9; // rsi
  _DWORD *v10; // rcx
  struct tagPOINTER_TOUCH_INFO *v11; // rdi
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 ThreadWin32Thread; // rax
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]

  v4 = a3;
  v5 = 0;
  v8 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( (_DWORD)a3 )
  {
    v9 = (_DWORD *)((char *)a1 + 8);
    a3 = (unsigned int)a3;
    v10 = (_DWORD *)((char *)a1 + 8);
    do
    {
      if ( ((*v10 - 0x20000) & 0xFFFDFFFF) != 0 )
        ++v8;
      v10 += 3;
      --a3;
    }
    while ( a3 );
    if ( v8 )
    {
      v11 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144LL * v8, 1953067861LL);
      if ( v11 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          if ( ((*v9 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            v14 = 18LL * v12;
            *((_DWORD *)v11 + 2 * v14 + 1) = v13;
            *((_QWORD *)v11 + v14 + 4) = *((_QWORD *)v9 - 1);
            *((_DWORD *)v11 + 2 * v14 + 3) = ((*v9 & 4) != 0 ? 0x40000 : 0x20000) | 0x8000;
            ++v12;
            *v9 = 0x20000;
          }
          ++v13;
          v9 += 3;
        }
        while ( v13 < v4 );
        PushW32ThreadLock((__int64)v11, &v16, (__int64)Win32FreePool);
        if ( a4 )
          v5 = _GetQpcBasedTouchStackTime() - a4;
        xxxSendToTouchStack(a2, v8, v11, v5);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v16;
        Win32FreePool(v11);
      }
    }
  }
}
