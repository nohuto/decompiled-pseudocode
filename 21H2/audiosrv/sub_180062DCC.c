/*
 * XREFs of sub_180062DCC @ 0x180062DCC
 * Callers:
 *     sub_180062D08 @ 0x180062D08 (sub_180062D08.c)
 * Callees:
 *     sub_180063074 @ 0x180063074 (sub_180063074.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

__int64 sub_180062DCC()
{
  unsigned int KernelObjectSecurity; // esi
  void *v1; // rax
  void *v2; // r14
  int v3; // r12d
  HANDLE CurrentProcess; // rax
  HANDLE v5; // rax
  void *v6; // r15
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  PACL pDacl; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+38h] [rbp-40h] BYREF
  DWORD nLengthNeeded; // [rsp+80h] [rbp+8h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+10h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+90h] [rbp+18h] BYREF
  PACL v17; // [rsp+98h] [rbp+20h] BYREF

  KernelObjectSecurity = 0;
  RtlInitializeResource(&Resource);
  dword_18019E630 = 1;
  v1 = (void *)sub_1800631C0();
  v2 = v1;
  if ( v1 )
  {
    v3 = 0;
    FileMappingAttributes.nLength = 24;
    FileMappingAttributes.lpSecurityDescriptor = v1;
    FileMappingAttributes.bInheritHandle = 0;
    CurrentProcess = GetCurrentProcess();
    v5 = CreateFileMappingW(CurrentProcess, &FileMappingAttributes, 4u, 0, 0xCu, L"Global\\mmGlobalPnpInfo");
    hObject = v5;
    if ( v5 )
    {
      KernelObjectSecurity = GetKernelObjectSecurity(v5, 4u, 0LL, 0, &nLengthNeeded);
      if ( GetLastError() == 122 )
      {
        v6 = HeapAlloc(hHeap, 0, nLengthNeeded);
        if ( v6 )
        {
          if ( GetKernelObjectSecurity(hObject, 4u, v6, nLengthNeeded, &nLengthNeeded)
            && GetSecurityDescriptorDacl(v2, &bDaclPresent, &pDacl, &bDaclDefaulted)
            && bDaclPresent
            && GetSecurityDescriptorDacl(v6, &bDaclPresent, &v17, &bDaclDefaulted)
            && bDaclPresent )
          {
            v3 = sub_180063074(pDacl, v17);
          }
          HeapFree(hHeap, 0, v6);
        }
      }
    }
    HeapFree(hHeap, 0, v2);
    if ( v3 )
    {
      if ( hObject )
      {
        v7 = MapViewOfFile(hObject, 2u, 0, 0, 0LL);
        lpBaseAddress = v7;
        if ( v7 )
        {
          *(_QWORD *)v7 = 0LL;
          v7[2] = 0;
          *v7 = 12;
          v7[1] = 0;
          v8 = HeapAlloc(hHeap, 8u, 0xCuLL);
          lpMem = v8;
          if ( v8 )
          {
            *v8 = 12;
            *((_DWORD *)lpMem + 1) = 0;
            return 1;
          }
          v10 = off_18019C348;
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            v11 = 20LL;
LABEL_38:
            sub_1800BB4B4(v10[2], v11, &unk_180171E90);
          }
        }
        else
        {
          v10 = off_18019C348;
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            v11 = 21LL;
            goto LABEL_38;
          }
        }
      }
      else
      {
        v10 = off_18019C348;
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          v11 = 22LL;
          goto LABEL_38;
        }
      }
    }
    else
    {
      v10 = off_18019C348;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        v11 = 23LL;
        goto LABEL_38;
      }
    }
  }
  else
  {
    v10 = off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x20) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v11 = 24LL;
      goto LABEL_38;
    }
  }
  if ( !KernelObjectSecurity )
  {
    if ( lpMem )
      HeapFree(hHeap, 0, lpMem);
    if ( lpBaseAddress )
      UnmapViewOfFile(lpBaseAddress);
    if ( hObject )
      CloseHandle(hObject);
    if ( dword_18019E630 )
      RtlDeleteResource(&Resource);
    lpBaseAddress = 0LL;
    hObject = 0LL;
    dword_18019E630 = 0;
  }
  return KernelObjectSecurity;
}
