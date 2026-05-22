/*
 * XREFs of ?Create@GameControllerRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180033F50
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283FC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x180033F9C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800791E8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall GameControllerRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  GameControllerRawInputProvider *v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (GameControllerRawInputProvider *)RefCountedObject::operator new(0xA8uLL);
  if ( v5 )
    v5 = GameControllerRawInputProvider::GameControllerRawInputProvider(v5, a1);
  *a3 = v5;
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x91,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      v6);
    JUMPOUT(0x180060462LL);
  }
  return 0LL;
}
