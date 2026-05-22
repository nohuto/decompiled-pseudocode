/*
 * XREFs of ??1?$queue@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$deque@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$allocator@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@@2@@2@@std@@QEAA@XZ @ 0x180157A60
 * Callers:
 *     _ThreadHelpers::ChainedThreadpoolWorker::ChainedThreadpoolWorker_::_1_::dtor$1 @ 0x180156AD5 (_ThreadHelpers--ChainedThreadpoolWorker--ChainedThreadpoolWorker_--_1_--dtor$1.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@V?$allocator@V?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAAXXZ @ 0x180167730 (-_Tidy@-$deque@V-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@V-$allocator@V-$shared_ptr@V-$funct.c)
 */

void __fastcall std::queue<std::shared_ptr<std::function<void (void)>>>::~queue<std::shared_ptr<std::function<void (void)>>,std::deque<std::shared_ptr<std::function<void (void)>>>>(
        void **a1)
{
  void *v2; // rcx

  std::deque<std::shared_ptr<std::function<void (void)>>>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
