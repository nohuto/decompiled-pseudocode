/*
 * XREFs of _LdrpGetImageSize@8 @ 0x4B33F62D
 * Callers:
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 */

int __fastcall LdrpGetImageSize(unsigned int a1, int *a2)
{
  int VirtualMemory; // esi
  int FileSizeFromLoadAsDataTable; // edi
  int v5; // eax
  __int16 v6; // cx
  char v8[12]; // [esp+Ch] [ebp-24h] BYREF
  int v9; // [esp+18h] [ebp-18h]
  int *v10; // [esp+28h] [ebp-8h]
  unsigned int v11; // [esp+2Ch] [ebp-4h]

  v10 = a2;
  VirtualMemory = 0;
  FileSizeFromLoadAsDataTable = 0;
  v11 = a1 & 0xFFFFFFFC;
  v5 = RtlImageNtHeader(a1 & 0xFFFFFFFC);
  if ( !v5 )
    goto LABEL_10;
  if ( (a1 & 1) == 0 )
  {
    v6 = *(_WORD *)(v5 + 24);
    if ( v6 == 267 || v6 == 523 )
    {
      FileSizeFromLoadAsDataTable = *(_DWORD *)(v5 + 80);
      goto LABEL_11;
    }
LABEL_10:
    VirtualMemory = -1073741701;
    goto LABEL_11;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable((void *)a1);
  if ( !FileSizeFromLoadAsDataTable )
  {
    VirtualMemory = NtQueryVirtualMemory(-1, v11, 3, (int)v8, 28, 0);
    if ( VirtualMemory < 0 )
      VirtualMemory = -1073741793;
    else
      FileSizeFromLoadAsDataTable = v9;
  }
LABEL_11:
  *v10 = FileSizeFromLoadAsDataTable;
  return VirtualMemory;
}
