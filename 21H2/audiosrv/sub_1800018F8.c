/*
 * XREFs of sub_1800018F8 @ 0x1800018F8
 * Callers:
 *     sub_180001830 @ 0x180001830 (sub_180001830.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800018F8(__int64 a1, unsigned int a2, float *a3, _DWORD *a4)
{
  int v6; // ebx
  unsigned int v7; // eax
  float *v8; // rcx
  int v9; // edi
  float *v10; // rax
  signed __int64 v11; // r8
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v15; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != *(_DWORD *)(a1 + 92) )
  {
    v15 = 934LL;
LABEL_17:
    sub_18004BD84(retaddr, v15, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", 2147942487LL);
    return 2147942487LL;
  }
  v6 = 0;
  v7 = 0;
  if ( a2 )
  {
    v8 = a3;
    while ( *v8 >= 0.0 && *v8 <= 1.0 )
    {
      ++v7;
      ++v8;
      if ( v7 >= a2 )
        goto LABEL_7;
    }
    v15 = 938LL;
    goto LABEL_17;
  }
LABEL_7:
  v9 = 0;
  if ( a2 )
  {
    v10 = *(float **)(a1 + 112);
    v11 = (char *)a3 - (char *)v10;
    v12 = a2;
    do
    {
      v13 = *(float *)((char *)v10 + v11);
      if ( *v10 != v13 )
      {
        *v10 = v13;
        ++v9;
      }
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, 0LL, 0LL);
  if ( a4 )
  {
    LOBYTE(v6) = v9 == 0;
    *a4 = v6;
  }
  return 0LL;
}
