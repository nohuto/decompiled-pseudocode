/*
 * XREFs of sub_180042180 @ 0x180042180
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_180062844 @ 0x180062844 (sub_180062844.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180042180(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  signed __int32 v11; // eax
  int v12; // ebx
  const char *v13; // rbx
  __int64 v14; // r15
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v20; // rax
  _QWORD v21[4]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v22[4]; // [rsp+60h] [rbp-49h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v24; // [rsp+C0h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+27h] BYREF

  if ( *(_BYTE *)(a1 + 96) )
  {
    sub_18000FD48(v22);
    v20 = sub_18000FD48(v21);
    sub_180027FF4(pExceptionObject, v20, 38, (__int64)v22, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a2 != a2[1] || *((_DWORD *)a2 + 8) != *((_DWORD *)a2 + 6) )
  {
    v24 = 0LL;
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v4 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v11 + 1, v11) )
        {
          *(_QWORD *)&v24 = *(_QWORD *)(a1 + 72);
          v5 = *(_QWORD *)(a1 + 80);
          *((_QWORD *)&v24 + 1) = v5;
          goto LABEL_6;
        }
      }
    }
    v5 = *((_QWORD *)&v24 + 1);
LABEL_6:
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = *((_QWORD *)&v24 + 1);
    }
    v25 = 0LL;
    sub_180024694(v24, &v25);
    v6 = v25;
    v7 = (__int64 *)(a1 + 104);
    v8 = *(_QWORD *)(a1 + 104);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *a2;
    if ( *a2 == a2[1] )
      v10 = (unsigned int)(*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6));
    else
      v10 = a2[1] - v9;
    if ( v9 == a2[1] )
      v9 = a2[3];
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v6 + 104LL))(
            v6,
            v9,
            v10,
            0LL,
            a1 + 104);
    sub_1800265A4(v24, v12);
    if ( v12 < 0 )
    {
      sub_1801163DC(&unk_180208100, 5LL, "ERROR: Failed to create Geometry shader.\n");
    }
    else
    {
      *(_BYTE *)(a1 + 96) = 1;
      v13 = (const char *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 32) >= 0x10uLL )
        v13 = *(const char **)v13;
      v14 = *v7;
      if ( v14 )
      {
        if ( v13 )
          v15 = strnlen(v13, 0x7FFFFFFFuLL);
        else
          v15 = 0;
        (*(void (__fastcall **)(__int64, void *, _QWORD, const char *))(*(_QWORD *)v14 + 40LL))(
          v14,
          &unk_1801D6830,
          v15,
          v13);
      }
      v16 = a2[1];
      if ( *a2 == v16 )
        v17 = (unsigned int)(*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6));
      else
        v17 = v16 - *a2;
      sub_180062844(a1, v17, 8LL);
    }
    v18 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    if ( v5 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)(v5 + 8))
        || ((***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1)),
            _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 12LL))) )
      {
        v5 = *((_QWORD *)&v24 + 1);
      }
      else
      {
        v5 = *((_QWORD *)&v24 + 1);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
      }
    }
    if ( v5 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 8)) )
      {
        (***((void (__fastcall ****)(_QWORD))&v24 + 1))(*((_QWORD *)&v24 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v24 + 1) + 12LL)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v24 + 1) + 8LL))(*((_QWORD *)&v24 + 1));
      }
    }
  }
  return *(_BYTE *)(a1 + 96);
}
