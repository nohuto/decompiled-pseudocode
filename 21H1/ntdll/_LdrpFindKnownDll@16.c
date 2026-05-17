/*
 * XREFs of _LdrpFindKnownDll@16 @ 0x4B2D0FCB
 * Callers:
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _LdrpAllocateUnicodeString@8 @ 0x4B2D1D30 (_LdrpAllocateUnicodeString@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenSection@12 @ 0x4B2F2CF0 (_NtOpenSection@12.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __fastcall LdrpFindKnownDll(unsigned __int16 *a1, int a2, unsigned __int16 *a3, HANDLE *a4)
{
  int v5; // eax
  int UnicodeString; // esi
  int v7; // esi
  _DWORD v9[6]; // [esp+Ch] [ebp-1Ch] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v10 = a2;
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 1541, "LdrpFindKnownDll", 3, "DLL name: %wZ\n", a1);
  if ( !LdrpKnownDllDirectoryHandle )
  {
LABEL_11:
    UnicodeString = -1073741515;
    goto LABEL_7;
  }
  v9[4] = 0;
  v9[5] = 0;
  v9[1] = LdrpKnownDllDirectoryHandle;
  v9[0] = 24;
  v9[3] = 64;
  v9[2] = a1;
  v5 = NtOpenSection(a4, 13, v9);
  UnicodeString = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741772 )
      goto LABEL_7;
    goto LABEL_11;
  }
  UnicodeString = LdrpAllocateUnicodeString(a3, *a1 + (unsigned __int16)LdrpKnownDllPath + 2);
  if ( UnicodeString < 0 )
  {
    NtClose(*a4);
  }
  else
  {
    RtlAppendUnicodeStringToString(a3, &LdrpKnownDllPath);
    RtlAppendUnicodeToString(a3, L"\\");
    v7 = *((_DWORD *)a3 + 1) + *a3;
    RtlAppendUnicodeStringToString(a3, a1);
    RtlInitUnicodeStringEx(v10, v7);
    UnicodeString = 0;
  }
LABEL_7:
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrmap.c", 1613, "LdrpFindKnownDll", 4, "Status: 0x%08lx\n", UnicodeString);
  return UnicodeString;
}
