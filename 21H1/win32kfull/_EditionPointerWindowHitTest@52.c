/*
 * XREFs of _EditionPointerWindowHitTest@52 @ 0x17B823
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 */

void *__stdcall EditionPointerWindowHitTest(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int v14; // esi
  unsigned int v15; // esi
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  void *result; // eax
  int v19; // [esp+Ch] [ebp-74h] BYREF
  int v20; // [esp+10h] [ebp-70h]
  int v21; // [esp+14h] [ebp-6Ch]
  _DWORD v22[26]; // [esp+18h] [ebp-68h] BYREF

  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( a4 )
  {
    v14 = *(_DWORD *)(a3 + 80);
  }
  else
  {
    v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiRit + 248) + 4) + 12);
    v19 = *(_DWORD *)(a2 + 228);
    *(_DWORD *)(a2 + 228) = &v19;
    v20 = v14;
    if ( v14 )
      HMLockObject(v14);
  }
  v15 = xxxPointerWindowHitTest(a2, v14, a5, a6, a7, a10, a11, a12, a13, a14, a8, a9);
  if ( !a4 )
    ThreadUnlock1();
  v16 = (_DWORD *)HMValidateHandleNoSecure(v15, 1);
  v17 = INPUTDEST_FROM_PWND(v16, v22);
  result = a1;
  qmemcpy(a1, v17, 0x68u);
  return result;
}
