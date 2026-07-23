/*
 * XREFs of _RtlpConvertCultureNamesToLCIDs@8 @ 0x4B353970
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _wcsnlen @ 0x4B2FA870 (_wcsnlen.c)
 *     _LdrpMultiSZCchLength@12 @ 0x4B35187C (_LdrpMultiSZCchLength@12.c)
 *     _RtlConvertLCIDToString@20 @ 0x4B351910 (_RtlConvertLCIDToString@20.c)
 */

int __stdcall RtlpConvertCultureNamesToLCIDs(wchar_t *Source, PVOID *a2)
{
  unsigned int v2; // ebx
  int v3; // esi
  const wchar_t *v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  PVOID Heap; // eax
  WCHAR *v8; // edi
  DWORD *v9; // eax
  WCHAR *v10; // ecx
  __int16 v11; // ax
  int v12; // eax
  WCHAR *v13; // ecx
  unsigned int v14; // edx
  __int16 v15; // ax
  size_t v17; // [esp-4h] [ebp-44h]
  PLCID Lcid; // [esp+Ch] [ebp-34h] BYREF
  unsigned int v19; // [esp+10h] [ebp-30h]
  PVOID BaseAddress; // [esp+14h] [ebp-2Ch]
  WCHAR *v21; // [esp+18h] [ebp-28h]
  int v22; // [esp+1Ch] [ebp-24h]
  PVOID *v23; // [esp+20h] [ebp-20h]
  _UNICODE_STRING DestinationString; // [esp+24h] [ebp-1Ch] BYREF
  LCID LcidValue[4]; // [esp+2Ch] [ebp-14h] BYREF

  v23 = a2;
  v22 = 0;
  BaseAddress = 0;
  v2 = 0;
  v3 = 0;
  v4 = Source;
  if ( !a2 || !Source || *a2 || LdrpMultiSZCchLength(Source, (unsigned int *)&Lcid) < 0 )
    return -1073741811;
  v5 = 2 * (_DWORD)Lcid;
  Lcid = LcidValue;
  v19 = v5;
  while ( *v4 && v5 )
  {
    if ( v2 >= 4 )
      goto LABEL_16;
    LODWORD(v17) = v5 >> 1;
    v21 = (WCHAR *)(2 * wcsnlen(v4, v17));
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
    if ( !RtlCultureNameToLCID(&DestinationString, Lcid) )
      goto LABEL_16;
    v6 = 0;
    if ( v2 )
    {
      while ( *Lcid != LcidValue[v6] )
      {
        if ( ++v6 >= v2 )
          goto LABEL_13;
      }
LABEL_16:
      v3 = -1073741811;
LABEL_25:
      *v23 = BaseAddress;
      return v3;
    }
LABEL_13:
    ++Lcid;
    ++v2;
    v19 += -2 - (_DWORD)v21;
    v5 = v19;
    v4 = (const wchar_t *)((char *)v4 + (_DWORD)v21 + 2);
    if ( !v4 )
      break;
  }
  LODWORD(v17) = (unsigned __int16)(((_WORD)v2 << 6) + 4);
  v19 = v17;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  BaseAddress = Heap;
  if ( !Heap )
  {
    v3 = -1073741801;
    goto LABEL_25;
  }
  v8 = (WCHAR *)Heap;
  v9 = 0;
  Lcid = 0;
  if ( !v2 )
  {
LABEL_24:
    *(_DWORD *)v8 = 0;
    goto LABEL_25;
  }
  while ( 1 )
  {
    RtlConvertLCIDToString(LcidValue[(_DWORD)v9], 0x10u, 4u, v8, 0x20u);
    v10 = v8;
    do
      v11 = *v10++;
    while ( v11 != (_WORD)v22 );
    v12 = -2 - (v10 - (v8 + 1));
    v13 = v8;
    v14 = v12 + v19;
    v19 += v12;
    v21 = v8 + 1;
    do
      v15 = *v13++;
    while ( v15 != (_WORD)v22 );
    v8 += v13 - v21 + 1;
    if ( v14 < 4 )
      break;
    v9 = (PLCID)((char *)Lcid + 1);
    Lcid = v9;
    if ( (unsigned int)v9 >= v2 )
      goto LABEL_24;
  }
  v3 = -1073741595;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return v3;
}
