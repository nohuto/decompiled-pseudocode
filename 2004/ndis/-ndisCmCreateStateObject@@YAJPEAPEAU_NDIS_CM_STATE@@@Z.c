/*
 * XREFs of ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C000923C
 * Callers:
 *     ndisCmSetThreadState @ 0x1C0009060 (ndisCmSetThreadState.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C01262DC (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmCreateStateObject(struct _NDIS_CM_STATE **a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+58h] [rbp+17h] BYREF
  _DWORD v4[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v5; // [rsp+70h] [rbp+2Fh]
  _QWORD *v6; // [rsp+78h] [rbp+37h]
  int v7; // [rsp+80h] [rbp+3Fh]
  int v8; // [rsp+84h] [rbp+43h]
  __int128 v9; // [rsp+88h] [rbp+47h]

  v4[1] = 0;
  v8 = 0;
  v5 = 0LL;
  v3[1] = L"\\Device\\NDIS";
  v6 = v3;
  v3[0] = 1703960LL;
  v4[0] = 48;
  v7 = 576;
  v9 = 0LL;
  result = ObCreateObject(0LL, qword_1C00E6120, v4, 0LL, 0LL, 16, 0, 0, a1);
  if ( (int)result >= 0 )
    *(_OWORD *)*a1 = 0LL;
  return result;
}
