/*
 * XREFs of _xxxResolveDesktopForWOW@4 @ 0x154BAD
 * Callers:
 *     _NtUserResolveDesktopForWOW@4 @ 0x168441 (_NtUserResolveDesktopForWOW@4.c)
 * Callees:
 *     __OpenDesktop@20 @ 0x7DD0E (__OpenDesktop@20.c)
 *     ?SafeCopyUnicodeString@@YGXPAU_UNICODE_STRING@@QAU1@@Z @ 0x7E606 (-SafeCopyUnicodeString@@YGXPAU_UNICODE_STRING@@QAU1@@Z.c)
 *     __OpenWindowStation@12 @ 0x7E7F2 (__OpenWindowStation@12.c)
 *     _CloseProtectedHandle@8 @ 0xC931A (_CloseProtectedHandle@8.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall xxxResolveDesktopForWOW(struct _UNICODE_STRING *this)
{
  void (__stdcall *v2)(PUNICODE_STRING, PCWSTR); // edi
  int v3; // ebx
  WCHAR *Buffer; // edi
  __int16 v5; // cx
  WCHAR *i; // edx
  NTSTATUS v7; // edi
  char *v8; // ebx
  int v9; // ecx
  NTSTATUS v11; // edi
  HANDLE v13; // [esp+1Ch] [ebp-254h] BYREF
  struct _UNICODE_STRING *v14; // [esp+20h] [ebp-250h]
  ULONG_PTR RegionSize; // [esp+24h] [ebp-24Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-248h] BYREF
  UNICODE_STRING Source; // [esp+30h] [ebp-240h] BYREF
  struct _UNICODE_STRING Destination; // [esp+38h] [ebp-238h] BYREF
  HANDLE Handle; // [esp+40h] [ebp-230h]
  PVOID BaseAddress; // [esp+44h] [ebp-22Ch] BYREF
  _BYTE v21[528]; // [esp+48h] [ebp-228h] BYREF
  CPPEH_RECORD ms_exc; // [esp+258h] [ebp-18h]

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0;
  memset(v21, 0, 0x20Au);
  v13 = 0;
  BaseAddress = 0;
  *(_DWORD *)&Destination.Length = 34209792;
  Destination.Buffer = (PWSTR)v21;
  if ( !this->Length )
  {
    v2 = RtlInitUnicodeString;
    RtlInitUnicodeString(&DestinationString, L"Default");
LABEL_9:
    v2(&Source, L"WinSta0");
    goto LABEL_11;
  }
  v3 = *(_DWORD *)&this->Length;
  *(_DWORD *)&Source.Length = v3;
  Buffer = this->Buffer;
  Source.Buffer = Buffer;
  v5 = (unsigned __int16)v3 >> 1;
  for ( i = Buffer; v5 && *i != 92; ++i )
    --v5;
  if ( !v5 )
  {
    *(_DWORD *)&DestinationString.Length = v3;
    DestinationString.Buffer = Buffer;
    v2 = RtlInitUnicodeString;
    goto LABEL_9;
  }
  DestinationString.Buffer = i + 1;
  DestinationString.MaximumLength = 2 * v5 - 2;
  DestinationString.Length = DestinationString.MaximumLength;
  Source.Length = ((_WORD)i - (_WORD)Buffer) & 0xFFFE;
  *i = 0;
LABEL_11:
  RtlAppendUnicodeToString(&Destination, _szWindowStationDirectory);
  RtlAppendUnicodeToString(&Destination, L"\\");
  RtlAppendUnicodeStringToString(&Destination, &Source);
  RegionSize = 554;
  v7 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, 0, &RegionSize, 0x1000u, 4u);
  v8 = (char *)BaseAddress + 24;
  v14 = (struct _UNICODE_STRING *)((char *)BaseAddress + 24);
  if ( v7 < 0 )
    return -1073741801;
  ms_exc.registration.TryLevel = 0;
  SafeCopyUnicodeString((struct _UNICODE_STRING *)BaseAddress + 3, (int)&Destination);
  *(_DWORD *)BaseAddress = 24;
  *((_DWORD *)BaseAddress + 1) = 0;
  *((_DWORD *)BaseAddress + 3) = 64;
  *((_DWORD *)BaseAddress + 2) = v8;
  *((_DWORD *)BaseAddress + 4) = 0;
  *((_DWORD *)BaseAddress + 5) = 0;
  ms_exc.registration.TryLevel = -2;
  Handle = (HANDLE)_OpenWindowStation((int)BaseAddress, 0x2000000, v9);
  if ( Handle )
  {
    ms_exc.registration.TryLevel = 1;
    SafeCopyUnicodeString(v14, (int)&DestinationString);
    *(_DWORD *)BaseAddress = 24;
    *((_DWORD *)BaseAddress + 1) = Handle;
    *((_DWORD *)BaseAddress + 3) = 64;
    *((_DWORD *)BaseAddress + 2) = v14;
    *((_DWORD *)BaseAddress + 4) = 0;
    *((_DWORD *)BaseAddress + 5) = 0;
    ms_exc.registration.TryLevel = -2;
    v11 = _OpenDesktop(BaseAddress, 0, 0x2000000u, &v13);
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    ObCloseHandle(Handle, 1);
    if ( v11 >= 0 )
    {
      CloseProtectedHandle(v13, 1);
      RtlCopyUnicodeString(this, &Source);
      RtlAppendUnicodeToString(this, L"\\");
      RtlAppendUnicodeStringToString(this, &DestinationString);
      return 0;
    }
    else
    {
      return v11;
    }
  }
  else
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    return -1073741790;
  }
}
