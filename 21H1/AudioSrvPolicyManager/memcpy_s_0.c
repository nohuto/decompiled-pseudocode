/*
 * XREFs of memcpy_s_0 @ 0x18000FED8
 * Callers:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800066DC (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800067E8 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180006FB8 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800070B4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180007540 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180007800 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180040012 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180040098 (memset_0.c)
 *     memcpy_0 @ 0x1800406DB (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v7; // rax
  errno_t v8; // ebx

  if ( !Destination )
    goto LABEL_2;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  else
  {
    memset_0(Destination, 0, DestinationSize);
    if ( !Source )
    {
LABEL_2:
      v7 = (errno_t *)_o__errno(Destination, DestinationSize);
      v8 = 22;
LABEL_3:
      *v7 = v8;
      invalid_parameter_noinfo();
      return v8;
    }
    if ( DestinationSize < SourceSize )
    {
      v7 = (errno_t *)_o__errno(Destination, DestinationSize);
      v8 = 34;
      goto LABEL_3;
    }
    return 22;
  }
}
