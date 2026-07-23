/*
 * XREFs of PiDrvDbResolveSystemFilePath @ 0x1408B7C1C
 * Callers:
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408B7318 (PiDrvDbResolveFilePathKeyValues.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x1408B5F44 (PiDrvDbFindSystemFilePathToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbResolveSystemFilePath(
        __int16 *a1,
        char a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        UNICODE_STRING *String1,
        PUNICODE_STRING Destination)
{
  const UNICODE_STRING *v6; // r14
  bool v7; // r15
  NTSTATUS appended; // ebx
  const UNICODE_STRING *v10; // r13
  PWCHAR v12; // rsi
  PWCHAR SystemFilePathToken; // rax
  PWCHAR v14; // rax
  PWCHAR v15; // rax
  unsigned __int64 Length; // rax
  __int16 v17; // r8
  unsigned __int16 v18; // r15
  wchar_t *v19; // r14
  unsigned __int16 v20; // r8
  unsigned __int16 v21; // dx
  wchar_t v22; // ax
  unsigned int v23; // ebx
  ULONG v24; // edx
  PVOID StringRoutine; // rsi
  wchar_t *Buffer; // rcx
  char v28; // [rsp+20h] [rbp-48h]
  unsigned int v29; // [rsp+24h] [rbp-44h]
  bool v30; // [rsp+28h] [rbp-40h]
  char v31; // [rsp+2Ch] [rbp-3Ch]
  int v32; // [rsp+30h] [rbp-38h]
  UNICODE_STRING Source; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING v34; // [rsp+50h] [rbp-18h]
  int v36; // [rsp+B8h] [rbp+50h]
  PUNICODE_STRING Destinationa; // [rsp+D8h] [rbp+70h]

  v6 = a4;
  v7 = 0;
  v28 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v32 = a2 & 2;
  appended = 0;
  v34 = 0LL;
  v10 = 0LL;
  if ( (a2 & 2) != 0 && a3 )
  {
    v7 = RtlEqualUnicodeString(a3, &PiDrvDbSystemRootNt, 1u) != 0;
    v31 = v7;
  }
  v36 = a2 & 1;
  if ( (a2 & 1) != 0 && String1 && v6 )
    v30 = RtlEqualUnicodeString(String1, v6, 1u) != 0;
  Destination->Length = 0;
  Source = *(UNICODE_STRING *)a1;
  Destinationa = (PUNICODE_STRING)_mm_srli_si128((__m128i)Source, 8).m128i_u64[0];
  if ( !Destinationa->Length )
    return (unsigned int)-1073741275;
  while ( 1 )
  {
    v12 = 0LL;
    if ( v32 )
    {
      if ( a3 && !v7 )
      {
        SystemFilePathToken = PiDrvDbFindSystemFilePathToken(&Source, (UNICODE_STRING *)&PiDrvDbSystemRootNt);
        if ( SystemFilePathToken )
        {
          v10 = a3;
          v12 = SystemFilePathToken;
          v29 = 22;
        }
        else
        {
          v31 = 1;
        }
      }
      if ( v6 && !v28 )
      {
        v14 = PiDrvDbFindSystemFilePathToken(&Source, (UNICODE_STRING *)&PiDrvDbSystemRootWin32);
        if ( v14 )
        {
          if ( !v12 || v14 < v12 )
          {
            v12 = v14;
            v29 = 24;
            v10 = v6;
          }
        }
        else
        {
          v28 = 1;
        }
      }
    }
    if ( v36 && v6 && !v30 && String1 && String1->Length > 2u )
    {
      v15 = PiDrvDbFindSystemFilePathToken(&Source, String1);
      if ( !v15 )
      {
        v30 = 1;
LABEL_29:
        Length = v29;
        goto LABEL_30;
      }
      if ( v12 && v15 >= v12 )
        goto LABEL_29;
      v12 = v15;
      v10 = v6;
      Length = String1->Length;
      v29 = String1->Length;
    }
    else
    {
      Length = v29;
    }
LABEL_30:
    if ( !v12 )
      goto LABEL_54;
    v17 = *a1;
    v18 = 2 * (((char *)v12 - (char *)Destinationa) >> 1);
    Source.Length = v18;
    v19 = &v12[Length >> 1];
    v34.Buffer = v19;
    v20 = v17 - 2 * ((__int64)((unsigned int)v12 + 2 * (unsigned int)(Length >> 1) - *((_DWORD *)a1 + 2)) >> 1);
    v21 = v20;
    v34.Length = v20;
    v34.MaximumLength = v20 + 2;
    v22 = *v19;
    if ( !*v19 || v22 == 92 )
      break;
LABEL_47:
    Source = v34;
    if ( !*v19 )
      goto LABEL_54;
    v6 = a4;
    v7 = v31;
    Destinationa = (PUNICODE_STRING)Source.Buffer;
  }
  if ( v22 == 92 && v10->Buffer[((unsigned __int64)v10->Length >> 1) - 1] == 92 )
  {
    ++v19;
    v34.MaximumLength = v20;
    v21 = v20 - 2;
    v34.Buffer = v19;
    v34.Length = v20 - 2;
  }
  v23 = v21 + Destination->Length + v18 + v10->Length + 2;
  if ( v23 > 0xFFFE )
    return (unsigned int)-2147483643;
  if ( v23 <= Destination->MaximumLength )
    goto LABEL_44;
  StringRoutine = ExpAllocateStringRoutine(v23);
  if ( StringRoutine )
  {
    Buffer = Destination->Buffer;
    if ( Buffer )
    {
      if ( Destination->Length )
      {
        memmove(StringRoutine, Destination->Buffer, Destination->Length);
        Buffer = Destination->Buffer;
      }
      ExFreePoolWithTag(Buffer, v24);
    }
    Destination->Buffer = (wchar_t *)StringRoutine;
    Destination->MaximumLength = v23;
LABEL_44:
    if ( v18 )
    {
      appended = RtlAppendUnicodeStringToString(Destination, &Source);
      if ( appended < 0 )
        return (unsigned int)appended;
    }
    appended = RtlAppendUnicodeStringToString(Destination, v10);
    if ( appended < 0 )
      return (unsigned int)appended;
    goto LABEL_47;
  }
  appended = -1073741670;
LABEL_54:
  if ( appended < 0 )
    return (unsigned int)appended;
  if ( !Destination->Length )
    return (unsigned int)-1073741275;
  if ( Source.Length )
    return (unsigned int)RtlAppendUnicodeStringToString(Destination, &Source);
  return (unsigned int)appended;
}
