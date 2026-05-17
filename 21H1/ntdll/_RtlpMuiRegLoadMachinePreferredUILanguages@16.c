/*
 * XREFs of _RtlpMuiRegLoadMachinePreferredUILanguages@16 @ 0x4B36BB58
 * Callers:
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __thiscall RtlpMuiRegLoadMachinePreferredUILanguages(_DWORD *this, _BYTE *a2, int *a3)
{
  const unsigned __int16 *v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx
  unsigned __int16 *Heap; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  unsigned int v11; // [esp-14h] [ebp-54h]
  _DWORD v12[6]; // [esp+10h] [ebp-30h] BYREF
  UNICODE_STRING DestinationString; // [esp+28h] [ebp-18h] BYREF
  _DWORD *v14; // [esp+30h] [ebp-10h]
  int v15; // [esp+34h] [ebp-Ch] BYREF
  int v16; // [esp+38h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+3Ch] [ebp-4h] BYREF

  Handle = 0;
  v15 = 0;
  v3 = 0;
  v14 = this;
  v16 = 7;
  if ( this && a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v12[0] = 24;
    v12[2] = &DestinationString;
    v12[1] = 0;
    v12[3] = 64;
    v12[4] = 0;
    v12[5] = 0;
    if ( ZwOpenKey((int)&Handle, 131097, (int)v12) < 0 )
      goto LABEL_5;
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v6 = LdrpQueryValueKey((int)Handle, (int)&DestinationString, &v16, 0, (unsigned int *)&v15, v5);
    v4 = -1073741772;
    if ( v6 == -1073741772 || !v15 )
      goto LABEL_5;
    if ( v6 != -2147483643 )
      goto LABEL_16;
    Heap = (unsigned __int16 *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v15 + 2);
    v3 = Heap;
    if ( !Heap )
    {
      v4 = -1073741801;
      goto LABEL_16;
    }
    v4 = LdrpQueryValueKey((int)Handle, (int)&DestinationString, &v16, Heap, (unsigned int *)&v15, v8);
    if ( v4 >= 0 )
    {
      if ( v16 == 7 || v16 == 1 )
      {
        v9 = v14;
        v11 = (unsigned int)v15 >> 1;
        *a2 = 0;
        v4 = RtlpMuiRegAddMultiSzToLangFallbackList(v9, v3, v11, 8, 3, 1u, a3);
        goto LABEL_16;
      }
LABEL_5:
      v4 = 0;
      *a2 = 1;
    }
  }
  else
  {
    v4 = -1073741811;
  }
LABEL_16:
  if ( Handle )
    NtClose(Handle);
  if ( v3 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v3);
  return v4;
}
