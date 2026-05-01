/*
 * XREFs of ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x1802CB49C
 * Callers:
 *     _lambda_94b07443dc25265a5fa4265bdfdfc4e6_::operator() @ 0x1802CDAA4 (_lambda_94b07443dc25265a5fa4265bdfdfc4e6_--operator().c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(
        HSTRING *string,
        const unsigned __int16 (*a2)[60])
{
  if ( WindowsCreateStringReference(
         L"Windows.Internal.CapabilityAccess.AppLaunchCapabilityAccess",
         0x3Bu,
         (HSTRING_HEADER *)(string + 1),
         string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
