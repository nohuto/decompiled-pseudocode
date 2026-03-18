/*
 * XREFs of xxxValidateClassAndSize @ 0x1C015BB84
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C011C5E0 (xxxTooltipWndProc.c)
 *     xxxSwitchWndProc @ 0x1C01F4ED0 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0245C00 (xxxSBWndProc.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C00743E0 (xxxDefWindowProc.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00D442C (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C00D482C (xxxClientAllocWindowClassExtraBytes.c)
 *     PopW32ThreadLock @ 0x1C011F7B0 (PopW32ThreadLock.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxValidateClassAndSize(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int16 a5,
        int a6,
        __int64 *a7)
{
  __int64 v8; // r10
  __int16 v9; // ax
  __int16 v11; // si
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r10d
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  size_t v23; // rsi
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int128 v29; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+30h] [rbp-38h]

  *a7 = 0LL;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
    return 0LL;
  v9 = *(_WORD *)(v8 + 42);
  if ( (v9 & 0xD000) != 0 )
  {
    if ( (v9 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(4096LL, a2, a3, a4);
    return 0LL;
  }
  v11 = a5;
  if ( v9 != a5 )
  {
    if ( v9 )
      return 0LL;
    if ( (_DWORD)a2 != a6 )
    {
      *a7 = xxxDefWindowProc(a1, a2, a3, a4);
      return 0LL;
    }
    *(_WORD *)(v8 + 42) = 4096;
    v12 = *((_QWORD *)a1 + 5);
    v13 = *(unsigned int *)(v12 + 252);
    v14 = *(unsigned __int16 *)(gpsi + 2LL * ((a5 & 0x2FFFu) - 666) + 328);
    if ( (int)v13 + 320 >= v14 )
    {
      v27 = *((_QWORD *)a1 + 35);
      if ( v27 )
      {
        v28 = 0LL;
        if ( (_DWORD)v13 )
        {
          while ( !*(_BYTE *)((unsigned int)v28 + v27) )
          {
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= (unsigned int)v13 )
              goto LABEL_42;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v12, v13);
          v12 = *((_QWORD *)a1 + 5);
        }
LABEL_42:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v12 + 252));
      }
    }
    else
    {
      if ( (int)v13 + *(_DWORD *)(v12 + 200) + 320 < v14 )
      {
        *(_WORD *)(v12 + 42) &= ~0x1000u;
        return 0LL;
      }
      v29 = 0LL;
      v30 = 0LL;
      v15 = v14 - 320;
      v16 = Win32AllocPoolZInit(v15, 1937208149LL);
      v17 = v16;
      if ( !v16 )
      {
LABEL_15:
        *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) &= ~0x1000u;
        return 0LL;
      }
      PushW32ThreadLock(v16, &v29, (__int64)Win32FreePool);
      v19 = *((_QWORD *)a1 + 35);
      if ( v19 )
      {
        v20 = 0LL;
        v21 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL);
        if ( (_DWORD)v21 )
        {
          while ( !*(_BYTE *)((unsigned int)v20 + v19) )
          {
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= (unsigned int)v21 )
              goto LABEL_22;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v21, v19, v18);
        }
LABEL_22:
        Win32FreePool(*((_QWORD *)a1 + 35));
        *((_QWORD *)a1 + 35) = 0LL;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = 0;
      v22 = *((_QWORD *)a1 + 5);
      v23 = *(unsigned int *)(v22 + 200);
      if ( (_DWORD)v23 )
      {
        v24 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v23, (__int64)a1, v19, v18);
        if ( !v24 || (v22 = *((_QWORD *)a1 + 5), (*(_WORD *)(v22 + 42) & 0xC000) != 0) )
        {
LABEL_25:
          PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
          goto LABEL_15;
        }
      }
      else
      {
        v24 = 0LL;
      }
      v25 = *(_QWORD *)(v22 + 296);
      if ( v25 )
      {
        if ( v24 )
        {
          memmove(v24, (const void *)(v25 + v15), v23);
          v22 = *((_QWORD *)a1 + 5);
        }
        v26 = *(_QWORD *)(v22 + 296);
        *(_QWORD *)(v22 + 296) = v24;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v23;
        xxxClientFreeWindowClassExtraBytes((__int64)a1, v26, v19, v18);
        if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0xC000) != 0 )
          goto LABEL_25;
      }
      else
      {
        *(_QWORD *)(v22 + 296) = v24;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v23;
      }
      PopW32ThreadLock(&v29);
      *((_QWORD *)a1 + 35) = v17;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = v15;
      v11 = a5;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = v11;
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) &= ~0x1000u;
  }
  return 1LL;
}
