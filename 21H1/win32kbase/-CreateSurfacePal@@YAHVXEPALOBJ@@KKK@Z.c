/*
 * XREFs of ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0156D6C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000FF20 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00CE860 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0146794 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall CreateSurfacePal(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // edx
  const unsigned int *v6; // r9
  unsigned int v8; // r8d
  unsigned int Palette; // esi
  unsigned int v11; // r8d
  struct _SLIST_ENTRY *v12; // rbx
  unsigned int v13; // r10d
  __int64 v14; // r9
  struct _SLIST_ENTRY *Next; // rcx
  struct _SLIST_ENTRY *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // eax
  __int64 v21; // rcx
  struct _SLIST_ENTRY *v23; // [rsp+50h] [rbp-28h] BYREF
  int v24; // [rsp+58h] [rbp-20h]
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+88h] [rbp+10h]

  v26 = a2;
  v25 = a1;
  v4 = *(_DWORD *)(a1 + 24);
  v6 = *(const unsigned int **)(a1 + 112);
  v8 = *(_DWORD *)(a1 + 28);
  v24 = 0;
  v23 = 0LL;
  Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v23, v4 & 0x1F, v8, v6, 0, 0, 0, 0x800u, 1);
  if ( Palette )
  {
    v11 = a3 >> 1;
    if ( a3 >> 1 > a4 || (v12 = v23, a4 > *((_DWORD *)&v23[1].Next + 3)) )
    {
      Palette = 0;
    }
    else
    {
      v13 = 0;
      Palette = 1;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xFFFFF5FF | 0x800;
      *(_DWORD *)(a1 + 60) = a3;
      *((_DWORD *)&v12[3].Next + 3) = a3;
      if ( v11 )
      {
        v14 = 0LL;
        do
        {
          Next = v12[7].Next;
          v26 = *(_DWORD *)((char *)&Next->Next + v14);
          HIBYTE(v26) = 48;
          *(_DWORD *)((char *)&Next->Next + v14) = v26;
          v16 = v12[7].Next;
          v14 += 4LL;
          v17 = v13 - v11;
          ++v13;
          v18 = a4 + v17;
          v26 = *((_DWORD *)&v16->Next + v18);
          HIBYTE(v26) = 48;
          *((_DWORD *)&v16->Next + (unsigned int)v18) = v26;
        }
        while ( v13 < v11 );
      }
      v19 = *((_DWORD *)&v12[1].Next + 3);
      if ( v19 >= *(_DWORD *)(a1 + 28) )
        v19 = *(_DWORD *)(a1 + 28);
      memmove(*(void **)(a1 + 112), v12[7].Next, 4LL * v19);
      *(_QWORD *)(a1 + 48) = v12;
      v20 = XEPALOBJ::ulTime((XEPALOBJ *)&v25);
      LODWORD(v12[2].Next) = v20;
      v21 = *((_QWORD *)&v12[7].Next + 1);
      if ( (struct _SLIST_ENTRY *)v21 != v12 )
        *(_DWORD *)(v21 + 32) = v20;
      v23 = 0LL;
      v24 = 1;
    }
  }
  PALMEMOBJ::~PALMEMOBJ(&v23);
  return Palette;
}
