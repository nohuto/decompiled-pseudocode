/*
 * XREFs of MiMapViewInSystemSpace @ 0x1406401E4
 * Callers:
 *     AlpcpCreateView @ 0x140612B1C (AlpcpCreateView.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14063D090 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x1406412E8 (MiMapImageInSystemSpace.c)
 *     MmMapViewInSessionSpaceEx @ 0x1406DE6E0 (MmMapViewInSessionSpaceEx.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x1406E9EB0 (MmMapViewInSystemSpaceEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1402A2680 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x1402BD160 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x140323908 (MiDereferenceControlArea.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // bp
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // ebx

  v7 = a6;
  if ( (a6 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  a6 = 0LL;
  v12 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v12);
  v13 = *a4;
  if ( !*a4 )
  {
    *(_WORD *)a5 = 0;
    v15 = *(_QWORD *)(a1 + 48) - *a5;
    *a4 = v15;
    goto LABEL_5;
  }
  v14 = (unsigned __int16)*(_DWORD *)a5;
  if ( v13 + v14 >= v14 )
  {
    *a4 = v13 + v14;
    *(_WORD *)a5 = 0;
    v15 = *a4;
    if ( *a4 <= *(_QWORD *)(a1 + 48) - *a5 )
    {
LABEL_5:
      v16 = MiInsertInSystemSpace(a2, v15, a1, a5, v7, a7, (ULONG_PTR *)&a6);
      if ( v16 >= 0 )
      {
        *a3 = a6;
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v16 = -1073741793;
LABEL_10:
  MiDereferenceControlArea(v12);
  return (unsigned int)v16;
}
