/*
 * XREFs of sub_180011ED4 @ 0x180011ED4
 * Callers:
 *     sub_18001EA68 @ 0x18001EA68 (sub_18001EA68.c)
 * Callees:
 *     sub_1800168A0 @ 0x1800168A0 (sub_1800168A0.c)
 *     sub_18001A074 @ 0x18001A074 (sub_18001A074.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180011ED4(__int64 a1)
{
  unsigned int v2; // r12d
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // r13d
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rsi
  _DWORD *v9; // r15
  __int64 v10; // r8
  unsigned int v11; // r14d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+80h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v14 = 0;
  sub_18001A330(&lpCriticalSection);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 72);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        goto LABEL_19;
      v4 = v3[2];
      v3 = (_QWORD *)*v3;
      if ( !*(_DWORD *)(v4 + 448) )
      {
        v5 = 0;
        if ( (unsigned int)sub_1800168A0(v4 + 16) )
        {
          v6 = 0;
          v7 = *(_DWORD *)(v4 + 304);
          if ( v7 > 0 )
            break;
        }
      }
    }
    v8 = 0LL;
    do
    {
      if ( v8 < 0 || v6 >= v7 )
      {
        sub_18001A074();
        JUMPOUT(0x18001203BLL);
      }
      v9 = *(_DWORD **)(v8 + *(_QWORD *)(v4 + 296));
      v10 = *(_QWORD *)(v8 + *(_QWORD *)(v4 + 288));
      v15 = v10;
      v11 = 0;
      while ( !*v9 )
      {
LABEL_13:
        ++v11;
        ++v9;
        if ( v11 >= 0x15 )
          goto LABEL_16;
      }
      if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _DWORD, bool))(*(_QWORD *)qword_18004FEE8
                                                                                           + 32LL))(
              qword_18004FEE8,
              *(unsigned int *)(v4 + 196),
              v10,
              v11,
              0,
              *(_DWORD *)(*(_QWORD *)(v4 + 256) + 208LL) != 0) )
      {
        v10 = v15;
        goto LABEL_13;
      }
      v5 = 1;
LABEL_16:
      ++v6;
      v8 += 8LL;
      v7 = *(_DWORD *)(v4 + 304);
    }
    while ( v6 < v7 );
  }
  while ( !v5 );
  v2 = 1;
LABEL_19:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
