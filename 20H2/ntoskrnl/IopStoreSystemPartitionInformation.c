/*
 * XREFs of IopStoreSystemPartitionInformation @ 0x140A5A548
 * Callers:
 *     IopMarkBootPartition @ 0x140A5A330 (IopMarkBootPartition.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140370FB0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwOpenSymbolicLinkObject @ 0x1403FA730 (ZwOpenSymbolicLinkObject.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 *     NtQuerySymbolicLinkObject @ 0x1406B1BE0 (NtQuerySymbolicLinkObject.c)
 *     IopCreateRegistryKeyEx @ 0x140738F90 (IopCreateRegistryKeyEx.c)
 *     IopOpenRegistryKeyEx @ 0x1407A2580 (IopOpenRegistryKeyEx.c)
 */

int __fastcall IopStoreSystemPartitionInformation(__int64 a1, unsigned __int16 *a2)
{
  int result; // eax
  int SymbolicLinkObject; // ebx
  int v5; // ebx
  HANDLE v6; // rbx
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  __int64 v9; // r8
  unsigned __int16 v10; // cx
  size_t Size; // [rsp+28h] [rbp-D8h]
  _WORD v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh]
  __int64 v14; // [rsp+38h] [rbp-C8h]
  int v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE LinkHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v18; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+98h] [rbp-68h] BYREF
  int v21; // [rsp+9Ch] [rbp-64h]
  int v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A4h] [rbp-5Ch]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  int v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B4h] [rbp-4Ch]
  wchar_t pszDest[256]; // [rsp+C0h] [rbp-40h] BYREF

  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Handle = 0LL;
  v18 = 0LL;
  *(_OWORD *)v15 = 0LL;
  v13 = 0;
  RtlStringCchCopyW(pszDest, 0x100uLL, IoArcHalDeviceName.Buffer);
  v14 = (__int64)pszDest;
  v12[0] = IoArcHalDeviceName.Length;
  if ( IoArcHalDeviceName.Length > 0x200u )
    v12[0] = 512;
  v12[1] = 510;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( result < 0 )
      break;
    SymbolicLinkObject = NtQuerySymbolicLinkObject(LinkHandle, (unsigned __int64)v12, 0LL);
    result = ObCloseHandle(LinkHandle, 0);
    if ( SymbolicLinkObject < 0 )
      return result;
    *(_WORD *)(v14 + 2 * ((unsigned __int64)v12[0] >> 1)) = 0;
  }
  if ( result == -1073741788 )
  {
    result = IopOpenRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineSystemName, 0xF003Fu);
    if ( result >= 0 )
    {
      *(_QWORD *)&v15[2] = &v20;
      v20 = 6619219;
      v21 = 7667828;
      v22 = 112;
      v15[0] = 786442;
      v5 = IopCreateRegistryKeyEx(&v18, Handle, (UNICODE_STRING *)v15, 0xF003Fu, 0, 0LL);
      result = ObCloseHandle(Handle, 0);
      if ( v5 >= 0 )
      {
        v6 = v18;
        if ( !InitIsWinPEMode )
        {
          v20 = 7929939;
          LODWORD(Size) = v12[0] + 2;
          v21 = 7602291;
          v22 = 7143525;
          v23 = 6357072;
          v24 = 7602290;
          v25 = 7602281;
          v26 = 7274601;
          v27 = 110;
          v15[0] = 2097182;
          NtSetValueKey((__int64)v18, (unsigned __int64)v15, 0, 1u, (void *)v14, Size);
        }
        v7 = *a2;
        v20 = 7536719;
        v8 = v7;
        v21 = 7274572;
        v22 = 6553697;
        v23 = 7471205;
        v24 = 6357072;
        v25 = 6815860;
        LOWORD(v26) = 0;
        v15[0] = 1703960;
        if ( (unsigned __int16)v7 > 2u )
        {
          v9 = *((_QWORD *)a2 + 1);
          if ( *(_WORD *)(v7 + v9 - 2) == 92 )
          {
            v10 = v7 - 2;
            *a2 = v10;
            *(_WORD *)(v10 + v9) = 0;
            v8 = *a2;
          }
        }
        LODWORD(Size) = v8 + 2;
        NtSetValueKey((__int64)v6, (unsigned __int64)v15, 0, 1u, *((void **)a2 + 1), Size);
        return ObCloseHandle(v6, 0);
      }
    }
  }
  return result;
}
