/*
 * XREFs of sub_1C000A350 @ 0x1C000A350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0001170 @ 0x1C0001170 (sub_1C0001170.c)
 *     sub_1C00015B0 @ 0x1C00015B0 (sub_1C00015B0.c)
 *     sub_1C0002B50 @ 0x1C0002B50 (sub_1C0002B50.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 *     sub_1C000464C @ 0x1C000464C (sub_1C000464C.c)
 *     sub_1C000A5B0 @ 0x1C000A5B0 (sub_1C000A5B0.c)
 *     sub_1C000B290 @ 0x1C000B290 (sub_1C000B290.c)
 */

char __fastcall sub_1C000A350(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        _DWORD *Address,
        SIZE_T Length,
        unsigned int a7,
        __int64 a8)
{
  unsigned __int64 v8; // r15
  ULONG v11; // ebx
  int v12; // r14d
  __int64 v13; // rdi
  _DWORD *v14; // rsi
  __int64 v15; // r8
  unsigned int v17; // edx
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h]

  v8 = a4;
  v11 = 0;
  v18 = 0LL;
  v12 = -1073741811;
  KeEnterCriticalRegion();
  v13 = (a7 >> 2) & 0x7FF;
  if ( (unsigned int)v13 < 8 && (a7 & 0xFFFFE003) == 0x222003 )
  {
    v19 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v19 == dword_1C00069A0[v13]
      && (_DWORD)v8 == dword_1C00069C0[2 * v13]
      && (_DWORD)Length == dword_1C00069C4[2 * v13] )
    {
      if ( ExGetPreviousMode() )
      {
        if ( (_DWORD)v8 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
          sub_1C0003180((char *)&v18, a3, (unsigned int)v8);
          v11 = v18;
        }
        v14 = Address;
        if ( (_DWORD)Length )
          ProbeForWrite(Address, (unsigned int)Length, 4u);
      }
      else
      {
        if ( (_DWORD)v8 )
        {
          sub_1C0003180((char *)&v18, a3, v8);
          v11 = v18;
        }
        v14 = Address;
      }
      if ( (_DWORD)v13 == 5 )
      {
        v12 = 0;
        sub_1C0001170(v19, v11, HIDWORD(v18));
      }
      else
      {
        if ( (_DWORD)v13 == 7 )
        {
          if ( v11 )
          {
            if ( v11 != 1 )
              goto LABEL_18;
            v17 = 1;
          }
          else
          {
            v17 = 0;
          }
          v12 = 0;
          sub_1C00015B0(v19, v17);
          goto LABEL_18;
        }
        switch ( (int)v13 )
        {
          case 0:
            v12 = sub_1C000A5B0(v19, (unsigned __int8)v11);
            break;
          case 1:
            v12 = 0;
            *v14 = dword_1C0007280;
            break;
          case 2:
            if ( *(_QWORD *)(v19 + 80) == PsGetCurrentProcess() )
              v12 = 0;
            break;
          case 3:
            v12 = sub_1C000B290(v19, v14);
            break;
          case 4:
            v12 = 0;
            LODWORD(v18) = 0;
            *v14 = *(_DWORD *)(v19 + 144);
            break;
          case 6:
            v12 = 0;
            sub_1C0002B50(v19);
            break;
          default:
            v12 = -1073741808;
            break;
        }
      }
    }
  }
LABEL_18:
  KeLeaveCriticalRegion();
  if ( v12 < 0 && (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
    sub_1C000464C((__int64)off_1C0007000->AttachedDevice, 0x12u, v15, v13, v12);
  *(_DWORD *)a8 = v12;
  *(_QWORD *)(a8 + 8) = 0LL;
  return 1;
}
