/*
 * XREFs of ??1SH_HANDLE@@QEAA@XZ @ 0x1800EFFA0
 * Callers:
 *     ?IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x1800E2A48 (-IsFeedsAllowedOnSKU@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1801FA068 (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SH_HANDLE::~SH_HANDLE(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
