/*
 * XREFs of sub_180102930 @ 0x180102930
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_180100144 @ 0x180100144 (sub_180100144.c)
 *     sub_180104898 @ 0x180104898 (sub_180104898.c)
 */

__int64 __fastcall sub_180102930(__int64 a1, float a2, int a3, _OWORD *a4)
{
  LPVOID v7; // rax
  _QWORD *v8; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  signed int LastError; // eax

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_180104898(*((_QWORD *)off_18019C348 + 2), 45LL);
  }
  v7 = sub_18006A18C(0x28uLL);
  if ( v7 )
    v8 = (_QWORD *)sub_180100144((__int64)v7, a1, a2, a3, a4);
  else
    v8 = 0LL;
  if ( v8 )
  {
    ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)sub_180100800, v8, 0LL);
    v8[4] = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      v8 = 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x2Eu, (__int64)&unk_1801726D0, LastError);
      }
    }
  }
  _o_free(v8);
  return 0LL;
}
