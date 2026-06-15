/*
 * XREFs of sub_180027B80 @ 0x180027B80
 * Callers:
 *     sub_1800749B0 @ 0x1800749B0 (sub_1800749B0.c)
 *     sub_1800749C0 @ 0x1800749C0 (sub_1800749C0.c)
 *     sub_1800749D0 @ 0x1800749D0 (sub_1800749D0.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180027D70 @ 0x180027D70 (sub_180027D70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180027B80(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx
  _QWORD *v4; // r8
  _DWORD *v5; // r9
  int v6; // r10d
  __int64 v7; // r11

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_QWORD *)a2 || *(_DWORD *)(a2 + 8) != 192 || *(_DWORD *)(a2 + 12) != 1174405120)
    && (*(_DWORD *)a2 != -1350114592
     || *(_DWORD *)(a2 + 4) != 1282060589
     || *(_DWORD *)(a2 + 8) != -1428727140
     || *(_DWORD *)(a2 + 12) != -1877077915) )
  {
    if ( (unsigned int)sub_180027D40(a2, &unk_18015B850) )
    {
      *v4 = v7;
    }
    else if ( v6 == 470397009 && v5[1] == 1334868027 && v5[2] == 1994139300 && v5[3] == 632868326 )
    {
      *v4 = v7 + 8;
    }
    else
    {
      v3 = sub_180027D70(v7 + 16, v5);
      if ( v3 < 0 )
        return (unsigned int)v3;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
    return (unsigned int)v3;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
  return 0LL;
}
