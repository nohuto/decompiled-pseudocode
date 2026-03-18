/*
 * XREFs of ??_GHighResourceUsageReport@CProcessResourceAttributionReporter@@QEAAPEAXI@Z @ 0x1800245C0
 * Callers:
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x18007886C (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     _lambda_d726b1e7ec95932be2432bf4c2269415_::operator() @ 0x1800DBB9C (_lambda_d726b1e7ec95932be2432bf4c2269415_--operator().c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CProcessResourceAttributionReporter::HighResourceUsageReport *__fastcall CProcessResourceAttributionReporter::HighResourceUsageReport::`scalar deleting destructor'(
        CProcessResourceAttributionReporter::HighResourceUsageReport *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, 8 * ((*((_QWORD *)this + 4) - v2) >> 3));
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  operator delete(this, 0x30uLL);
  return this;
}
