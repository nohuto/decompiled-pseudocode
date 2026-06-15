/*
 * XREFs of sub_180121080 @ 0x180121080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180121080(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // edx
  __int64 v9; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  *a2 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v12 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 24LL))(v5, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 91;
LABEL_5:
    sub_18004BD84(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\hybridpropertystore.cpp",
      v6);
    goto LABEL_7;
  }
  v9 = *(_QWORD *)(a1 + 24);
  v13 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 24LL))(v9, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 94;
    goto LABEL_5;
  }
  *a2 = v13 + v12;
  v7 = 0;
LABEL_7:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
