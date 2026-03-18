/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C014E260
 * Callers:
 *     <none>
 * Callees:
 *     UserGetHDevFromMonitor @ 0x1C003E0D4 (UserGetHDevFromMonitor.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C00A7CD0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 HDevFromMonitor; // rax
  __int64 v11; // rsi
  int v12; // eax
  struct _LUID *v13; // rax
  int v14; // ebx
  bool v15; // sf
  ULONG64 v16; // rcx
  const void *v17; // rbx
  int v18; // edi
  size_t v19; // r15
  void *v20; // r14
  unsigned int v21; // edi
  struct _LUID *v22; // rax
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
  v8 = (int)qword_1C0251140;
  if ( qword_1C0251140 )
    v8 = qword_1C0251140();
  if ( !v8 && !gbOSTestSigningEnabled )
  {
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
    return 3221225474LL;
  }
  if ( a1 )
  {
    if ( a1 >= MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v24 = *(_OWORD *)a1;
    *(_QWORD *)&v25 = *(_QWORD *)(a1 + 16);
    HDevFromMonitor = UserGetHDevFromMonitor(v24);
    v11 = HDevFromMonitor;
    if ( HDevFromMonitor )
    {
      v23 = HDevFromMonitor;
      v12 = *(_DWORD *)(HDevFromMonitor + 40);
      if ( (v12 & 1) != 0 )
      {
        v4 = 1024LL;
        if ( (v12 & 0x400) == 0 && (v12 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23) )
        {
          v31 = *((_QWORD *)&v24 + 1);
          v30 = *(_DWORD *)(*(_QWORD *)(v11 + 2576) + 256LL);
          v32 = v25 & 1;
          if ( !a2 )
          {
            v13 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
            v14 = ((__int64 (__fastcall *)(struct _LUID *, int *, _QWORD))qword_1C024CAA8)(v13, &v30, 0LL);
            v15 = v14 < 0;
LABEL_16:
            if ( v15 )
              v14 = -1073741823;
            goto LABEL_34;
          }
          v16 = MmUserProbeAddress;
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (__int128 *)MmUserProbeAddress;
          v24 = *a2;
          v25 = a2[1];
          if ( (_DWORD)v24 == 1
            && (v17 = (const void *)*((_QWORD *)&v25 + 1)) != 0LL
            && (v16 = 256LL, DWORD1(v24) <= 0x100)
            && (v18 = DWORD2(v24), DWORD2(v24) <= 0x100)
            && HIDWORD(v24) <= (unsigned int)v4 )
          {
            v19 = (unsigned int)(DWORD2(v24) * HIDWORD(v24));
            v20 = PALLOCMEM2(v19, 0x706D7447u, 1);
            v26 = v20;
            if ( v20 )
            {
              if ( (unsigned __int64)v17 >= MmUserProbeAddress )
                v17 = (const void *)MmUserProbeAddress;
              memmove(v20, v17, v19);
              v27[5] = 0;
              v27[0] = 2;
              v27[1] = DWORD1(v24);
              v27[2] = v18;
              v27[3] = HIDWORD(v24);
              v27[4] = *(_DWORD *)(*(_QWORD *)(v11 + 2576) + 256LL);
              v28 = v20;
              v29 = v25;
              v22 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v23);
              v14 = ((__int64 (__fastcall *)(struct _LUID *, int *, _DWORD *, _QWORD))qword_1C024CAB0)(
                      v22,
                      &v30,
                      v27,
                      0LL);
              Win32FreePool((__int64)v20);
              v15 = v14 < 0;
              goto LABEL_16;
            }
            v21 = -1073741823;
          }
          else
          {
            v21 = -1073741811;
          }
          UserSessionSwitchLeaveCrit(v16, v4, v6, v7);
          return v21;
        }
      }
    }
  }
  v14 = -1073741811;
LABEL_34:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return (unsigned int)v14;
}
