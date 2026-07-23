/*
 * XREFs of HalpAuditEnumerateRsdtsInRange @ 0x140A666CC
 * Callers:
 *     HalpAuditEnumerateRsdts @ 0x140A66638 (HalpAuditEnumerateRsdts.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     HalpAuditSelectRsdtOrXsdt @ 0x140A667A8 (HalpAuditSelectRsdtOrXsdt.c)
 *     HalpAuditAllocateRsdtArrayTable @ 0x140A668DC (HalpAuditAllocateRsdtArrayTable.c)
 */

__int64 __fastcall HalpAuditEnumerateRsdtsInRange(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  SIZE_T v5; // rbp
  char *v7; // r15
  int RsdtArrayTable; // ebx
  unsigned int i; // edi
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rax

  v5 = a2;
  v7 = (char *)MmMapIoSpaceEx(a1, a2, 0x204u);
  if ( v7 )
  {
    RsdtArrayTable = 0;
    for ( i = 0; i < (unsigned int)v5; i += 16 )
    {
      if ( *(_QWORD *)&v7[i] == 0x2052545020445352LL )
      {
        v11 = (_DWORD *)*a4;
        if ( *(_DWORD *)*a4 < (unsigned int)(*(_DWORD *)(*a4 + 4) + 1) )
        {
          RsdtArrayTable = HalpAuditAllocateRsdtArrayTable(a4);
          if ( RsdtArrayTable < 0 )
            break;
          v11 = (_DWORD *)*a4;
        }
        RsdtArrayTable = HalpAuditSelectRsdtOrXsdt(&v7[i], &v11[8 * v11[1] + 2]);
        if ( RsdtArrayTable >= 0 )
        {
          v13 = *(_DWORD *)(v12 + 12) & 0xFFFFFFF7;
          if ( a3 )
            v13 = *(_DWORD *)(v12 + 12) | 8;
          v14 = *a4;
          *(_DWORD *)(v12 + 12) = v13;
          ++*(_DWORD *)(v14 + 4);
        }
      }
    }
    MmUnmapIoSpace(v7, v5);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)RsdtArrayTable;
}
