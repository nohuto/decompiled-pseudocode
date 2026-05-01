/*
 * XREFs of sub_18000DF0C @ 0x18000DF0C
 * Callers:
 *     PsmHamRegisterProcess @ 0x180036D70 (PsmHamRegisterProcess.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022AFC @ 0x180022AFC (sub_180022AFC.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_18002E140 @ 0x18002E140 (sub_18002E140.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180035B88 @ 0x180035B88 (sub_180035B88.c)
 *     sub_18003602C @ 0x18003602C (sub_18003602C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000DF0C(__int64 a1, void *a2, __int64 a3, _DWORD *a4, __int64 a5, int a6)
{
  __int64 v9; // r14
  int v10; // ebx
  ULONG v11; // eax
  int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  DWORD v19; // ebx
  int v20; // ebx
  DWORD ProcessId; // eax
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  int v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  _BYTE *v29; // [rsp+A0h] [rbp-60h]
  _DWORD *v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  _DWORD *v32; // [rsp+B8h] [rbp-48h]
  _BYTE v33[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v35[560]; // [rsp+160h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+390h] [rbp+290h] BYREF

  v26 = a3;
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009FE4E, 0, 0, 2u, &v36);
  sub_18000B7F8(TlsValue);
  v24 = 0LL;
  v9 = -1LL;
  v23 = -1LL;
  sub_18003602C(a2, v33);
  if ( (a6 & 4) != 0 )
    v10 = 8;
  else
    v10 = (a6 & 8) != 0 ? 4 : 2;
  v11 = RtlLengthSid(a4 + 118);
  v12 = sub_180035B88((unsigned int)v35, (int)a4 + 8, (int)a4 + 472, v11, *a4, v10, a5);
  if ( v12 >= 0 )
  {
    v13 = sub_180022AFC(a1, v35, 0LL, &v24);
    v15 = v24;
    v12 = v13;
    if ( v13 >= 0 )
    {
      v16 = sub_180026CFC(v24, (_DWORD)a2, v26, (_DWORD)a4, a5, a6, (__int64)&v23);
      v9 = v23;
      v12 = v16;
      if ( v16 >= 0 )
        v12 = 0;
    }
    if ( v15 )
    {
      sub_18001E380(v14);
      if ( (*(_QWORD *)(v15 + 592))-- == 1LL )
        sub_18000A1AC(v15 - 64, v17);
      sub_18000F390();
    }
  }
  v19 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v19, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 0x400000000008LL) )
  {
    v20 = *a4;
    ProcessId = GetProcessId(a2);
    v27 = 0x1000000LL;
    LODWORD(v23) = ProcessId;
    v29 = v33;
    v30 = a4 + 118;
    v31 = a5;
    v28 = v9;
    v25 = a6;
    LODWORD(v26) = v20;
    v32 = a4 + 2;
    LODWORD(v24) = v12;
    sub_18002E140(a4 + 2, &unk_18009F46C);
  }
  return (unsigned int)v12;
}
