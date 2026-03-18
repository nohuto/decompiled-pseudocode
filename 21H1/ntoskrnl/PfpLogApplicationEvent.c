/*
 * XREFs of PfpLogApplicationEvent @ 0x1402D5624
 * Callers:
 *     PfCalculateProcessHash @ 0x14064FAD0 (PfCalculateProcessHash.c)
 *     PspExitProcess @ 0x140662D14 (PspExitProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     PfLogEvent @ 0x1402D5B58 (PfLogEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MmGetSessionGlobalVA @ 0x1406E33EC (MmGetSessionGlobalVA.c)
 *     MmGetDirectoryFrameFromProcess @ 0x1406E85C4 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, _QWORD *a2, char a3)
{
  int v5; // eax
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  int SessionId; // eax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 SessionGlobalVA; // [rsp+40h] [rbp-C8h]
  PVOID v22; // [rsp+48h] [rbp-C0h]
  int v23; // [rsp+50h] [rbp-B8h]
  int v24; // [rsp+54h] [rbp-B4h]
  __int64 v25; // [rsp+58h] [rbp-B0h]
  __int64 v26; // [rsp+60h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  int v28; // [rsp+70h] [rbp-98h]
  unsigned __int16 v29; // [rsp+74h] [rbp-94h]
  _WORD v30[989]; // [rsp+76h] [rbp-92h] BYREF
  __int64 v31; // [rsp+830h] [rbp+728h]

  *(_OWORD *)&v19[1] = 0LL;
  if ( dword_140C4FD18 >= (unsigned int)dword_140C4FD1C )
    return 3221225659LL;
  v5 = *(_DWORD *)(a1 + 1088);
  v6 = 0;
  v31 = 0LL;
  if ( a3 )
  {
    LODWORD(v22) = v5;
    v17 = *(_QWORD *)(a1 + 1128);
    v20 = a1;
    v18 = (a1 ^ v17) & 0x1FFFFFFFFFFFFFFFLL;
    v15 = 14LL;
    SessionGlobalVA = v18;
    HIDWORD(v22) = *(_DWORD *)(a1 + 1524);
  }
  else
  {
    v24 = v5;
    v7 = &v19[1];
    v8 = *(_QWORD *)(a1 + 1128);
    v27 = a1;
    if ( a2 )
      v7 = a2;
    HIDWORD(v20) = 0;
    v28 = 0;
    v30[0] = 0;
    v25 = (a1 ^ v8) & 0x1FFFFFFFFFFFFFFFLL;
    v23 = *(_DWORD *)(a1 + 1524);
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v7);
    v11 = *v10;
    v12 = *((_QWORD *)v10 + 1);
    v13 = v11;
    v26 = DirectoryFrameFromProcess;
    if ( (unsigned int)v11 > 0x7C0 )
      v13 = 1984;
    v29 = v13 >> 1;
    memmove(v30, (const void *)(v11 + v12 - v13), v13);
    v30[v29] = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId != -1 )
      v6 = SessionId;
    LODWORD(v20) = v6;
    SessionGlobalVA = MmGetSessionGlobalVA(a1);
    v15 = 1LL;
    v22 = PsIdleProcess;
  }
  return PfLogEvent(
           v15,
           dword_140C5021C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v20);
}
