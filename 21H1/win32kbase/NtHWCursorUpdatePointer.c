/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C01545B0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetHDevFromMonitor @ 0x1C002F854 (UserGetHDevFromMonitor.c)
 *     EnterSharedCrit @ 0x1C008A1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C00B4E50 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 HDevFromMonitor; // rax
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // edx
  struct _LUID *v11; // rax
  int v12; // ebx
  bool v13; // sf
  ULONG64 v14; // rcx
  const void *v15; // rbx
  int v16; // edi
  size_t v17; // r15
  void *v18; // r14
  unsigned int v19; // edi
  struct _LUID *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  __int128 v24; // [rsp+38h] [rbp-80h]
  __int128 v25; // [rsp+48h] [rbp-70h]
  void *v26; // [rsp+58h] [rbp-60h]
  _DWORD v27[6]; // [rsp+60h] [rbp-58h] BYREF
  void *v28; // [rsp+78h] [rbp-40h]
  __int64 v29; // [rsp+80h] [rbp-38h]
  int v30; // [rsp+88h] [rbp-30h] BYREF
  __int64 v31; // [rsp+8Ch] [rbp-2Ch]
  int v32; // [rsp+94h] [rbp-24h]

  EnterSharedCrit(0LL, 1);
  v5 = (int)qword_1C0257100;
  if ( qword_1C0257100 )
    v5 = qword_1C0257100();
  if ( !v5 && !gbOSTestSigningEnabled )
  {
    UserSessionSwitchLeaveCrit(v4);
    return 3221225474LL;
  }
  if ( a1 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v24 = *(_OWORD *)a1;
    *(_QWORD *)&v25 = *(_QWORD *)(a1 + 16);
    HDevFromMonitor = UserGetHDevFromMonitor(v24);
    v8 = HDevFromMonitor;
    if ( HDevFromMonitor )
    {
      v23 = HDevFromMonitor;
      v9 = *(_DWORD *)(HDevFromMonitor + 40);
      if ( (v9 & 1) != 0
        && (v9 & 0x400) == 0
        && (v9 & 0x20000) == 0
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23) )
      {
        v31 = *((_QWORD *)&v24 + 1);
        v30 = *(_DWORD *)(*(_QWORD *)(v8 + 2576) + 256LL);
        v32 = v25 & 1;
        if ( !a2 )
        {
          v11 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
          v12 = ((__int64 (__fastcall *)(struct _LUID *, int *, _QWORD))qword_1C0252AC8)(v11, &v30, 0LL);
          v13 = v12 < 0;
LABEL_16:
          if ( v13 )
            v12 = -1073741823;
          goto LABEL_34;
        }
        v14 = MmUserProbeAddress;
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (__int128 *)MmUserProbeAddress;
        v24 = *a2;
        v25 = a2[1];
        if ( (_DWORD)v24 == 1
          && (v15 = (const void *)*((_QWORD *)&v25 + 1)) != 0LL
          && (v14 = 256LL, DWORD1(v24) <= 0x100)
          && (v16 = DWORD2(v24), DWORD2(v24) <= 0x100)
          && HIDWORD(v24) <= v10 )
        {
          v17 = (unsigned int)(DWORD2(v24) * HIDWORD(v24));
          v18 = PALLOCMEM2(v17, 0x706D7447u, 1);
          v26 = v18;
          if ( v18 )
          {
            if ( (unsigned __int64)v15 >= MmUserProbeAddress )
              v15 = (const void *)MmUserProbeAddress;
            memmove(v18, v15, v17);
            v27[5] = 0;
            v27[0] = 2;
            v27[1] = DWORD1(v24);
            v27[2] = v16;
            v27[3] = HIDWORD(v24);
            v27[4] = *(_DWORD *)(*(_QWORD *)(v8 + 2576) + 256LL);
            v28 = v18;
            v29 = v25;
            v20 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
            v12 = ((__int64 (__fastcall *)(struct _LUID *, int *, _DWORD *, _QWORD))qword_1C0252AD0)(
                    v20,
                    &v30,
                    v27,
                    0LL);
            Win32FreePool((__int64)v18, v21, v22);
            v13 = v12 < 0;
            goto LABEL_16;
          }
          v19 = -1073741823;
        }
        else
        {
          v19 = -1073741811;
        }
        UserSessionSwitchLeaveCrit(v14);
        return v19;
      }
    }
  }
  v12 = -1073741811;
LABEL_34:
  UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)v12;
}
