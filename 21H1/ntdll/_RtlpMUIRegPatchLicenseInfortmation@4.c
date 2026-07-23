/*
 * XREFs of _RtlpMUIRegPatchLicenseInfortmation@4 @ 0x4B2D427F
 * Callers:
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpIsALicensedLIPLanguage@8 @ 0x4B2D2C81 (_RtlpIsALicensedLIPLanguage@8.c)
 *     _RtlpIsALicensedRegularLanguage@8 @ 0x4B2D437C (_RtlpIsALicensedRegularLanguage@8.c)
 *     _GetNameFromLangListNode@12 @ 0x4B2D4413 (_GetNameFromLangListNode@12.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

int __thiscall RtlpMUIRegPatchLicenseInfortmation(int this)
{
  wchar_t *Heap; // ebx
  int v3; // edi
  _WORD *v4; // edx
  signed int InstalledLanguageIndexByName; // eax
  SIZE_T v7; // [esp-4h] [ebp-2Ch]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-18h] BYREF
  int v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-Ch]
  int v11; // [esp+20h] [ebp-8h]
  __int16 v12; // [esp+24h] [ebp-4h] BYREF

  v12 = 0;
  if ( !this )
    return -1073741823;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  if ( *(_WORD *)(this + 4) > 0x40u )
    return -1073741823;
  LODWORD(v7) = 170;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v7);
  if ( !Heap )
    return -1073741801;
  v3 = *(unsigned __int16 *)(this + 4) - 1;
  if ( v3 >= 0 )
  {
    v11 = 6 * v3;
    do
    {
      v9 = (unsigned __int64)(1LL << v3) >> 32;
      v4 = (_WORD *)(*(_DWORD *)(this + 16) + v11);
      v10 = 1LL << v3;
      if ( !*v4 )
        goto LABEL_13;
      DestinationString.Buffer = Heap;
      *(_DWORD *)&DestinationString.Length = 11141120;
      if ( GetNameFromLangListNode(&DestinationString) < 0 )
        goto LABEL_13;
      if ( *((_DWORD *)g_RegInfo + 18) < 0x3E8u )
      {
        InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(
                                         g_RegInfo,
                                         DestinationString.Buffer,
                                         1,
                                         &v12);
      }
      else
      {
        if ( RtlpIsALicensedRegularLanguage(g_RegInfo, DestinationString.Buffer) >= 0 )
          goto LABEL_12;
        InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage((int)g_RegInfo, DestinationString.Buffer);
      }
      if ( InstalledLanguageIndexByName >= 0 )
      {
LABEL_12:
        *(_DWORD *)(this + 24) |= v10;
        *(_DWORD *)(this + 28) |= v9;
      }
LABEL_13:
      v11 -= 6;
      --v3;
    }
    while ( v3 >= 0 );
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0;
}
