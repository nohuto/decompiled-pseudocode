/*
 * XREFs of sub_1800CE808 @ 0x1800CE808
 * Callers:
 *     sub_1800D0EFC @ 0x1800D0EFC (sub_1800D0EFC.c)
 *     sub_1800D1184 @ 0x1800D1184 (sub_1800D1184.c)
 * Callees:
 *     sub_180001FB0 @ 0x180001FB0 (sub_180001FB0.c)
 *     sub_180002040 @ 0x180002040 (sub_180002040.c)
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_1800CEAE4 @ 0x1800CEAE4 (sub_1800CEAE4.c)
 *     sub_1800CF46C @ 0x1800CF46C (sub_1800CF46C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CE808(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rbx
  int v8; // ebx
  int (__fastcall ***v9)(_QWORD, __int64 *, _QWORD *); // rdi
  int v11; // [rsp+20h] [rbp-98h]
  _QWORD v12[15]; // [rsp+40h] [rbp-78h] BYREF
  int (__fastcall ***v13)(_QWORD, __int64 *, _QWORD *); // [rsp+C0h] [rbp+8h] BYREF
  __int64 v14; // [rsp+D8h] [rbp+20h] BYREF

  sub_180002040((__int64)v12);
  v13 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v11 = a3;
    sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 0x34u, (__int64)&unk_18015DFC8, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v14 = sub_18002C4D0(a1 + 56);
  while ( v14 )
  {
    v7 = *(_QWORD *)sub_1800CF46C(a1 + 56, &v14);
    v13 = (int (__fastcall ***)(_QWORD, __int64 *, _QWORD *))v7;
    if ( v7
      && *(_DWORD *)(v7 + 716) == a2
      && (a3 == 2 || !a3 && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7)) )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v7 + 16) + 32LL))(v7 + 16, 0LL, v6);
    }
  }
  if ( a1 != -16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v8 = sub_1800CEAE4(a1, a2, v6, &v13, v11);
  v9 = v13;
  if ( v8 >= 0 )
    v8 = sub_180004B00(a1, v13, 0, 2u);
  if ( v9 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, __int64 *, _QWORD *)))(*v9)[2])(v9);
  if ( v8 < 0 )
    sub_18005E8F8((__int64)"CAudioSessionManager::DisconnectSessionsForTsSession", 1803, v8);
  sub_180001FB0(v12);
  return (unsigned int)v8;
}
