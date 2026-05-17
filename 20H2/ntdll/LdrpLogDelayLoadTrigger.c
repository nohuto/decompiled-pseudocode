/*
 * XREFs of LdrpLogDelayLoadTrigger @ 0x1800165B0
 * Callers:
 *     LdrpGetDelayloadExportDll @ 0x18001664C (LdrpGetDelayloadExportDll.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1800152F0 (RtlInitAnsiString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpGetDelayloadAPIInfo @ 0x180080F98 (LdrpGetDelayloadAPIInfo.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     sprintf_s @ 0x1800975E0 (sprintf_s.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 *     LdrpEventAddAnsiString @ 0x1800CEEA8 (LdrpEventAddAnsiString.c)
 *     LdrpEventAddUnicodeString @ 0x1800CEF0C (LdrpEventAddUnicodeString.c)
 */

struct _PEB *__fastcall LdrpLogDelayLoadTrigger(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct _PEB *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rdx
  __int64 v16; // r13
  unsigned int v17; // esi
  unsigned int v18; // r15d
  struct _PEB *v19; // r14
  unsigned int v20; // esi
  __int64 v21; // rbx
  unsigned int v22; // esi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // [rsp+30h] [rbp-39h] BYREF
  int v27; // [rsp+34h] [rbp-35h] BYREF
  char *v28; // [rsp+38h] [rbp-31h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  STRING v30; // [rsp+50h] [rbp-19h] BYREF
  char Buffer[16]; // [rsp+60h] [rbp-9h] BYREF

  v9 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v10 = 2147353476LL;
  v11 = 2147353477LL;
  if ( *(_BYTE *)v10 )
  {
    v10 = (unsigned int)RtlGetCurrentServiceSessionId(v10, v8)
        ? (__int64)NtCurrentPeb()->SharedData + 555
        : 2147353477LL;
    if ( (*(_BYTE *)v10 & 0x10) != 0 )
      goto LABEL_19;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v10, v8);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v14 = (__int64)result->SharedData + 554;
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( *(_BYTE *)v14 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(v14, v13);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v11 = (__int64)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v11 & 0x20) != 0 )
      {
LABEL_19:
        v28 = (char *)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(a2 + 4));
        RtlInitAnsiString(&DestinationString, v28);
        LdrpGetDelayloadAPIInfo(a1, a2, a4, (unsigned int)&v28, (__int64)&v27);
        v15 = v28;
        if ( !v28 )
        {
          sprintf_s(Buffer, 0xCuLL, "#%u", v27);
          v15 = Buffer;
        }
        RtlInitAnsiString(&v30, v15);
        v16 = a1 + 72;
        v17 = *(unsigned __int16 *)(a1 + 72)
            + *(unsigned __int16 *)(a3 + 72)
            + 2 * (DestinationString.Length + v30.Length + 4);
        v18 = v17 + 36;
        result = (struct _PEB *)RtlAllocateHeap(
                                  NtCurrentPeb()->ProcessHeap,
                                  (unsigned int)(NtdllBaseTag + 1572864),
                                  v17 + 36);
        v19 = result;
        if ( result )
        {
          LODWORD(result->ProcessParameters) = 3;
          *(_WORD *)&result->Padding0[2] = 5334;
          LdrpEventAddUnicodeString(v16, (char *)&result->ProcessParameters + 4, v17, &v26);
          v20 = v17 - v26;
          v21 = (__int64)&v19->ProcessParameters + v26 + 4;
          LdrpEventAddUnicodeString(a3 + 72, v21, v20, &v26);
          v22 = v20 - v26;
          v23 = v26 + v21;
          LdrpEventAddAnsiString(&DestinationString, v23, v22, &v26);
          LdrpEventAddAnsiString(&v30, v23 + v26, v22 - v26, &v26);
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v25, v24) )
            v9 = (__int64)NtCurrentPeb()->SharedData + 554;
          NtTraceEvent(*(unsigned __int8 *)v9, 1026LL, v18 - 32, v19);
          return (struct _PEB *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v19);
        }
      }
    }
  }
  return result;
}
