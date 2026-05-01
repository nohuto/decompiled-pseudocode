/*
 * XREFs of ??_G?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800911D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x180091320 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Module<1,Platform::Details::InProcModule>::`scalar deleting destructor'(
        Microsoft::WRL::Details *a1,
        char a2,
        const wchar_t *a3,
        bool a4)
{
  *(_QWORD *)a1 = &Microsoft::WRL::Module<1,Platform::Details::InProcModule>::`vftable';
  LOBYTE(a3) = 1;
  Microsoft::WRL::Details::TerminateMap(a1, 0LL, a3, a4);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)8);
  return a1;
}
