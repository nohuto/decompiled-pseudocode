/*
 * XREFs of GreCreatePolyPolygonRgnInternal @ 0x1C00C4A24
 * Callers:
 *     NtGdiPolyPolyDraw @ 0x1C00C4640 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C003C850 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C005A410 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C005C9B0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C005D520 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C005D690 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     bPolyPolygon @ 0x1C00C4B30 (bPolyPolygon.c)
 *     ??0EXFORMOBJ@@QEAA@KK@Z @ 0x1C00C4BF0 (--0EXFORMOBJ@@QEAA@KK@Z.c)
 */

struct HOBJ__ *__fastcall GreCreatePolyPolygonRgnInternal(
        struct _POINTL *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5)
{
  struct HOBJ__ *v5; // rbx
  REGION *v9; // rcx
  struct HOBJ__ *v10; // rax
  REGION *v12; // [rsp+38h] [rbp-51h] BYREF
  int v13; // [rsp+40h] [rbp-49h]
  char v14[8]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v15; // [rsp+50h] [rbp-39h]
  __int64 v16[4]; // [rsp+98h] [rbp+Fh] BYREF
  int v17; // [rsp+B8h] [rbp+2Fh]

  v5 = 0LL;
  if ( a4 - 1 <= 1 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v14);
    if ( v15 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)&v12, 1u, 8u);
      if ( (unsigned int)bPolyPolygon((EPATHOBJ *)v14, (struct EXFORMOBJ *)&v12, a1, a3, a5) )
      {
        v13 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v12, (struct EPATHOBJ *)v14, a4, 0LL);
        v9 = v12;
        if ( v12 )
        {
          v10 = RGNOBJ::hrgnAssociate(&v12);
          v9 = v12;
          v5 = v10;
          if ( !v10 )
          {
            REGION::vDeleteREGION(v12);
            v9 = 0LL;
            v12 = 0LL;
          }
        }
        if ( v13 == 1 )
          REGION::vDeleteREGION(v9);
      }
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v14);
    if ( v17 )
      PopThreadGuardedObject(v16);
  }
  return v5;
}
