/*
 * XREFs of sub_180048190 @ 0x180048190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180068114 @ 0x180068114 (sub_180068114.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180048190(__int64 a1, __int64 *a2)
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
    sub_18000FE28(v22);
    v20 = sub_18000FE28(v21);
    sub_18002D8C4(pExceptionObject, v20, 37, (__int64)v22, 0);
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
    sub_180029F64(v24, &v25);
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
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)v6 + 128LL))(
            v6,
            v9,
            v10,
            0LL,
            a1 + 104);
    sub_18002BE74(v24, v12);
    if ( v12 < 0 )
    {
      sub_18011BCAC(&unk_18020F1B8, 5LL, "ERROR: Failed to create Hull shader.\n");
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
          &unk_1801DCBC0,
          v15,
          v13);
      }
      v16 = a2[1];
      if ( *a2 == v16 )
        v17 = (unsigned int)(*((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6));
      else
        v17 = v16 - *a2;
      sub_180068114(a1, v17, 8LL);
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
