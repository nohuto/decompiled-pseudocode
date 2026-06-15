/*
 * XREFs of sub_180033E20 @ 0x180033E20
 * Callers:
 *     sub_18006D078 @ 0x18006D078 (sub_18006D078.c)
 * Callees:
 *     sub_180034268 @ 0x180034268 (sub_180034268.c)
 *     sub_180034618 @ 0x180034618 (sub_180034618.c)
 *     sub_180063F94 @ 0x180063F94 (sub_180063F94.c)
 *     sub_180068DF0 @ 0x180068DF0 (sub_180068DF0.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4834 @ 0x1800B4834 (sub_1800B4834.c)
 *     sub_1800B498C @ 0x1800B498C (sub_1800B498C.c)
 */

void __fastcall sub_180033E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, struct _FILETIME pftDueTime)
{
  unsigned int v6; // edi
  unsigned int *v7; // rbx
  __int64 v8; // rcx
  _OWORD *v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  size_t v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _TP_TIMER *v16; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v18; // r8
  __int128 v19; // [rsp+20h] [rbp-18h]

  v6 = a1;
  if ( qword_18019F940 && (!(_DWORD)a2 || (unsigned int)(a2 - 100) <= 0x31) )
    qword_18019F940(a1, a2, 1LL);
  v7 = (unsigned int *)pftDueTime;
  if ( *(_DWORD *)pftDueTime.dwLowDateTime
    && byte_18019E560
    && !byte_18019FA00
    && (!qword_18019E3B8 || !(unsigned __int8)qword_18019E3B8()) )
  {
    AcquireSRWLockExclusive(&SRWLock);
    v9 = (_OWORD *)*((_QWORD *)&xmmword_18019E590 + 1);
    v10 = xmmword_18019E5A0;
    v11 = xmmword_18019E5A0 - xmmword_18019E590;
    LODWORD(v19) = v6;
    *((_QWORD *)&v19 + 1) = a4;
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18019E590 + 1) - xmmword_18019E590 + 16) >= (_QWORD)xmmword_18019E5A0
                                                                                           - (_QWORD)xmmword_18019E590 )
    {
      v12 = 16LL;
      if ( (unsigned __int64)(2 * v11) > 0x10 )
        v12 = 2 * v11;
      if ( !(unsigned __int8)sub_180034268(&xmmword_18019E590, v12) )
        goto LABEL_24;
      v10 = xmmword_18019E5A0;
      v9 = (_OWORD *)*((_QWORD *)&xmmword_18019E590 + 1);
    }
    v13 = 0LL;
    if ( (unsigned __int64)v9 < v10 )
      v13 = v10 - (_QWORD)v9;
    if ( v9 )
    {
      if ( v13 >= 0x10 )
      {
        *v9 = v19;
LABEL_23:
        *((_QWORD *)&xmmword_18019E590 + 1) += 16LL;
LABEL_24:
        if ( !byte_18019E578 )
        {
          v16 = pti;
          if ( pti
            || (sub_1800B4834(&pftDueTime),
                ThreadpoolTimer = CreateThreadpoolTimer(sub_180038340, &byte_18019E560, 0LL),
                sub_180068DF0(&pti, ThreadpoolTimer),
                sub_1800B498C(&pftDueTime),
                (v16 = pti) != 0LL) )
          {
            pftDueTime = (struct _FILETIME)-3000000000LL;
            SetThreadpoolTimer(v16, &pftDueTime, 0, 0x124F8u);
            byte_18019E578 = 1;
          }
        }
        ReleaseSRWLockExclusive(&SRWLock);
        goto LABEL_29;
      }
      memset(v9, 0, v13);
      *(_DWORD *)o__errno(v15) = 34;
    }
    else
    {
      *(_DWORD *)o__errno(v8) = 22;
    }
    o__invalid_parameter_noinfo(v14);
    goto LABEL_23;
  }
LABEL_29:
  v18 = v7[1];
  if ( (_DWORD)v18 )
    sub_180034618(v6, v7[2], v18, 0LL);
  if ( !v7[4] && byte_18019E560 )
  {
    AcquireSRWLockExclusive(&SRWLock);
    if ( !qword_18019E588 )
    {
      qword_18019E588 = 0LL;
      sub_180063F94(&qword_18019E588, sub_1800B73E0, -1LL);
    }
    ReleaseSRWLockExclusive(&SRWLock);
  }
}
