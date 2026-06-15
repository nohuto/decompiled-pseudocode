/*
 * XREFs of sub_1800DAC60 @ 0x1800DAC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800DA3DC @ 0x1800DA3DC (sub_1800DA3DC.c)
 */

__int64 __fastcall sub_1800DAC60(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 v3; // rcx
  _DWORD *v4; // r14
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  void *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // edx
  unsigned int v13; // ebx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  void *v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v17 = 0LL;
  if ( *(_QWORD *)(a1 + 192) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      sub_1800CB144(&v17);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 24LL))(
             *(_QWORD *)(a1 + 192) + 8LL,
             &v17) >= 0 )
      {
        v4 = (_DWORD *)sub_180008448(v3, sub_1800B6240)[1];
        if ( *v4 > 4u )
        {
          v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
          v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
          v7 = *(_QWORD *)(a1 + 168);
          v8 = v6;
          v16 = v5;
          v9 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
          v19 = v8;
          v18 = v9;
          sub_1800DA3DC((__int64)v4, byte_180167487, v10, v11, (__int64)&v19, &v18, (__int64)&v16);
        }
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v12 = 2022;
LABEL_12:
    v13 = -2004287487;
    sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", -2004287487);
    goto LABEL_14;
  }
  if ( !*(_QWORD *)(a1 + 168) )
  {
    v12 = 2023;
    goto LABEL_12;
  }
  if ( !*(_QWORD *)(a1 + 192) )
  {
    v12 = 2024;
    goto LABEL_12;
  }
  sub_1800CB144((__int64 *)(a1 + 496));
  v13 = 0;
LABEL_14:
  sub_18000F708(&v17);
  if ( v1 )
    LeaveCriticalSection(v1);
  return v13;
}
