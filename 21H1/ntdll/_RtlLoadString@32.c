/*
 * XREFs of _RtlLoadString@32 @ 0x4B2BA030
 * Callers:
 *     <none>
 * Callees:
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
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
  DWORD v8; // ecx
  unsigned __int16 v9; // si
  char v10; // dl
  NTSTATUS v11; // ecx
  signed int v12; // edi
  USHORT v13; // dx
  int v15; // [esp+18h] [ebp-50h] BYREF
  int v16; // [esp+1Ch] [ebp-4Ch]
  int v17; // [esp+20h] [ebp-48h]
  PCWSTR *v18; // [esp+28h] [ebp-40h]
  int v19; // [esp+2Ch] [ebp-3Ch] BYREF
  DWORD lcid; // [esp+30h] [ebp-38h] BYREF
  int v21; // [esp+34h] [ebp-34h] BYREF
  char v22; // [esp+3Bh] [ebp-2Dh]
  _DWORD Src[5]; // [esp+3Ch] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]

  v8 = (DWORD)StringLanguage;
  v18 = ReturnString;
  v16 = (int)ReturnLanguageName;
  v17 = (int)ReturnLanguageLen;
  v9 = 0;
  v19 = 0;
  v10 = Flags & 1;
  v22 = Flags & 1;
  if ( !DllHandle || !v18 || (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( v10 && (ReturnLanguageName || ReturnLanguageLen) )
    return -1073741637;
  if ( (unsigned int)StringLanguage <= 0xFFFF )
    goto LABEL_8;
  ms_exc.registration.TryLevel = 0;
  if ( !*StringLanguage )
  {
    v8 = 0;
    goto LABEL_35;
  }
  if ( RtlLocaleNameToLcid(StringLanguage, &lcid, 3u) >= 0 )
  {
    v8 = (unsigned __int16)lcid;
    v10 = v22;
LABEL_35:
    lcid = v8;
    ms_exc.registration.TryLevel = -2;
LABEL_8:
    Src[0] = 6;
    Src[1] = ((unsigned __int16)StringId >> 4) + 1;
    Src[2] = v8;
    Src[3] = (unsigned __int16)StringId;
    v21 = 0;
    if ( v10 )
    {
      v11 = LdrpSearchResourceSection_U(DllHandle, 4, 1u, (int)&v15);
      if ( v11 >= 0 )
      {
        v11 = LdrpAccessResourceData(DllHandle, v15, (int)&v19, 0);
        goto LABEL_11;
      }
    }
    else
    {
      v11 = LdrResSearchResource((int)DllHandle, Src, 4, 1, (int)&v19, (int)&v21, v16, v17);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)v21 > 0xFFFF )
          v11 = -1073741701;
LABEL_11:
        if ( v11 >= 0 && v19 )
        {
          v12 = StringId & 0xF;
          v21 = (unsigned int)v21 >> 1;
          do
          {
            v13 = *(_WORD *)(v19 + 2 * v9);
            v9 += v13 + 1;
            if ( !v22 && v9 > (unsigned int)v21 )
              return -1073741701;
            --v12;
          }
          while ( v12 >= 0 );
          if ( v9 && v13 )
            v9 -= v13;
          ms_exc.registration.TryLevel = 1;
          *v18 = (PCWSTR)(v19 + 2 * v9);
          if ( ReturnStringLen )
            *ReturnStringLen = v13;
          ms_exc.registration.TryLevel = -2;
        }
      }
    }
    return v11;
  }
  ms_exc.registration.TryLevel = -2;
  return -1073741811;
}
