/*
 * XREFs of GreCreateRectRgn @ 0x1C0155B80
 * Callers:
 *     EngCreateRectRgn @ 0x1C01553A0 (EngCreateRectRgn.c)
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0008DE0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0031888 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C003C4D0 (EngSetLastError.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0075FA0 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C007A4A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C007F140 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A9890 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00CE828 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  struct HOBJ__ *v4; // rbx
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v7; // [rsp+38h] [rbp-28h] BYREF
  struct OBJECT *v8[3]; // [rsp+48h] [rbp-18h] BYREF

  v7.left = a1;
  v7.top = a2;
  v7.right = a3;
  v7.bottom = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v8, 0LL, 1);
    v4 = v8[0];
    if ( v8[0] )
    {
      ERECTL::vOrder((ERECTL *)&v7);
      RGNOBJ::vSet((struct _RECTL **)v8, &v7);
      v6 = 0LL;
      *((_DWORD *)v4 + 9) = GrepIsPreviousModeKernel();
      v4 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v6, v4, 0, 1, 4u);
      if ( !v4 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v8);
      if ( v6 )
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
    }
    else
    {
      EngSetLastError(8u);
    }
    RGNMEMOBJ::~RGNMEMOBJ(v8);
  }
  return v4;
}
