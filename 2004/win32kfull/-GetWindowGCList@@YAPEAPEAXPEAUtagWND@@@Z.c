/*
 * XREFs of ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C01212A4
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0120EE0 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C0228028 (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C0037A98 (VWPLGetData.c)
 */

void **__fastcall GetWindowGCList(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  if ( (unsigned int)VWPLGetData(*(_DWORD **)(*(_QWORD *)(v1 + 416) + 872LL), (__int64)a1, &v3) && v3 )
    return *(void ***)(v3 + 16);
  else
    return 0LL;
}
