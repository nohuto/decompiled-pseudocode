/*
 * XREFs of ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1C00E13E4
 * Callers:
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C00DF94C (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C00E142C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 * Callees:
 *     Win32FileInfo @ 0x1C0014298 (Win32FileInfo.c)
 */

__int64 __fastcall PFFOBJ::bCheckFntFileInfo(PFFOBJ *this)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 52LL);
  if ( (v3 & 0x2000) == 0 )
  {
    if ( (v3 & 0x1000) == 0 )
      return 1LL;
    v5 = 0LL;
    if ( !*(_DWORD *)(v1 + 36) )
    {
LABEL_10:
      *(_DWORD *)(v1 + 52) &= ~0x1000u;
      return 1LL;
    }
    while ( 1 )
    {
      v6 = *(_QWORD *)(v1 + 200);
      v9 = 0LL;
      v8 = 0LL;
      Win32FileInfo(*(PCWSTR *)(*(_QWORD *)(v6 + 8 * v5) + 80LL), &v8, &v9);
      v1 = *(_QWORD *)this;
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 200LL) + 8 * v5);
      if ( *(_QWORD *)v7 != v8 || *(_DWORD *)(v7 + 24) != (_DWORD)v9 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(v1 + 36) )
        goto LABEL_10;
    }
    *(_DWORD *)(v1 + 52) |= 0x2000u;
  }
  return 0LL;
}
