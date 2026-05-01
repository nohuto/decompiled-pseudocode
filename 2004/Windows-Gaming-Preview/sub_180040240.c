/*
 * XREFs of sub_180040240 @ 0x180040240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800032A0 @ 0x1800032A0 (sub_1800032A0.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180040240(__int64 a1, unsigned int a2, void *a3, DWORD *a4)
{
  int v8; // edx
  unsigned int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  bool v14; // cf
  __int64 v15; // r9
  DWORD NumberOfBytesRead; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-48h]
  _BYTE v20[8]; // [rsp+48h] [rbp-40h] BYREF
  LONG lDistanceToMove; // [rsp+50h] [rbp-38h]
  DWORD v22; // [rsp+54h] [rbp-34h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v18 = -2LL;
  if ( !a3 )
  {
    v8 = 567;
LABEL_3:
    v9 = -2147467261;
LABEL_4:
    sub_180003268(
      retaddr,
      v8,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v9);
    return v9;
  }
  if ( !a4 )
  {
    v8 = 568;
    goto LABEL_3;
  }
  if ( a2 >= *(_DWORD *)(a1 + 800) )
  {
    v9 = -2147483637;
    v8 = 570;
    goto LABEL_4;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 760);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 760));
  v19 = v10;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)a1 + 88LL))(a1, a2, v20);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = v11;
    v13 = 576;
LABEL_20:
    sub_180003268(
      retaddr,
      v13,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v12);
    goto LABEL_22;
  }
  v14 = *a4 < v22;
  *a4 = v22;
  if ( v14 )
  {
    v9 = -2147024774;
    goto LABEL_22;
  }
  if ( SetFilePointer(*(HANDLE *)(a1 + 24), lDistanceToMove, 0LL, 0) == -1 )
  {
    v9 = -2147418113;
    v13 = 586;
LABEL_19:
    v12 = v9;
    goto LABEL_20;
  }
  if ( !ReadFile(*(HANDLE *)(a1 + 24), a3, *a4, &NumberOfBytesRead, 0LL) )
  {
    v9 = sub_1800032A0(
           retaddr,
           588,
           (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
           v15);
    goto LABEL_22;
  }
  if ( NumberOfBytesRead != *a4 )
  {
    v9 = -2147024883;
    v13 = 589;
    goto LABEL_19;
  }
  v9 = 0;
LABEL_22:
  if ( v10 )
    LeaveCriticalSection(v10);
  return v9;
}
