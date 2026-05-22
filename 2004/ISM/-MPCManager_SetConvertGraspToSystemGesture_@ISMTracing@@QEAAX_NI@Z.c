/*
 * XREFs of ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x180072880
 * Callers:
 *     ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x180073F80 (-SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019EC4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350C8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(ISMTracing *this, char a2, int a3)
{
  LPVOID v5; // rax
  int v6; // edx
  ULONG v7; // r8d
  __int64 v8; // r10
  char v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-58h] BYREF
  char *v12; // [rsp+60h] [rbp-38h]
  int v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+6Ch] [rbp-2Ch]
  int *v15; // [rsp+70h] [rbp-28h]
  ULONG v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+7Ch] [rbp-1Ch]

  v5 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v5 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v5 + 1), 1LL) )
  {
    v17 = 0;
    v14 = 0;
    v15 = &v10;
    v16 = v7;
    v12 = &v9;
    v13 = v6;
    v10 = a3;
    v9 = a2;
    tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_1801C765A, 0LL, 0LL, v7, &v11);
  }
}
