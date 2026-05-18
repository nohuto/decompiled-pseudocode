/*
 * XREFs of sub_180036E70 @ 0x180036E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180038450 @ 0x180038450 (sub_180038450.c)
 *     sub_18003D134 @ 0x18003D134 (sub_18003D134.c)
 *     sub_1800625C8 @ 0x1800625C8 (sub_1800625C8.c)
 *     sub_1800626C0 @ 0x1800626C0 (sub_1800626C0.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1800CBBE0 @ 0x1800CBBE0 (sub_1800CBBE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 *     sub_1800CD5CC @ 0x1800CD5CC (sub_1800CD5CC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180036E70(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
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

  v8 = sub_1800625C8(*a2);
  v10 = sub_1800CBBF8(v9);
  sub_1800CBBE0(v10, v8, 4LL, 1LL);
  v24 = 0LL;
  sub_1800CD5CC(*a2, &v24, *(unsigned int *)(a1 + 88));
  v11 = sub_1800626C0(*a2);
  if ( v11 == 8 )
  {
    v12 = *(__int64 **)sub_18003D134(v24, v20);
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
      sub_18000FD48(v22);
      v19 = (unsigned int)sub_18000FD48(v21);
      sub_1800CB940((unsigned int)pExceptionObject, v19, 417, (unsigned int)v22, 0);
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
  result = sub_180038450(a1, v12, a3, a4);
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
