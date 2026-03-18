/*
 * XREFs of LogFwStat @ 0x1409EF7D8
 * Callers:
 *     AnFwDisplayFade @ 0x1409EEC00 (AnFwDisplayFade.c)
 *     AnFwFadeCompletion @ 0x1409EF1B4 (AnFwFadeCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F1370 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F14C0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409F4288 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x140398960 (BgpFwQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall LogFwStat(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rcx
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rax
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // rax
  int v17; // edi
  LARGE_INTEGER v18; // rax

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  qword_140CDB0A8 = result.QuadPart;
  if ( a1 )
  {
    stru_140C541B0[v4] = result;
    return result;
  }
  v6 = (LARGE_INTEGER)(*(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - stru_140C541B0[v4].QuadPart);
  qword_140CDB0F0 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    v7.QuadPart = qword_140C10FC8;
    if ( v6.QuadPart < qword_140C10FC8 )
      v7 = v6;
    qword_140C10FC8 = v7.QuadPart;
    v8.QuadPart = qword_140CDB080;
    if ( v6.QuadPart > qword_140CDB080 )
      v8 = v6;
LABEL_8:
    qword_140CDB0A0 += v6.QuadPart;
    ++dword_140CDB0B8;
    qword_140CDB080 = v8.QuadPart;
    goto LABEL_9;
  }
  v9 = v4 - 1;
  if ( !v9 )
  {
    v18.QuadPart = qword_140C10FC8;
    if ( v6.QuadPart < qword_140C10FC8 )
      v18 = v6;
    qword_140C10FC8 = v18.QuadPart;
    v8.QuadPart = qword_140CDB080;
    if ( v6.QuadPart > qword_140CDB080 )
      v8 = v6;
    qword_140CDB0C0 += v6.QuadPart;
    goto LABEL_8;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      qword_140CDB100 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140CDB0A8;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      qword_140CDB108 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140CDB0A8;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
            qword_140CF4F20 += v6.QuadPart;
        }
        else
        {
          qword_140CDB088 = v6.QuadPart;
        }
      }
      else
      {
        v15.QuadPart = qword_140C10FD8;
        if ( v6.QuadPart < qword_140C10FD8 )
          v15 = v6;
        qword_140C10FD8 = v15.QuadPart;
        v16.QuadPart = qword_140CDB090;
        if ( v6.QuadPart > qword_140CDB090 )
          v16 = v6;
        qword_140CDB098 += v6.QuadPart;
        qword_140CDB0B0 += v6.QuadPart;
        ++dword_140CDB070;
        qword_140CDB090 = v16.QuadPart;
      }
      return (LARGE_INTEGER)qword_140CDB0A8;
    }
    qword_140CDB098 += v6.QuadPart;
    qword_140CDB0E0 = v6.QuadPart;
  }
  else
  {
    qword_140CDB0A0 += v6.QuadPart;
    qword_140CDB0C8 = v6.QuadPart;
  }
LABEL_9:
  qword_140CDB0B0 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140CDB0A8;
}
