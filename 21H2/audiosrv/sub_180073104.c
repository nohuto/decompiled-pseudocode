/*
 * XREFs of sub_180073104 @ 0x180073104
 * Callers:
 *     sub_180073A90 @ 0x180073A90 (sub_180073A90.c)
 * Callees:
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     sub_18005F1D4 @ 0x18005F1D4 (sub_18005F1D4.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801360D8 @ 0x1801360D8 (sub_1801360D8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180073104(char **a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  char *v8; // rcx
  int v9; // eax
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  char *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  char v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+68h] [rbp+38h] BYREF

  v13 = a2;
  v15 = 0;
  LOBYTE(v13) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v13);
  if ( v6 < 0 )
    goto LABEL_16;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v15);
  if ( v6 < 0 )
    goto LABEL_16;
  if ( (_BYTE)v13 && !v15 )
  {
    v11[0] = 0LL;
    sub_1800461B8(v11);
    if ( ((*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 56LL))(a3, v11) < 0
       || (unsigned __int8)sub_1801360D8(v7, v11[0]))
      && sub_180036AC8((__int64)*a1) )
    {
      *((_DWORD *)*a1 + 46) = 3;
      v14 = 0;
      v9 = sub_18005F1D4(*a1, &v14);
      v8 = retaddr;
      if ( v9 < 0 )
        sub_18006D26C((int)retaddr, 1755, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v9);
      if ( v14 || !(*a1)[209] )
      {
        v8 = *a1;
        if ( (*a1)[208] )
          v6 = sub_180036510((ULONGLONG)v8, 1);
      }
    }
    sub_18005F1A8((__int64)v8, (__int64)"AppUninstall check result", v6);
    sub_1800461B8(v11);
  }
  if ( v6 < 0 )
LABEL_16:
    sub_18005F1A8(v5, (__int64)"AppUninstall check result", v6);
  return (unsigned int)v6;
}
