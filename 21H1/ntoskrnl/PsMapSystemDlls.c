/*
 * XREFs of PsMapSystemDlls @ 0x14064CF94
 * Callers:
 *     MiMapProcessExecutable @ 0x14064EB10 (MiMapProcessExecutable.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PspMapSystemDll @ 0x14064D080 (PspMapSystemDll.c)
 *     PsWow64GetProcessNtdllType @ 0x1406F9DCC (PsWow64GetProcessNtdllType.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+30h] [rbp-58h]
  __int128 v14; // [rsp+40h] [rbp-48h]

  v12 = 0LL;
  v13 = 0LL;
  v6 = 0;
  v14 = 0LL;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    KiStackAttachProcess(a1, 0LL, (__int64)&v12, a4);
  }
  v8 = 0;
  v9 = (__int64 *)&PspSystemDlls;
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9
      && (v8 <= 0
       || *(_WORD *)(v10 + 18) && a1[1].AffinityPadding[10] && v8 == (unsigned int)PsWow64GetProcessNtdllType(a1)) )
    {
      v6 = PspMapSystemDll(
             a1,
             v10,
             a2,
             0LL,
             v12,
             *((_QWORD *)&v12 + 1),
             v13,
             *((_QWORD *)&v13 + 1),
             v14,
             *((_QWORD *)&v14 + 1));
      if ( v6 < 0 )
        break;
    }
    ++v8;
    ++v9;
    if ( v8 >= 6 )
      goto LABEL_9;
  }
  if ( v8 > 0 )
    v6 = -1073741405;
LABEL_9:
  if ( v7 )
    KiUnstackDetachProcess((__int64)&v12, 0LL, a3, a4);
  return (unsigned int)v6;
}
