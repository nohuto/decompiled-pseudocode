/*
 * XREFs of sub_1C0044230 @ 0x1C0044230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0043DE0 @ 0x1C0043DE0 (sub_1C0043DE0.c)
 *     sub_1C00446D4 @ 0x1C00446D4 (sub_1C00446D4.c)
 */

__int64 __fastcall sub_1C0044230(__int64 a1, int a2)
{
  __int64 v3; // r14
  int v4; // esi
  _DWORD *v5; // rbp
  int v6; // r8d
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  int v9; // r10d
  bool v10; // r12
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // ebx

  v3 = a2;
  v4 = 1;
  v5 = sub_1C000F050(*(_QWORD *)(a1 + 8));
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 2001949268, a1, 1LL);
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, v6, v3, 2LL);
  if ( (_DWORD)v3 == 2 )
    return sub_1C00446D4(a1, 2LL);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT");
  sub_1C000FD80(v7, 2, 1767329861, v8, 0LL);
  v10 = v9 >= 0;
  v5[640] = v5[640] & 0xF7FFFFFF | ((v9 >= 0) << 27);
  KeInitializeEvent((PRKEVENT)(v5 + 644), NotificationEvent, 0);
  v5[640] &= ~0x200u;
  KeResetEvent((PRKEVENT)(v5 + 650));
  v11 = 5;
  LOBYTE(v12) = 1;
  v15 = sub_1C00438A0(v12, v13, *(struct _LIST_ENTRY **)(a1 + 8), 5, 0LL, a1);
  if ( (v15 & 0xC0000000) == 0xC0000000
    || ((v5[640] & 1) == 0 || v10 ? (v4 = 0) : (v11 = 6),
        sub_1C0043DE0(*(_QWORD *)(a1 + 8), v11, v3),
        v15 = sub_1C00430F0(a1, v4),
        (v15 & 0xC0000000) == 0xC0000000) )
  {
    sub_1C00438A0(0LL, v14, *(struct _LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    sub_1C0043DE0(*(_QWORD *)(a1 + 8), 4, 7);
  }
  sub_1C000FD80(*(_QWORD *)(a1 + 8), 2, 2001949268, (int)v15, 3LL);
  sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
  return v15;
}
