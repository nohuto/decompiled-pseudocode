/*
 * XREFs of xxxSwitchWndProc @ 0x1C01F5B40
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E42E0 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C008F2E4 (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C008F69C (xxxClientAllocWindowClassExtraBytes.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00AE058 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxDefWindowProc @ 0x1C00AF770 (xxxDefWindowProc.c)
 *     xxxCancelCoolSwitch @ 0x1C011C044 (xxxCancelCoolSwitch.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??$?B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ @ 0x1C01E9A50 (--$-B_N@RedirectedFieldpExtraBytes@tagWND@@QEBA_NXZ.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F41D4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned int v6; // r12d
  _QWORD *v8; // r15
  __int64 v9; // r8
  __int16 v10; // ax
  __int64 v12; // rdx
  unsigned int v13; // r9d
  unsigned int v14; // esi
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned int v18; // r9d
  size_t v19; // r14
  void *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD v28[11]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+D8h] [rbp+20h]

  v30 = a4;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v28[2] = 0LL;
  v8 = (_QWORD *)((char *)a1 + 40);
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v9 + 232) & 0x800) != 0 )
    return 0LL;
  v10 = *(_WORD *)(v9 + 42);
  if ( v10 == 672 )
    goto LABEL_34;
  if ( !v10 )
  {
    if ( a2 != 1 )
      return xxxDefWindowProc((__int64 *)a1, a2, v5, a4);
    v12 = *(unsigned int *)(v9 + 252);
    v13 = *(unsigned __int16 *)(gpsi + 340LL);
    if ( (int)v12 + 320 >= v13 )
    {
      v23 = *((_QWORD *)a1 + 35);
      if ( v23 )
      {
        v24 = 0LL;
        if ( (_DWORD)v12 )
        {
          while ( !*(_BYTE *)((unsigned int)v24 + v23) )
          {
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 >= (unsigned int)v12 )
              goto LABEL_32;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v12);
          v9 = *v8;
        }
LABEL_32:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v9 + 252));
      }
    }
    else
    {
      if ( (int)v12 + *(_DWORD *)(v9 + 200) + 320 < v13 )
        return 0LL;
      v14 = v13 - 320;
      v15 = Win32AllocPoolZInit(v13 - 320, 1937208149LL);
      if ( !v15 )
        return 0LL;
      v16 = *((_QWORD *)a1 + 35);
      if ( v16 )
      {
        v17 = 0LL;
        v18 = *(_DWORD *)(*v8 + 252LL);
        if ( v18 )
        {
          while ( !*(_BYTE *)((unsigned int)v17 + v16) )
          {
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= v18 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(*v8, v17);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 35));
      }
      *((_QWORD *)a1 + 35) = v15;
      *(_DWORD *)(*v8 + 252LL) = v14;
      v19 = *(unsigned int *)(*v8 + 200LL);
      if ( (_DWORD)v19 )
      {
        v20 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v19);
        if ( !v20 )
          return 0LL;
      }
      else
      {
        v20 = 0LL;
      }
      if ( tagWND::RedirectedFieldpExtraBytes::operator<bool> bool((__int64)a1 + 320) )
      {
        if ( v20 )
          memmove(v20, (const void *)(*(_QWORD *)(*v8 + 296LL) + *(unsigned int *)(*v8 + 252LL)), v19);
        v21 = *((_QWORD *)a1 + 5);
        v22 = *(_QWORD *)(v21 + 296);
        *(_QWORD *)(v21 + 296) = v20;
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v19;
        xxxClientFreeWindowClassExtraBytes((__int64)a1, v22);
      }
      else
      {
        *(_QWORD *)(*v8 + 296LL) = v20;
        *(_DWORD *)(*v8 + 200LL) = v19;
      }
      v4 = v30;
      v5 = a3;
    }
    *(_WORD *)(*v8 + 42LL) = 672;
LABEL_34:
    **((_QWORD **)a1 + 35) = a1;
    switch ( v6 )
    {
      case 1u:
        zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 17) + 88LL));
        break;
      case 0x10u:
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
        xxxCancelCoolSwitch();
        break;
      case 0x14u:
      case 0x3Au:
        v28[0] = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v28;
        v28[1] = a1;
        HMLockObject(a1);
        xxxPaintSwitchWindow(a1);
        ThreadUnlock1(v26, v25, v27);
        return 0LL;
    }
    a4 = v4;
    a2 = v6;
    return xxxDefWindowProc((__int64 *)a1, a2, v5, a4);
  }
  return 0LL;
}
