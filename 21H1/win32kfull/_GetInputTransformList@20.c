/*
 * XREFs of _GetInputTransformList@20 @ 0x15E9A2
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?GetTransformList@InputTransform@@YGHPAUtagWND@@IPA_KPAUtagINPUT_TRANSFORM@@D@Z @ 0x15E504 (-GetTransformList@InputTransform@@YGHPAUtagWND@@IPA_KPAUtagINPUT_TRANSFORM@@D@Z.c)
 */

int __userpurge GetInputTransformList@<eax>(
        unsigned __int64 *a1@<esi>,
        unsigned int a2,
        unsigned int a3,
        InputTransform *a4,
        char a5,
        struct tagWND *a6)
{
  int v6; // eax
  int v7; // ecx
  int v8; // esi
  struct tagINPUT_TRANSFORM *v11; // [esp+0h] [ebp-4h]
  char savedregs; // [esp+4h] [ebp+0h]

  v6 = HMValidateHandleNoSecure(a2, 1);
  if ( !v6 )
    return 0;
  v7 = 3;
  v8 = v6 + 28;
  while ( v7 )
  {
    v8 += 4;
    --v7;
  }
  return InputTransform::GetTransformList(a3, v6, a4, a6, a5, a1, v11, savedregs);
}
