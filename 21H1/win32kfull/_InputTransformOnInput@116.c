/*
 * XREFs of _InputTransformOnInput@116 @ 0xF2002
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall InputTransformOnInput(
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
        unsigned __int64 a27,
        int a28)
{
  unsigned __int64 v29; // [esp+0h] [ebp-78h]
  HWND *v30[26]; // [esp+8h] [ebp-70h] BYREF

  qmemcpy(v30, &a1, sizeof(v30));
  if ( v30[20] )
    return InputTransform::OnInput(v30[20], a27, v29);
  else
    return 0;
}
