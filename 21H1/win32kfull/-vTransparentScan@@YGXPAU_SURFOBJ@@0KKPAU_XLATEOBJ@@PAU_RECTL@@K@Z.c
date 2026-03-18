/*
 * XREFs of ?vTransparentScan@@YGXPAU_SURFOBJ@@0KKPAU_XLATEOBJ@@PAU_RECTL@@K@Z @ 0x1F2EDF
 * Callers:
 *     ?GreTransparentBltPS@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3K@Z @ 0x1F17C8 (-GreTransparentBltPS@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3K@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ReadScanLine@@YGKPAEKKKK@Z @ 0x1F1ABC (-ReadScanLine@@YGKPAEKKKK@Z.c)
 *     ?SkipScanLine@@YGKPAEKKKK@Z @ 0x1F1B73 (-SkipScanLine@@YGKPAEKKKK@Z.c)
 */

void __userpurge vTransparentScan(
        int a1@<edx>,
        SURFOBJ *a2@<ecx>,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        XLATEOBJ *a5,
        _DWORD *a6,
        struct _XLATEOBJ *a7,
        struct _RECTL *a8,
        unsigned int a9)
{
  struct _SURFOBJ *v9; // ebx
  int v10; // ecx
  unsigned __int8 *v11; // ecx
  int v12; // esi
  unsigned int ScanLine; // edi
  unsigned int v14; // eax
  unsigned int v15; // [esp+Ch] [ebp-40h]
  unsigned int v16; // [esp+Ch] [ebp-40h]
  unsigned int v17; // [esp+10h] [ebp-3Ch]
  unsigned int v18; // [esp+10h] [ebp-3Ch]
  int v19; // [esp+18h] [ebp-34h]
  unsigned __int8 *v21; // [esp+20h] [ebp-2Ch]
  _DWORD v22[2]; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v23[2]; // [esp+38h] [ebp-14h] BYREF
  unsigned int v24; // [esp+40h] [ebp-Ch]
  int v25; // [esp+44h] [ebp-8h]

  v9 = a3;
  v10 = a6[2] - *a6;
  v23[0] = *a6;
  v11 = (unsigned __int8 *)a3 + v10;
  v22[1] = a4;
  v19 = a1;
  v21 = v11;
  v23[1] = a6[1];
  v22[0] = a3;
  v24 = a6[2];
  v25 = a6[3];
  v12 = (int)*(a2 != 0 ? &a2->hdev : (HDEV *)28);
  if ( a3 < (struct _SURFOBJ *)v11 )
  {
    do
    {
      ScanLine = ReadScanLine((unsigned int)v9, v11, *(unsigned __int8 **)(a1 + 44), (unsigned int)a7, v15, v17);
      if ( ScanLine - 1 > (unsigned int)v9 )
      {
        v24 = ScanLine + v23[0] - (_DWORD)v9;
        if ( ((int)*(a2 != 0 ? &a2[1].hsurf : (HSURF *)72) & 0x400) != 0 )
          (*(void (__stdcall **)(SURFOBJ *, int, _DWORD, XLATEOBJ *, _DWORD *, _DWORD *))(v12 + 1976))(
            a2,
            v19,
            0,
            a5,
            v23,
            v22);
        else
          EngCopyBits(a2, (SURFOBJ *)v19, 0, a5, (RECTL *)v23, (POINTL *)v22);
      }
      v14 = SkipScanLine(ScanLine, v21, *(unsigned __int8 **)(v19 + 44), (unsigned int)a7, v16, v18);
      a1 = v19;
      v22[0] = v14;
      v23[0] += v14 - (_DWORD)v9;
      v9 = (struct _SURFOBJ *)v14;
      v11 = v21;
    }
    while ( v14 < (unsigned int)v21 );
  }
}
