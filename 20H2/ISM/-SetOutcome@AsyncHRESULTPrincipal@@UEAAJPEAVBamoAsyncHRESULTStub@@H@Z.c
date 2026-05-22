/*
 * XREFs of ?SetOutcome@AsyncHRESULTPrincipal@@UEAAJPEAVBamoAsyncHRESULTStub@@H@Z @ 0x18011B800
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$_Func_class@XJ@std@@QEBAXJ@Z @ 0x18011A2F4 (--R-$_Func_class@XJ@std@@QEBAXJ@Z.c)
 */

__int64 __fastcall AsyncHRESULTPrincipal::SetOutcome(
        AsyncHRESULTPrincipal *this,
        struct BamoAsyncHRESULTStub *a2,
        int a3)
{
  *((_BYTE *)this + 120) = 0;
  std::_Func_class<void,long>::operator()((__int64)this + 56, a3);
  return 0LL;
}
