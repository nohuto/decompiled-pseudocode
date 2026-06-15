/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140062D30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015E60 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140061F04 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140062920 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x140063B04 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x140063BAC (McTemplateU0pxxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // r8
  int v4; // r12d
  unsigned int v5; // esi
  signed __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbp
  signed __int64 v10; // rax
  __int64 v11; // r14
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r9
  unsigned int v15; // edi
  char *v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r10d
  unsigned int v21; // r8d
  __int64 v22; // rdi

  v3 = *((_QWORD *)this - 47);
  v4 = a2;
  v5 = 0;
  *((_DWORD *)this + 5) = a2;
  *((_DWORD *)this + 4) = 2;
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 16), 0LL, 0LL);
  v8 = *((_QWORD *)this - 47);
  v9 = v7;
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), 0LL, 0LL);
  v11 = v10;
  if ( (byte_140090541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v8, a2, (__int64)this - 448, 17, a2, v9, v10);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessClientOutputEndpoint *)((char *)this - 448), v9)
    || !CCrossProcessBaseEndpoint::IsValidOffset((CCrossProcessClientOutputEndpoint *)((char *)this - 448), v11)
    || !v4 )
  {
    goto LABEL_15;
  }
  v15 = v4 * *((_DWORD *)this - 90);
  if ( v9 >= v11 )
  {
    v17 = *((_DWORD *)this - 74);
    v16 = (char *)this - 248;
    v5 = v11 + v17 - v9;
  }
  else
  {
    if ( (byte_140090541 & 1) != 0 )
      McTemplateU0pxxq_EventWriteTransfer(v13, v12, (_DWORD)this - 448, v9, v11, v4 * *((_BYTE *)this - 360));
    v16 = (char *)this - 248;
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 248,
      3u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD",
      v14);
    v5 = *((_DWORD *)this - 74);
    v17 = v5;
  }
  v18 = *((_QWORD *)this - 46);
  v19 = v17;
  v20 = *(_DWORD *)(v18 + 160);
  v21 = v20 + v9 % v17;
  if ( v5 < v15 )
  {
    if ( (byte_140090541 & 1) != 0 )
      McTemplateU0pqqqq_EventWriteTransfer(
        v18,
        (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        (_DWORD)this - 448,
        v21,
        v20 + v11 % v17,
        v15,
        *(_DWORD *)(v18 + 164));
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)v16,
      4u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE",
      v19);
    goto LABEL_15;
  }
  if ( v21 + v15 > *(_DWORD *)(v18 + 164) )
  {
    *((_DWORD *)this + 4) = 1;
LABEL_15:
    v22 = *((_QWORD *)this - 42);
    goto LABEL_16;
  }
  *((_DWORD *)this + 4) = 0;
  v22 = *((_QWORD *)this - 47) + v21;
LABEL_16:
  if ( (byte_140090541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      v5 / *((_DWORD *)this - 90),
      v5 % *((_DWORD *)this - 90),
      (__int64)this - 448,
      18,
      v4,
      v5 / *((_DWORD *)this - 90),
      *((_DWORD *)this + 4));
  return v22;
}
