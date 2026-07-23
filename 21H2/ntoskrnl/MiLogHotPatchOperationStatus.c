/*
 * XREFs of MiLogHotPatchOperationStatus @ 0x1408CBBA0
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x1408C9274 (MiApplyHotPatchToDriver.c)
 *     MiHotPatchImage @ 0x1408CA494 (MiHotPatchImage.c)
 *     MiLoadHotPatch @ 0x1408CAD30 (MiLoadHotPatch.c)
 *     MiUnloadHotPatch @ 0x1408CE928 (MiUnloadHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A9332C (MmRegisterHotPatch.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14029EF60 (MiFillLogProcessInfo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchOperationStatus(int a1, int a2, UNICODE_STRING *a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  UNICODE_STRING *p_DestinationString; // rbx
  __int64 v10; // rdi
  struct _KPROCESS *v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  ULONG v14; // r9d
  __int64 v15; // r10
  unsigned __int8 *v16; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v17; // rax
  int v19; // [rsp+28h] [rbp-E0h]
  int v20; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  int v23; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+54h] [rbp-B4h] BYREF
  int v25; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  int v27; // [rsp+60h] [rbp-A8h] BYREF
  int v28; // [rsp+64h] [rbp-A4h] BYREF
  int v29; // [rsp+68h] [rbp-A0h] BYREF
  int v30; // [rsp+6Ch] [rbp-9Ch] BYREF
  const CHAR *v31; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  __int64 v35; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  __int64 v37[13]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v38[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  char v41; // [rsp+128h] [rbp+20h] BYREF
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  int *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  int *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  _DWORD *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  wchar_t *Buffer; // [rsp+188h] [rbp+80h]
  _DWORD v51[2]; // [rsp+190h] [rbp+88h] BYREF
  __int64 *v52; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int *p_ProcessId; // [rsp+1C8h] [rbp+C0h]
  __int64 v56; // [rsp+1D0h] [rbp+C8h]
  _BYTE v57[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  int *v58; // [rsp+1E8h] [rbp+E0h]
  __int64 v59; // [rsp+1F0h] [rbp+E8h]
  int *v60; // [rsp+1F8h] [rbp+F0h]
  __int64 v61; // [rsp+200h] [rbp+F8h]
  int *v62; // [rsp+208h] [rbp+100h]
  __int64 v63; // [rsp+210h] [rbp+108h]
  _DWORD *v64; // [rsp+218h] [rbp+110h]
  __int64 v65; // [rsp+220h] [rbp+118h]
  wchar_t *v66; // [rsp+228h] [rbp+120h]
  _DWORD v67[2]; // [rsp+230h] [rbp+128h] BYREF
  __int64 *v68; // [rsp+238h] [rbp+130h]
  __int64 v69; // [rsp+240h] [rbp+138h]
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+168h] BYREF

  v5 = &retaddr;
  p_DestinationString = a3;
  v31 = 0LL;
  DestinationString = 0LL;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    if ( !a3 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      p_DestinationString = &DestinationString;
    }
    LOBYTE(v5) = a5;
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        if ( **(_DWORD **)&qword_140C4EF20 <= 5u )
          return (char)v5;
        LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000020LL);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v25 = a4;
        v37[4] = (__int64)&v25;
        v16 = (unsigned __int8 *)byte_1400263C3;
        v37[5] = 4LL;
        v37[6] = (__int64)&v26;
        v37[8] = (__int64)&v27;
        v37[10] = (__int64)v38;
        v37[12] = (__int64)p_DestinationString->Buffer;
        v38[0] = p_DestinationString->Length;
        v34 = 2164260864LL;
        v39 = &v34;
        v17 = (struct _EVENT_DATA_DESCRIPTOR *)v37;
        v26 = a1;
        v37[7] = 4LL;
        v27 = a2;
        v37[9] = 4LL;
        v37[11] = 2LL;
        v38[1] = 0;
        v40 = 8LL;
      }
      else
      {
        if ( **(_DWORD **)&qword_140C4EF20 <= 5u )
          return (char)v5;
        LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000020LL);
        if ( !(_BYTE)v5 )
          return (char)v5;
        v28 = a4;
        v42 = &v28;
        v16 = (unsigned __int8 *)&word_14002634A;
        v43 = 4LL;
        v44 = &v29;
        v46 = &v30;
        v48 = v51;
        Buffer = p_DestinationString->Buffer;
        v51[0] = p_DestinationString->Length;
        v35 = 2164260864LL;
        v52 = &v35;
        v17 = (struct _EVENT_DATA_DESCRIPTOR *)&v41;
        v29 = a1;
        v45 = 4LL;
        v30 = a2;
        v47 = 4LL;
        v49 = 2LL;
        v51[1] = 0;
        v53 = 8LL;
      }
      LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v15, v16, v13, v14, v19, v20, 8u, v17);
      return (char)v5;
    }
    LOBYTE(v5) = MiFillLogProcessInfo(
                   (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                   &v32,
                   &v31);
    v10 = *(_QWORD *)&qword_140C4EF20;
    if ( **(_DWORD **)&qword_140C4EF20 > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000020LL);
      if ( (_BYTE)v5 )
      {
        ProcessId = (unsigned int)PsGetProcessId(v11);
        p_ProcessId = &ProcessId;
        v56 = 4LL;
        tlgCreate1Sz_char((__int64)v57, v31);
        v22 = a4;
        v58 = &v22;
        v59 = 4LL;
        v60 = &v23;
        v23 = a1;
        v62 = &v24;
        v61 = 4LL;
        v64 = v67;
        v66 = p_DestinationString->Buffer;
        v67[0] = p_DestinationString->Length;
        v33 = 2164260864LL;
        v68 = &v33;
        v24 = a2;
        v63 = 4LL;
        v65 = 2LL;
        v67[1] = 0;
        v69 = 8LL;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v10, (unsigned __int8 *)byte_1400260C1, v12, 1u, v19, v20, 0xAu, &v54);
      }
    }
  }
  return (char)v5;
}
