/*
 * XREFs of sub_180020668 @ 0x180020668
 * Callers:
 *     sub_1800208B0 @ 0x1800208B0 (sub_1800208B0.c)
 *     PbmReportAppInteractivityChange @ 0x1800230D0 (PbmReportAppInteractivityChange.c)
 * Callees:
 *     sub_1800019A8 @ 0x1800019A8 (sub_1800019A8.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180011444 @ 0x180011444 (sub_180011444.c)
 *     sub_180011B94 @ 0x180011B94 (sub_180011B94.c)
 *     sub_180011D1C @ 0x180011D1C (sub_180011D1C.c)
 *     sub_18001DBC4 @ 0x18001DBC4 (sub_18001DBC4.c)
 *     sub_18002C5AC @ 0x18002C5AC (sub_18002C5AC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180020668(__int64 a1, const WCHAR *a2, __int64 a3, int a4, unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  int v14; // ebx
  char *v15; // r14
  __int64 v16; // rdi
  int v17; // eax
  int v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+58h] [rbp-18h] BYREF
  PVOID pv; // [rsp+A0h] [rbp+30h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v22[1] = (__int64)v9;
  v19 = 0;
  v20 = 0LL;
  v10 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v10 > 4u )
  {
    LODWORD(pv) = a4 == 0;
    v21 = a3;
    v22[0] = (__int64)a2;
    sub_1800019A8((__int64)v10, (unsigned __int8 *)dword_18004638C, v11, v12, (void **)v22, (__int64)&v21, (__int64)&pv);
  }
  v13 = 1;
  v14 = sub_18001DBC4(a1, a2, a3, a5, (volatile signed __int32 **)&pv, 1, &v19);
  if ( v14 < 0 )
    goto LABEL_24;
  EnterCriticalSection(v9);
  v22[0] = (__int64)v9;
  v15 = (char *)pv;
  if ( a4 == 2
    && *((_DWORD *)pv + 52)
    && !(unsigned int)sub_1800113D0((__int64)pv)
    && (unsigned int)sub_180011444((__int64)v15) )
  {
    if ( v9 )
      LeaveCriticalSection(v9);
  }
  else
  {
    if ( v9 )
      LeaveCriticalSection(v9);
    v13 = 0;
  }
  v14 = sub_18002C5AC((_DWORD)a2, a3, a4 == 0, a5, (__int64)&v20);
  if ( v14 < 0 )
    goto LABEL_20;
  if ( v13 )
  {
    v16 = v20;
    v17 = sub_180011B94(v15, v20);
    goto LABEL_18;
  }
  v14 = sub_180011D1C((__int64)v15);
  if ( v14 < 0 )
  {
LABEL_20:
    v16 = v20;
    goto LABEL_21;
  }
  v16 = v20;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_18:
  v14 = v17;
  if ( v17 >= 0 )
    v16 = 0LL;
LABEL_21:
  if ( v16 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1LL);
  if ( v14 < 0 )
  {
LABEL_24:
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x3Bu, &stru_1800445C8, v14);
    }
    sub_180005724("CApplicationManager::ProcessInteractivityNotification", 3238, v14);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)v14;
}
