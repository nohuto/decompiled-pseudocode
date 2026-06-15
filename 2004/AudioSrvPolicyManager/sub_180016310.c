/*
 * XREFs of sub_180016310 @ 0x180016310
 * Callers:
 *     sub_180013E44 @ 0x180013E44 (sub_180013E44.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 */

__int64 __fastcall sub_180016310(PVOID pv)
{
  signed int v2; // ebx
  PTP_WAIT ThreadpoolWait; // rax
  signed int LastError; // eax

  v2 = 0;
  ThreadpoolWait = CreateThreadpoolWait(pfnwa, pv, (PTP_CALLBACK_ENVIRON)(qword_18004FEE0 + 8));
  *((_QWORD *)pv + 55) = ThreadpoolWait;
  if ( ThreadpoolWait )
  {
    _InterlockedIncrement((volatile signed __int32 *)pv + 2);
    SetThreadpoolWait(*((PTP_WAIT *)pv + 55), *((HANDLE *)pv + 23), 0LL);
  }
  else
  {
    LastError = GetLastError();
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
  }
  if ( v2 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x36u, &stru_180043390, v2);
    }
    sub_180005724("CProcess::SetupProcessTerminationWatcher", 3843, v2);
  }
  return (unsigned int)v2;
}
