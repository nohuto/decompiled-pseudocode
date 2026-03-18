/*
 * XREFs of NtGdiSwapBuffers @ 0x1C02BCD20
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C027C144 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C027C2B8 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A7450 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

_BOOL8 __fastcall NtGdiSwapBuffers(HDC a1)
{
  __int64 v1; // rax
  BOOL v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  struct EWNDOBJ *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 DeviceHdev; // rax
  __int64 v10; // rax
  unsigned int (__fastcall *v11)(__int64, struct EWNDOBJ *, __int64, __int64); // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-29h] BYREF
  struct _RECTL v14; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v15[80]; // [rsp+48h] [rbp-9h] BYREF
  struct EWNDOBJ *v16; // [rsp+98h] [rbp+47h]

  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v1 = v13[0];
  if ( !v13[0] || !*(_QWORD *)(v13[0] + 496LL) )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_20;
  }
  v2 = 1;
  if ( *(_DWORD *)(v13[0] + 32LL) == 1 )
    goto LABEL_21;
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15, (struct XDCOBJ *)v13);
  if ( (v15[24] & 1) != 0 )
  {
    if ( v16 )
    {
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v16 + 4)) )
        goto LABEL_18;
      ++*(_DWORD *)(*(_QWORD *)(v13[0] + 496LL) + 92LL);
      v5 = v16;
      v6 = *(_QWORD *)(v13[0] + 48LL);
      v7 = (*(_QWORD *)(v13[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v13[0] + 496LL) != 0LL);
      v8 = v7;
      if ( (*(_DWORD *)(v6 + 40) & 0x20000) != 0 )
      {
        v14 = *(struct _RECTL *)(v13[0] + 1032LL);
        DeviceHdev = hdevFindDeviceHdev((_QWORD *)v6, &v14, v16);
        v4 = DeviceHdev;
        v8 = v7;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v13[0] + 496LL) == *(_QWORD *)(v6 + 2552) )
          {
            v10 = *(_QWORD *)(DeviceHdev + 2552);
            v3 = v10 + 24;
            v8 = (v10 + 24) & -(__int64)(v10 != 0);
          }
          else
          {
            v8 = v7;
          }
          v6 = v4;
        }
      }
      v11 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *, __int64, __int64))(v6 + 3136);
      if ( v11 )
      {
        if ( v11(v8, v5, v3, v4) )
          goto LABEL_18;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    v2 = 0;
  }
  else
  {
    v2 = XDCOBJ::bFullScreen((XDCOBJ *)v13) != 0;
  }
LABEL_18:
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v15);
LABEL_20:
  v1 = v13[0];
LABEL_21:
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  return v2;
}
