/*
 * XREFs of sub_180019A90 @ 0x180019A90
 * Callers:
 *     sub_180018CF0 @ 0x180018CF0 (sub_180018CF0.c)
 *     sub_180018D20 @ 0x180018D20 (sub_180018D20.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18001A7FC @ 0x18001A7FC (sub_18001A7FC.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

__int64 __fastcall sub_180019A90(__int64 a1, unsigned int a2, char a3)
{
  HSTRING v3; // rdi
  _DWORD *v4; // rbx
  RTL_SRWLOCK *v6; // r14
  unsigned int v9; // eax
  int v10; // ebp
  int v11; // r8d
  __int64 v12; // rdx
  void *v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  char v18; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (_DWORD *)(a1 + 72);
  v6 = (RTL_SRWLOCK *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    a2 = v9 - 1;
  if ( a2 >= v9 )
  {
    v10 = -2147483637;
LABEL_14:
    RoOriginateError((unsigned int)v10, 0LL);
    goto LABEL_20;
  }
  sub_18000DA2C((__int64)&v18);
  v10 = 0;
  v3 = *(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
  WindowsDeleteString(0LL);
  v11 = *(_DWORD *)(a1 + 40);
  if ( a2 < v11 - 1 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    v13 = (void *)(v12 + 8LL * a2);
    if ( 8LL * (v11 - a2 - 1) )
    {
      if ( !v13 || !(v12 + 8LL * (a2 + 1)) )
      {
        *(_DWORD *)o__errno(v13, v12) = 22;
        o__invalid_parameter_noinfo();
        v10 = -2147418113;
        goto LABEL_14;
      }
      memmove(v13, (const void *)(v12 + 8LL * (a2 + 1)), 8LL * (v11 - a2 - 1));
      v11 = *(_DWORD *)(a1 + 40);
    }
  }
  ++*(_DWORD *)(a1 + 88);
  v14 = v11 - 1;
  v15 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = v14;
  v16 = v15 / 3;
  if ( v14 < v15 / 3 )
  {
    if ( v15 - 1 < v15 - v16 )
      v16 = 1;
    v10 = sub_18001A7FC(a1, v15 - v16);
  }
LABEL_20:
  if ( v4 )
  {
    if ( *v4 == 1 )
      LODWORD(v6->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v6);
  }
  WindowsDeleteString(v3);
  if ( v10 >= 0 )
    return (unsigned int)sub_18000D958();
  return (unsigned int)v10;
}
