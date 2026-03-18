/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00DF72C
 * Callers:
 *     ulGetFontData @ 0x1C00DF6A8 (ulGetFontData.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C00DF94C (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 */

__int64 __fastcall ulGetFontData2(struct DCOBJ *a1, unsigned int a2, int a3, unsigned __int8 *a4, unsigned int a5)
{
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned int TrueTypeTable; // ebx
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-20h] BYREF

  v12 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v12, a1, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v12 + 504));
  if ( !v12 )
    goto LABEL_8;
  v8 = *(__int64 **)(v12 + 120);
  if ( !v8 || (v9 = *v8, (v13[0] = v9) == 0LL) )
  {
    EngSetLastError(6u);
LABEL_8:
    TrueTypeTable = -1;
    goto LABEL_7;
  }
  TrueTypeTable = PFFOBJ::QueryTrueTypeTable(
                    (PFFOBJ *)v13,
                    *(_QWORD *)(v9 + 80),
                    *((_DWORD *)v8 + 2),
                    a2,
                    a3,
                    a5,
                    a4,
                    0LL,
                    0LL);
LABEL_7:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
  return TrueTypeTable;
}
