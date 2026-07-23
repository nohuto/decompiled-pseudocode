/*
 * XREFs of BiUpdateEfiEntry @ 0x14096FC84
 * Callers:
 *     BiCreateEfiEntry @ 0x14096DDE8 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x14096E5B0 (BiExportBcdObjects.c)
 * Callees:
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405BEB2C (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     BiGetElement @ 0x14096C058 (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x14096DFCC (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x14096F308 (BiModifyBootEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(void *a1, const GUID *a2)
{
  PVOID v2; // r12
  _DWORD *v4; // r15
  _WORD *v5; // r14
  NTSTATUS v6; // ebx
  int updated; // eax
  _DWORD *v8; // r13
  int v9; // eax
  _BOOT_ENTRY *v10; // rdi
  unsigned int v11; // eax
  int v13; // [rsp+30h] [rbp-30h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+40h] [rbp-20h] BYREF
  _WORD *v16; // [rsp+48h] [rbp-18h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  void *Buf2; // [rsp+58h] [rbp-8h] BYREF
  int v20; // [rsp+B0h] [rbp+50h] BYREF
  int v21; // [rsp+B8h] [rbp+58h] BYREF

  v20 = 0;
  v21 = 0;
  v2 = 0LL;
  Buf2 = 0LL;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  v13 = 0;
  v5 = 0LL;
  P = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  if ( v6 < 0 )
    goto LABEL_15;
  BiGetElement(BcdObjectHandle, 0x12000004u, &P, &v20);
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BiGetElement(BcdObjectHandle, 0x11000001u, &v15, &v21);
    updated = BiSpacesUpdatePhysicalDevicePath((ULONG_PTR *)&v15);
    if ( updated < 0 )
      BiLogMessage(3LL, L"BiSpacesUpdatePhysicalDevicePath failed %x", (unsigned int)updated);
    BiGetElement(BcdObjectHandle, 0x12000002u, &v16, &v13);
    v4 = v15;
    v5 = v16;
  }
  v8 = *(_DWORD **)a2[2].Data4;
  v2 = P;
  v9 = BiCreateMergedBootEntry(v8, P, v4, v5, &Buf2);
  v6 = v9;
  if ( v9 == -1073741766 )
  {
    v6 = 0;
    goto LABEL_16;
  }
  if ( v9 < 0 )
    goto LABEL_15;
  if ( (v10 = (_BOOT_ENTRY *)Buf2, v11 = v8[1], v11 == *((_DWORD *)Buf2 + 1)) && !memcmp(v8, Buf2, v11)
    || (v6 = BiModifyBootEntry(v10), v6 >= 0) )
  {
    ExFreePoolWithTag(v8, 0x4B444342u);
    *(_QWORD *)a2[2].Data4 = v10;
  }
  else
  {
    ExFreePoolWithTag(v10, 0x4B444342u);
  }
  if ( v6 < 0 )
LABEL_15:
    BiLogMessage(4LL, L"BiUpdateEfiEntry failed %x", (unsigned int)v6);
LABEL_16:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v6;
}
