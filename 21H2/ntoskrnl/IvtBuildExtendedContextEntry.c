/*
 * XREFs of IvtBuildExtendedContextEntry @ 0x1404DFAAC
 * Callers:
 *     IvtUpdateExtendedContextEntry @ 0x1404E0FB0 (IvtUpdateExtendedContextEntry.c)
 *     IvtInitializeIommu @ 0x1409AA880 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtBuildExtendedContextEntry(
        __int64 a1,
        char a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // edi
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  int v14; // r9d
  unsigned int v15; // r8d
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r10
  __int64 result; // rax

  v8 = 0;
  *(_QWORD *)a8 = 0LL;
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_QWORD *)(a8 + 24) = 0LL;
  v12 = *(_DWORD *)(a1 + 208) & 7;
  *(_QWORD *)(a8 + 8) = v12;
  if ( a5 )
  {
    *(_QWORD *)a8 |= 0xA00uLL;
    v13 = __readmsr(0x277u);
    v14 = 0;
    v15 = 0;
    do
    {
      v16 = v13 >> v15;
      v15 += 8;
      LODWORD(v16) = (v16 & 0xF) << v14;
      v14 += 4;
      v8 |= v16;
    }
    while ( v15 < 0x40 );
    v17 = *(_DWORD *)(a1 + 184);
    *(_DWORD *)(a8 + 12) = v8;
    v18 = *(_QWORD *)(a8 + 8);
    if ( (v17 & 0x40000000) != 0 )
      v18 |= 0x4000010uLL;
    *(_QWORD *)(a8 + 16) = a4 & 0xF | (a3 << 12) | *(_DWORD *)(a8 + 16) & 0xFF0;
    v12 = v18 & 0xFFFFFFFFFDFFFFFFuLL;
  }
  *(_QWORD *)(a8 + 8) = v12 ^ ((unsigned int)v12 ^ ((_DWORD)a6 << 8)) & 0xFFFF00;
  result = *(_DWORD *)a8 & 0xFE2;
  *(_QWORD *)a8 = result | (4 * ((a7 << 10) | a2 & 7)) | 1;
  return result;
}
