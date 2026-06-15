/*
 * XREFs of sub_180052F70 @ 0x180052F70
 * Callers:
 *     sub_180052E04 @ 0x180052E04 (sub_180052E04.c)
 *     sub_1800670EC @ 0x1800670EC (sub_1800670EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180052F70(__int64 a1)
{
  PTP_POOL Threadpool; // rax
  signed int v3; // ebx
  signed int LastError; // eax
  signed int v6; // eax

  if ( *(_QWORD *)a1 )
    return 0;
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
  {
    v3 = 0;
  }
  else
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v3 >= 0 )
  {
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
    {
      v3 = 0;
LABEL_7:
      SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
      return (unsigned int)v3;
    }
    v6 = GetLastError();
    v3 = v6;
    if ( v6 > 0 )
      v3 = (unsigned __int16)v6 | 0x80070000;
    if ( v3 >= 0 )
      goto LABEL_7;
  }
  return (unsigned int)v3;
}
