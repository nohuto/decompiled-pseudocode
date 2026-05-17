/*
 * XREFs of LdrpResValidateFilePath @ 0x1800E4EF8
 * Callers:
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlDosPathNameToNtPathName_U @ 0x180017310 (RtlDosPathNameToNtPathName_U.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800772C0 (RtlDetermineDosPathNameType_U.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009DDE0 (ZwQueryAttributesFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1794 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResValidateFilePath(_WORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  signed int AttributesFile; // edi
  int v5; // ecx
  __int64 v6; // rbx
  int v8; // [rsp+28h] [rbp-A0h] BYREF
  const wchar_t *v9; // [rsp+30h] [rbp-98h]
  int v10; // [rsp+38h] [rbp-90h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-88h]
  char v12; // [rsp+48h] [rbp-80h] BYREF
  __int64 v13; // [rsp+50h] [rbp-78h]
  int v14; // [rsp+58h] [rbp-70h]
  __int64 v15; // [rsp+60h] [rbp-68h]
  char *v16; // [rsp+68h] [rbp-60h]
  int v17; // [rsp+70h] [rbp-58h]
  __int128 v18; // [rsp+78h] [rbp-50h]
  int v19; // [rsp+A8h] [rbp-20h]

  v8 = 3932218;
  v9 = L"LdrpResValidateFilePath Enter";
  v10 = 3801144;
  v11 = L"LdrpResValidateFilePath Exit";
  v2 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v3 = 2147353477LL;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v8);
  }
  if ( !a1 || (v5 = RtlDetermineDosPathNameType_U(a1), ((v5 - 1) & 0xFFFFFFFA) != 0) || v5 == 5 )
  {
    AttributesFile = -1073741811;
  }
  else if ( RtlDosPathNameToNtPathName_U((int)a1, (int)&v12, 0, 0LL) )
  {
    v6 = v13;
    v14 = 48;
    v15 = 0LL;
    v17 = 64;
    v16 = &v12;
    v18 = 0LL;
    AttributesFile = ZwQueryAttributesFile();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    if ( AttributesFile >= 0 )
      AttributesFile = (v19 & 0x10) != 0 ? 0xC000000D : 0;
  }
  else
  {
    AttributesFile = -1073741766;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v2 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v10);
  }
  return (unsigned int)AttributesFile;
}
