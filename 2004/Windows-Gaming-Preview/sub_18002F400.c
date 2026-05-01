/*
 * XREFs of sub_18002F400 @ 0x18002F400
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F9B0 @ 0x18002F9B0 (sub_18002F9B0.c)
 *     sub_18002FBB8 @ 0x18002FBB8 (sub_18002FBB8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002F400(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  RTL_SRWLOCK *v5; // rsi
  int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v12; // [rsp+48h] [rbp+10h]

  *a2 = 0LL;
  v4 = a1[8] + 160LL;
  v12 = (_DWORD *)v4;
  v5 = (RTL_SRWLOCK *)(v4 + 8);
  if ( *(_DWORD *)v4 == 1 )
  {
    if ( SLODWORD(v5->Ptr) >= 0 )
      ++LODWORD(v5->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v4 + 8));
  }
  if ( *(_QWORD *)(a1[8] + 176LL) == a1[10] )
  {
    v6 = 0;
  }
  else
  {
    v6 = -2147483636;
    RoOriginateError(2147483660LL, 0LL);
  }
  v7 = a1[9];
  if ( v6 >= 0 )
  {
    if ( !v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      v11 = 0LL;
      v8 = sub_18002FBB8(v7, v7 + 8, &v11);
      v9 = v11;
      v6 = v8;
      if ( v8 >= 0 )
      {
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        *a2 = v9;
      }
      if ( v9 )
        sub_18002F9B0(v9);
    }
  }
  if ( v12 )
  {
    if ( *v12 == 1 )
      --LODWORD(v5->Ptr);
    else
      ReleaseSRWLockShared(v5);
  }
  return (unsigned int)v6;
}
