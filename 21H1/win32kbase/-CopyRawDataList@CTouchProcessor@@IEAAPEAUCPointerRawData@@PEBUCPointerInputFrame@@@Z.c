/*
 * XREFs of ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01917DC
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01946D4 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::CopyRawDataList(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  struct CPointerRawData *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  void *v10; // rax

  v2 = *((_QWORD *)a2 + 16);
  v3 = 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( !v2 )
      return v4;
    v6 = Win32AllocPool(32LL, 0x64727355u);
    v9 = v6;
    if ( !v6 )
      break;
    *(_OWORD *)v6 = *(_OWORD *)v2;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    v10 = (void *)Win32AllocPool(*(unsigned int *)(v2 + 8), 0x64727355u);
    *(_QWORD *)(v9 + 16) = v10;
    if ( !v10 )
      break;
    memmove(v10, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 8));
    if ( v3 )
      *(_QWORD *)(v3 + 24) = v9;
    else
      v4 = (struct CPointerRawData *)v9;
    v2 = *(_QWORD *)(v2 + 24);
    v3 = v9;
  }
  if ( v4 )
    CTouchProcessor::FreePointerRawDataList(this, v4);
  if ( v9 )
    Win32FreePool(v9, v7, v8);
  return 0LL;
}
