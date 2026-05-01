/*
 * XREFs of sub_180079F98 @ 0x180079F98
 * Callers:
 *     sub_1800804C0 @ 0x1800804C0 (sub_1800804C0.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_180026C20 @ 0x180026C20 (sub_180026C20.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_18002A414 @ 0x18002A414 (sub_18002A414.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800638D8 @ 0x1800638D8 (sub_1800638D8.c)
 *     sub_180076DB0 @ 0x180076DB0 (sub_180076DB0.c)
 *     sub_18007F5AC @ 0x18007F5AC (sub_18007F5AC.c)
 *     sub_18007FF78 @ 0x18007FF78 (sub_18007FF78.c)
 *     sub_18008089C @ 0x18008089C (sub_18008089C.c)
 */

__int64 __fastcall sub_180079F98(__int64 a1, __int64 a2, int a3, PVOID **a4, _DWORD *a5)
{
  int v5; // r12d
  __int64 v6; // rsi
  PVOID *v8; // rdi
  __int64 v9; // r13
  int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // r15
  unsigned __int64 i; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  bool v17; // r14
  int v18; // ebx
  _WORD *Heap; // rax
  void *v20; // r14
  int v21; // eax
  __int64 v22; // r15
  DWORD v23; // edi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  UINT32 v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h]
  PVOID **v36; // [rsp+68h] [rbp-98h]
  _DWORD *v37; // [rsp+70h] [rbp-90h]
  _QWORD *v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  char TlsValue[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+120h] [rbp+20h] BYREF
  WCHAR v42[136]; // [rsp+140h] [rbp+40h] BYREF

  v5 = a3;
  v6 = a2;
  v37 = a5;
  v36 = a4;
  v29 = a3;
  v35 = a2;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F7A3, 0LL, 0LL, 2u, &v41);
  sub_18000B7F8(TlsValue);
  v8 = 0LL;
  v31 = 0;
  v9 = 0LL;
  P = 0LL;
  if ( (v5 & 3) == v5 )
  {
    v11 = (_QWORD *)sub_18008089C(a1, v6);
    v38 = v11;
    if ( v11 )
    {
      v12 = v11[7];
      for ( i = sub_180025F18(v12, 1); ; i = sub_180027598(v12, v14) )
      {
        v14 = (_QWORD *)i;
        if ( !i )
          break;
        v15 = *(_QWORD *)(i + 88);
        sub_18002A414(v15);
        v16 = *(_QWORD *)(v15 + 328);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 776) == (_QWORD)v14;
        else
          v17 = 0;
        sub_18007FF78(v15);
        if ( !v17 )
        {
          if ( (v5 & 2) == 0
            || (sub_18002A414(v12), v18 = *(_DWORD *)(v12 + 344), sub_18007FF78(v12), (v18 & 0xE0) == 0) )
          {
            if ( (v5 & 1) == 0 || (unsigned __int8)sub_18007F5AC(v14) )
            {
              v28 = 130;
              v10 = sub_1800297B0((__int64)(v14 + 12), &v28, v42);
              if ( v10 < 0 )
              {
                v20 = 0LL;
                goto LABEL_28;
              }
              Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v28);
              v20 = Heap;
              if ( !Heap )
              {
                v8 = (PVOID *)P;
                v10 = -1073741801;
                goto LABEL_28;
              }
              sub_180026C20(Heap, v28, (__int64)v42);
              v21 = sub_1800638D8(&P, &v31, (int)v9 + 1);
              v8 = (PVOID *)P;
              v10 = v21;
              if ( v21 >= 0 )
              {
                *((_QWORD *)P + v9) = v20;
                v9 = (unsigned int)(v9 + 1);
                v10 = 0;
              }
              if ( v10 < 0 )
                goto LABEL_28;
              LOBYTE(v5) = v29;
            }
          }
        }
      }
      v10 = 0;
      v20 = 0LL;
      *v36 = v8;
      v8 = 0LL;
      v14 = 0LL;
      P = 0LL;
      *v37 = v9;
LABEL_28:
      if ( v8 )
      {
        if ( (_DWORD)v9 )
        {
          v22 = (unsigned int)v9;
          do
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v8++);
            --v22;
          }
          while ( v22 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      }
      sub_1800274E0(v38);
      if ( v14 )
        sub_1800274E0(v14);
      if ( v20 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
      v6 = v35;
      v5 = v29;
    }
    else
    {
      v10 = -1073741275;
    }
  }
  else
  {
    v10 = -1073741583;
  }
  v23 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v23, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v32 = v9;
    v33 = v5;
    v39 = v6;
    v34 = v10;
    sub_180076DB0(v24, byte_18009FD23, v25, v26, (__int64)&v34, (__int64)&v39, (__int64)&v33, (__int64)&v32);
  }
  return (unsigned int)v10;
}
