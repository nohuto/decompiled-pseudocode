/*
 * XREFs of sub_1800CA6A0 @ 0x1800CA6A0
 * Callers:
 *     sub_1800CA850 @ 0x1800CA850 (sub_1800CA850.c)
 * Callees:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB314 @ 0x1800CB314 (sub_1800CB314.c)
 */

__int64 __fastcall sub_1800CA6A0(__int64 a1, unsigned int a2, float *a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // rdi
  int v9; // ebx
  float *v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ebp
  float *v15; // rax
  __int64 v16; // rcx
  signed __int64 v17; // r15
  float v18; // xmm1_4
  int v19; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v6 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CB314(*((_QWORD *)off_18019C348 + 2), 25, (unsigned int)&unk_18015DEF0, a2, *(_QWORD *)(a1 + 728));
  }
  v9 = 0;
  if ( (_DWORD)v6 )
  {
    v10 = a3;
    while ( sub_18002EAA8(*v10) )
    {
      v10 = (float *)(v11 + 4);
      if ( v12 + 1 >= (unsigned int)v6 )
        goto LABEL_9;
    }
    sub_18004BD84((int)retaddr, 1269, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", -2147024809);
    return 2147942487LL;
  }
LABEL_9:
  v13 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  if ( (_DWORD)v6 != *(_DWORD *)(a1 + 960) )
  {
    sub_18004BD84((int)retaddr, 1276, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", -2147024809);
    if ( a1 != -808 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
    return 2147942487LL;
  }
  if ( (_DWORD)v6 )
  {
    v15 = *(float **)(a1 + 968);
    v16 = v6;
    v17 = (char *)a3 - (char *)v15;
    do
    {
      v18 = *(float *)((char *)v15 + v17);
      if ( *v15 != v18 )
      {
        *v15 = v18;
        ++v13;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  if ( a1 != -808 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  LOBYTE(v19) = 0;
  (*(void (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(
    a1 + 16,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v19,
    0LL);
  if ( a5 )
  {
    LOBYTE(v9) = v13 == 0;
    *a5 = v9;
  }
  return 0LL;
}
