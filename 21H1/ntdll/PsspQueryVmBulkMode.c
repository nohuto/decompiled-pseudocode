/*
 * XREFs of PsspQueryVmBulkMode @ 0x4B387BC0
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwPssCaptureVaSpaceBulk@20 @ 0x4B2F3D40 (_ZwPssCaptureVaSpaceBulk@20.c)
 */

int __stdcall PsspQueryVmBulkMode(int *a1, unsigned int a2, int a3, unsigned int *a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v6; // edi
  int result; // eax
  _DWORD *v8; // ecx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax

  v6 = a2 & 0xFFFFF000;
  if ( a3 )
    return NtQueryVirtualMemory(*a1, a2, a3, (int)a4, a5, (int)a6);
  if ( a5 < 0x1C )
    return -1073741820;
  v8 = (_DWORD *)a1[1];
  if ( !a2 )
  {
    a1[3] = 0;
    v8[1] = 0;
    return NtQueryVirtualMemory(*a1, 0, 0, (int)a4, a5, (int)a6);
  }
  if ( a1[3] == v8[1] )
  {
    *v8 = 3;
    result = ZwPssCaptureVaSpaceBulk(*a1, a2, a1[1], a1[2], (int)a6);
    if ( result == -1073741503 || result == -1073741822 )
      return NtQueryVirtualMemory(*a1, a2, 0, (int)a4, a5, (int)a6);
    if ( result < 0 )
      return result;
    v6 = a2 & 0xFFFFF000;
    a1[3] = 0;
  }
  if ( a6 )
    *a6 = 0;
  v9 = a1[1];
  if ( !*(_DWORD *)(v9 + 4) )
    return -2147483622;
  v10 = v9 + 28 * a1[3];
  v11 = *(_DWORD *)(v10 + 12);
  if ( a2 >= v11 )
  {
    if ( v6 != v11 )
      return -1073741503;
    qmemcpy(a4, (const void *)(v10 + 12), 0x1Cu);
    ++a1[3];
  }
  else
  {
    *a4 = v6;
    a4[1] = 0;
    a4[2] = 0;
    v12 = *(_DWORD *)(v10 + 12) - v6;
    a4[4] = 0x10000;
    a4[3] = v12;
    a4[5] = 1;
    a4[6] = 0;
  }
  if ( a6 )
    *a6 = 28;
  return 0;
}
