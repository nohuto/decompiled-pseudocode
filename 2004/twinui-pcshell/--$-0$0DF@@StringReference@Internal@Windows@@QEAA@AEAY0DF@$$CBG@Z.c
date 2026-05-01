/*
 * XREFs of ??$?0$0DF@@StringReference@Internal@Windows@@QEAA@AEAY0DF@$$CBG@Z @ 0x18014275C
 * Callers:
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180152590 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[53])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.ShellExperience.TopLevelApplication",
         0x34u,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
