/*
 * XREFs of sub_18003667C @ 0x18003667C
 * Callers:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_180030370 @ 0x180030370 (sub_180030370.c)
 *     sub_180036608 @ 0x180036608 (sub_180036608.c)
 *     sub_1800368C0 @ 0x1800368C0 (sub_1800368C0.c)
 *     sub_18003C514 @ 0x18003C514 (sub_18003C514.c)
 *     sub_1800849A0 @ 0x1800849A0 (sub_1800849A0.c)
 *     sub_180084A44 @ 0x180084A44 (sub_180084A44.c)
 *     sub_180084A94 @ 0x180084A94 (sub_180084A94.c)
 *     sub_180084B3C @ 0x180084B3C (sub_180084B3C.c)
 *     sub_180084BDC @ 0x180084BDC (sub_180084BDC.c)
 *     sub_180084C2C @ 0x180084C2C (sub_180084C2C.c)
 *     sub_180084CE4 @ 0x180084CE4 (sub_180084CE4.c)
 *     sub_180084D9C @ 0x180084D9C (sub_180084D9C.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180085084 @ 0x180085084 (sub_180085084.c)
 */

char __fastcall sub_18003667C(char *P, __int64 a2, int a3)
{
  __int64 v3; // r13
  char *v4; // rsi
  int *v5; // rdi
  int v8; // r15d
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  BOOL v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v17; // [rsp+30h] [rbp-49h] BYREF
  int v18; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-39h] BYREF
  UUID *v20; // [rsp+60h] [rbp-19h]
  int v21; // [rsp+68h] [rbp-11h]
  int v22; // [rsp+6Ch] [rbp-Dh]
  int *v23; // [rsp+70h] [rbp-9h]
  int v24; // [rsp+78h] [rbp-1h]
  int v25; // [rsp+7Ch] [rbp+3h]
  bool *v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+88h] [rbp+Fh]
  int v28; // [rsp+8Ch] [rbp+13h]

  v3 = *(int *)P;
  v4 = P + 8;
  v5 = (int *)P;
  v8 = 1;
  RtlAcquireSRWLockExclusive(P + 8);
  v9 = (_QWORD *)(a2 + 8);
  *((_DWORD *)v4 + 2) = GetCurrentThreadId();
  v10 = *v9;
  if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9) )
    __fastfail(3u);
  *v11 = v10;
  v12 = v5 + 6;
  *(_QWORD *)(v10 + 8) = v11;
  v9[1] = v9;
  *v9 = v9;
  v13 = *v12 == (_QWORD)v12;
  if ( (_QWORD *)*v12 == v12 )
  {
    if ( !a3 )
    {
      sub_180085084(v4);
      v8 = 0;
      RtlAcquireSRWLockExclusive(&unk_1800B3D60);
      dword_1800B3D68 = GetCurrentThreadId();
      if ( *((int **)&unk_1800B3D60 + v3 + 2) != v5 )
      {
        LOBYTE(v11) = sub_180085084(&unk_1800B3D60);
        v5 = 0LL;
        goto LABEL_15;
      }
      RtlAcquireSRWLockExclusive(v4);
      *((_DWORD *)v4 + 2) = GetCurrentThreadId();
      v13 = *v12 == (_QWORD)v12;
    }
    if ( v13 )
    {
      v14 = *v5;
      if ( *((int **)&unk_1800B3D60 + v14 + 2) == v5 )
        *((_QWORD *)&unk_1800B3D60 + v14 + 2) = 0LL;
    }
    LOBYTE(v11) = sub_180085084(v4);
    v8 = 0;
    if ( !a3 )
      LOBYTE(v11) = sub_180085084(&unk_1800B3D60);
    if ( v13 )
    {
      sub_180036520((__int64)v5);
      LOBYTE(v11) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
  }
LABEL_15:
  if ( (unsigned int)dword_1800B3250 > 5 )
  {
    LOBYTE(v11) = sub_180010470((__int64)&dword_1800B3250, 8LL);
    if ( (_BYTE)v11 )
    {
      v22 = 0;
      v25 = 0;
      v20 = &Uuid;
      v21 = 16;
      v17 = v13;
      v23 = &v18;
      v28 = 0;
      v26 = &v17;
      v18 = v3;
      v24 = 4;
      v27 = 1;
      LOBYTE(v11) = sub_18002E278(v15, (unsigned __int8 *)dword_1800A3538, 0LL, 0LL, 5u, &v19);
    }
  }
  if ( v8 )
    LOBYTE(v11) = sub_180085084(v5 + 2);
  return (char)v11;
}
