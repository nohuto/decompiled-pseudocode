/*
 * XREFs of MmPerfLogSessionRundown @ 0x1408C8D78
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x1405A83C0 (EtwTraceSiloDcEvent.c)
 */

__int64 __fastcall MmPerfLogSessionRundown(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int16 v3; // di
  struct _DMA_ADAPTER *v5; // rcx
  __int64 v7; // rdx
  __int64 NextSession; // rax
  struct _DMA_ADAPTER *v9; // rbx
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 *v12; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]

  v13 = 12;
  v12 = &v11;
  v14 = 0;
  v3 = (a3 != 0) + 588;
  v5 = 0LL;
  v11 = 0LL;
  while ( 1 )
  {
    NextSession = MmGetNextSession(v5);
    v9 = (struct _DMA_ADAPTER *)NextSession;
    if ( !NextSession )
      break;
    v7 = *(_QWORD *)(NextSession + 1368);
    DWORD2(v11) = *(_DWORD *)(v7 + 8);
    *(_QWORD *)&v11 = v7;
    EtwTraceSiloDcEvent((__int64)&v12, 1u, a1, a2, v3, 0x401803u);
    v5 = v9;
  }
  return 0LL;
}
