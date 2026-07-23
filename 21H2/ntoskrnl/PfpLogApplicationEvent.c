/*
 * XREFs of PfpLogApplicationEvent @ 0x1402735A8
 * Callers:
 *     PfCalculateProcessHash @ 0x14067AD80 (PfCalculateProcessHash.c)
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 * Callees:
 *     PfLogEvent @ 0x140273ADC (PfLogEvent.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MmGetDirectoryFrameFromProcess @ 0x140679DE4 (MmGetDirectoryFrameFromProcess.c)
 *     MmGetSessionGlobalVA @ 0x140679DF4 (MmGetSessionGlobalVA.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, _QWORD *a2, char a3)
{
  int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int SessionId; // eax
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // eax
  _QWORD v20[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int64 SessionGlobalVA; // [rsp+40h] [rbp-C8h]
  PVOID v23; // [rsp+48h] [rbp-C0h]
  int v24; // [rsp+50h] [rbp-B8h]
  int v25; // [rsp+54h] [rbp-B4h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  __int64 v27; // [rsp+60h] [rbp-A8h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  int v29; // [rsp+70h] [rbp-98h]
  unsigned __int16 v30; // [rsp+74h] [rbp-94h]
  _WORD v31[989]; // [rsp+76h] [rbp-92h] BYREF
  __int64 v32; // [rsp+830h] [rbp+728h]

  *(_OWORD *)&v20[1] = 0LL;
  if ( dword_140C4FE18 >= (unsigned int)dword_140C4FE1C )
    return 3221225659LL;
  v5 = *(_DWORD *)(a1 + 1088);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 1128);
  v32 = 0LL;
  if ( a3 )
  {
    v18 = *(_QWORD *)(a1 + 1088) ^ v7;
    LODWORD(v23) = v5;
    v21 = a1;
    v19 = *(_DWORD *)(a1 + 1524);
    SessionGlobalVA = v18 & 0x1FFFFFFFFFFFFFFFLL;
    v16 = 14LL;
    HIDWORD(v23) = v19;
  }
  else
  {
    v25 = v5;
    v8 = &v20[1];
    HIDWORD(v21) = 0;
    v29 = 0;
    v31[0] = 0;
    if ( a2 )
      v8 = a2;
    v28 = a1;
    v9 = *(_DWORD *)(a1 + 1524);
    v26 = (*(_QWORD *)(a1 + 1088) ^ v7) & 0x1FFFFFFFFFFFFFFFLL;
    v24 = v9;
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v8);
    v12 = *v11;
    v13 = *((_QWORD *)v11 + 1);
    v14 = v12;
    v27 = DirectoryFrameFromProcess;
    if ( (unsigned int)v12 > 0x7C0 )
      v14 = 1984;
    v30 = v14 >> 1;
    memmove(v31, (const void *)(v12 + v13 - v14), v14);
    v31[v30] = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId != -1 )
      v6 = SessionId;
    LODWORD(v21) = v6;
    SessionGlobalVA = MmGetSessionGlobalVA(a1);
    v16 = 1LL;
    v23 = PsIdleProcess;
  }
  return PfLogEvent(
           v16,
           dword_140C5031C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v21);
}
