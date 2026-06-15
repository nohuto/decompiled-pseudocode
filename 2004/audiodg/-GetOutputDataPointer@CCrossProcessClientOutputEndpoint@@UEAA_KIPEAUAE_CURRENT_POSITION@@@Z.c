/*
 * XREFs of ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x14005A270
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140015F10 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140059484 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x140059E60 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x14005B010 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x14005B0B8 (McTemplateU0pxxq_EventWriteTransfer.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        __int64 a2,
        struct AE_CURRENT_POSITION *a3)
{
  __int64 v3; // rax
  CCrossProcessBaseEndpoint *v4; // r15
  unsigned int v5; // esi
  int v6; // r12d
  __int64 v8; // rdi
  __int64 v9; // r14
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r9
  unsigned int v13; // ebp
  char *v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  int v18; // r10d
  unsigned int v19; // r8d
  __int64 v20; // rdi

  v3 = *((_QWORD *)this - 47);
  v4 = (CCrossProcessClientOutputEndpoint *)((char *)this - 448);
  *((_DWORD *)this + 4) = 2;
  v5 = 0;
  v6 = a2;
  *((_DWORD *)this + 5) = a2;
  v8 = *(_QWORD *)(v3 + 16);
  v9 = *(_QWORD *)(v3 + 24);
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer((__int64)this, a2, (__int64)this - 448, 17, a2, v8, *(_QWORD *)(v3 + 24));
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v8) || !CCrossProcessBaseEndpoint::IsValidOffset(v4, v9) || !v6 )
    goto LABEL_15;
  v13 = v6 * *((_DWORD *)this - 90);
  if ( v8 >= v9 )
  {
    v15 = *((_DWORD *)this - 74);
    v14 = (char *)this - 248;
    v5 = v9 + v15 - v8;
  }
  else
  {
    if ( (byte_140085401 & 1) != 0 )
      McTemplateU0pxxq_EventWriteTransfer(v11, v10, (_DWORD)v4, v8, v9, v6 * *((_BYTE *)this - 360));
    v14 = (char *)this - 248;
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)this - 248,
      3u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_SERVER_OVERREAD",
      v12);
    v5 = *((_DWORD *)this - 74);
    v15 = v5;
  }
  v16 = *((_QWORD *)this - 46);
  v17 = v15;
  v18 = *(_DWORD *)(v16 + 160);
  v19 = v18 + v8 % v15;
  if ( v5 < v13 )
  {
    if ( (byte_140085401 & 1) != 0 )
      McTemplateU0pqqqq_EventWriteTransfer(
        v16,
        (unsigned int)&EVT_GLITCH_CP_CLIENT_OUTPUT_READ_POINTER_OVERWRITE,
        (_DWORD)v4,
        v19,
        v18 + v9 % v15,
        v13,
        *(_DWORD *)(v16 + 164));
    CCrossProcessEndpointTraceLogger::Glitch(
      (__int64)v14,
      4u,
      (const unsigned __int16 *)"CpGlitchEvent::CLIENT_OUTPUT_READ_POINTER_OVERWRITE",
      v17);
    goto LABEL_15;
  }
  if ( v19 + v13 > *(_DWORD *)(v16 + 164) )
  {
    *((_DWORD *)this + 4) = 1;
LABEL_15:
    v20 = *((_QWORD *)this - 42);
    goto LABEL_16;
  }
  *((_DWORD *)this + 4) = 0;
  v20 = *((_QWORD *)this - 47) + v19;
LABEL_16:
  if ( (byte_140085401 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      v5 / *((_DWORD *)this - 90),
      v5 % *((_DWORD *)this - 90),
      (__int64)v4,
      18,
      v6,
      v5 / *((_DWORD *)this - 90),
      *((_DWORD *)this + 4));
  return v20;
}
