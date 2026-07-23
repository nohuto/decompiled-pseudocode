/*
 * XREFs of PopDiagTraceDeviceVerboseRundown @ 0x140672288
 * Callers:
 *     PopDiagTraceFxRundown @ 0x140272A80 (PopDiagTraceFxRundown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140272B84 (PopPepGetDevicePlatformStateDependents.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceVerboseRundown(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  UNICODE_STRING *p_DestinationString_8; // rdx
  int Length; // r8d
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int16 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+44h] [rbp-C4h] BYREF
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  signed __int32 v16; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int64 v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-58h]
  int v27; // [rsp+B4h] [rbp-54h]
  __int16 *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int *v33; // [rsp+D8h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-28h]
  __int64 v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  __int64 *p_DestinationString; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  signed __int32 *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  wchar_t *Buffer; // [rsp+148h] [rbp+40h]
  int v49; // [rsp+150h] [rbp+48h]
  int v50; // [rsp+154h] [rbp+4Ch]
  __int64 *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h] BYREF

  v1 = &retaddr;
  DestinationString_8 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN);
    if ( (_BYTE)v1 )
    {
      v3 = *(_QWORD *)(a1 + 48);
      v4 = *(_QWORD *)(a1 + 56);
      v15 = 0;
      v18 = v3;
      v11 = *(_WORD *)(v3 + 128) >> 1;
      v12 = *(_WORD *)(v3 + 40) >> 1;
      LOWORD(v13) = *(_WORD *)(v3 + 56) >> 1;
      PopPepGetDevicePlatformStateDependents(v4, &v15);
      DestinationString = *(_QWORD *)(v18 + 16);
      v19 = *(_QWORD *)(v18 + 32);
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), 0, 0);
      if ( *(_QWORD *)(a1 + 1200) )
      {
        p_DestinationString_8 = (UNICODE_STRING *)(a1 + 1192);
      }
      else
      {
        RtlInitUnicodeString(&DestinationString_8, &word_1407D7CE0);
        p_DestinationString_8 = &DestinationString_8;
      }
      Length = p_DestinationString_8->Length;
      *(_QWORD *)&UserData.Size = 8LL;
      LOWORD(v14) = (unsigned __int16)Length >> 1;
      LODWORD(v17) = *(_DWORD *)(a1 + 612);
      UserData.Ptr = (ULONGLONG)&v18;
      v23 = &v11;
      v24 = 2LL;
      v7 = *(unsigned __int16 *)(v3 + 128);
      v25 = *(_QWORD *)(v3 + 136);
      v28 = &v12;
      v26 = v7;
      v27 = 0;
      v29 = 2LL;
      v8 = *(unsigned __int16 *)(v3 + 40);
      v30 = *(_QWORD *)(v3 + 48);
      v33 = &v13;
      v31 = v8;
      v32 = 0;
      v34 = 2LL;
      v9 = *(unsigned __int16 *)(v3 + 56);
      v35 = *(_QWORD *)(v3 + 64);
      v38 = &v15;
      v40 = &v19;
      p_DestinationString = &DestinationString;
      v44 = &v16;
      v46 = &v14;
      Buffer = p_DestinationString_8->Buffer;
      v51 = &v17;
      v36 = v9;
      v49 = Length;
      v37 = 0;
      v39 = 4LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 4LL;
      v47 = 2LL;
      v50 = 0;
      v52 = 4LL;
      LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN, &PopDiagActivityId, 0xEu, &UserData);
    }
  }
  return (char)v1;
}
