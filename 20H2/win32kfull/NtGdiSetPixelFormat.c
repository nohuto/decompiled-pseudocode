/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C02BB580
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01E837C (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286094 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6000 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02BB280 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r15
  ULONG v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v16)(__int64, _QWORD, __int64); // rax
  ULONG v17; // ecx
  _QWORD v19[2]; // [rsp+20h] [rbp-39h] BYREF
  struct _RECTL v20; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v21[32]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v22; // [rsp+60h] [rbp+7h] BYREF
  int v23; // [rsp+68h] [rbp+Fh]
  int v24; // [rsp+6Ch] [rbp+13h]
  __int16 v25; // [rsp+70h] [rbp+17h]
  __int64 v26; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v27; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v19, (HDC)a1);
  if ( !v19[0] || !*(_QWORD *)(v19[0] + 496LL) )
  {
    v17 = 6;
    goto LABEL_30;
  }
  v4 = XDCOBJ::ipfdDevMax((XDCOBJ *)v19);
  v8 = 1;
  if ( a2 < 1 || a2 > v4 )
  {
    v17 = 87;
LABEL_30:
    EngSetLastError(v17);
    v8 = 0;
    goto LABEL_31;
  }
  UserEnterUserCritSec(v6, v5, v7);
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  v25 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v19, 0);
  v9 = v19[0];
  v10 = 0LL;
  v27 = 0LL;
  if ( (*(_DWORD *)(v19[0] + 36LL) & 1) == 0 )
  {
LABEL_17:
    v12 = *(_QWORD *)(v9 + 48);
    v13 = (*(_QWORD *)(v9 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v9 + 496) != 0LL);
    v14 = v13;
    if ( (*(_DWORD *)(v12 + 40) & 0x20000) != 0 )
    {
      v20 = *(struct _RECTL *)(v9 + 1032);
      DeviceHdev = hdevFindDeviceHdev((_QWORD *)v12, &v20, 0LL);
      v14 = v13;
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)(v19[0] + 496LL) == *(_QWORD *)(v12 + 2552) )
          v14 = (*(_QWORD *)(DeviceHdev + 2552) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2552) != 0LL);
        v12 = DeviceHdev;
      }
    }
    if ( *(_QWORD *)(v12 + 3136) )
    {
      if ( (*(_DWORD *)(v14 + 88) & 0x200000) != 0 )
      {
        v16 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v12 + 3120);
        if ( v16 )
        {
          if ( v16(v14, (unsigned int)a2, v10) )
          {
            if ( gbWndobjUpdate )
            {
              gbWndobjUpdate = 0;
              vForceClientRgnUpdate();
            }
            goto LABEL_13;
          }
        }
      }
    }
    goto LABEL_12;
  }
  v26 = 0LL;
  if ( !(unsigned int)UserGetHwnd(a1, &v27, &v26) )
  {
    v11 = 2002;
LABEL_11:
    EngSetLastError(v11);
LABEL_12:
    v8 = 0;
    goto LABEL_13;
  }
  if ( !v26 )
  {
    v9 = v19[0];
    v10 = v27;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v26 + 188) != a2 )
  {
    v11 = 2000;
    goto LABEL_11;
  }
LABEL_13:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
  if ( v22 )
    DLODCOBJ::vUnlock((DLODCOBJ *)&v22);
  UserLeaveUserCritSec();
LABEL_31:
  if ( v19[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v19);
  return v8;
}
