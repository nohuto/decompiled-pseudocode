/*
 * XREFs of BiGetDriveLayoutBlock @ 0x14077EF58
 * Callers:
 *     BiGetNtPartitionPath @ 0x14077E968 (BiGetNtPartitionPath.c)
 * Callees:
 *     BiGetDriveLayoutInformation @ 0x14078182C (BiGetDriveLayoutInformation.c)
 *     BiGetPhysicalDriveName @ 0x140972674 (BiGetPhysicalDriveName.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetDriveLayoutBlock(PCWSTR SourceString, PVOID *a2, __int64 a3)
{
  int DriveLayoutInformation; // ebx
  char *v7; // rax
  int v8; // ecx

  *a2 = 0LL;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  DriveLayoutInformation = BiGetDriveLayoutInformation(SourceString);
  if ( DriveLayoutInformation < 0 )
  {
    DriveLayoutInformation = BiGetPhysicalDriveName(SourceString);
    if ( DriveLayoutInformation < 0 )
      goto LABEL_15;
    DriveLayoutInformation = BiGetDriveLayoutInformation(0LL);
    ExFreePoolWithTag(0LL, 0x4B444342u);
    if ( DriveLayoutInformation < 0 )
      goto LABEL_15;
  }
  *(_DWORD *)a3 = 0;
  v7 = (char *)*a2;
  v8 = *(_DWORD *)*a2;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      *(_OWORD *)(a3 + 8) = *(_OWORD *)(v7 + 8);
    }
    else
    {
      DriveLayoutInformation = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 4) = 1;
    *(_DWORD *)(a3 + 8) = *((_DWORD *)v7 + 2);
  }
  if ( DriveLayoutInformation < 0 )
  {
LABEL_15:
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, 0x4B444342u);
      *a2 = 0LL;
    }
  }
  return (unsigned int)DriveLayoutInformation;
}
