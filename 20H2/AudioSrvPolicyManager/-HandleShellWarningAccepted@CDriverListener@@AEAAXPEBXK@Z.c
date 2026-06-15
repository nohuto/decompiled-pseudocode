/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x18002D9A0
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18002DC30 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 *v7; // [rsp+20h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  GUID v10; // [rsp+50h] [rbp-20h] BYREF
  __int128 v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+80h] [rbp+10h] BYREF
  int v13; // [rsp+98h] [rbp+28h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v5 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( *((_DWORD *)this + 124) == 1 )
  {
    *((_DWORD *)this + 124) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        LOBYTE(v5) = *a2 == 1;
        v13 = v5;
        v6 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
               g_DeviceEnumerator,
               (char *)this + 12,
               &v8);
        if ( v6 < 0 )
          goto LABEL_9;
        v7 = &v9;
        v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v8 + 24LL))(
               v8,
               &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
               1LL);
        if ( v6 < 0
          || (HIDWORD(v11) = 0,
              v10 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000,
              *(_QWORD *)&v11 = 0x200000039LL,
              DWORD2(v11) = *((unsigned __int16 *)this + 246),
              LODWORD(v7) = 4,
              v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, int *, __int64 *, int *))(*(_QWORD *)v9 + 24LL))(
                     v9,
                     &v10,
                     32LL,
                     &v13,
                     v7,
                     &v12),
              v6 < 0) )
        {
LABEL_9:
          a2 = &WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_5b37b8f233753825c31d2e3c8b373342_Traceguids, v6);
          }
        }
        v5 = v9;
        v4 = v8;
      }
    }
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = v8;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 16LL))(v4, a2);
}
