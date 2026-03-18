/*
 * XREFs of ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C018BADC
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C018B814 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C018E9D4 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::CopyRawDataList(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  struct CPointerRawData *v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rax

  v2 = *((_QWORD *)a2 + 16);
  v3 = 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( !v2 )
      return v4;
    v6 = Win32AllocPool(32LL, 0x64727355u);
    v7 = v6;
    if ( !v6 )
      break;
    *(_OWORD *)v6 = *(_OWORD *)v2;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    v8 = (void *)Win32AllocPool(*(unsigned int *)(v2 + 8), 0x64727355u);
    *(_QWORD *)(v7 + 16) = v8;
    if ( !v8 )
      break;
    memmove(v8, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 8));
    if ( v3 )
      *(_QWORD *)(v3 + 24) = v7;
    else
      v4 = (struct CPointerRawData *)v7;
    v2 = *(_QWORD *)(v2 + 24);
    v3 = v7;
  }
  if ( v4 )
    CTouchProcessor::FreePointerRawDataList(this, v4);
  if ( v7 )
    Win32FreePool(v7);
  return 0LL;
}
