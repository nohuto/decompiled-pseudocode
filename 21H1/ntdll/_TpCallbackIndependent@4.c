/*
 * XREFs of _TpCallbackIndependent@4 @ 0x4B2B5760
 * Callers:
 *     <none>
 * Callees:
 *     _TppCallbackMayRunLongProlog@20 @ 0x4B2B57AB (_TppCallbackMayRunLongProlog@20.c)
 *     _ZwSetInformationWorkerFactory@16 @ 0x4B2F4370 (_ZwSetInformationWorkerFactory@16.c)
 */

int __stdcall TpCallbackIndependent(int a1)
{
  int MayRunLongProlog; // eax
  _BYTE v3[4]; // [esp+0h] [ebp-10h] BYREF
  _BYTE v4[4]; // [esp+4h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = 0;
  MayRunLongProlog = TppCallbackMayRunLongProlog(&v6, v3, v4);
  if ( MayRunLongProlog < 0 )
    return MayRunLongProlog != -1073741637 ? MayRunLongProlog : 0;
  v5 = 2;
  return ZwSetInformationWorkerFactory(*(_DWORD *)(v6 + 36), 9, &v5, 4);
}
