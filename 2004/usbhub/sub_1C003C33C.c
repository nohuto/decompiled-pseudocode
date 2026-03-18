/*
 * XREFs of sub_1C003C33C @ 0x1C003C33C
 * Callers:
 *     CompletionRoutine @ 0x1C000DFA0 (CompletionRoutine.c)
 *     sub_1C000E620 @ 0x1C000E620 (sub_1C000E620.c)
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C00101B0 @ 0x1C00101B0 (sub_1C00101B0.c)
 *     sub_1C00136E0 @ 0x1C00136E0 (sub_1C00136E0.c)
 *     sub_1C0016028 @ 0x1C0016028 (sub_1C0016028.c)
 *     sub_1C001AA90 @ 0x1C001AA90 (sub_1C001AA90.c)
 *     sub_1C001C210 @ 0x1C001C210 (sub_1C001C210.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C003C33C(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // rax
  __int64 CurrentStackLocation; // rsi
  _DWORD *v8; // r11
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // r10
  __int64 v13; // r11

  v6 = sub_1C000F050(a1);
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  v9 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v9 <= 1 )
  {
    sub_1C000FD80(a1, 16, 1347374641, *(_QWORD *)&v8[2 * v9 + 210], (__int64)a2);
    sub_1C000FD80(a1, 16, 1347374642, *(_QWORD *)(v11 + 8 * v10 + 856), CurrentStackLocation);
    *(_QWORD *)(v13 + 8 * v12 + 840) = 0LL;
    *(_QWORD *)(v13 + 8 * v12 + 856) = 0LL;
    *(_DWORD *)(v13 + 4 * v12 + 872) = a3;
    PoStartNextPowerIrp(a2);
  }
}
