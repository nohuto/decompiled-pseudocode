/*
 * XREFs of sub_180020B70 @ 0x180020B70
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800127C0 @ 0x1800127C0 (sub_1800127C0.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void sub_180020B70()
{
  __int64 v0; // rdi
  void *v1; // r14
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r15d
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  char *v6; // rax
  _QWORD *v7; // rdi
  char *v8; // r13
  volatile signed __int32 *v9; // rbx
  __int128 v10; // xmm6
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm0
  HANDLE v14; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-11h] BYREF
  char v16; // [rsp+48h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+58h] [rbp+7h]
  __int128 v18; // [rsp+60h] [rbp+Fh]
  __int128 v19; // [rsp+70h] [rbp+1Fh]

  v0 = qword_18004FE78;
  v1 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v17 = v2;
  if ( *(_QWORD *)(v0 + 88) )
  {
    v3 = 0;
    v4 = 20LL * *(_QWORD *)(v0 + 88);
    if ( !is_mul_ok(*(_QWORD *)(v0 + 88), 0x14uLL) )
      v4 = -1LL;
    ProcessHeap = GetProcessHeap();
    v6 = (char *)HeapAlloc(ProcessHeap, 0, v4);
    v1 = v6;
    if ( v6 )
    {
      v7 = *(_QWORD **)(v0 + 72);
      if ( v7 )
      {
        v8 = v6;
        do
        {
          v9 = (volatile signed __int32 *)v7[2];
          v7 = (_QWORD *)*v7;
          if ( v9 )
            _InterlockedIncrement(v9 + 2);
          if ( (unsigned int)sub_1800127C0((__int64)v9) )
          {
            v10 = xmmword_180043368;
            v18 = xmmword_180043368;
            lpCriticalSection = (LPCRITICAL_SECTION)(v9 + 8);
            v16 = 0;
            sub_18001A330((__int64)&lpCriticalSection);
            v11 = (_QWORD *)*((_QWORD *)v9 + 9);
            if ( v11 )
            {
              while ( 1 )
              {
                v12 = v11[2];
                v11 = (_QWORD *)*v11;
                if ( !*(_DWORD *)(v12 + 448) )
                {
                  v13 = *(_OWORD *)(v12 + 552);
                  v19 = v13;
                  if ( v13 != 0 )
                    break;
                }
                if ( !v11 )
                  goto LABEL_16;
              }
              v10 = v13;
              v18 = v13;
            }
LABEL_16:
            if ( v16 )
            {
              LeaveCriticalSection(lpCriticalSection);
              v16 = 0;
            }
            *(_OWORD *)v8 = v10;
            v8[16] = (unsigned int)sub_1800113D0((__int64)v9) != 0;
            ++v3;
            v8 += 20;
          }
          if ( v9 && _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
          }
        }
        while ( v7 );
        if ( v3 )
          RtlPublishWnfStateData(0x4196032FA3BC0875LL, 0LL, v1, (unsigned int)(20 * v3), 0LL);
      }
    }
  }
  v14 = GetProcessHeap();
  HeapFree(v14, 0, v1);
  if ( v2 )
    LeaveCriticalSection(v2);
}
