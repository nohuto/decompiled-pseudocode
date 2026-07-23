/*
 * XREFs of __RtlMuiRegAddLIPParent@16 @ 0x4B36C0BB
 * Callers:
 *     __RtlpMuiRegInitLIPLanguage@12 @ 0x4B36C534 (__RtlpMuiRegInitLIPLanguage@12.c)
 * Callees:
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall _RtlMuiRegAddLIPParent(_DWORD *a1, int a2, unsigned int a3, WCHAR *SourceString)
{
  int v4; // ebx
  int v6; // esi
  __int16 v7; // ax
  int v8; // ecx
  __int16 *v9; // edx
  int v10; // ecx
  __int16 v11; // ax
  unsigned int v12; // ebx
  __int16 v13; // ax
  __int16 v14; // cx
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-14h] BYREF
  int v17; // [esp+14h] [ebp-Ch]
  DWORD Lcid; // [esp+18h] [ebp-8h] BYREF
  __int16 v19; // [esp+1Ch] [ebp-4h] BYREF

  v4 = 0;
  v17 = (int)a1;
  Lcid = 0;
  v19 = -1;
  if ( !a1 || !a2 || a3 >= 4 || !SourceString || !*SourceString )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
    return -1073741823;
  v6 = RtlpMuiRegGetOrAddString((_DWORD *)v17, SourceString, 1, &v19);
  if ( v6 < 0 )
    return -1073741823;
  v7 = v19;
  if ( v19 < 0 )
    return -1073741823;
  v8 = *(_DWORD *)(v17 + 20);
  v9 = *(__int16 **)(v8 + 12);
  v10 = *(unsigned __int16 *)(v8 + 6);
  if ( !v10 )
  {
LABEL_16:
    if ( (_WORD)Lcid )
    {
      v12 = a3;
      v13 = Lcid;
      *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & ~(3 << (2 * a3)) | (1 << (2 * a3));
      goto LABEL_26;
    }
    if ( v7 > 0 )
    {
      v12 = a3;
      *(_WORD *)(a2 + 8) = (3 << (2 * a3)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * a3));
      v13 = v19;
      goto LABEL_26;
    }
    return -1073741823;
  }
  while ( 1 )
  {
    v11 = *v9;
    v17 = 12324;
    if ( (v11 & 0x3024) != 0x20 )
      goto LABEL_14;
    if ( (unsigned __int16)Lcid != 4096 && (unsigned __int16)Lcid != 5120 )
      break;
    v7 = v19;
    if ( v9[3] == v19 )
      goto LABEL_22;
LABEL_15:
    ++v4;
    v9 += 14;
    if ( v4 >= v10 )
      goto LABEL_16;
  }
  if ( v9[2] != (_WORD)Lcid )
  {
LABEL_14:
    v7 = v19;
    goto LABEL_15;
  }
  v14 = v9[3];
  v7 = v19;
  if ( v14 >= 0 && v14 != v19 )
    return -1073741823;
LABEL_22:
  v17 = (unsigned __int16)v4;
  if ( (v4 & 0x8000u) != 0 )
    goto LABEL_16;
  v12 = a3;
  v13 = v17;
  *(_WORD *)(a2 + 8) = (2 << (2 * a3)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * a3));
LABEL_26:
  *(_WORD *)(a2 + 2 * v12 + 12) = v13;
  return v6;
}
