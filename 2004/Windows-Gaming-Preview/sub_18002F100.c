/*
 * XREFs of sub_18002F100 @ 0x18002F100
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002F9B0 @ 0x18002F9B0 (sub_18002F9B0.c)
 *     sub_18002FBB8 @ 0x18002FBB8 (sub_18002FBB8.c)
 *     sub_180030348 @ 0x180030348 (sub_180030348.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002F100(_QWORD *a1, unsigned int a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // edi
  _QWORD *v6; // r15
  __int64 v8; // rax
  RTL_SRWLOCK *v9; // rsi
  int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned int *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+10h]
  unsigned int *v22; // [rsp+88h] [rbp+20h]

  v22 = a4;
  v21 = a2;
  v4 = 0;
  v5 = a2;
  *a4 = 0;
  v6 = a3;
  if ( a2 )
    memset(a3, 0, 8LL * a2);
  v8 = a1[8] + 160LL;
  v19 = (_DWORD *)v8;
  v9 = (RTL_SRWLOCK *)(v8 + 8);
  if ( *(_DWORD *)v8 == 1 )
  {
    if ( SLODWORD(v9->Ptr) >= 0 )
      ++LODWORD(v9->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(v8 + 8));
  }
  if ( *(_QWORD *)(a1[8] + 176LL) == a1[10] )
  {
    v10 = 0;
  }
  else
  {
    v10 = -2147483636;
    RoOriginateError(2147483660LL, 0LL);
  }
  v11 = a1[9];
  v12 = 0LL;
  v18 = v11;
  if ( v10 >= 0 )
  {
    while ( (unsigned int)v12 < v5 && v11 )
    {
      v20 = 0LL;
      v13 = sub_18002FBB8(v11, v11 + 8, &v20);
      v14 = v20;
      v10 = v13;
      if ( v13 >= 0 )
      {
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v6[v12] = v14;
        sub_180030348(a1[8] + 72LL, &v18);
        v11 = v18;
        ++v4;
        if ( !v18 )
        {
          if ( v14 )
          {
            v20 = 0LL;
            sub_18002F9B0(v14);
          }
          break;
        }
      }
      if ( v14 )
      {
        v20 = 0LL;
        sub_18002F9B0(v14);
      }
      v5 = v21;
      v12 = (unsigned int)(v12 + 1);
      if ( v10 < 0 )
        goto LABEL_20;
    }
    if ( v10 >= 0 )
    {
      v16 = v22;
      a1[9] = v11;
      *v16 = v4;
      goto LABEL_23;
    }
LABEL_20:
    if ( v4 )
    {
      v15 = v4;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
        *v6++ = 0LL;
        --v15;
      }
      while ( v15 );
    }
  }
LABEL_23:
  if ( v19 )
  {
    if ( *v19 == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  return (unsigned int)v10;
}
