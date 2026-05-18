/*
 * XREFs of sub_18003C740 @ 0x18003C740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18003DD20 @ 0x18003DD20 (sub_18003DD20.c)
 *     sub_180042A04 @ 0x180042A04 (sub_180042A04.c)
 *     sub_180067E98 @ 0x180067E98 (sub_180067E98.c)
 *     sub_180067F90 @ 0x180067F90 (sub_180067F90.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_1800D14B0 @ 0x1800D14B0 (sub_1800D14B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 *     sub_1800D2E9C @ 0x1800D2E9C (sub_1800D2E9C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003C740(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 result; // rax
  volatile signed __int32 *v16; // rbx
  signed __int32 v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  _QWORD v20[2]; // [rsp+30h] [rbp-89h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v24; // [rsp+C0h] [rbp+7h] BYREF

  v8 = sub_180067E98(*a2);
  v10 = sub_1800D14C8(v9);
  sub_1800D14B0(v10, v8, 4LL, 1LL);
  v24 = 0LL;
  sub_1800D2E9C(*a2, &v24, *(unsigned int *)(a1 + 88));
  v11 = sub_180067F90(*a2);
  if ( v11 == 8 )
  {
    v12 = *(__int64 **)sub_180042A04(v24, v20);
    v14 = (__int64 *)v20[0];
    if ( v20[0] )
    {
      v20[0] = 0LL;
      v13 = *v14;
      goto LABEL_7;
    }
  }
  else
  {
    if ( v11 != 11 )
    {
      sub_18000FE28(v22);
      v19 = (unsigned int)sub_18000FE28(v21);
      sub_1800D1210((unsigned int)pExceptionObject, v19, 417, (unsigned int)v22, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v12 = *(__int64 **)(v24 + 104);
    v20[1] = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
      v13 = *v12;
      v14 = v12;
LABEL_7:
      (*(void (__fastcall **)(__int64 *))(v13 + 16))(v14);
    }
  }
  result = sub_18003DD20(a1, v12, a3, a4);
  v16 = (volatile signed __int32 *)*((_QWORD *)&v24 + 1);
  if ( *((_QWORD *)&v24 + 1) )
  {
    v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 8LL), 0xFFFFFFFF);
    v18 = v17 == 1;
    result = (unsigned int)(v17 - 1);
    if ( v18 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
