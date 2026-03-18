/*
 * XREFs of ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01331E4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01331A4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkFreePathsModality @ 0x1C0169D50 (DxgkFreePathsModality.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 */

void __fastcall BmlFreePathsModality(struct D3DKMT_GETPATHSMODALITY *a1)
{
  bool v2; // zf
  unsigned int v3; // esi
  __int64 v4; // rbx
  void *v5; // rcx

  if ( a1 )
  {
    v2 = *((_WORD *)a1 + 11) == 0;
    if ( *((_WORD *)a1 + 11) )
    {
      *((_WORD *)a1 + 10) = 0;
      v3 = 0;
      if ( !v2 )
      {
        do
        {
          v4 = 272LL * v3;
          operator delete(*(void **)((char *)a1 + v4 + 272));
          memset((char *)a1 + v4 + 48, 0, 0x110uLL);
          ++v3;
        }
        while ( v3 < *((unsigned __int16 *)a1 + 11) );
      }
      v5 = (void *)*((_QWORD *)a1 + 5);
      if ( v5 )
      {
        operator delete[](v5);
        *((_QWORD *)a1 + 5) = 0LL;
        *((_DWORD *)a1 + 9) = 0;
      }
    }
  }
}
