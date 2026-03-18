/*
 * XREFs of ?PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0062F58
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0013110 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C0062E0C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0062E68 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C0069750 (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 */

__int64 __fastcall CTokenManager::PostFlipManagerProcessSummary(
        __int64 a1,
        FlipManagerTokenObject *a2,
        unsigned __int64 a3,
        int a4)
{
  __int64 result; // rax
  unsigned int v8; // edx
  int v9; // [rsp+20h] [rbp-39h] BYREF
  struct FlipManagerObject *v10; // [rsp+28h] [rbp-31h] BYREF
  unsigned __int64 v11[2]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-19h]
  GUID v13; // [rsp+50h] [rbp-9h] BYREF
  int v14; // [rsp+60h] [rbp+7h]
  int *v15; // [rsp+68h] [rbp+Fh]
  GUID v16; // [rsp+70h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+27h]
  unsigned __int64 *v18; // [rsp+88h] [rbp+2Fh]

  v9 = 1;
  v10 = 0LL;
  v12 = 0LL;
  *(_OWORD *)v11 = 0LL;
  result = FlipManagerTokenObject::GetFlipManagerObjectNoRef(a2, &v10);
  if ( (int)result >= 0 )
  {
    result = FlipManagerTokenObject::GetPresentId(a2, v11);
    if ( (int)result >= 0 )
    {
      v15 = &v9;
      v13 = GUID_c61fb26f_e968_4c5e_9baa_e64d8c4362a8;
      v11[1] = a3;
      LODWORD(v12) = a4;
      v14 = 4;
      v16 = GUID_f62b137d_7b81_414b_b835_ad0cd16dee32;
      v17 = 24;
      v18 = v11;
      return FlipManagerDwmPostConsumerMessage(v10, v8, (struct FlipPropertyItem *)&v13);
    }
  }
  return result;
}
