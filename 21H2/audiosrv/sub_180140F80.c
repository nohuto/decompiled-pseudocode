/*
 * XREFs of sub_180140F80 @ 0x180140F80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     sub_1801426AC @ 0x1801426AC (sub_1801426AC.c)
 *     sub_180142FCC @ 0x180142FCC (sub_180142FCC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180140F80(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v11[264]; // [rsp+50h] [rbp-B0h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  memset(v11, 0, 0x418uLL);
  if ( a3 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 56LL))(a1, v11);
    if ( v6 >= 0 )
    {
      v6 = sub_1801426AC(a1, *(unsigned int *)(a2 + 4), &v9);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)qword_18019EE58 + 72LL))(qword_18019EE58, &v10);
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD, int, _DWORD))(*(_QWORD *)qword_18019EE58
                                                                                         + 64LL))(
                 qword_18019EE58,
                 0LL,
                 v11,
                 v11[130],
                 1,
                 0);
          if ( v6 >= 0 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD, int, int))(*(_QWORD *)qword_18019EE58
                                                                                        + 64LL))(
                   qword_18019EE58,
                   0LL,
                   &v11[131],
                   v11[261],
                   1,
                   1);
            if ( v6 >= 0 )
            {
              v7 = sub_180142FCC(&v10, v9, a2, a3);
              v6 = 0;
              if ( v7 < 0 )
                v6 = v7;
            }
          }
        }
      }
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    sub_1800ED08C(v10);
  return (unsigned int)v6;
}
