/*
 * XREFs of RtlLoadString @ 0x180046FA0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     LdrResSearchResource @ 0x180048B80 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlLoadString(
        PVOID DllHandle,
        ULONG StringId,
        PCWSTR StringLanguage,
        ULONG Flags,
        PCWSTR *ReturnString,
        PUSHORT ReturnStringLen,
        PWSTR ReturnLanguageName,
        PULONG ReturnLanguageLen)
{
  unsigned int v8; // r10d
  __int64 v9; // r12
  char v11; // si
  NTSTATUS v12; // edx
  unsigned __int16 v13; // cx
  int v14; // ebx
  USHORT v15; // r8
  DWORD lcid; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-60h] BYREF
  PCWSTR *v21; // [rsp+60h] [rbp-58h]
  _QWORD v22[4]; // [rsp+68h] [rbp-50h] BYREF

  v8 = (unsigned int)StringLanguage;
  v9 = (unsigned __int16)StringId;
  v21 = ReturnString;
  v19 = 0LL;
  v11 = Flags & 1;
  if ( DllHandle && ReturnString && (Flags & 0xFFFFFFFE) == 0 )
  {
    if ( v11 && (ReturnLanguageName || ReturnLanguageLen) )
      return -1073741637;
    if ( (unsigned int)StringLanguage <= 0xFFFF )
      goto LABEL_8;
    if ( *StringLanguage )
    {
      if ( RtlLocaleNameToLcid(StringLanguage, &lcid, 3u) < 0 )
        return -1073741811;
      v8 = (unsigned __int16)lcid;
      lcid = (unsigned __int16)lcid;
    }
    else
    {
      v8 = 0;
      lcid = 0;
    }
LABEL_8:
    v22[0] = 6LL;
    v22[1] = ((unsigned int)v9 >> 4) + 1;
    v22[2] = v8;
    v22[3] = v9;
    v18 = 0LL;
    if ( v11 )
    {
      v12 = LdrpSearchResourceSection_U(DllHandle, (__int64)v22, 4u, 1u, (__int64)&v20);
      if ( v12 < 0 )
        return v12;
      v12 = LdrpAccessResourceData((unsigned __int64)DllHandle, v20);
    }
    else
    {
      v12 = LdrResSearchResource(
              (PCWSTR)DllHandle,
              (__int64)&v19,
              (__int64)&v18,
              (__int64)ReturnLanguageName,
              (__int64)ReturnLanguageLen);
      if ( v12 >= 0 && (unsigned __int64)v18 > 0xFFFF )
        v12 = -1073741701;
    }
    if ( v12 >= 0 && v19 )
    {
      v13 = 0;
      v14 = v9 & 0xF;
      v18 = (unsigned __int64)v18 >> 1;
      do
      {
        v15 = *(_WORD *)(v19 + 2LL * v13);
        v13 += v15 + 1;
        if ( !v11 && v13 > (unsigned __int64)v18 )
          return -1073741701;
        --v14;
      }
      while ( v14 >= 0 );
      if ( v13 && v15 )
        v13 -= v15;
      *v21 = (PCWSTR)(v19 + 2LL * v13);
      if ( ReturnStringLen )
        *ReturnStringLen = v15;
    }
    return v12;
  }
  return -1073741811;
}
