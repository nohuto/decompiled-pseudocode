/*
 * XREFs of sub_18010B268 @ 0x18010B268
 * Callers:
 *     sub_1801060DC @ 0x1801060DC (sub_1801060DC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB330 @ 0x1800BB330 (sub_1800BB330.c)
 *     sub_1800C64A4 @ 0x1800C64A4 (sub_1800C64A4.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010A89C @ 0x18010A89C (sub_18010A89C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010B268(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, __int64 a5, _DWORD *a6, __int64 a7)
{
  int v8; // r12d
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  _DWORD *v14; // rcx
  int v15; // ebx
  char v16; // di
  int v17; // esi
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+88h] [rbp-31h] BYREF
  int v24; // [rsp+90h] [rbp-29h] BYREF
  int v25; // [rsp+94h] [rbp-25h] BYREF
  int v26; // [rsp+98h] [rbp-21h] BYREF
  int v27; // [rsp+9Ch] [rbp-1Dh] BYREF
  int v28; // [rsp+A0h] [rbp-19h] BYREF
  int v29; // [rsp+A4h] [rbp-15h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+7h] BYREF
  const CHAR *v34; // [rsp+C8h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+47h]
  char v36; // [rsp+110h] [rbp+57h] BYREF

  v8 = a3;
  sub_18010A130("Sarm::CStreamResource::Initialize", 32, a3, (__int64)a4);
  if ( !a2 )
  {
    sub_1800BB330(
      (int)retaddr,
      34,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      -2005139196);
    __debugbreak();
  }
  v11 = a7;
  if ( !a7 )
  {
    sub_1800BB330(
      (int)retaddr,
      35,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      -2005139192);
    __debugbreak();
  }
  v23 = 0LL;
  sub_1800CB144(&v23);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v23);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)(a1 + 32) = a5;
    *(_DWORD *)(a1 + 52) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 360LL))(v23);
    *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
    sub_1800C64A4((__int64 *)a1, a2);
    *(_DWORD *)(a1 + 48) = v8;
    *(_OWORD *)(a1 + 16) = *a4;
    *(_BYTE *)(a1 + 88) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 120LL))(v23) == 1;
    v14 = a6;
    *(_DWORD *)(a1 + 56) = a6[1];
    *(_DWORD *)(a1 + 60) = *v14;
    *(_DWORD *)(a1 + 68) = v14[3];
    *(_QWORD *)(a1 + 8) = v11;
    ++*(_DWORD *)(v11 + 12);
    if ( (unsigned int)CallbackContext > 4 )
    {
      v15 = *(_DWORD *)(a1 + 52);
      v16 = *(_BYTE *)(a1 + 88);
      v17 = *(_DWORD *)(a1 + 56);
      v18 = *(_DWORD *)(a1 + 48);
      v30 = *(_QWORD *)(a1 + 8);
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
      v24 = v15;
      v36 = v16;
      v25 = *(_DWORD *)(a1 + 68);
      v26 = *(_DWORD *)(a1 + 60);
      v27 = v17;
      v28 = v18;
      v32 = a1 + 16;
      v33 = *(_QWORD *)(a1 + 40);
      v29 = 68;
      v34 = "Sarm::CStreamResource::Initialize";
      sub_18010A89C(
        v19,
        byte_1801695D7,
        v20,
        v21,
        &v34,
        (__int64)&v29,
        (__int64)&v33,
        &v32,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v36,
        (__int64)&v24,
        (void **)&v31,
        (__int64)&v30);
    }
    v13 = 0;
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      38,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\streamresource.cpp",
      v12);
  }
  sub_18000F708(&v23);
  return v13;
}
