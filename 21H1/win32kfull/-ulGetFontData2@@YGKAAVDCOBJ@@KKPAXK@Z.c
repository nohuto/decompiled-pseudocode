/*
 * XREFs of ?ulGetFontData2@@YGKAAVDCOBJ@@KKPAXK@Z @ 0x86B04
 * Callers:
 *     _ulGetFontData@20 @ 0x86AB0 (_ulGetFontData@20.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z @ 0x86BE2 (-QueryTrueTypeTable@PFFOBJ@@QAEJKKKJKPAEPAPAEPAK@Z.c)
 */

int __userpurge ulGetFontData2@<eax>(
        unsigned int a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        struct DCOBJ *a3,
        unsigned __int8 *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  int *v8; // eax
  int v9; // ecx
  int TrueTypeTable; // esi
  int v12; // [esp+8h] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v13 = 0;
  if ( RFONTOBJ::bInit((RFONTOBJ *)&v13, a2, 0, 2u) )
    GreAcquireSemaphore(*(_DWORD *)(v13 + 548));
  if ( !v13 )
    goto LABEL_9;
  v8 = *(int **)(v13 + 80);
  if ( !v8 || (v9 = *v8, (v12 = v9) == 0) )
  {
    EngSetLastError(6u);
LABEL_9:
    TrueTypeTable = -1;
    goto LABEL_7;
  }
  TrueTypeTable = PFFOBJ::QueryTrueTypeTable((PFFOBJ *)&v12, *(_DWORD *)(v9 + 56), v8[1], a1, (int)a3, a5, a4, 0, 0);
LABEL_7:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
  return TrueTypeTable;
}
