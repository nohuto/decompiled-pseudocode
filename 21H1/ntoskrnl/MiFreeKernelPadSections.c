/*
 * XREFs of MiFreeKernelPadSections @ 0x140A67380
 * Callers:
 *     MiInitializeDriverImages @ 0x140A4165C (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     MiIsKernelHalPadSection @ 0x1403C3EDC (MiIsKernelHalPadSection.c)
 *     MiFreeInitializationCode @ 0x14074764C (MiFreeInitializationCode.c)
 *     VslReserveProtectedPages @ 0x140768B80 (VslReserveProtectedPages.c)
 */

void __fastcall MiFreeKernelPadSections(_QWORD *a1, int a2)
{
  int v2; // esi
  PIMAGE_NT_HEADERS v4; // rax
  int v5; // r14d
  __int64 v6; // r10
  int NumberOfSections; // ebp
  _DWORD *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r15
  unsigned int v11; // r8d
  unsigned int v12; // r12d

  v2 = a2;
  if ( dword_140CFB1D8 != 2 )
  {
    v4 = RtlImageNtHeader(a1);
    v5 = 0;
    v6 = 0x7FFFFFFFF8LL;
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v8 = (_DWORD *)((char *)&v4->OptionalHeader.Magic + v4->FileHeader.SizeOfOptionalHeader);
    if ( v4->FileHeader.NumberOfSections )
    {
      do
      {
        if ( MiIsKernelHalPadSection((__int64)v8) )
        {
          v9 = v8[4];
          v10 = (unsigned int)v8[3];
          if ( v9 < v8[2] )
            v9 = v8[2];
          ++v5;
          v11 = (v9 + 4095) & 0xFFFFF000;
          v12 = v11 + v10;
          if ( v5 != 1 || dword_140CFB1D8 != 1 )
          {
            if ( (MiFlags & 0x8000) != 0 )
            {
              VslReserveProtectedPages(0LL, (__int64)a1 + v10, v11 >> 12, 2u);
              v6 = 0x7FFFFFFFF8LL;
            }
            MiFreeInitializationCode(
              a1,
              (v6 & (((unsigned __int64)a1 + v10) >> 9)) - 0x98000000000LL,
              (v6 & (((unsigned __int64)a1 + v12 - 1) >> 9)) - 0x98000000000LL,
              1);
            v6 = 0x7FFFFFFFF8LL;
          }
        }
        v8 += 10;
        --NumberOfSections;
      }
      while ( NumberOfSections );
      v2 = a2;
    }
    if ( (MiFlags & 4) != 0 && (*(_QWORD *)&v2 & 0x1FFFFFLL) != 0 )
      MiFreeInitializationCode(
        a1,
        (v6 & (((unsigned __int64)a1 + (unsigned int)(v2 - (_DWORD)a1)) >> 9)) - 0x98000000000LL,
        (v6 & (((unsigned __int64)a1 + ((v2 - (_DWORD)a1 + 0x1FFFFF) & 0xFFE00000) - 1) >> 9)) - 0x98000000000LL,
        1);
  }
}
