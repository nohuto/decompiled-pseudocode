/*
 * XREFs of _EditionPointerActivate@120 @ 0xF1D98
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z @ 0x15B536 (-xxxPointerActivateInternal@@YGXPAUtagWND@@FKPBUtagPOINTEREVENTINT@@H@Z.c)
 */

void __stdcall EditionPointerActivate(
        int a1,
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
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        struct tagWND *a28,
        __int16 a29,
        int a30)
{
  const struct tagPOINTEREVENTINT *v30; // [esp+0h] [ebp-74h]
  int v31; // [esp+4h] [ebp-70h]
  _DWORD v32[26]; // [esp+8h] [ebp-6Ch] BYREF

  qmemcpy(v32, &a1, sizeof(v32));
  xxxPointerActivateInternal(a28, a29, 0, v30, v31);
}
