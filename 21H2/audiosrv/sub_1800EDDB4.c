/*
 * XREFs of sub_1800EDDB4 @ 0x1800EDDB4
 * Callers:
 *     sub_1800E6D80 @ 0x1800E6D80 (sub_1800E6D80.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 *     sub_1800EA77C @ 0x1800EA77C (sub_1800EA77C.c)
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800EDDB4(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  LPCRITICAL_SECTION v5; // rcx
  int v6; // ebx
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  int v9; // eax
  char v10; // al
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  v15 = 0LL;
  result = sub_1800CD4DC(a2, &v15);
  if ( (int)result >= 0 && v15 )
  {
    v20 = 0LL;
    if ( (int)sub_1800CD548(&v15, &v20) >= 0 )
    {
      v4 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20);
      v16 = 0LL;
      sub_1800461B8(&v16);
      v6 = (*(__int64 (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION *, __int64 *))(*(_QWORD *)qword_18019EE50
                                                                                         + 24LL))(
             qword_18019EE50,
             v4,
             &v16);
      if ( v6 >= 0 )
      {
        (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v16 + 112LL))(v16, lpCriticalSection);
        v19 = 0LL;
        v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 192LL))(v20, &v19);
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019EE48 + 40LL))(qword_18019EE48, v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 280LL))(v20);
          v7 = sub_18006A18C(0x10uLL);
          v8 = v7;
          if ( v7 )
          {
            v7[1] = 0;
            *v7 = 0;
            *((_QWORD *)v7 + 1) = 0LL;
          }
          else
          {
            v8 = 0LL;
          }
          lpCriticalSection[1] = (LPCRITICAL_SECTION)v8;
          if ( (*(int (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v20 + 264LL))(v20, v8) >= 0 && *v8 == 1 )
          {
            v9 = sub_1800EA9AC(a1, &v20, *((_QWORD *)v8 + 1));
            if ( v9 < 0 )
              sub_18006D26C(
                (int)retaddr,
                2531,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
                v9);
          }
          if ( v8 )
            sub_1800EA77C((LPVOID *)v8);
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 208LL))(v20);
          v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, bool, _QWORD))(*(_QWORD *)qword_18019EE48 + 32LL))(
                 qword_18019EE48,
                 v20,
                 v19,
                 v10 == 0,
                 0LL);
        }
        sub_1800461B8(&v19);
        v5 = lpCriticalSection[0];
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
      }
      v11 = (_DWORD *)sub_180008448((__int64)v5, sub_1800B6240)[1];
      if ( *v11 > 4u )
      {
        LODWORD(v19) = v6;
        lpCriticalSection[0] = v4;
        sub_1800512F4((__int64)v11, byte_180168341, v12, v13, (void **)lpCriticalSection, (__int64)&v19);
      }
      sub_1800461B8(&v16);
    }
    result = sub_1800461B8(&v20);
  }
  v14 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return result;
}
