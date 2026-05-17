/*
 * XREFs of _LdrpIsReparsePoint@4 @ 0x4B2A87A0
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrFindEntryForAddress@8 @ 0x4B2CF200 (_LdrFindEntryForAddress@8.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _ZwQueryAttributesFile@8 @ 0x4B2F2D50 (_ZwQueryAttributesFile@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

unsigned int __fastcall LdrpIsReparsePoint(char a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-7Ch] BYREF
  int v7; // [esp+10h] [ebp-78h] BYREF
  int v8; // [esp+14h] [ebp-74h]
  _DWORD v9[6]; // [esp+18h] [ebp-70h] BYREF
  _DWORD v10[4]; // [esp+30h] [ebp-58h] BYREF
  _DWORD v11[6]; // [esp+40h] [ebp-48h] BYREF
  _BYTE v12[32]; // [esp+58h] [ebp-30h] BYREF
  int v13; // [esp+78h] [ebp-10h]

  v6 = 0;
  memset(v11, 0, sizeof(v11));
  v1 = -1073741823;
  if ( (a1 & 3) != 0 )
  {
    if ( LdrpGetLoadAsEntry(a1, v11) < 0 )
      return v1;
    v2 = v11[1];
  }
  else
  {
    if ( (int)LdrFindEntryForAddress(a1, &v6) < 0 )
      return v1;
    v2 = *(_DWORD *)(v6 + 40);
  }
  if ( (unsigned __int8)RtlDosPathNameToRelativeNtPathName_U(v2, &v7, 0, v10) )
  {
    v3 = v8;
    if ( LOWORD(v10[0]) )
    {
      v4 = v10[2];
      v7 = v10[0];
      v8 = v10[1];
    }
    else
    {
      v4 = 0;
    }
    v9[0] = 24;
    v9[3] = 64;
    v9[4] = 0;
    v9[5] = 0;
    v9[1] = v3 != 0 ? v4 : 0;
    v9[2] = &v7;
    if ( (int)ZwQueryAttributesFile(v9, v12) >= 0 )
      v1 = (v13 & 0x400) == 0 ? 0xC0000001 : 0;
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v1;
}
