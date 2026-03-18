/*
 * XREFs of _SetManipulationInputTargetTransform@124 @ 0xF2056
 * Callers:
 *     <none>
 * Callees:
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?SetCompositionInput@InputTransform@@YGHPAUtagWND@@PAX@Z @ 0x15E709 (-SetCompositionInput@InputTransform@@YGHPAUtagWND@@PAX@Z.c)
 */

int __stdcall SetManipulationInputTargetTransform(
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
        unsigned __int64 a28,
        int a29,
        int a30)
{
  HWND *v31; // edi
  int v32; // ecx
  char *v33; // esi
  unsigned __int64 v34; // [esp+0h] [ebp-78h]
  void *v35[26]; // [esp+8h] [ebp-70h] BYREF

  qmemcpy(v35, &a1, sizeof(v35));
  if ( a30 )
    return 0;
  v31 = (HWND *)v35[20];
  v32 = 3;
  v33 = (char *)v35[20] + 28;
  while ( v32 )
  {
    v33 += 4;
    --v32;
  }
  if ( a27 )
  {
    if ( !*((_DWORD *)v35[20] + 40) )
      InputTransform::SetCompositionInput((InputTransform *)v34, (struct tagWND *)HIDWORD(v34), v35[0]);
  }
  return InputTransform::OnInput(v31, a28, v34);
}
