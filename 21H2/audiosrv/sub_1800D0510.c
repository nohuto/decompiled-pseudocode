/*
 * XREFs of sub_1800D0510 @ 0x1800D0510
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CED00 @ 0x1800CED00 (sub_1800CED00.c)
 */

__int64 __fastcall sub_1800D0510(__int64 **a1, int *a2, char **a3, _QWORD *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rbx
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v8 = sub_180008448((__int64)a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"AudioSessionManagerGetAudioSessions");
  v10 = *a1;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x3Bu, (__int64)&unk_18015DFC8, *v10);
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10[1] + 112LL))(v10[1]) )
  {
    v11 = -2147024891;
    v12 = 2080;
    v13 = -2147024891;
  }
  else
  {
    v14 = sub_1800CED00(*v10, (_QWORD *)v10[1], a2, a3, a4);
    v11 = v14;
    if ( v14 >= 0 )
    {
      v11 = 0;
      goto LABEL_11;
    }
    v13 = v14;
    v12 = 2082;
  }
  sub_18004BD84((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", v13);
LABEL_11:
  sub_18000F690((__int64)pv, v15, v16);
  return v11;
}
