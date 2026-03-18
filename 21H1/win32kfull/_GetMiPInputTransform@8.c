/*
 * XREFs of _GetMiPInputTransform@8 @ 0x14E25A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?GetTransformList@InputTransform@@YGHPAUtagWND@@IPA_KPAUtagINPUT_TRANSFORM@@D@Z @ 0x15E504 (-GetTransformList@InputTransform@@YGHPAUtagWND@@IPA_KPAUtagINPUT_TRANSFORM@@D@Z.c)
 */

int __userpurge GetMiPInputTransform@<eax>(unsigned __int64 *a1@<esi>, int a2, struct tagWND *a3)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // ecx
  struct tagINPUT_TRANSFORM *v11; // [esp+0h] [ebp-10h]
  char v12; // [esp+4h] [ebp-Ch]
  _DWORD v13[2]; // [esp+8h] [ebp-8h] BYREF

  v3 = *(_DWORD *)(a2 + 720);
  if ( !v3 || (*(_BYTE *)v3 & 1) == 0 || (v4 = ValidateHwnd(*(_DWORD *)(v3 + 36))) == 0 )
  {
LABEL_11:
    v5 = 87;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 720) + 28) & 0x400000) != 0 )
  {
    v6 = 3;
    v7 = v4 + 28;
    while ( v6 )
    {
      v7 += 4;
      --v6;
    }
    v8 = *(_DWORD *)(a2 + 720);
    v13[0] = *(_DWORD *)(v8 + 88);
    v13[1] = *(_DWORD *)(v8 + 92);
    if ( InputTransform::GetTransformList((InputTransform *)v13, a3, 1, a1, v11, v12) )
      return 1;
    goto LABEL_11;
  }
  v5 = 232;
LABEL_12:
  UserSetLastError((struct _NT_TIB *)v5);
  return 0;
}
