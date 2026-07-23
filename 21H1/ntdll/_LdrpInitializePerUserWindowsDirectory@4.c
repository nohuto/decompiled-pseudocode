/*
 * XREFs of _LdrpInitializePerUserWindowsDirectory@4 @ 0x4B2EC686
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 *     _RtlpSignalSystemDirsModification@0 @ 0x4B33D390 (_RtlpSignalSystemDirsModification@0.c)
 */

int __thiscall LdrpInitializePerUserWindowsDirectory(int (__stdcall *this)(_BYTE *, int))
{
  int v1; // ecx
  unsigned __int16 v3; // si
  char v4; // al
  SIZE_T v5; // [esp+0h] [ebp-22Ch]
  _UNICODE_STRING Destination; // [esp+8h] [ebp-224h] BYREF
  UNICODE_STRING Source; // [esp+10h] [ebp-21Ch] BYREF
  PVOID Cookie; // [esp+18h] [ebp-214h] BYREF
  _BYTE v9[524]; // [esp+1Ch] [ebp-210h] BYREF

  v1 = 2 * this(v9, 260);
  if ( !v1 )
    return 0;
  Source.Buffer = (wchar_t *)v9;
  Source.Length = v1;
  Source.MaximumLength = 520;
  if ( !RtlpSystemDirs.Buffer )
  {
LABEL_11:
    LdrAddDllDirectory(&Source, &Cookie);
    return 0;
  }
  v3 = v1 + RtlpSystemDirs.Length + 2;
  LODWORD(v5) = v1 + RtlpSystemDirs.Length + 2;
  Destination.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( Destination.Buffer )
  {
    Destination.MaximumLength = v3;
    Destination.Length = 0;
    RtlAppendUnicodeStringToString(&Destination, &RtlpSystemDirs);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, (PCWSTR)L";");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RtlpSystemDirs.Buffer);
    RtlpSystemDirs = Destination;
    dword_4B3A6604 = Destination.Buffer;
    RtlpSignalSystemDirsModification();
    goto LABEL_11;
  }
  v4 = ShowSnaps;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrinit.c",
      3316,
      "LdrpInitializePerUserWindowsDirectory",
      0,
      "Failed to reallocate the system dirs string !\n");
    v4 = ShowSnaps;
  }
  if ( (v4 & 0x10) != 0 )
    __debugbreak();
  return -1073741801;
}
