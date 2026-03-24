/*
 * XREFs of ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x1801D7B48
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801D80A0 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801D8A00 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x1800DBC54 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::ExpressionValueFromInternalValue(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+68h] [rbp-10h]
  char v10; // [rsp+6Ch] [rbp-Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset_0(v7, 0, sizeof(v7));
  v8 = 0LL;
  v9 = 18;
  v10 = 0;
  CExpressionValue::operator=(a3, (__int64)v7);
  result = *(unsigned int *)(a1 + 144);
  switch ( (_DWORD)result )
  {
    case 0x12:
      result = *a2;
      *(_DWORD *)a3 = result;
      *(_DWORD *)(a3 + 72) = 18;
      break;
    case 0x23:
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 72) = 35;
      break;
    case 0x34:
      result = a2[2];
      *(_QWORD *)a3 = *(_QWORD *)a2;
      *(_DWORD *)(a3 + 8) = result;
      *(_DWORD *)(a3 + 72) = 52;
      break;
    default:
      ModuleFailFastForHRESULT(2147500037LL, retaddr);
  }
  *(_BYTE *)(a3 + 76) = 1;
  return result;
}
