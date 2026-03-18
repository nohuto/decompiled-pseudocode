/*
 * XREFs of GetMiPInputTransform @ 0x1C01E2270
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01F6124 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

__int64 __fastcall GetMiPInputTransform(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v5; // rcx
  InputTransform *v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagINPUT_TRANSFORM *v10; // [rsp+20h] [rbp-38h]
  char v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 1272);
  if ( !v5 || (*(_DWORD *)v5 & 1) == 0 || (v6 = (InputTransform *)ValidateHwnd(*(_QWORD *)(v5 + 48))) == 0LL )
  {
LABEL_8:
    v8 = 87LL;
    goto LABEL_9;
  }
  v7 = *(_QWORD *)(a1 + 1272);
  if ( (*(_DWORD *)(v7 + 36) & 0x400000) != 0 )
  {
    v12 = *(_QWORD *)(v7 + 104);
    LOBYTE(v10) = 1;
    if ( (unsigned int)InputTransform::GetTransformList(v6, (struct tagWND *)1, (unsigned int)&v12, a2, v10, v11) )
      return 1LL;
    goto LABEL_8;
  }
  v8 = 232LL;
LABEL_9:
  UserSetLastError(v8, (__int64)a2, a3);
  return 0LL;
}
