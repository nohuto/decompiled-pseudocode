/*
 * XREFs of ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x1800B47CC
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009F300 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x1800B4778 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800B4870 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 */

__int64 __fastcall HANDLE_TABLE::Resize(__int64 this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned int v8; // ebx
  char *v9; // rax
  char *v10; // r15
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-28h]

  v2 = this;
  if ( a2 < *(_DWORD *)(this + 12) )
  {
    v8 = -2147024809;
    v13 = 219;
LABEL_9:
    v12 = v8;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v12, v13, 0LL);
    return v8;
  }
  v4 = *(unsigned int *)(this + 8);
  v5 = *(unsigned int *)(this + 12);
  this = 0xFFFFFFFFLL;
  v6 = v4 * v5;
  if ( v6 > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    v8 = -2147024362;
    v13 = 222;
    goto LABEL_11;
  }
  v7 = v4 * a2;
  if ( v7 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0xDFu, 0LL);
    return v8;
  }
  v8 = 0;
  v9 = (char *)DefaultHeap::Realloc(*(void **)(v2 + 24), (unsigned int)v7);
  v10 = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
    v13 = 227;
    goto LABEL_9;
  }
  memset_0(&v9[(unsigned int)v6], 0, (unsigned int)(v7 - v6));
  *(_QWORD *)(v2 + 24) = v10;
  *(_DWORD *)(v2 + 12) = a2;
  return v8;
}
