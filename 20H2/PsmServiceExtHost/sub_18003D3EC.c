/*
 * XREFs of sub_18003D3EC @ 0x18003D3EC
 * Callers:
 *     sub_18003D3D0 @ 0x18003D3D0 (sub_18003D3D0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_18002E4C8 @ 0x18002E4C8 (sub_18002E4C8.c)
 *     sub_18002EA88 @ 0x18002EA88 (sub_18002EA88.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_18002FDF4 @ 0x18002FDF4 (sub_18002FDF4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003D3EC(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v6; // r12d
  __int64 *v7; // rax
  volatile signed __int64 *v8; // rdi
  _QWORD *v9; // r14
  int v10; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  int *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int64 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]

  v6 = 1001;
  if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 1LL) )
  {
    v40 = 0;
    v38 = &Uuid;
    v39 = 16;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2943, 0LL, 0LL, 3u, &v37);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  v7 = sub_18002F588(a2, a1);
  v8 = v7;
  if ( v7 )
  {
    v6 = *((_DWORD *)v7 + 14);
    v9 = v7 + 16;
    if ( *((_DWORD *)v7 + 32) || *((_DWORD *)v7 + 33) )
    {
      v10 = -1073741811;
    }
    else
    {
      v10 = sub_18002EA88((PSID)(a2 + 72), 0LL, 0, (__int64)(v7 + 16));
      if ( v10 >= 0 )
      {
        sub_18002E4C8(a2, (__int64)v8);
        *a3 = *v9;
      }
    }
  }
  else
  {
    v10 = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v8 )
    sub_18002FDF4(v8);
  if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 1LL) )
  {
    v12 = *(_DWORD *)(a2 + 24);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v14 = v12;
    v22 = &v14;
    v25 = a2 + 72;
    v13 = *(unsigned __int8 *)(a2 + 73);
    v23 = 4;
    v29 = 4;
    v32 = 8;
    v35 = 4;
    v26 = 4 * v13 + 8;
    v19 = &Uuid;
    v28 = &v15;
    v31 = &v17;
    v34 = &v16;
    v20 = 16;
    v15 = v6;
    v17 = a1;
    v16 = v10;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A28CE, 0LL, 0LL, 8u, &v18);
  }
  return (unsigned int)v10;
}
