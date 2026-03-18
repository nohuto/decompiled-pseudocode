/*
 * XREFs of ?GetStats@CHolographicInteropTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180299C40
 * Callers:
 *     ?GetStats@CHolographicInteropTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x18010AC50 (-GetStats@CHolographicInteropTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMP.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CHolographicInteropTarget::GetStats(
        CHolographicInteropTarget *this,
        struct tagCOMPOSITION_TARGET_ID *a2,
        struct tagCOMPOSITION_TARGET_STATS *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  LONGLONG v11; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  *(_QWORD *)a2 = *((_QWORD *)this - 15);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this - 15);
  *((_DWORD *)a2 + 4) = -6;
  *((_DWORD *)a2 + 5) = -6;
  *((_DWORD *)a2 + 6) = (_DWORD)this - 288;
  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = *((_QWORD *)this - 12);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v5 = *((_QWORD *)this - 16);
  if ( v5
    && (v6 = *(_QWORD *)(v5 + 40)) != 0
    && (v7 = *(_QWORD *)(v6 + 32)) != 0
    && (*(int (__fastcall **)(__int64, __int128 *, _DWORD *))(*(_QWORD *)v7 + 24LL))(v7, &v14, v13) >= 0 )
  {
    v8 = g_qpcFrequency.QuadPart * v13[1] / v13[0];
    v9 = v15;
    *((_QWORD *)a3 + 2) = v8;
    *((_DWORD *)a3 + 6) = *((_DWORD *)this - 26);
    *((_DWORD *)a3 + 13) = v9;
    *((_DWORD *)a3 + 7) = v9 + 1;
    *((_DWORD *)a3 + 8) = v9 + 1;
    v10 = *((_QWORD *)&v15 + 1);
    v11 = *((_QWORD *)&v15 + 1) + v8;
    *((_DWORD *)a3 + 14) = v9;
    *((_QWORD *)a3 + 5) = v11;
    *((_DWORD *)a3 + 12) = v14;
    *((_QWORD *)a3 + 8) = v10;
  }
  else
  {
    *((_QWORD *)a3 + 2) = 0LL;
    *((_DWORD *)a3 + 6) = 0;
    *((_DWORD *)a3 + 7) = 0;
    *((_DWORD *)a3 + 8) = 0;
    *((_QWORD *)a3 + 5) = 0LL;
    *((_DWORD *)a3 + 12) = 0;
    *((_DWORD *)a3 + 13) = 0;
    *((_DWORD *)a3 + 14) = 0;
    *((_QWORD *)a3 + 8) = 0LL;
  }
  return 1;
}
