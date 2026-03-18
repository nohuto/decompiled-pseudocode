/*
 * XREFs of PfpLogApplicationEvent @ 0x140244348
 * Callers:
 *     PfCalculateProcessHash @ 0x14064D410 (PfCalculateProcessHash.c)
 *     PspExitProcess @ 0x14064E234 (PspExitProcess.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     PfLogEvent @ 0x14024487C (PfLogEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MmGetDirectoryFrameFromProcess @ 0x14064C644 (MmGetDirectoryFrameFromProcess.c)
 *     MmGetSessionGlobalVA @ 0x14064C654 (MmGetSessionGlobalVA.c)
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
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // eax
  _QWORD v21[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 SessionGlobalVA; // [rsp+40h] [rbp-C8h]
  PVOID v24; // [rsp+48h] [rbp-C0h]
  int v25; // [rsp+50h] [rbp-B8h]
  int v26; // [rsp+54h] [rbp-B4h]
  __int64 v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  __int64 v29; // [rsp+68h] [rbp-A0h]
  int v30; // [rsp+70h] [rbp-98h]
  unsigned __int16 v31; // [rsp+74h] [rbp-94h]
  _WORD v32[989]; // [rsp+76h] [rbp-92h] BYREF
  __int64 v33; // [rsp+830h] [rbp+728h]

  *(_OWORD *)&v21[1] = 0LL;
  if ( dword_140C4FC58 >= (unsigned int)dword_140C4FC5C )
    return 3221225659LL;
  v5 = *(_DWORD *)(a1 + 1088);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 1128);
  v33 = 0LL;
  if ( a3 )
  {
    v19 = *(_QWORD *)(a1 + 1088) ^ v7;
    LODWORD(v24) = v5;
    v22 = a1;
    v20 = *(_DWORD *)(a1 + 1524);
    SessionGlobalVA = v19 & 0x1FFFFFFFFFFFFFFFLL;
    v17 = 14LL;
    HIDWORD(v24) = v20;
    v16 = 24LL;
  }
  else
  {
    v26 = v5;
    v8 = &v21[1];
    HIDWORD(v22) = 0;
    v30 = 0;
    v32[0] = 0;
    if ( a2 )
      v8 = a2;
    v29 = a1;
    v9 = *(_DWORD *)(a1 + 1524);
    v27 = (*(_QWORD *)(a1 + 1088) ^ v7) & 0x1FFFFFFFFFFFFFFFLL;
    v25 = v9;
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v8);
    v12 = *v11;
    v13 = *((_QWORD *)v11 + 1);
    v14 = v12;
    v28 = DirectoryFrameFromProcess;
    if ( (unsigned int)v12 > 0x7C0 )
      v14 = 1984;
    v31 = v14 >> 1;
    memmove(v32, (const void *)(v12 + v13 - v14), v14);
    v32[v31] = 0;
    SessionId = MmGetSessionIdEx(a1);
    if ( SessionId != -1 )
      v6 = SessionId;
    LODWORD(v22) = v6;
    SessionGlobalVA = MmGetSessionGlobalVA(a1);
    v16 = v14 + 64;
    v17 = 1LL;
    v24 = PsIdleProcess;
  }
  return PfLogEvent(
           v17,
           dword_140C5015C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v22,
           v16,
           v21[1],
           v21[2]);
}
