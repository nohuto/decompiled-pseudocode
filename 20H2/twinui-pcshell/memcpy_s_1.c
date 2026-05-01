/*
 * XREFs of memcpy_s_1 @ 0x18018AFFC
 * Callers:
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x1801895C8 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802BCF78 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18008D9AA (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     memcpy_0 @ 0x1800F03E7 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_1(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
    v9 = 22;
LABEL_5:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize, Source);
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}
