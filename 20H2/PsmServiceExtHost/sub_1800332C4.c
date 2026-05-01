/*
 * XREFs of sub_1800332C4 @ 0x1800332C4
 * Callers:
 *     sub_180032CE4 @ 0x180032CE4 (sub_180032CE4.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_1800639EC @ 0x1800639EC (sub_1800639EC.c)
 */

__int64 __fastcall sub_1800332C4(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4)
{
  PVOID Heap; // rsi
  _DWORD *v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // r12d
  __int64 v10; // rbx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  int v19; // r9d
  unsigned int v20; // [rsp+40h] [rbp-59h] BYREF
  PVOID P; // [rsp+48h] [rbp-51h] BYREF
  int v22; // [rsp+50h] [rbp-49h]
  unsigned int v23; // [rsp+54h] [rbp-45h] BYREF
  int v24; // [rsp+58h] [rbp-41h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp-39h]
  unsigned int *v26; // [rsp+68h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+70h] [rbp-29h] BYREF
  int *v28; // [rsp+90h] [rbp-9h]
  int v29; // [rsp+98h] [rbp-1h]
  int v30; // [rsp+9Ch] [rbp+3h]

  v25 = a3;
  v26 = a4;
  v22 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( Heap )
  {
    v23 = a2;
    P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * a2);
    v7 = P;
    if ( P )
    {
      v8 = 0;
      v9 = 0;
      if ( a2 )
      {
        while ( 2 )
        {
          v10 = *(_QWORD *)(a1 + 48);
          v11 = v22;
          while ( 1 )
          {
            v20 = v11;
            v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, PVOID, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 40LL) + 72LL))(
                    v10 + 552,
                    *(unsigned int *)(v10 + 620),
                    v10 + 88,
                    *(unsigned int *)(v10 + 624),
                    *(_QWORD *)(v10 + 32),
                    Heap,
                    &v20);
            if ( v12 >= 0 )
              break;
            if ( v12 != -2147483643 )
            {
              if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
              {
                v30 = 0;
                v28 = &v24;
                v24 = v19;
                v29 = 4;
                sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009C372, 0LL, 0LL, 3u, &v27);
              }
LABEL_25:
              v7 = P;
              goto LABEL_11;
            }
            Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v20);
            if ( !Heap )
            {
              v17 = -1073741801;
              goto LABEL_14;
            }
            v11 = v20;
            v22 = v20;
          }
          v13 = v20;
          if ( !v20 )
            goto LABEL_25;
          if ( v23 - v8 < v20 )
          {
            v17 = sub_1800639EC(&P, &v23, v20 + v8, (unsigned int)v12);
            if ( v17 )
              goto LABEL_13;
            v13 = v20;
          }
          v14 = 0LL;
          if ( !v13 )
            goto LABEL_25;
          v7 = P;
          do
          {
            v15 = *((_DWORD *)Heap + 2 * v14);
            v14 = (unsigned int)(v14 + 1);
            v16 = v8++;
            v16 *= 2LL;
            v7[2 * v16 + 2] = v15;
            *(_QWORD *)&v7[2 * v16] = a1;
          }
          while ( (unsigned int)v14 < v20 );
LABEL_11:
          ++v9;
          a1 += 64LL;
          if ( v9 < a2 )
            continue;
          break;
        }
      }
      P = 0LL;
      v17 = 0;
      *v25 = v7;
      *v26 = v8;
    }
    else
    {
      v17 = -1073741801;
    }
LABEL_13:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_14:
    if ( P )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v17;
}
