/*
 * XREFs of sub_180015834 @ 0x180015834
 * Callers:
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     sub_18002C120 @ 0x18002C120 (sub_18002C120.c)
 * Callees:
 *     sub_18000FC4C @ 0x18000FC4C (sub_18000FC4C.c)
 *     sub_1800147A0 @ 0x1800147A0 (sub_1800147A0.c)
 *     sub_180016B98 @ 0x180016B98 (sub_180016B98.c)
 *     sub_180016BFC @ 0x180016BFC (sub_180016BFC.c)
 */

int __fastcall sub_180015834(int *pv, __int64 a2, unsigned int a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v7; // rbp
  int v11; // esi
  int v12; // edi
  int v13; // ecx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v15; // rax
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF

  v7 = pv[86];
  v11 = a4 != 0 ? 1 : -1;
  v12 = 0;
  if ( (int)sub_1800147A0((__int64)pv, a2, a5, &pftDueTime) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)&pftDueTime + 4LL * a3) += v11;
    if ( a5 )
    {
      pv[85] += v11;
    }
    else
    {
      pv[84] += v11;
      if ( (unsigned int)sub_180016B98(pv, 3LL) || (unsigned int)sub_180016B98(pv, 8LL) )
      {
        pv[86] = 0;
      }
      else if ( (unsigned int)sub_180016B98(pv, 2LL) )
      {
        pv[86] = 1;
      }
      else if ( (unsigned int)sub_180016B98(pv, 11LL)
             || (unsigned int)sub_180016B98(pv, 10LL)
             || (unsigned int)sub_180016B98(pv, 1LL) )
      {
        pv[86] = 2;
      }
      else
      {
        pv[86] = 4 - ((unsigned int)sub_180016B98(pv, 7LL) != 0);
      }
    }
    v13 = pv[84] + pv[85];
    if ( a4 )
    {
      if ( v13 == 1 )
        sub_180016BFC(pv);
    }
    else if ( !v13 )
    {
      ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 77);
      if ( ThreadpoolTimer
        || (ThreadpoolTimer = CreateThreadpoolTimer(sub_180016D30, pv, 0LL),
            (*((_QWORD *)pv + 77) = ThreadpoolTimer) != 0LL) )
      {
        pftDueTime.dwHighDateTime = -1;
        pftDueTime.dwLowDateTime = -200000000;
        SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
      }
    }
  }
  if ( a7 )
    *a7 = v7;
  if ( a6 )
  {
    LOBYTE(v12) = (_DWORD)v7 != pv[86];
    *a6 = v12;
  }
  v15 = pv[86];
  if ( (_DWORD)v7 != (_DWORD)v15
    && off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    LODWORD(v15) = sub_18000FC4C(
                     *((_QWORD *)off_18004F000 + 2),
                     (__int64)&off_18004F000,
                     (__int64)off_18003F9E8,
                     pv[48],
                     off_18003F9E8[v7],
                     off_18003F9E8[v15]);
  }
  return v15;
}
