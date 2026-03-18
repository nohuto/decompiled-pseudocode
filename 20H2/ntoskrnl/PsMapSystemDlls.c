/*
 * XREFs of PsMapSystemDlls @ 0x1406EF8FC
 * Callers:
 *     MiMapProcessExecutable @ 0x1406EF590 (MiMapProcessExecutable.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PsWow64GetProcessNtdllType @ 0x1406AD2EC (PsWow64GetProcessNtdllType.c)
 *     PspMapSystemDll @ 0x1406EF9E8 (PspMapSystemDll.c)
 */

__int64 __fastcall PsMapSystemDlls(_KPROCESS *a1, unsigned int a2)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-68h] BYREF
  __int128 v11; // [rsp+30h] [rbp-58h]
  __int128 v12; // [rsp+40h] [rbp-48h]

  v10 = 0LL;
  v11 = 0LL;
  v4 = 0;
  v12 = 0LL;
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess(a1, 0, (__int64)&v10);
  }
  v6 = 0;
  v7 = (__int64 *)&PspSystemDlls;
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7
      && (v6 <= 0
       || *(_WORD *)(v8 + 18)
       && a1[1].AffinityPadding[10]
       && v6 == (unsigned int)PsWow64GetProcessNtdllType((__int64)a1)) )
    {
      v4 = PspMapSystemDll(
             a1,
             v8,
             a2,
             0LL,
             v10,
             *((_QWORD *)&v10 + 1),
             v11,
             *((_QWORD *)&v11 + 1),
             v12,
             *((_QWORD *)&v12 + 1));
      if ( v4 < 0 )
        break;
    }
    ++v6;
    ++v7;
    if ( v6 >= 6 )
      goto LABEL_9;
  }
  if ( v6 > 0 )
    v4 = -1073741405;
LABEL_9:
  if ( v5 )
    KiUnstackDetachProcess((__int64)&v10, 0);
  return (unsigned int)v4;
}
