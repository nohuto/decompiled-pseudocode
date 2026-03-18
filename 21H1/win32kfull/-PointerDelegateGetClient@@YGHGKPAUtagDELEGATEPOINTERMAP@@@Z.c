/*
 * XREFs of ?PointerDelegateGetClient@@YGHGKPAUtagDELEGATEPOINTERMAP@@@Z @ 0x15B142
 * Callers:
 *     _ValidateDelegatePointerList@16 @ 0x15A1BB (_ValidateDelegatePointerList@16.c)
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge PointerDelegateGetClient@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int a3,
        unsigned int a4,
        struct tagDELEGATEPOINTERMAP *a5)
{
  __int16 v5; // bx
  _DWORD *v7; // esi
  _BYTE v9[104]; // [esp+14h] [ebp-140h] BYREF
  _DWORD v10[26]; // [esp+7Ch] [ebp-D8h] BYREF
  _BYTE v11[80]; // [esp+E4h] [ebp-70h] BYREF
  int v12; // [esp+134h] [ebp-20h]
  int v13; // [esp+13Ch] [ebp-18h]

  v5 = a2;
  CTouchProcessor::DelegateCapture(_gpTouchProcessor, v11, a2, a1, 0);
  v7 = v13 == 2 ? (_DWORD *)v12 : 0;
  if ( !v7 || *(_DWORD *)(v13 == 2 ? v12 + 8 : 8) == _gptiCurrent )
    return 0;
  *(_WORD *)a3 = v5;
  *(_DWORD *)(a3 + 4) = a1;
  memset((void *)(a3 + 8), 0, 0x68u);
  qmemcpy(v9, INPUTDEST_FROM_PWND(v7, v10), sizeof(v9));
  qmemcpy((void *)(a3 + 8), v9, 0x68u);
  *(_DWORD *)(a3 + 112) = 1;
  return 1;
}
