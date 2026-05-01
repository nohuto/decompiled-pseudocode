/*
 * XREFs of sub_18006C090 @ 0x18006C090
 * Callers:
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006C66C @ 0x18006C66C (sub_18006C66C.c)
 *     sub_18006C9B0 @ 0x18006C9B0 (sub_18006C9B0.c)
 */

__int64 __fastcall sub_18006C090(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // r14
  _QWORD *Heap; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // eax
  int v16; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-65h] BYREF
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19; // [rsp+40h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v21; // [rsp+70h] [rbp-29h]
  int v22; // [rsp+78h] [rbp-21h]
  int v23; // [rsp+7Ch] [rbp-1Dh]
  __int64 *v24; // [rsp+80h] [rbp-19h]
  int v25; // [rsp+88h] [rbp-11h]
  int v26; // [rsp+8Ch] [rbp-Dh]
  __int64 *v27; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  int *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]

  v7 = -1LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x78uLL);
  v10 = Heap;
  if ( Heap )
  {
    sub_18006C66C(Heap);
    sub_18006C9B0(a1, a2, a3, v10);
    v7 = v10[4];
    *a4 = v10;
    v11 = 0;
  }
  else
  {
    v11 = -1073741801;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v14 = *(_DWORD *)(a2 + 56);
    v32 = 0;
    v29 = 0;
    v26 = 0;
    v23 = 0;
    v16 = v14;
    v18 = *(_QWORD *)(a3 + 32);
    v30 = &v16;
    v27 = &v18;
    v24 = &v19;
    v21 = &v17;
    v31 = v13;
    v28 = v13 + 4;
    v25 = v13 + 4;
    v22 = v13;
    v19 = v7;
    v17 = v11;
    sub_18002E278(v12, (unsigned __int8 *)dword_18009C53C, 0LL, 0LL, 6u, &v20);
  }
  return v11;
}
