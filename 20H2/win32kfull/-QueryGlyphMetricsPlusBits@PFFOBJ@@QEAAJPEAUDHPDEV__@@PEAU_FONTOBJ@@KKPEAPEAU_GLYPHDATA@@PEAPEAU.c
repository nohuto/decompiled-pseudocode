/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C005FFCC
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C005F9A8 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00624B8 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D424C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0060230 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C0060E84 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0114BE0 (EngUnmapFontFileFD.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  int v10; // eax
  unsigned int v11; // esi
  ULONG_PTR *v13; // rbx
  __int64 v14; // rdi
  ULONG_PTR *v15; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-79h]
  void **v17; // [rsp+48h] [rbp-71h] BYREF
  int v18; // [rsp+50h] [rbp-69h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-61h]
  __int64 v20; // [rsp+60h] [rbp-59h]
  char v21; // [rsp+68h] [rbp-51h]
  struct DHPDEV__ *v22; // [rsp+70h] [rbp-49h]
  int v23; // [rsp+78h] [rbp-41h]
  int v24; // [rsp+7Ch] [rbp-3Dh]
  struct _FONTOBJ *v25; // [rsp+80h] [rbp-39h]
  __int128 v26; // [rsp+88h] [rbp-31h]
  unsigned int v27; // [rsp+98h] [rbp-21h]
  int v28; // [rsp+9Ch] [rbp-1Dh]
  struct _GLYPHDATA **v29; // [rsp+A0h] [rbp-19h]
  struct _GLYPHBITS **v30; // [rsp+A8h] [rbp-11h]
  __int64 v31; // [rsp+B0h] [rbp-9h]
  __int128 v32; // [rsp+B8h] [rbp-1h]
  __int64 v33; // [rsp+C8h] [rbp+Fh]
  __int128 ThreadInformation; // [rsp+D8h] [rbp+1Fh] BYREF

  if ( *(struct PDEV **)(*(_QWORD *)this + 88LL) != qword_1C0340A10 )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v15, this);
  v18 = 2;
  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v20 = ThreadInformation;
    v21 = 1;
  }
  v31 = 0LL;
  v33 = 0LL;
  v17 = &QueryGlyphMetricsPlusBitsRequest::`vftable';
  v29 = a6;
  v24 = a4;
  v30 = a7;
  v27 = a5;
  v32 = 0LL;
  v22 = a2;
  v23 = 1;
  v25 = a3;
  v26 = 0LL;
  v28 = -1;
  v10 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a3->iFile + 8), &v17);
  v11 = v28;
  if ( v10 < 0 )
    v11 = -1;
  if ( v16 )
  {
    v13 = v15;
    v14 = v16;
    do
    {
      EngUnmapFontFileFD(*v13++);
      --v14;
    }
    while ( v14 );
  }
  return v11;
}
