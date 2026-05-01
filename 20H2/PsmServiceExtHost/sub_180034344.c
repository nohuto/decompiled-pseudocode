/*
 * XREFs of sub_180034344 @ 0x180034344
 * Callers:
 *     sub_180034234 @ 0x180034234 (sub_180034234.c)
 *     sub_1800427A0 @ 0x1800427A0 (sub_1800427A0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180034400 @ 0x180034400 (sub_180034400.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180034344(__int64 a1, void *a2, int a3)
{
  signed __int64 v5; // rax
  ULONG v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-9h] BYREF
  UUID *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  __int64 *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v5 = _InterlockedIncrement64(&qword_1800B3E88);
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v5;
  if ( a2 )
  {
    v6 = RtlLengthSid(a2);
    memcpy((void *)(a1 + 72), a2, v6);
  }
  sub_180034400(a1);
  if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 2LL) )
  {
    v14 = 0;
    v17 = 0;
    v9 = 0;
    v20 = 0;
    v12 = &Uuid;
    v10 = *(_QWORD *)(a1 + 16);
    v15 = &v10;
    v18 = &v9;
    v13 = 16;
    v16 = 8;
    v19 = 4;
    sub_18002E278(v7, (unsigned __int8 *)dword_1800A3074, 0LL, 0LL, 5u, &v11);
  }
  return 0LL;
}
