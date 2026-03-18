/*
 * XREFs of DwmAsyncChildDestroy @ 0x1C0081B48
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00816D4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C015CC14 (_lambda_cd33d3260540cb20afcdcf97ba84ccae_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncChildDestroy(PVOID Object, __int64 a2)
{
  unsigned int v3; // edi
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v6[5]; // [rsp+40h] [rbp-28h]

  v3 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v5, 0, sizeof(v5));
    WORD2(v5[0]) = 0x8000;
    v6[0] = 0LL;
    LODWORD(v5[0]) = 3407884;
    LODWORD(v6[1]) = 1073741844;
    *(_QWORD *)((char *)&v6[1] + 4) = a2;
    EtwUpdateEvent(a2, 1073741844LL);
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
